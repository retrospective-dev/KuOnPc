#include "common.h"
#include "kuon_types.h"

typedef struct {
    /* 0x00 */ u8 unk0[0x6];
    /* 0x06 */ u16 unk6;
    /* 0x08 */ u8 unk8[0x4];
    /* 0x0C */ u32 unkC;
} Unk_001D46D0;

u8 *func_001D48D0(u8 *pBuffer_, unsigned int buffer_size_, unsigned short data_size_);
void func_001D46D0(Unk_001D46D0 *pSList_) {
    func_001D48D0(pSList_, pSList_->unkC, pSList_->unk6);
}
