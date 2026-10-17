#include "common.h"
#include "kuon_types.h"

typedef struct {
    /* 0x00 */ f32 unk0;
    /* 0x04 */ f32 unk4;
} Unk_001D1E30;

u8 *func_001D46A0(u8 *pSList_, unsigned short hElem_);
extern u8 *D_0025E604;
s32 func_001D1E30(u16 hSfxMdl_, f32 s_, f32 t_) {
    Unk_001D1E30 *temp_v0;

    if ((hSfxMdl_ & 0xFFFF) == 0xFFFF) {
        return 0;
    }
    temp_v0 = func_001D46A0(D_0025E604, hSfxMdl_);
    temp_v0->unk0 = s_;
    temp_v0->unk4 = t_;
    return 1;
}
