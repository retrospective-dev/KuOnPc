#include "common.h"

extern u8 D_006B9B50[];

u8 *CheckE032UseSpirit(void) {
    s32 var_a0;
    u8 *var_v0;

    var_a0 = 0;
    var_v0 = &D_006B9B50[0];
loop_1:
    if (*var_v0 == 0) {
        return var_v0;
    }
    var_a0 += 1;
    var_v0 += 0x1C0;
    if (var_a0 > 0) {
        return NULL;
    }
    goto loop_1;
}
