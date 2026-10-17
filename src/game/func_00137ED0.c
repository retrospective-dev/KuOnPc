#include "common.h"
#include "kuon_types.h"
#include "m2c_macros.h"

extern DrawMng *D_0025DF80;
void func_00137ED0(f32 FogNear, f32 FogFar, s32 *FogColor) {
    f32 temp_f6;

    temp_f6 = FogNear - FogFar;
    D_0025DF80->FogParam[0] = 4080.0f / (-8392.677f * temp_f6);
    D_0025DF80->FogParam[1] = 839267.7f + (-8392.677f * FogFar);
    D_0025DF80->FogParam[2] = 0.0f;
    D_0025DF80->FogParam[3] = 4080.0f;
    D_0025DF80->FogParam16[0] = 4080.0f / (-32.783894f * temp_f6);
    D_0025DF80->FogParam16[1] = 3278.3894f + (-32.783894f * FogFar);
    D_0025DF80->FogParam16[2] = 0.0f;
    D_0025DF80->FogParam16[3] = 4080.0f;
    M2C_FIELD(D_0025DF80, s8 *, 0x100) = (s8) M2C_FIELD(FogColor, s32 *, 0);
    M2C_FIELD(D_0025DF80, s8 *, 0x101) = (s8) M2C_FIELD(FogColor, s32 *, 4);
    M2C_FIELD(D_0025DF80, s8 *, 0x102) = (s8) M2C_FIELD(FogColor, s32 *, 8);
    M2C_FIELD(D_0025DF80, s8 *, 0x103) = (s8) M2C_FIELD(FogColor, s32 *, 0xC);
    M2C_FIELD(D_0025DF80, s8 *, 0x1F0) = (s8) M2C_FIELD(FogColor, s32 *, 0);
    M2C_FIELD(D_0025DF80, s8 *, 0x1F1) = (s8) M2C_FIELD(FogColor, s32 *, 4);
    M2C_FIELD(D_0025DF80, s8 *, 0x1F2) = (s8) M2C_FIELD(FogColor, s32 *, 8);
    M2C_FIELD(D_0025DF80, s8 *, 0x1F3) = (s8) M2C_FIELD(FogColor, s32 *, 0xC);
}
