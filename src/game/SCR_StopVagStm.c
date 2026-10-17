#include "common.h"

typedef struct {
    /* 0x00 */ s32 unk0;
    /* 0x04 */ u8 unk4[0x4];
    /* 0x08 */ u8 unk8;
} Unk_0016D430;

void StopVagStm(s32 arg0);
void SCR_StopVagStm(Unk_0016D430 *arg0) {
    StopVagStm((s32) arg0->unk8);
    arg0->unk0 = 0;
}
