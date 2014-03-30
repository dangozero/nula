#include "nula.h"




namespace nula {


i::Type * LoadType( const string& type_name )
{
	return NULL;
}

void *ResolveEntry(i::Type *type, int index)
{
	i::Constants *pool = &type->constants;

	if ((pool->tags[index] & CONSTANT_Resolved) != 0)
		return pool->data[index].o;

	switch (pool->tags[index]) {
		case CONSTANT_Class: {
			i::Type * found = LoadType(*pool->data[index].str);

			if (! found)
			{
				//jstring str = _Jv_NewStringUTF (name->data);
				//JvThrow (new java::lang::ClassNotFoundException (str));
			}

			if ( found->flags & VT_PUBLIC ){
				pool->data[index].klass = found;
				pool->tags[index] |= CONSTANT_Resolved;
			} else {
				//JvThrow (new java::lang::IllegalAccessError (found->getName()));
			}
		} break;

		case CONSTANT_String: {
			//jstring str;
			//str = _Jv_NewStringUtf8Const (pool->data[index].utf8);
			//pool->data[index].o = str;
			//pool->tags[index] |= JV_CONSTANT_ResolvedFlag;
			} break;


		case CONSTANT_Method: {
			int type_index, method_index;
			string *method_name;
			type_index = (pool->data[index].i >> 16) & 0xffff;
			method_index = pool->data[index].i & 0xffff;

			i::Type *found;
			i::Method *method;

			if((found = (i::Type *)ResolveEntry(type, type_index)) == NULL) {

			}

			if((method_name = (string *)ResolveEntry(type, method_index)) == NULL ) {

			}

			if((method = found->get_methods().lookup<i::Method *>(*method_name)) == NULL) {
				
			}

			pool->data[index].method = method;
			pool->tags[index] |= CONSTANT_Resolved;
			} break;
	}

	return pool->data[index].o;
}

double ValueToFloat(Object *object)
{
	return 0;
}

int ValueToInteger(Object *object)
{
	return 0;
}

String * ObjectToString(Object *object)
{
	return NULL;
}


Frame::Frame(i::Method *meth_,word *top,nula::Frame *parent)
: next(0),
meth(meth_),
max_stack(0),
max_locals(0),
context(top),
ncode(0)
{
	ncode = meth->ncode;
	max_stack = meth->max_stack;
	max_locals = meth->max_locals;

	next = parent;
	parent = this;
}

Frame::~Frame()
{
	next = next->next;
}



};