#include "common.h"
#include "kuon_types.h"

typedef struct {
    /* 0x00 */ u8 unk0[0x68];
    /* 0x68 */ f32 unk68;
    /* 0x6C */ f32 unk6C;
} Unk_001D22E0;

u8 *func_001D46A0(u8 *pSList_, unsigned short hElem_);
extern u8 *D_0025E608;
s32 func_001D22E0(u16 hSfxPLight_, f32 recover_, f32 response_) {
    Unk_001D22E0 *temp_v0;

    if ((hSfxPLight_ & 0xFFFF) == 0xFFFF) {
        return 0;
    }
    temp_v0 = func_001D46A0(D_0025E608, hSfxPLight_);
    temp_v0->unk68 = recover_;
    temp_v0->unk6C = response_;
    return 1;
}
