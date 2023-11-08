// Simple header file to dispatch to the relevant platform API headers
#ifndef _PLATFORM_H
#define _PLATFORM_H

#if defined(_WINDOWS)
#include <windows.h>
#else
#include <cstdint>
#include <cstring>
#include <cstddef>
typedef uint32_t COLORREF;
#define stricmp strcasecmp
#define RGB(r,g,b)          ((COLORREF)((r) | ((g) << 8) | ((b) << 16)))
#define HANDLE FILE*
#define __cdecl
#endif

#endif
