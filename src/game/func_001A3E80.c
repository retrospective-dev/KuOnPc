#include "common.h"

void* func_00148120(void);
s32 func_00148130(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, void *arg5);
s32 func_00127A28(s32 *, void *, s32);
extern s32 D_00A3E2B0[];

void func_001A3E80(void) {
    func_00148130(0xA, 1, 0, 0x48, 0xE0000, NULL);
    func_00127A28(&D_00A3E2B0[0], func_00148120(), 0x48);
}
