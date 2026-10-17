#include "common.h"

s32 MemAllocReal(s32 arg0, s32 arg1, s32 arg2);
extern u8 D_0025A138[];
extern u8 D_0025A148[];

void _MemAlloc(s32 arg0) {
    MemAllocReal(arg0, (s32) &D_0025A138[0], (s32) &D_0025A148[0]);
}
