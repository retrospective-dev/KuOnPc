#include "common.h"
#include "m2c_macros.h"

extern u8 D_00A369B0[];

u64 func_00187660(s32 arg0) {
    return (u64) ((s64) M2C_FIELD((&D_00A369B0[0] + (arg0 & 0xFFFF)), u8 *, 0x100) << 0x39) >> 0x3F;
}
