#include "common.h"

void func_0021D050(s32 arg0);
extern s32 D_0025E790;

s32 func_0021C540(s32 arg0) {
    s32 temp_s0;

    temp_s0 = D_0025E790;
    D_0025E790 = arg0;
    func_0021D050(arg0);
    return temp_s0;
}
