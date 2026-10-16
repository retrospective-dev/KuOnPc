#include "common.h"

void func_00127BE0(void* dst, s32 c, u32 n);
s32 func_0019C670(void *arg0, s32 arg1, s32 arg2);
extern s32 D_00A3A5F0[];

void func_0019EE80(s32 arg0, s32 arg1) {
    func_00127BE0((void *) arg0, 0, (u32) arg1);
    func_0019C670(&D_00A3A5F0[0], arg0, arg1);
}
