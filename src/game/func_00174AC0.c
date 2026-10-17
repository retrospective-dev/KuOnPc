#include "common.h"
#include "kuon_types.h"

extern SCurrentP *D_0025E420;
s32 func_00174AC0(f32 x, f32 y) {
    D_0025E420->scaleX[0] = x;
    D_0025E420->scaleY[0] = y;
    D_0025E420->scaleX[1] = x * D_0025E420->scaleX[2];
    D_0025E420->scaleY[1] = y * D_0025E420->scaleY[2];
    return 0;
}
