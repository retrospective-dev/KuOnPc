#include "common.h"

typedef struct {
    /* 0x00 */ s32 unk0;
    /* 0x04 */ u8 unk4[0x4];
    /* 0x08 */ u16 unk8;
    /* 0x0A */ u8 unkA[0x6];
    /* 0x10 */ u16 unk10;
} Unk_0016C850;

void SetSceneLoad(u16 arg0, u16 arg1);
void SCR_SetSceneLoad(Unk_0016C850 *arg0) {
    SetSceneLoad((s16) arg0->unk8, arg0->unk10);
    arg0->unk0 = 0;
}
