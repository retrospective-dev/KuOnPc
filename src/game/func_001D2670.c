#include "common.h"
#include "kuon_types.h"

typedef struct {
    /* 0x00 */ u8 unk0[0x28];
    /* 0x28 */ f32 unk28;
    /* 0x2C */ u8 unk2C[0x4];
    /* 0x30 */ s32 unk30;
} Unk_001D2670;

int func_00165090(int PLightNo, float Radius);
u8 *func_001D46A0(u8 *pSList_, unsigned short hElem_);
extern u8 *D_0025E608;
/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14], gap at: 0x8. */
s32 func_001D2670(u16 hSfxPLight_, f32 radius_) {
    Unk_001D2670 *temp_v0;

    if ((hSfxPLight_ & 0xFFFF) == 0xFFFF) {
        return 0;
    }
    temp_v0 = func_001D46A0(D_0025E608, hSfxPLight_);
    temp_v0->unk28 = radius_;
    return func_00165090(temp_v0->unk30, radius_);
}
