#include "common.h"
#include "kuon_types.h"

extern s32 D_00788638[];

void func_00146C50(s32 result) {
    if (result >= 0) {
        D_00788638[0] = 0;
        return;
    }
    if (result == -2) {
        D_00788638[0] = 3;
        return;
    }
    if (result == -3) {
        D_00788638[0] = 0x1E;
        return;
    }
    if (result == -4) {
        D_00788638[0] = 0x64;
        return;
    }
    if (result == -5) {
        D_00788638[0] = 0x64;
        return;
    }
    if (result == -7) {
        D_00788638[0] = 0x64;
        return;
    }
    if (result < -0xA) {
        D_00788638[0] = 1;
        return;
    }
    D_00788638[0] = 0x64;
}
