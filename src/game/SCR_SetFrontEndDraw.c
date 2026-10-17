#include "common.h"

typedef struct {
    /* 0x00 */ s32 unk0;
    /* 0x04 */ u8 unk4[0x4];
    /* 0x08 */ s32 unk8;
} Unk_0016C820;

void FECard_Enable_Draw(s32 arg0);
void SCR_SetFrontEndDraw(Unk_0016C820 *arg0) {
    FECard_Enable_Draw(arg0->unk8);
    arg0->unk0 = 0;
}
