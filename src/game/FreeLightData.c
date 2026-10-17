#include "common.h"

void func_00127BE0(void* dst, s32 c, u32 n);
extern s32 LightAnim[];

void FreeLightData(void) {
    func_00127BE0(&LightAnim[0], 0, 0x100U);
}
