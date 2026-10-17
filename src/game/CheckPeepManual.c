#include "common.h"
#include "kuon_types.h"

extern u8 D_00A3A3B8[];

s32 CheckPeepManual(void) {
    if (D_00A3A3B8[0] == 0) {
        goto block_4;
    }
    if (D_00A3A3B8[0] == 0xA) {
        goto block_4;
    }
    if (D_00A3A3B8[0] != 0xB) {
        goto block_5;
    }
block_4:
    return 1;
block_5:
    return 0;
}
