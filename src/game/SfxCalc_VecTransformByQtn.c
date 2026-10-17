#include "common.h"

void SfxCalc_MakeMatrixFromQtn(u8 *arg0, u8 *arg1);
s32 func_00103758(s32, s32 *, s32);

void SfxCalc_VecTransformByQtn(s32 arg0, u8 *arg1, s32 arg2) {
    s32 sp30[16];

    SfxCalc_MakeMatrixFromQtn(sp30, arg1);
    func_00103758(arg0, sp30, arg2);
}
