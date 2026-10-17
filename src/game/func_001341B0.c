#include "common.h"
#include "kuon_types.h"
#include "m2c_macros.h"

extern DrawMng *D_0025DF80;
void func_001341B0(f32 *pos) {
    D_0025DF80->camPos[0] = M2C_FIELD(pos, f32 *, 0);
    D_0025DF80->camPos[1] = M2C_FIELD(pos, f32 *, 4);
    D_0025DF80->camPos[2] = M2C_FIELD(pos, f32 *, 8);
    D_0025DF80->camPos[3] = 1.0f;
}
