#include "common.h"
#include "kuon_types.h"

typedef struct {
    /* 0x00 */ u8 unk0[0x18];
    /* 0x18 */ f32 unk18;
} Unk_001C90B0;

u8 *func_001D46A0(u8 *pSList_, unsigned short hElem_);
extern u8 *D_0025E5D0;
/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14], gap at: 0x8. */
s32 func_001C90B0(u16 hFlicker_, f32 sec_) {
    Unk_001C90B0 *temp_v0;

    temp_v0 = func_001D46A0(D_0025E5D0, hFlicker_);
    if (temp_v0 == NULL) {
        return 0;
    }
    temp_v0->unk18 = (f32) (temp_v0->unk18 + sec_);
    return 1;
}
