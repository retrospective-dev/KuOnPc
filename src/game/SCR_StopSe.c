#include "common.h"

typedef struct {
    /* 0x00 */ s32 unk0;
    /* 0x04 */ u8 unk4[0x4];
    /* 0x08 */ s32 unk8;
} Unk_0016C9B0;

void SND_Stop(s32 arg0);
void SCR_StopSe(Unk_0016C9B0 *arg0) {
    SND_Stop(arg0->unk8);
    arg0->unk0 = 0;
}
