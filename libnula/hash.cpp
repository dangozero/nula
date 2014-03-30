#include "hash.h"


namespace nula {

Hash::Hash(size_t size, dtor_func_t dtor_)
	: hashsize( size ),
	hashmask(hashsize-1),
	hashcount(0),
	tail(0),
	head(0),
	buckets(0),
	dtor(dtor_)
{
	int i = 3, hashlim = 8;

	// Adjust hash size to the next power of 2
	while (hashsize > hashlim) 
	{
		i++;
		hashlim <<= 1;
	}

	hashsize = hashlim;
	hashmask = hashlim - 1;

	if( !buckets )
	{
		buckets = (Bucket **)zalloc( hashsize * sizeof(Bucket *) );
		memset(buckets, 0, hashsize * sizeof(Bucket *));
	}
}


#define UPDATE_DATA(p, pData, nDataSize) \
	if (nDataSize == sizeof(void*)) { \
		if ((p)->data != &(p)->dataPtr) { \
			free((p)->data); \
		} \
		memcpy(&(p)->dataPtr, pData, sizeof(void *)); \
		(p)->data = &(p)->dataPtr; \
	} else { \
		if ((p)->data == &(p)->dataPtr) { \
			(p)->data = (void *)malloc(nDataSize); \
			(p)->dataPtr=NULL; \
		} else { \
			(p)->data = (void *)realloc((p)->data, nDataSize); \
		} \
		memcpy((p)->data, pData, nDataSize); \
	}

#define INIT_DATA(p, pData, nDataSize) \
	if (nDataSize == sizeof(void*)) { \
		memcpy(&(p)->dataPtr, pData, sizeof(void *)); \
		(p)->data = &(p)->dataPtr; \
	} else { \
		(p)->data = (void *)malloc(nDataSize); \
		if (!(p)->data) { \
			free(p); \
			return FAILURE; \
		} \
		memcpy((p)->data, pData, nDataSize); \
		(p)->dataPtr=NULL; \
	}


Hash::Hash(const Hash& x)
	: hashsize( x.hashsize ),
	hashmask(x.hashmask),
	hashcount(x.hashcount),
	tail(0),
	head(0),
	buckets(0),
	dtor(x.dtor)
{
	if( !buckets )
	{
		buckets = (Bucket **)zalloc( hashsize * sizeof(Bucket *));
		memset(buckets, 0, hashsize * sizeof(Bucket *));
	}
}

#define CHAIN_LOCAL_LIST(elt, buckets)				\
	(elt)->next = (buckets);							\
	(elt)->prev = NULL;									\
	if ((elt)->next) {									\
		(elt)->next->prev = (elt);					\
	}

#define CHAIN_GLOBAL_LIST(elt)				\
	(elt)->list_prev = tail;					\
	tail = (elt);							\
	(elt)->list_next = NULL;							\
	if ((elt)->list_prev != NULL) {						\
		(elt)->list_prev->list_next = (elt);		\
	}														\
	if (!head) {									\
		head = (elt);						\
	}


int Hash::Rehash()
{
	Bucket *p;
	unsigned int idx;

	memset(buckets, 0, hashsize * sizeof(Bucket *));
	p = head;
	while (p != NULL) {
		idx = p->key & hashmask;
		CHAIN_LOCAL_LIST(p, buckets[idx]);
		buckets[idx] = p;
		p = p->list_next;
	}
	return SUCCESS;
}

int Hash::DoResize()
{
	Bucket **t;
	if ((hashsize << 1) > 0) {
		t = (Bucket **) zalloc( (hashsize << 1) * sizeof(Bucket *) );
		free( buckets );
		if (t) {
			buckets = t;
			hashsize = (hashsize << 1);
			hashmask = hashsize - 1;
			Rehash();
			return SUCCESS;
		}
		return FAILURE;
	}
	return SUCCESS;
}

int Hash::insert(const string& arKey,  size_t pDataSize, void *pData, int flags)
{
	Bucket *hn;
	unsigned int idx;
	unsigned long key;

	key = __inline_hash_func(arKey.c_str(), arKey.length());
	idx = key & hashmask;

	hn = buckets[idx];
	while( hn )
	{
		if( hn->arKey == arKey
			&& hn->key == key )
		{
			if( flags & HASH_ADD )
				return FAILURE;
			
			if( dtor )
				dtor( pData );

			UPDATE_DATA( hn, pData, pDataSize );
			return SUCCESS;
		}
		hn = hn->next;
	}


	hn = new Bucket();

	if (!hn) 
		return FAILURE;
	INIT_DATA(hn, pData, pDataSize);
	hn->arKey = arKey;
	hn->key = key;

	CHAIN_LOCAL_LIST(hn, buckets[idx]);
	buckets[idx] = hn;

	CHAIN_GLOBAL_LIST(hn);

	hashcount++;
	if( hashcount > hashsize )
		DoResize();
	return 0;
}

int Hash::remove( const string& arKey )
{
	Bucket *p;
	unsigned int idx;
	unsigned long key;

	if ( !hashcount ) 
		return FAILURE;

	key = __inline_hash_func(arKey.c_str(), arKey.length() );
	idx = key & hashmask;
	p = buckets[idx];
	while(p)
	{
		if( p->arKey == arKey
			&& p->key == key )
		{
			if (p == buckets[idx]) {
				buckets[idx] = p->next;
			} else {
				p->prev->next = p->next;
			}
			if (p->next) {
				p->next->prev = p->prev;
			}
			if (p->list_prev != NULL) {
				p->list_prev->list_next = p->list_next;
			} else { 
				/* Deleting the head of the list */
				head = p->list_next;
			}
			if (p->list_next != NULL) {
				p->list_next->list_prev = p->list_prev;
			} else {
				tail = p->list_prev;
			}
			if( dtor )
				dtor( p->data );
			if ( p->data != &p->dataPtr )
				delete p->data;
			delete p;
			hashcount--;
			return SUCCESS;
		}
		p = p->next;
	}

	return FAILURE;
}

//
// hash_dealloc
//
// Free up the entire hash structure
//

Hash::~Hash()
{
	clear();
}

void Hash::clear()
{
	Bucket *p, *next;


	p = head;
	while( p )
	{
		next = p->list_next;
		if( dtor )
			dtor( p->data );
		if( p->data != &p->dataPtr )
			delete p->data;
		delete p;
		p = next;
	}

	free( buckets );
}

//
// hash_lookup
//
// Look up a node based on its key
//


void *Hash::lookup( const string& arKey )
{
	Bucket *hn;
	unsigned int idx;
	unsigned long key;

	if ( !hashcount) 
		return NULL;

	key = __inline_hash_func(arKey.c_str(), arKey.length());
	idx = key & hashmask;

	for (hn = buckets[idx]; hn; hn = hn->next) 
	{
		if (hn->key == key
			 && hn->arKey == arKey )
		{
			if( hn->data != &hn->dataPtr )
				return hn->data;
			else
				return hn->dataPtr;
		}
	}

	return NULL;
}


}