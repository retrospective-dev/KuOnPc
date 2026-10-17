#include "common.h"
#include "kuon_types.h"

s32 SFX_IsBloodPool(u16 sfx_idx_) {
    s32 var_v0;
    u32 temp_v1;

    temp_v1 = (sfx_idx_ & 0xFFFF) - 0x2C8;
    var_v0 = 0;
    if (temp_v1 >= 5U) {
        goto block_3;
    }
    if (!((1 << temp_v1) & 0x13)) {
        goto block_3;
    }
    var_v0 = 1;
block_3:
    return var_v0;
}
