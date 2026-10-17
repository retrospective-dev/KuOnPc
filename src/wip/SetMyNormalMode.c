#include "common.h"

typedef struct {
    /* 0x000 */ u8 unk000[0x148];
    /* 0x148 */ s32 unk148;
} UnkSys_006B90D0;

extern UnkSys_006B90D0 D_006B90D0;
void SetCamCtrlMode(s32);
void SetMyPadMode(s32);
void SetMyStay(UnkSys_006B90D0*, s32, s32);
void FECard_Enable_Draw(s32);

void SetMyNormalMode(void) {
    UnkSys_006B90D0* sys = &D_006B90D0;
    s32 val = sys->unk148;

    SetCamCtrlMode(0);
    SetMyPadMode(0);
    SetMyStay(sys, val, 0);
    FECard_Enable_Draw(1);
}
