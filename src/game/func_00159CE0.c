#include "common.h"
#include "kuon_types.h"

int func_00159AB0(float *LP, float *LV, float *P1, float *V12, float *V13, float *pT);
s32 func_00159CE0(f32 *LP, f32 *LV, f32 *P1, f32 *V12, f32 *V13, f32 *pT) {
    f32 temp_f1;

    if (func_00159AB0(LP, LV, P1, V12, V13, pT) != 0) {
        temp_f1 = *pT;
        if ((temp_f1 < 0.0f) || !(temp_f1 <= 1.0f)) {
            return 0;
        }
        return 1;
    }
    return 0;
}
