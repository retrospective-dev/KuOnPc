#include "common.h"

typedef struct {
    /* 0x00 */ s32 unk0;
    /* 0x04 */ s32 unk4;
    /* 0x08 */ s32 unk8;
    /* 0x0C */ u8 unkC[0x4];
    /* 0x10 */ s32 unk10;
    /* 0x14 */ s32 unk14;
} Unk_001A2E90;

extern u8 D_0024B638[];

s32 sbuf_ClearData(Unk_001A2E90 *arg0) {
    s32 temp_v0;
    s32 temp_v1;

    if (!(D_0024B638[0] & 1)) {
        return 0;
    }
    if (arg0 == NULL) {
        return 0;
    }
    temp_v1 = arg0->unk0;
    if (temp_v1 == 0) {
        return 0;
    }
    temp_v0 = arg0->unk10;
    arg0->unk8 = temp_v1;
    arg0->unk4 = temp_v1;
    arg0->unk10 = 0;
    arg0->unk14 = (s32) arg0->unk0;
    return temp_v0;
}
