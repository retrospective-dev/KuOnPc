#include "common.h"

void func_00127BE0(void* dst, s32 c, u32 n);
extern u8 PointLightMng[];

void SetPointLightOff(s32 arg0) {
    u8 *temp_a0;

    if (arg0 < 0x11) {
        temp_a0 = &PointLightMng[0] + (arg0 * 0x30);
        if (*temp_a0 != 0) {
            func_00127BE0(temp_a0, 0, 0x30U);
        }
    }
}
