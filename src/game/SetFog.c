#include "common.h"
#include "kuon_types.h"
#include "m2c_macros.h"

extern DrawMng *lpDrawMng;
void SetFog(f32 FogNear, f32 FogFar, s32 *FogColor) {
    f32 temp_f6;

    temp_f6 = FogNear - FogFar;
    lpDrawMng->FogParam[0] = 4080.0f / (-8392.677f * temp_f6);
    lpDrawMng->FogParam[1] = 839267.7f + (-8392.677f * FogFar);
    lpDrawMng->FogParam[2] = 0.0f;
    lpDrawMng->FogParam[3] = 4080.0f;
    lpDrawMng->FogParam16[0] = 4080.0f / (-32.783894f * temp_f6);
    lpDrawMng->FogParam16[1] = 3278.3894f + (-32.783894f * FogFar);
    lpDrawMng->FogParam16[2] = 0.0f;
    lpDrawMng->FogParam16[3] = 4080.0f;
    M2C_FIELD(lpDrawMng, s8 *, 0x100) = (s8) M2C_FIELD(FogColor, s32 *, 0);
    M2C_FIELD(lpDrawMng, s8 *, 0x101) = (s8) M2C_FIELD(FogColor, s32 *, 4);
    M2C_FIELD(lpDrawMng, s8 *, 0x102) = (s8) M2C_FIELD(FogColor, s32 *, 8);
    M2C_FIELD(lpDrawMng, s8 *, 0x103) = (s8) M2C_FIELD(FogColor, s32 *, 0xC);
    M2C_FIELD(lpDrawMng, s8 *, 0x1F0) = (s8) M2C_FIELD(FogColor, s32 *, 0);
    M2C_FIELD(lpDrawMng, s8 *, 0x1F1) = (s8) M2C_FIELD(FogColor, s32 *, 4);
    M2C_FIELD(lpDrawMng, s8 *, 0x1F2) = (s8) M2C_FIELD(FogColor, s32 *, 8);
    M2C_FIELD(lpDrawMng, s8 *, 0x1F3) = (s8) M2C_FIELD(FogColor, s32 *, 0xC);
}
