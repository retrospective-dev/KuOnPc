#include "common.h"
#include "kuon_types.h"
#include "m2c_macros.h"

void func_00135340(float *Amb);
void func_0014B720(float (*lpAmbCol)[4]);
void func_001326B0(CamPath *lpCamPath) {
    u32 temp_s0;

    temp_s0 = lpCamPath->ambData;
    if ((M2C_FIELD(temp_s0, f32 *, 0) == 0.0f) && (M2C_FIELD(temp_s0, f32 *, 4) == 0.0f) && (M2C_FIELD(temp_s0, f32 *, 8) == 0.0f)) {
        func_0014B720((f32 (*)[4]) temp_s0);
        func_00135340((f32 *) temp_s0);
        return;
    }
    func_00135340((f32 *) temp_s0);
}
