#include "common.h"

typedef struct {
    /* 0x00 */ s32 unk0;
    /* 0x04 */ u8 unk4[0x4];
    /* 0x08 */ u16 unk8;
} Unk_0016DA10;

void SetLoadCamReserve(s32 arg0);
void SCR_SetLoadCamReserve(Unk_0016DA10 *arg0) {
    SetLoadCamReserve((s32) arg0->unk8);
    arg0->unk0 = 0;
}
