#ifndef _NULA_PLATFORM_H
#define _NULA_PLATFORM_H


#ifdef _WIN32
#include "platform-win32.h"
#endif


#ifdef __cplusplus
#define BEGIN_EXTERN_C  extern "C" {
#define END_EXTERN_C    }
#define EXTERN_C        extern "C"
#else
#define BEGIN_EXTERN_C
#define END_EXTERN_C

#define EXTERN_C        extern
#endif

#undef SUCCESS
#undef FAILURE
#define SUCCESS		0
#define FAILURE     -1


#undef MAX
#define MAX(a, b)		((a)>(b)?(a):(b))
#undef MIN
#define MIN(a, b)		((a)<(b)?(a):(b))



#endif