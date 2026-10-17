#include "common.h"
#include "kuon_types.h"

extern u8 s_StatPack[];
extern u8 D_00A3E2B4[];

s32 fssdivagGetReserveSetupResult(s32 arg0) {
    s32 temp_a0;

    if ((arg0 < 0) || (arg0 >= 8)) {
        return 0;
    }
    temp_a0 = arg0 * 8;
    if (*(s32 *)(&s_StatPack[0] + temp_a0) != -1) {
        return -1;
    }
    return *(s32 *)(&D_00A3E2B4[0] + temp_a0);
}
