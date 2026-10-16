#include "common.h"

extern s32 D_0025E500;

s32 func_001A1E80(s32 arg0) {
    s32 temp_v0;

    temp_v0 = D_0025E500;
    D_0025E500 = arg0;
    return temp_v0;
}
