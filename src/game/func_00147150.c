#include "common.h"

extern u8 D_007887E8[];

s32 func_00147150(s32 arg0, s32 arg1) {
    return *(s32 *)(&D_007887E8[0] + ((arg1 + (arg0 * 4)) * 0x1C0));
}
