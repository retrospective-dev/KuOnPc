#include "common.h"

s32 func_001AC4F0(s32 arg0);
void func_001522C0(void) {
    s32 var_s0;

    var_s0 = 0;
    do {
        func_001AC4F0(var_s0);
        var_s0 += 1;
    } while (var_s0 < 2);
}
