#include "heap.h"


namespace nula {

extern void *global_heap_ptr;


#define BLOCK_SIZE      16*1024
#define AVAIL_SIZE      (BLOCK_SIZE - sizeof(void*))


void *LocalHeap::alloc(size_t size)
{
	void *ptr;

	if (size > AVAIL_SIZE)
	{
		/* allocate a specific block */
		ptr = zalloc( sizeof(void*) + size);
		if (!ptr) return NULL;
		*(void**)ptr = alloc_list;
		alloc_list = ptr;
		avail_in_first = 0;
		ptr = (char*)alloc_list + sizeof(void*);
	} else {
		if (size > avail_in_first) {
			/* add a new block */
			ptr = zalloc( BLOCK_SIZE);
			if (!ptr) return NULL;
			*(void**)ptr = alloc_list;
			alloc_list = ptr;
			avail_in_first = AVAIL_SIZE;
		}
		/* grab memory from head block */
		ptr = (char*)alloc_list + BLOCK_SIZE - avail_in_first;
		avail_in_first -= size;
	}
	return ptr;
}

void LocalHeap::clear()
{
	void  *next;

	while ( alloc_list )
	{
		next = *(void**)alloc_list;
		memset(alloc_list, 0, BLOCK_SIZE);
		free(alloc_list);
		alloc_list = next;
	}
	avail_in_first = 0;
}


char * strdup( const char *str )
{
	return strndup(str, strlen(str));
}

char * strndup( const char *str, int len )
{
	char *ptr = static_cast<char *>(malloc(len + 1));
	if(ptr) {
		memcpy(ptr, str, len);
		ptr[len] = 0;
	}
	return ptr;
}

void *malloc( size_t size )
{
	if(global_heap_ptr)
	{
		return heap_alloc(global_heap_ptr, size);
	}
	return ::malloc(size);
}

void *zalloc( size_t size )
{
	if(global_heap_ptr)
	{
		return heap_calloc(global_heap_ptr, 1, size);
	}
	return ::calloc(1, size);
}

void *realloc( void *ptr, size_t new_size)
{
	if(global_heap_ptr)
	{
		return heap_realloc(global_heap_ptr, ptr, new_size);
	}
	return ::realloc(ptr, new_size);
}

void free( void *ptr )
{
	if(global_heap_ptr)
	{
		heap_free(global_heap_ptr, ptr);
	} else 
		::free(ptr);
}

void *calloc( size_t elt_size, size_t size )
{
	if(global_heap_ptr)
	{
		return heap_calloc(global_heap_ptr, elt_size, size);
	}
	return ::calloc(elt_size, size);
}


void *Zone::operator new(size_t size)
{
	return malloc(size);
}

void *Zone::operator new[](size_t size)
{
	return malloc(size);
}


void *Zone::operator new(size_t size, LocalHeap& zone)
{
	return zone.alloc( size );
}

void *Zone::operator new[](size_t size, LocalHeap& zone)
{
	return zone.alloc( size );
}

void Zone::operator delete(void *ptr)
{
	free( ptr );
}

void Zone::operator delete[](void *ptr)
{
	free( ptr );
}

void Zone::operator delete(void *, LocalHeap&)
{
}

void Zone::operator delete[](void *, LocalHeap&)
{
}

};