#include "common.h"

typedef struct {
    /* 0x00 */ u8 unk0[0x10];
    /* 0x10 */ s16 unk10;
    /* 0x12 */ u16 unk12;
    /* 0x14 */ s16 unk14;
} Unk_00196170;

void _CardFuncs_Act_CrossFade(Unk_00196170 *arg0) {
    if ((s32) arg0->unk12 >= 0x1E) {
        arg0->unk10 = 0;
        arg0->unk12 = 0U;
        arg0->unk14 = 0;
    }
}
