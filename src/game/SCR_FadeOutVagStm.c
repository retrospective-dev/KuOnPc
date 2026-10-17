#include "common.h"

typedef struct {
    /* 0x00 */ s32 unk0;
    /* 0x04 */ u8 unk4[0x4];
    /* 0x08 */ u8 unk8;
    /* 0x09 */ u8 unk9[0x7];
    /* 0x10 */ s32 unk10;
} Unk_0016D3F0;

void SetVagStmFade();
void SCR_FadeOutVagStm(Unk_0016D3F0 *arg0) {
    SetVagStmFade(arg0->unk8, 1, arg0->unk10);
    arg0->unk0 = 0;
}
