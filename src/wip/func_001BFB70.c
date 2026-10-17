#include "common.h"

s32 func_001BFB70(s32 arg0) {
    s32 var_v0;
    u32 temp_v1;

    temp_v1 = (arg0 & 0xFFFF) - 0x2C8;
    var_v0 = 0;
    if (temp_v1 < 5U) {
        if ((1 << temp_v1) & 0x13) {
            var_v0 = 1;
        }
    }
    return var_v0;
}
