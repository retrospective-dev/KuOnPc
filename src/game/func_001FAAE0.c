#include "common.h"
#include "m2c_macros.h"

extern s8 D_00A521D0[];
extern s8 D_00A52BD0[];

void func_001FAAE0(s32 arg0, s32 arg1) {
    void *temp_a1;

    temp_a1 = &D_00A521D0[0] + (arg1 * 0x50);
    M2C_FIELD(temp_a1, s8 *, 0) = 0;
    M2C_FIELD(temp_a1, u8 *, 0x45) = (u8) M2C_FIELD((&D_00A52BD0[0] + ((arg0 & 0xFF) * 0x50)), u8 *, 0x35);
    M2C_FIELD(temp_a1, s8 *, 0x46) = 1;
}
