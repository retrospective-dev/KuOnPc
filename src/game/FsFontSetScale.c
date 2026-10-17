#include "common.h"
#include "kuon_types.h"

extern SCurrentP *sCurrentP_0025E420;
s32 FsFontSetScale(f32 x, f32 y) {
    sCurrentP_0025E420->scaleX[0] = x;
    sCurrentP_0025E420->scaleY[0] = y;
    sCurrentP_0025E420->scaleX[1] = x * sCurrentP_0025E420->scaleX[2];
    sCurrentP_0025E420->scaleY[1] = y * sCurrentP_0025E420->scaleY[2];
    return 0;
}
