#include "common.h"
#include "kuon_types.h"

u16 func_001BEDE0(u16 sfx_idx_) {
    s32 temp_v1;

    temp_v1 = sfx_idx_ & 0xFFFF;
    switch (temp_v1) {
    case 0x2C8:
        return 0x2CEU;
    case 0x2C9:
        return 0x2CFU;
    case 0x2CC:
        return 0x2D0U;
    default:
        return sfx_idx_;
    }
}
