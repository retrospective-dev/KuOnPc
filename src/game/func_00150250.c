#include "common.h"

s32 func_00129A20(s32, s32);
s32 func_0012A230(s32, s32, s32);
s32 func_0012A3F0(s32, s32);

void func_00150250(s32 arg0, s32 arg1, s32 arg2) {
    func_0012A230(arg0, arg1, func_0012A3F0(arg1, 0x2E) - arg1);
    func_00129A20(arg0, arg2);
}
