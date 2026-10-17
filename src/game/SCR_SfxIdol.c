#include "common.h"

typedef struct {
    /* 0x00 */ s32 unk0;
    /* 0x04 */ u8 unk4[0x4];
    /* 0x08 */ u8 unk8;
} Unk_0016D570;

void SFX_Idle(s32 arg0);
void SCR_SfxIdol(Unk_0016D570 *arg0) {
    SFX_Idle((s32) arg0->unk8);
    arg0->unk0 = 0;
}
