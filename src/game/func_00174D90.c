#include "common.h"

void func_00175110(s32 arg0);
extern s32 D_0025E420;

s32 func_00174D90(s32 arg0) {
    s32 temp_s0;

    temp_s0 = D_0025E420;
    D_0025E420 = arg0;
    func_00175110(arg0);
    return temp_s0;
}
