#include "common.h"
#include "kuon_types.h"
#include "m2c_macros.h"

float Math_GetAngleDist(float ang1, float ang2);
float Math_VectorToAngle(float xx, float zz);
extern DrawMng *lpDrawMng;
u32 CheckPosOutOfSight(f32 *Pos) {
    DrawMng *temp_s0;
    f32 var_f0;

    temp_s0 = lpDrawMng;
    var_f0 = Math_GetAngleDist(Math_VectorToAngle(M2C_FIELD(Pos, f32 *, 0) - temp_s0->camPos[0], M2C_FIELD(Pos, f32 *, 8) - temp_s0->camPos[2]), temp_s0->camAng[1]);
    if (var_f0 < 0.0f) {
        var_f0 = -var_f0;
    }
    if (!(var_f0 <= 0.78524995f)) {
        return 1U;
    }
    return 0U;
}
