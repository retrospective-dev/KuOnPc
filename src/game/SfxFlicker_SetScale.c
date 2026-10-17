#include "common.h"
#include "kuon_types.h"

typedef struct {
    /* 0x00 */ u8 unk0[0xC];
    /* 0x0C */ f32 unkC;
} Unk_001C79C0;

u8 *SList_GetElemPtr(u8 *pSList_, unsigned short hElem_);
extern u8 *s_pObjList_0025E5D0;
/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14], gap at: 0x8. */
s32 SfxFlicker_SetScale(u16 hObj_, f32 scale_) {
    Unk_001C79C0 *temp_v0;

    temp_v0 = SList_GetElemPtr(s_pObjList_0025E5D0, hObj_);
    if (temp_v0 == NULL) {
        return 0;
    }
    temp_v0->unkC = scale_;
    return 1;
}
