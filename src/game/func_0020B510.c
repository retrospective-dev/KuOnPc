#include "common.h"
#include "m2c_macros.h"

extern u8 D_00A604D0[];

void func_0020B510(s32 arg0) {
    s32 (*temp_v1)(u8 *);
    u8 *temp_a0;

    temp_a0 = &D_00A604D0[0] + (arg0 * 0x60);
    temp_v1 = M2C_FIELD(temp_a0, s32 (**)(u8 *), 8);
    if (temp_v1 != NULL) {
        temp_v1(temp_a0);
    }
}
