#include "common.h"

void SfxCalc_MakeMatrix_SPYRT(s32 arg0, void *arg1, void *arg2, s32 arg3);
void SfxCalc_MakeRotTransMatrix_I(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    SfxCalc_MakeMatrix_SPYRT(arg0, (void *) arg3, (void *) arg2, arg1);
}
