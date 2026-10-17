#include "common.h"
#include "kuon_types.h"
#include "m2c_macros.h"

void SubVector(f32 *ans, f32 *fv1, f32 *fv2) {
    M2C_FIELD(ans, f32 *, 0) = M2C_FIELD(fv1, f32 *, 0) - M2C_FIELD(fv2, f32 *, 0);
    M2C_FIELD(ans, f32 *, 4) = (f32) (M2C_FIELD(fv1, f32 *, 4) - M2C_FIELD(fv2, f32 *, 4));
    M2C_FIELD(ans, f32 *, 8) = (f32) (M2C_FIELD(fv1, f32 *, 8) - M2C_FIELD(fv2, f32 *, 8));
}
