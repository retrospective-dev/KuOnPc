#include "common.h"
/* mwcc_pad: noternary */

s32 func_00129CE0(s32 *, s32);
extern u8 D_0024DD50[];

s32 func_001DE710(s32 arg0) {
    u8 *var_s0;
    s32 var_s1;

    var_s1 = 0;
    var_s0 = &D_0024DD50[0];
loop_1:
    if (func_00129CE0(var_s0, arg0) == 0) {
        return var_s1;
    }
    var_s1 += 1;
    var_s0 += 0x48;
    if (var_s1 >= 0x32) {
        return 0;
    }
    goto loop_1;
}
