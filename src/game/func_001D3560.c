#include "common.h"
#include "kuon_types.h"
#include "m2c_macros.h"

void func_00127BE0(void* dst, s32 c, u32 n);
u8 *func_001D46A0(u8 *pSList_, unsigned short hElem_);
unsigned short func_001D47C0(u8 *pSList_, u8 *pData_);
extern u8 *D_0025E610;
u16 func_001D3560(Params *pParams_) {
    u16 temp_s2;
    u8 *temp_v0;

    temp_s2 = func_001D47C0(D_0025E610, NULL) & 0xFFFF;
    if (temp_s2 == 0xFFFF) {
        return 0xFFFFU;
    }
    temp_v0 = func_001D46A0(D_0025E610, temp_s2);
    func_00127BE0(temp_v0, 0, 0x2CU);
    M2C_FIELD(temp_v0, u16 *, 0) = 0xFFFF;
    M2C_FIELD(temp_v0, f32 *, 8) = (f32) pParams_->life;
    M2C_FIELD(temp_v0, s16 *, 2) = 0;
    M2C_FIELD(temp_v0, u16 *, 4) = (u16) pParams_->type;
    M2C_FIELD(temp_v0, TexMng **, 0x18) = (TexMng *) pParams_->pTex;
    M2C_FIELD(temp_v0, f32 *, 0xC) = (f32) pParams_->size;
    M2C_FIELD(temp_v0, f32 *, 0x10) = (f32) pParams_->length;
    M2C_FIELD(temp_v0, f32 *, 0x14) = (f32) pParams_->split;
    M2C_FIELD(temp_v0, u16 *, 0x1C) = (u16) pParams_->divH;
    M2C_FIELD(temp_v0, u16 *, 0x1E) = (u16) pParams_->divV;
    M2C_FIELD(temp_v0, f32 *, 0x24) = (f32) pParams_->cut;
    M2C_FIELD(temp_v0, f32 *, 0x28) = (f32) pParams_->alpha;
    return temp_s2;
}
