#include "common.h"

extern u8 D_00A4D1BC[];

void SfxPostEffect_SetEnable(s32 arg0, s32 arg1) {
    u16 temp_a2;

    temp_a2 = arg0 & 0xFFFF;
    D_00A4D1BC[0] = (arg1 << temp_a2) | (~(1 << temp_a2) & D_00A4D1BC[0]);
}
