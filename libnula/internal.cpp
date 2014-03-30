#include "nula.h"


namespace nula {


	namespace internal {


static void properties_clean( void * ptr )
{

}

static void methods_clean( void *ptr )
{
}

Type::Type(const nula::string& name_)
	: _name(name_),
	flags(0),
	parent(0),
	props(0),
	interfaces(),
	properties( 10, properties_clean ),
	static_properties( 10, properties_clean ),
	methods( 10, methods_clean ),
	static_methods( 10, methods_clean )
{
}

Type::~Type()
{
}


void Type::SetProperty(Type *scope, word propid, word value)
{
	Property *prop;

	if((prop = static_properties.lookup<Property *>(*propid.str)) == NULL)
	{
		// TODO: throw exception when property not found
	}
	if( !CheckAccess( prop, scope ) )
	{
		// TODO: throw exception when property not have access
	}

	props[prop->offset] = value;
}

word Type::GetProperty(Type *scope, word propid)
{
	Property *prop;

	if((prop = static_properties.lookup<Property *>(*propid.str)) == NULL)
	{
		// TODO: throw exception when property not found
	}
	if( !CheckAccess( prop, scope ) )
	{
		// TODO: throw exception when property not have access
	}

	return props[prop->offset];
}



bool Type::CheckProtected( Type *klass, Type *scope )
{
	Type *fbc_scope = klass;

	while (fbc_scope) {
		if (fbc_scope==scope) {
			return 1;
		}
		fbc_scope = fbc_scope->parent;
	}

	while (scope) {
		if (scope==klass) {
			return 1;
		}
		scope = scope->parent;
	}
	return 0;
}

bool Type::CheckAccess( Property *prop, Type *scope )
{
	switch( prop->flags ) {
		case VT_PUBLIC:
			return true;
		case VT_PROTECTED:
			return CheckProtected( prop->defining_class, scope );
		case VT_PRIVATE:
			if(prop->defining_class == scope && scope) {
				return true;
			}
			return false;
	}
	return false;
}


bool Type::CheckAccess( Method *meth, Type *scope )
{
	switch( meth->flags ) {
		case VT_PUBLIC:
			return true;
		case VT_PROTECTED:
			return CheckProtected( meth->defining_class, scope );
		case VT_PRIVATE:
			if(meth->defining_class == scope && scope) {
				return true;
			}
			return false;
	}
	return false;
}

bool Type::instanceOf( Type *type, bool interface_only )
{
	Type * scope = this;

	for(int i = 0, l = interfaces.size(); i < l; i++)
	{
		if( interfaces[i]->instanceOf( type, 0 ) ) {
			return true;
		}
	}

	if( !interface_only )
	{
		while( scope )
		{
			if( scope == type )
				return true;
			scope = scope->parent;
		}
	}
	return false;
}

bool Type::instanceOf( string *type_name, bool interface_only )
{
	Type *base = LoadType( *type_name );
	return instanceOf(base, interface_only );
}


Property::Property(const nula::string &name_)
	: name(name_),
	flags(0)
{
}


Property::~Property()
{
}


Method::Method(const nula::string &name_)
	: name(name_),
	flags(0)
{
}

Method::~Method()
{
}



	};



};
