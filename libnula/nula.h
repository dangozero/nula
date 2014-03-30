#ifndef _NULA_H
#define _NULA_H

#include "heap.h"
#include "hash.h"
#include "list.h"
#include <vector>

#define CONSTANT_Undefined		1<<0
#define CONSTANT_Integer		1<<1
#define CONSTANT_Double			1<<2
#define CONSTANT_Class			1<<3
#define CONSTANT_String			1<<4
#define CONSTANT_Field			1<<5
#define CONSTANT_Method			1<<6
#define CONSTANT_Resolved		1<<7

namespace nula {

class NULA_API Object;
class NULA_API String;
class NULA_API Num;

namespace internal {
	class NULA_API Type;
	struct NULA_API Property;
	struct NULA_API Method;
};

union word {
	int i;
	double f;
	Object *o;
	void *ptr;
	string *str;
	::nula::internal::Method *method;
	::nula::internal::Method **vfptr;
	::nula::internal::Type *klass;
};

class NULA_API Arguments {
public:
	inline Arguments(int length_, word *objects)
		: arguments(objects),
		length(length_)
	{
	}

private:
	int length;
	word *arguments;
};



DECL_API(::nula::internal::Type *) LoadType( const string& type_name );
DECL_API(void *) ResolveEntry(::nula::internal::Type *type, int index);

DECL_API(double) ValueToFloat(Object *object);
DECL_API(int) ValueToInteger(Object *object);
DECL_API(String *) ObjectToString(Object *object);

#include "internal.h"

DECL_API(Object *) NewObject(i::Type *clasp);


class NULA_API Object {
public:
	Object(i::Type *type);
	Object();
	~Object();



	int GetElementI( int index );
	double GetElementD( int index );
	Object *GetElementA( int index );
	
	void SetElement(int index, int value);
	void SetElement(int index, double value);
	void SetElement(int index, Object * value);


	word GetProperty( i::Type *scope, word propid );
	void SetProperty( i::Type *scope, word propid, word value );

	int hasOwnProperty( word prop_name );

	always_inline int get_length() {
		return slots[kLengthIndex].i;
	}

	always_inline i::Type *get_class() {
		return slots[kClassIndex].klass;
	}

	always_inline void set_length(int length)
	{
		slots[kLengthIndex].i = length;
	}

	always_inline void set_buffer(void *buffer)
	{
		slots[kBufferIndex].ptr = buffer;
	}

	always_inline void *get_buffer()
	{
		return slots[kBufferIndex].ptr;
	}

	always_inline i::Method **get_vfptr()
	{
		return slots[kBufferIndex].vfptr;
	}

	static const int kClassIndex = 0;
	static const int kVirtualIndex = 1;
	static const int kLengthIndex = 2;
	static const int kBufferIndex = 3;
	static const int kSyncIndex = 4;

public:
	word *slots;

	void *operator new(size_t);
	void *operator new[](size_t);

private:
	void Init(i::Type *classp);

public:
	static i::Type *class$;
};


class NULA_API String: public Object {
public:
	String();
	String(int i);
	String(double f);
	String(const string& s);
	String(String *s);

	~String();

public:
	static i::Type *class$;
};


class NULA_API Num: public Object {
public:
	Num(int i);
	Num(double d);
	~Num();

public:
	static i::Type *class$;
};


struct Frame {
	Frame(i::Method *meth_, word *top, Frame *parent);
	~Frame();


	Frame *next;
	i::Method *meth;
	int max_stack;
	int max_locals;
	word *context;
	void *ncode;
};

};


#endif