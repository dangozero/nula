

#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <winsock2.h>

#include <io.h>


typedef __int64 int64;
typedef unsigned __int64 uint64;

typedef unsigned char uint8_t;
typedef char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;


#define DEFAULT_DIR_SEPARATOR			';'


#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <limits.h>

#include <fcntl.h>

#include <assert.h>

#ifdef __GNUC__
# if defined(_USRDLL)
#  ifdef _EXPORT_API
#   define DECL_API(__type)		__attribute__ ((dllexport)) __cdecl __type
#   define DATA_API(__type)		__attribute__ ((dllexport)) __type
#   define NULA_API				__attribute__ ((dllexport))
#  else
#   define DECL_API(__type)		__attribute__ ((dllimport)) __cdecl __type
#  endif
# else
#  define DECL_API(__type)		__type
# endif
#elif defined(_MSC_VER)
# if defined(_USRDLL)
#  if defined(_EXPORT_API)
#   define DECL_API(__type)		__declspec(dllexport) __type __cdecl
#ifndef DATA_API
#   define DATA_API(__type)		__declspec(dllexport) __type
#endif
#   define NULA_API				__declspec(dllexport)
#  elif defined(_IMPORT_API)
#   define DECL_API(__type)		__declspec(dllimport) __type __cdecl
#ifndef DATA_API
#   define DATA_API(__type)		__declspec(dllimport) __type
#endif
#   define NULA_API				__declspec(dllimport)
#  endif
# else
#  define DECL_API(__type)		__type
#ifndef DATA_API
#  define DATA_API(__type)		__type
#endif
#  define NULA_API
# endif
#endif


#ifndef MAXPATHLEN
# ifdef PATH_MAX
#  define MAXPATHLEN PATH_MAX
# elif defined(MAX_PATH)
#  define MAXPATHLEN MAX_PATH
# else
#  define MAXPATHLEN 256
# endif
#endif


#include <float.h>


#define isnan(x)	_isnan(x)
#define finite(x)	_finite(x)
#define isinf(a)	((_fpclass(a) == _FPCLASS_PINF) || (_fpclass(a) == _FPCLASS_NINF))


#if defined(_MSC_VER)
#define always_inline       __forceinline
#define inline				__inline
#endif



#define NULA_FAST_DECL		__fastcall
#define NULA_DECL			__cdecl