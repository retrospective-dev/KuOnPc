#include "common.h"
#include "kuon_types.h"
#include "m2c_macros.h"

extern DrawMng *D_0025DF80;
void func_00134170(f32 *ang) {
    D_0025DF80->camAng[0] = M2C_FIELD(ang, f32 *, 0);
    D_0025DF80->camAng[1] = M2C_FIELD(ang, f32 *, 4);
    D_0025DF80->camAng[2] = M2C_FIELD(ang, f32 *, 8);
    D_0025DF80->camAng[3] = 1.0f;
}
