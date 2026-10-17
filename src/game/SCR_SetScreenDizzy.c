#include "common.h"

typedef struct {
    /* 0x00 */ s32 unk0;
    /* 0x04 */ u8 unk4[0x4];
    /* 0x08 */ s32 unk8;
} Unk_0016D8F0;

void SetLightDizzy(s32 arg0);
void SCR_SetScreenDizzy(Unk_0016D8F0 *arg0) {
    SetLightDizzy(arg0->unk8);
    arg0->unk0 = 0;
}
