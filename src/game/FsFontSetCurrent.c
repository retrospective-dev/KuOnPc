#include "common.h"

void FontSetRefCurrentPtr(s32 arg0);
extern s32 sCurrentP_0025E420;

s32 FsFontSetCurrent(s32 arg0) {
    s32 temp_s0;

    temp_s0 = sCurrentP_0025E420;
    sCurrentP_0025E420 = arg0;
    FontSetRefCurrentPtr(arg0);
    return temp_s0;
}
