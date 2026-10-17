#include "common.h"

void MmoFontSetRefCurrentPtr(s32 arg0);
extern s32 sCurrentP_0025E790;

s32 MmoFsFontSetCurrent(s32 arg0) {
    s32 temp_s0;

    temp_s0 = sCurrentP_0025E790;
    sCurrentP_0025E790 = arg0;
    MmoFontSetRefCurrentPtr(arg0);
    return temp_s0;
}
