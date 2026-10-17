#include "common.h"
#include "m2c_macros.h"

s32 func_001AC4F0(s32 arg0);
s32 func_001AC570(s32 arg0, s32 arg1);
extern u8 D_009009E0[];

void func_00152360(void) {
    s8 *var_s0_2;
    s32 var_s0;
    s32 var_s1;

    var_s0 = 0;
    do {
        func_001AC4F0(var_s0);
        var_s0 += 1;
    } while (var_s0 < 2);
    var_s1 = 0;
    var_s0_2 = &D_009009E0[0];
    do {
        if (M2C_FIELD(var_s0_2, u8 *, 0) != 0) {
            func_001AC570(var_s1, M2C_FIELD(var_s0_2, s32 *, 4));
        }
        var_s1 += 1;
        var_s0_2 += 0xC;
    } while (var_s1 < 2);
}
