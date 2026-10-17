#include "common.h"

typedef struct {
    /* 0x00 */ s32 unk0;
    /* 0x04 */ u8 unk4[0x4];
    /* 0x08 */ s32 unk8;
} Unk_0016FBF0;

void SCR_Wait(Unk_0016FBF0 *arg0) {
    s32 temp_v1;

    temp_v1 = arg0->unk8 - 1;
    arg0->unk8 = temp_v1;
    if (temp_v1 <= 0) {
        arg0->unk0 = 0;
    }
}
