#include "common.h"
#include "kuon_types.h"
#include "m2c_macros.h"

void SetAmbientColor(float *Amb);
void GetMapAmbient(float (*lpAmbCol)[4]);
void SetCamAmbient(CamPath *lpCamPath) {
    u32 temp_s0;

    temp_s0 = lpCamPath->ambData;
    if ((M2C_FIELD(temp_s0, f32 *, 0) == 0.0f) && (M2C_FIELD(temp_s0, f32 *, 4) == 0.0f) && (M2C_FIELD(temp_s0, f32 *, 8) == 0.0f)) {
        GetMapAmbient((f32 (*)[4]) temp_s0);
        SetAmbientColor((f32 *) temp_s0);
        return;
    }
    SetAmbientColor((f32 *) temp_s0);
}
