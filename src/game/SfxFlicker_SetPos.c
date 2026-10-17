#include "common.h"
#include "kuon_types.h"
#include "m2c_macros.h"

u8 *SList_GetElemPtr(u8 *pSList_, unsigned short hElem_);
extern u8 *s_pObjList_0025E5D0;
s32 SfxFlicker_SetPos(u16 hObj_, f32 *pos_) {
    u8 *temp_v0;

    temp_v0 = SList_GetElemPtr(s_pObjList_0025E5D0, hObj_);
    if (temp_v0 == NULL) {
        return 0;
    }
    M2C_FIELD(temp_v0, f32 *, 0) = (f32) M2C_FIELD(pos_, f32 *, 0);
    M2C_FIELD(temp_v0, f32 *, 4) = (f32) M2C_FIELD(pos_, f32 *, 4);
    M2C_FIELD(temp_v0, f32 *, 8) = (f32) M2C_FIELD(pos_, f32 *, 8);
    return 1;
}
