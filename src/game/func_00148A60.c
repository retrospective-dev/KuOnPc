#include "common.h"

extern s32 D_0078AB60[];

void func_00148A60(s32 arg0, s32 arg1) {
    u8 *var_a3;
    s32 var_a4;

    var_a4 = 0;
    var_a3 = &D_0078AB60[0];
    do {
        if (arg1 & (1 << var_a4)) {
            *(s32 *)var_a3 = arg0;
        }
        var_a4 += 1;
        var_a3 += 4;
    } while (var_a4 < 0x10);
}
