#ifndef _NULA_HASH_H
#define _NULA_HASH_H


#include "heap.h"
#include <string>

namespace nula {


class NULA_API string:
	public ::std::string,
	public Zone {
public:
	string()
		: ::std::string()
	{
	}

	string(const string& s)
		: ::std::string((const ::std::string &)s)
	{
	}

	string(const char *s)
		: ::std::string(s)
	{
	}

	string(char c)
		: ::std::string(1, c)
	{
	}

	string(const char *s, int l)
		: ::std::string(s, l)
	{
	}
};


typedef void (*dtor_func_t)(void *);

always_inline unsigned long __inline_hash_func( const char *s, size_t len ) {
	unsigned long hash = 0;

	while( len-- > 0 )
	{
		hash += *s++;
		hash += (hash << 10);
		hash ^= (hash >> 6);
	}
	hash += (hash << 3);
	hash ^= (hash >> 11);

	return hash + (hash << 15);
}


struct NULA_API Bucket: public Zone {
	Bucket()
		: key(0),
		arKey(),
		data(NULL),
		dataPtr(NULL),
		prev(NULL),
		next(NULL),
		list_next(NULL),
		list_prev(NULL)
	{}

	~Bucket()
	{}

	unsigned long key;
	void *dataPtr, *data;
	Bucket *prev;
	Bucket *next;
	Bucket *list_next;
	Bucket *list_prev;
	string arKey;
};

#define HASH_ADD		1<<1
#define HASH_UPDATE		1<<2

class NULA_API Hash: public Zone {
public:
	typedef Bucket *iterator;
protected:
	int Rehash();
	int DoResize();
public:
	size_t count() const { return hashcount; }
	size_t capacity() const { return hashsize; }
	size_t mask() const { return hashmask; }

	iterator begin() const { return head; }
	iterator end() const { return tail; }

	Hash(size_t size = 8, dtor_func_t dtor = NULL);
	Hash(const Hash& x);
	~Hash();

	void clear();

	int remove( const string& arKey );
	int remove( char *arKey, size_t arKeyLen )
	{ return remove( string( arKey, arKeyLen ) ); }
	
	int insert(char *arKey, size_t arKeyLen,  size_t pDataSize, void *pData, int flags )
	{ return insert( string(arKey, arKeyLen), pDataSize, pData, flags ); }
	int insert(const string& arKey, size_t pDataSize, void *pData, int flags);
	int add( char *arKey, size_t arKeyLen, size_t pDataSize, void *pData )
	{ return insert( arKey, arKeyLen, pDataSize, pData, HASH_ADD ); }
	int update( char *arKey, size_t arKeyLen, size_t pDataSize, void *pData )
	{ return insert( arKey, arKeyLen, pDataSize, pData, HASH_UPDATE ); }
	int add( const string& arKey, size_t pDataSize, void *pData )
	{ return insert( arKey, pDataSize, pData, HASH_ADD ); }
	int update( const string& arKey, size_t pDataSize, void *pData )
	{ return insert( arKey, pDataSize, pData, HASH_UPDATE ); }
	
	void *lookup( const string& arKey );
	void *lookup(char *arKey, size_t arKeyLen )
	{ return lookup( string(arKey) ); }

	template<class T>
	T lookup( const string& arKey ) {
		return (T)lookup(arKey);
	}

	bool exists( const string& arKey )
	{ return lookup( arKey ) != NULL; }

protected:
	size_t hashcount;
	size_t hashsize;
	size_t hashmask;
	size_t hashnext;
	Bucket *head;
	Bucket *tail;
	Bucket **buckets;
	dtor_func_t dtor;
};

};




#endif