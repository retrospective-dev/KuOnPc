#include "common.h"

typedef struct {
    /* 0x00 */ s32 unk0;
    /* 0x04 */ s32 unk4;
    /* 0x08 */ s32 unk8;
    /* 0x0C */ u8 unkC[0x4];
    /* 0x10 */ s16 unk10;
    /* 0x12 */ u8 unk12[0x2];
    /* 0x14 */ s32 unk14;
    /* 0x18 */ s32 unk18;
    /* 0x1C */ s32 unk1C;
    /* 0x20 */ s8 unk20;
} Unk_001A3D90;

void strm_InitInfo(Unk_001A3D90 *arg0) {
    if (arg0 != NULL) {
        arg0->unk4 = 0;
        arg0->unk8 = 0;
        arg0->unk10 = 0x4000;
        arg0->unk14 = 0;
        arg0->unk18 = 0;
        arg0->unk1C = 0;
        arg0->unk0 = -1;
        arg0->unk20 = 0;
    }
}
