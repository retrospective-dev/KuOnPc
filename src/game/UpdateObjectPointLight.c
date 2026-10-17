#include "common.h"
#include "m2c_macros.h"

s32 func_00103E88(u8 *, u8 *, u8 *);
extern u8 PointLightMng[];

void UpdateObjectPointLight(u8 *arg0) {
    s32 temp_a1;
    u8 *temp_a0;
    u8 temp_v1;

    temp_a1 = M2C_FIELD(arg0, s32 *, 0x180);
    if (temp_a1 >= 2) {
        temp_a0 = &PointLightMng[0] + (temp_a1 * 0x30);
        temp_v1 = *temp_a0;
        if ((temp_v1 != 0) && (temp_v1 != 0)) {
            func_00103E88(temp_a0 + 0x10, arg0 + 0x20, arg0);
        }
    }
}
