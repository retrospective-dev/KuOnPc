#include "common.h"

void func_00127BE0(void* dst, s32 c, u32 n);
s32 strFileRead(void *arg0, s32 arg1, s32 arg2);
extern s32 s_infile[];

void _cbFileRead(s32 arg0, s32 arg1) {
    func_00127BE0((void *) arg0, 0, (u32) arg1);
    strFileRead(&s_infile[0], arg0, arg1);
}
