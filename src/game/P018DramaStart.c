#include "common.h"

typedef struct {
    /* 0x000 */ u8 unk0[0x220];
    /* 0x220 */ s32 unk220;
    /* 0x224 */ s32 unk224;
} Unk_001A8F10_arg1;

typedef struct {
    /* 0x000 */ u8 unk0[0x154];
    /* 0x154 */ s32 unk154;
    /* 0x158 */ s32 unk158;
} Unk_001A8F10_arg0;

void SND_FadeStop(s32 arg0);
void P018DramaStart(Unk_001A8F10_arg0 *arg0, Unk_001A8F10_arg1 *arg1) {
    s32 temp_a0;
    s32 temp_a0_2;

    temp_a0 = arg1->unk220;
    if (temp_a0 != 0x51) {
        SND_FadeStop(temp_a0);
        arg1->unk220 = 0x51;
        arg0->unk154 = 1;
    }
    temp_a0_2 = arg1->unk224;
    if (temp_a0_2 != 0x51) {
        SND_FadeStop(temp_a0_2);
        arg1->unk224 = 0x51;
        arg0->unk158 = 1;
    }
}
