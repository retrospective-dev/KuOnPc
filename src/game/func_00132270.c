#include "common.h"
#include "kuon_types.h"

extern f32 D_002684C8[];
extern s32 D_002684CC[];
extern s32 D_002684D0[];

void func_00132270(f32 sec, s32 type) {
    D_002684C8[0] = sec;
    D_002684D0[0] = type;
    D_002684CC[0] = 0;
}
