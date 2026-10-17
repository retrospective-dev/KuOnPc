#include "common.h"

extern u8 D_00A484B0[];

u8 func_001BEEB0(s32 arg0) {
    return *(&D_00A484B0[0] + (arg0 & 0xFFFF));
}
