#include "common.h"
#include "m2c_macros.h"

extern s8 D_00788680[];

void func_00146FF0(s32 arg0, s32 arg1, s8 arg2) {
    M2C_FIELD((&D_00788680[0] + ((arg1 + (arg0 * 4)) * 0x1C0)), s8 *, 0x182) = arg2;
}
