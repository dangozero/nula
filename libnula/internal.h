
#define VT_PUBLIC		0x20
#define VT_PROTECTED	0x40
#define VT_PRIVATE		0x80


#define VT_ABSTRACT		0x100
#define VT_FINAL		0x200

#define VT_USERDEF		0x1000
#define VT_INTERNAL		0x2000

namespace internal {


struct Constants {
	int size;
	int *tags;
	word *data;
};


class NULA_API Type {
	friend void *::nula::ResolveEntry(Type *, int);
public:
	Type(const string& name);
	~Type();


	word GetProperty( Type *scope, word propid );
	void SetProperty( Type *scope, word propid, word value );
	
	always_inline Hash get_properties() const {
		return properties;
	}

	always_inline Hash get_methods() const {
		return methods;
	}

	always_inline Method **get_vfptr() const {
		return vfptr;
	}

	always_inline int get_max_vfptr() const {
		return max_vfptr;
	}

	always_inline string name() const {
		return _name;
	}

public:
	bool instanceOf( Type *type, bool interfaceOnly );
	bool instanceOf( string *type_name, bool interfaceOnly );
	static bool CheckProtected( Type *klass, Type *scope );
	static bool CheckAccess( Property *prop, Type *scope );
	static bool CheckAccess( Method *meth, Type *scope );

private:
	string _name;
	unsigned int flags;

	Type * parent;

	Hash properties;
	Hash static_properties;

	word *props;

	Hash methods;
	Hash static_methods;

	Method **vfptr;
	int max_vfptr;

	::std::vector<Type *> interfaces;

	Constants constants;
};




struct NULA_API Property {
	Property(const string& name);
	~Property();

	string name;
	unsigned int flags;
	Type *defining_class;
	Type *type;
	int offset;
};

typedef word (NULA_DECL *method_signature)(Object *, const Arguments&);
typedef word (NULA_DECL *static_method_signature)(const Arguments&);

struct NULA_API Method {
	Method(const string& name);
	~Method();

	string name;
	unsigned int flags;
	Type *defining_class;
	Type *type;
	List<Type *> arguments;

	void *ncode;

	unsigned short       max_stack;
	unsigned short       max_locals;
	int					 code_length;
	unsigned short       exc_count;

};

};

namespace i = ::nula::internal;