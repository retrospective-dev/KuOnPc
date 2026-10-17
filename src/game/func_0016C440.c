#include "common.h"

extern s8 D_009BC420[];

u8 func_0016C440(s32 arg0) {
    s32 var_v1;

    var_v1 = arg0 >> 3;
    if (arg0 < 0) {
        var_v1 = (s32) (arg0 + 7) >> 3;
    }
    return *(&D_009BC420[0] + var_v1);
}
