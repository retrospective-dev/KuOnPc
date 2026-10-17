#include "common.h"

typedef struct {
    /* 0x00 */ u8 unk0[0x10];
    /* 0x10 */ s32 unk10;
    /* 0x14 */ u8 unk14[0x1C];
    /* 0x30 */ s32 unk30;
} Unk_00216D40;

s32 CheckEventFlag(s32 arg0);
extern u8 D_003AC8A4[];

void InitS0010Event001(Unk_00216D40 *arg0) {
    arg0->unk30 = 0;
    if ((D_003AC8A4[0] != 0) || (CheckEventFlag(0x6C3) != 0)) {
        arg0->unk10 = 3;
    }
}
