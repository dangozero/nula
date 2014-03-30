#include "nula.h"



namespace nula {

i::Type *Num::class$;

Num::Num(int i)
{
	slots[kBufferIndex].i = i;
}

Num::Num(double d)
{
	slots[kBufferIndex].f = d;
}

Num::~Num()
{
}


};
