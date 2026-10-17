#include "common.h"

typedef struct {
    /* 0x00 */ u8 unk0[0x99];
    /* 0x99 */ s8 unk99;
    /* 0x9A */ s16 unk9A;
} Unk_00174A20;

extern Unk_00174A20 *sCurrentP_0025E420;

s32 FsFontSetPiecesParam(s8 arg0, s16 arg1) {
    sCurrentP_0025E420->unk99 = arg0;
    sCurrentP_0025E420->unk9A = arg1;
    return 0;
}
