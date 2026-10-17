#include "common.h"
#include "m2c_macros.h"

extern u8 D_006A78D0[];

void func_00151760(u8 *arg0, u8 arg1) {
    u8 temp_a2;
    u8 *temp_a0;
    u8 *temp_a4;

    temp_a4 = M2C_FIELD(arg0, u8 **, 0x148);
    if ((arg1 & 0xFF) < 3) {
        temp_a0 = &D_006A78D0[0] + ((M2C_FIELD(temp_a4, u8 *, 0x1AD) + 0x2EF) * 0x1C0);
        temp_a2 = M2C_FIELD(temp_a0, u8 *, 2);
        M2C_FIELD(temp_a0, u8 *, 2) = 1U;
        M2C_FIELD(temp_a4, u8 *, 0x1AD) = arg1;
        M2C_FIELD((&D_006A78D0[0] + ((M2C_FIELD(temp_a4, u8 *, 0x1AD) + 0x2EF) * 0x1C0)), u8 *, 2) = temp_a2;
    }
}
