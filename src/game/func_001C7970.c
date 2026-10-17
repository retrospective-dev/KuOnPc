#include "common.h"
#include "kuon_types.h"

typedef struct {
    /* 0x00 */ u8 unk0[0x10];
    /* 0x10 */ f32 unk10;
} Unk_001C7970;

u8 *func_001D46A0(u8 *pSList_, unsigned short hElem_);
extern u8 *D_0025E5D0;
/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14], gap at: 0x8. */
s32 func_001C7970(u16 hObj_, f32 amp_) {
    Unk_001C7970 *temp_v0;

    temp_v0 = func_001D46A0(D_0025E5D0, hObj_);
    if (temp_v0 == NULL) {
        return 0;
    }
    temp_v0->unk10 = amp_;
    return 1;
}
