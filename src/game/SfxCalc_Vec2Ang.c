#include "common.h"
#include "kuon_types.h"
#include "m2c_macros.h"

f32 func_00121B98(f32);
f32 func_00121BB0(f32, f32);

void SfxCalc_Vec2Ang(f32 *vDir_, f32 *pElev_, f32 *pAzim_) {
    if (pAzim_ != NULL) {
        *pAzim_ = func_00121BB0(M2C_FIELD(vDir_, f32 *, 0), M2C_FIELD(vDir_, f32 *, 8));
    }
    if (pElev_ != NULL) {
        *pElev_ = -func_00121B98(M2C_FIELD(vDir_, f32 *, 4));
    }
}
