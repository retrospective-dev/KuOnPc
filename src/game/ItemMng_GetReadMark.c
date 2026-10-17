#include "common.h"
#include "m2c_macros.h"

extern u8 s_aItemNum[];

u64 ItemMng_GetReadMark(s32 arg0) {
    return (u64) ((s64) M2C_FIELD((&s_aItemNum[0] + (arg0 & 0xFFFF)), u8 *, 0x100) << 0x39) >> 0x3F;
}
