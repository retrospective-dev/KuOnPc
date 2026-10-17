#include "common.h"
#include "kuon_types.h"

extern u8 D_00A3E2F0[];

s16 func_001A3E50(s32 arg0) {
    if ((arg0 < 0) || (arg0 >= 8)) {
        return -1U;
    }
    return *(&D_00A3E2F0[0] + arg0);
}
