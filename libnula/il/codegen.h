#ifndef _NULA_CODEGEN_H
#define _NULA_CODEGEN_H


#include "nula.h"

namespace nula {


	namespace il {

class CodeGen {
public:
	CodeGen();
	~CodeGen();


private:
	i::Method *meth;
};

	};


};


#endif