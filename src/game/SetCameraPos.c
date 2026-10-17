#include "common.h"
#include "kuon_types.h"
#include "m2c_macros.h"

extern DrawMng *lpDrawMng;
void SetCameraPos(f32 *pos) {
    lpDrawMng->camPos[0] = M2C_FIELD(pos, f32 *, 0);
    lpDrawMng->camPos[1] = M2C_FIELD(pos, f32 *, 4);
    lpDrawMng->camPos[2] = M2C_FIELD(pos, f32 *, 8);
    lpDrawMng->camPos[3] = 1.0f;
}
