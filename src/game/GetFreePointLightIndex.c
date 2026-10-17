#include "common.h"

extern u8 D_0097C120[];

s32 GetFreePointLightIndex(void) {
    s32 var_v0;
    u8 *var_a0;

    var_v0 = 2;
    var_a0 = &D_0097C120[0];
loop_1:
    if (*var_a0 == 0) {
        return var_v0;
    }
    var_v0 += 1;
    var_a0 += 0x30;
    if (var_v0 >= 0x10) {
        return -1;
    }
    goto loop_1;
}
