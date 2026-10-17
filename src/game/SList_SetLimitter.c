#include "common.h"
#include "kuon_types.h"

typedef struct {
    /* 0x00 */ u8 unk0[0x4];
    /* 0x04 */ u16 unk4;
    /* 0x06 */ u8 unk6[0x2];
    /* 0x08 */ u16 unk8;
    /* 0x0A */ u16 unkA;
} Unk_001D4610;

s32 SList_SetLimitter(Unk_001D4610 *pSList_, u16 limit_) {
    if ((limit_ & 0xFFFF) < ((pSList_->unk8 - pSList_->unk4) & 0xFFFF)) {
        return 0;
    }
    pSList_->unkA = limit_;
    return 1;
}
