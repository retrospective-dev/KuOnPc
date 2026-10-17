#include "common.h"
#include "kuon_types.h"

typedef struct {
    /* 0x00 */ u8 unk0[0x30];
    /* 0x30 */ s32 unk30;
} Unk_001D26C0;

int UpdatePointLightPos(int PLightNo, float *Pos);
u8 *SList_GetElemPtr(u8 *pSList_, unsigned short hElem_);
extern u8 *s_pObjList_0025E608;
s32 func_00103E88(u8 *, f32 *);

s32 SfxPLight_SetPos(u16 hSfxPLight_, f32 *vPos_) {
    Unk_001D26C0 *temp_v0;

    if ((hSfxPLight_ & 0xFFFF) == 0xFFFF) {
        return 0;
    }
    temp_v0 = SList_GetElemPtr(s_pObjList_0025E608, hSfxPLight_);
    func_00103E88(temp_v0, vPos_);
    return UpdatePointLightPos(temp_v0->unk30, vPos_);
}
