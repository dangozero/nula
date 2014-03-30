#include "nula.h"



namespace nula {

i::Type *Object::class$;

Object::Object(i::Type *type)
{
	Init(type);
}

Object::Object()
{
	Init(class$);
}

Object::~Object()
{
	delete slots;
}


void *Object::operator new(size_t size)
{
	return GC_MALLOC( size );
}

void *Object::operator new[](size_t size)
{
	return GC_MALLOC( size );
}

void Object::Init(i::Type *classp)
{
	int nslots = classp->get_properties().count();

	slots = new word[nslots + Object::kSyncIndex];

	if( slots )
	{
		slots[kClassIndex].klass = classp;
		slots[kVirtualIndex].vfptr = classp->get_vfptr();
		slots[kBufferIndex].ptr = NULL;
		slots[kLengthIndex].i = 0;
	}
}

int Object::GetElementI(int index)
{
	if( index < 0 || index > get_length() )
	{
	}
	return slots[index].i;
}

double Object::GetElementD(int index)
{
	if( index < 0 || index > get_length() )
	{
	}
	return slots[index].f;
}

Object * Object::GetElementA(int index)
{
	if( index < 0 || index > get_length() )
	{
	}
	return slots[index].o;
}

void Object::SetElement(int index, int value)
{
	if(index < 0 || index > get_length() ) {

	}

	slots[index].i = value;
}

void Object::SetElement(int index, double value)
{
	if(index < 0 || index > get_length() ) {

	}

	slots[index].f = value;
}

void Object::SetElement(int index, Object * value)
{
	if(index < 0 || index > get_length() ) {

	}

	slots[index].o = value;
}

void Object::SetProperty(i::Type *scope, word propid, word value)
{
	i::Property *prop;

	if((prop = get_class()->get_properties().lookup<i::Property *>( *propid.str )) == NULL)
	{
		// TODO: not found
	}

	if(!i::Type::CheckAccess(prop, scope))
	{
		// TODO: fail access
	}

	slots[prop->offset] = value;
}

word Object::GetProperty(i::Type *scope, word propid)
{
	i::Property *prop;

	if((prop = get_class()->get_properties().lookup<i::Property *>( *propid.str )) == NULL)
	{
		// TODO: not found
	}

	if(!i::Type::CheckAccess(prop, scope))
	{
		// TODO: fail access
	}

	return slots[prop->offset];
}

int Object::hasOwnProperty( word prop_name )
{
	return get_class()->get_properties().lookup<i::Property *>(*prop_name.str) != NULL;
}

};
