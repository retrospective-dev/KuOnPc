#include "common.h"
#include "m2c_macros.h"

extern s8 D_00788680[];

void func_00147020(s32 arg0, s32 arg1, s8 arg2) {
    void *temp_a0;

    temp_a0 = &D_00788680[0] + ((arg1 + (arg0 * 4)) * 0x1C0);
    if (M2C_FIELD(temp_a0, u8 *, 0x182) != 0) {
        M2C_FIELD(temp_a0, s8 *, 0x174) = arg2;
    }
}
