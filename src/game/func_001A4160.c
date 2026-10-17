#include "common.h"
#include "kuon_types.h"

extern u8 D_00A3E2B0[];
extern u8 D_00A3E2B4[];

s32 func_001A4160(s32 arg0) {
    s32 temp_a0;

    if ((arg0 < 0) || (arg0 >= 8)) {
        return 0;
    }
    temp_a0 = arg0 * 8;
    if (*(s32 *)(&D_00A3E2B0[0] + temp_a0) != -1) {
        return -1;
    }
    return *(s32 *)(&D_00A3E2B4[0] + temp_a0);
}
