#include "common.h"

extern s8 D_009BC420[];

void func_0016C410(s32 arg0, s8 arg1) {
    s32 var_a2;

    var_a2 = arg0 >> 3;
    if (arg0 < 0) {
        var_a2 = (s32) (arg0 + 7) >> 3;
    }
    *(&D_009BC420[0] + var_a2) = arg1;
}
