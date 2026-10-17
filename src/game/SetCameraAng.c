#include "common.h"
#include "kuon_types.h"
#include "m2c_macros.h"

extern DrawMng *lpDrawMng;
void SetCameraAng(f32 *ang) {
    lpDrawMng->camAng[0] = M2C_FIELD(ang, f32 *, 0);
    lpDrawMng->camAng[1] = M2C_FIELD(ang, f32 *, 4);
    lpDrawMng->camAng[2] = M2C_FIELD(ang, f32 *, 8);
    lpDrawMng->camAng[3] = 1.0f;
}
