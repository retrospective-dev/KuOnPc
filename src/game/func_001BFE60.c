#include "common.h"

void func_001C0E30(u8 *arg0, u8 *arg1);
s32 func_00103758(s32, s32 *, s32);

void func_001BFE60(s32 arg0, u8 *arg1, s32 arg2) {
    s32 sp30[16];

    func_001C0E30(sp30, arg1);
    func_00103758(arg0, sp30, arg2);
}
