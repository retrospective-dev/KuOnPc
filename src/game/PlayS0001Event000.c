#include "common.h"

typedef struct {
    /* 0x00 */ u8 unk0[0xC];
    /* 0x0C */ s32 unkC;
    /* 0x10 */ s32 unk10;
} Unk_0021A330;

void SetCamCtrlMode(s32 arg0);
void SetEventFlag(s32 arg0);
void PlayS0001Event000(Unk_0021A330 *arg0) {
    s32 temp_v1;

    if (arg0->unkC == 1) {
        temp_v1 = arg0->unk10 + 1;
        arg0->unk10 = temp_v1;
        if (temp_v1 >= 0x3C) {
            arg0->unkC = 2;
            arg0->unk10 = 0;
            SetEventFlag(0x6D6);
            SetCamCtrlMode(0);
        }
    }
}
