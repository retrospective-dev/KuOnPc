#include "common.h"

s32 func_00187940(s32 arg0);
s32 func_001DFF20(s32 arg0) {
    s32 var_v0;

    var_v0 = 0;
    switch (arg0) {
    case 0x0:
        var_v0 = func_00187940(0x2EFF) & 0xFFFF;
        break;
    case 0xC8:
        var_v0 = func_00187940(0x2F01) & 0xFFFF;
        break;
    case 0x1F4:
        var_v0 = func_00187940(0x2F00) & 0xFFFF;
        break;
    case 0x1F5:
        var_v0 = func_00187940(0x2F00) & 0xFFFF;
        break;
    case 0x2BC:
        var_v0 = func_00187940(0x2F02) & 0xFFFF;
        break;
    case 0x320:
        var_v0 = func_00187940(0x2F03) & 0xFFFF;
        break;
    }
    if (var_v0 > 0) {
        var_v0 = 1;
    }
    return var_v0;
}
