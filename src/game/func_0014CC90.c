#include "common.h"

extern u8 D_00799664[];

s32 func_0014CC90(s32 arg0) {
    return *(s32 *)(&D_00799664[0] + (arg0 * 0x10));
}
