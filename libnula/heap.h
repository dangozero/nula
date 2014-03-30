#ifndef _NULA_HEAP_H
#define _NULA_HEAP_H


#include "platform.h"
#include <gc.h>

#define MSPACES				1
#define USE_DL_PREFIX		1

typedef void *mspace;

#define destroy_mspace		heap_destroy
#define create_mspace		heap_create
#define mspace_malloc		heap_alloc
#define mspace_free			heap_free
#define mspace_realloc		heap_realloc
#define mspace_calloc		heap_calloc

BEGIN_EXTERN_C

mspace heap_alloc(mspace av, size_t size);
mspace heap_realloc(mspace av, void *mem, size_t size);
mspace heap_calloc(mspace av, size_t num, size_t size);
void heap_free(mspace av, void *p);

mspace heap_create(size_t, int);
size_t heap_destroy(mspace av);


#ifndef __cplusplus
#define bool unsigned char
#endif

END_EXTERN_C

#ifdef __cplusplus

namespace nula {


DECL_API(char *) strdup( const char *str );
DECL_API(char *) strndup( const char *str, int len );
DECL_API(void *) malloc( size_t size );
DECL_API(void *) zalloc( size_t size );
DECL_API(void *) realloc( void *ptr, size_t new_size);
DECL_API(void) free( void *ptr );
DECL_API(void *) calloc( size_t elt_size, size_t size );


class NULA_API LocalHeap{
public:
	inline LocalHeap()
		: alloc_list(0),
		avail_in_first(0)
	{
	}

	~LocalHeap()
	{
		clear();
	}

	void *alloc(size_t size);
	void clear();

private:
	void *alloc_list;
	size_t avail_in_first;
};


class NULA_API Zone {
public:
	void *operator new(size_t);
	void *operator new[](size_t);
	
	void *operator new(size_t, LocalHeap&);
	void *operator new[](size_t, LocalHeap&);
	
	void operator delete(void *,LocalHeap&);
	void operator delete[](void *,LocalHeap&);	

	void operator delete( void *);
	void operator delete[](void *);
};



static inline int strlen(const char *str)
{
	if( !str ) return 0;
	return ::strlen(str);
}


};


#endif


#endif