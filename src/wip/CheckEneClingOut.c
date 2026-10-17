#include "common.h"
#include "m2c_macros.h"

s32 CheckEneClingOut(s32 arg0, u8 *arg1, s32 arg2) {
    u8 *temp_a0;

    temp_a0 = M2C_FIELD(arg1, u8 **, 0x1E4);
    if (M2C_FIELD(temp_a0, s16 *, 0x104) == (arg2 & 0xFFFF)) {
        return 1;
    }
    return M2C_FIELD(M2C_FIELD(temp_a0, u8 **, 0x148), u8 *, 0x100) == 8;
}
