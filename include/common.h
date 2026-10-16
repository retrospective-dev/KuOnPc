#ifndef COMMON_H
#define COMMON_H

typedef signed char        s8;
typedef unsigned char      u8;
typedef signed short       s16;
typedef unsigned short     u16;
typedef signed int         s32;
typedef unsigned int       u32;
typedef signed long        s64;
typedef unsigned long      u64;
typedef float              f32;

#define NULL ((void*)0)

/* SDK / MSL runtime (addresses identified, names provisional) */
void func_00127BE0(void* dst, s32 c, u32 n); /* memset */

#endif
