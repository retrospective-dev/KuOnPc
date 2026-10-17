#include "common.h"

typedef struct {
    /* 0x00 */ u8 unk0[0x54];
    /* 0x54 */ s32 unk54;
    /* 0x58 */ s32 unk58;
    /* 0x5C */ s32 unk5C;
    /* 0x60 */ s32 unk60;
} Unk_00174B90;

extern Unk_00174B90 *sCurrentP_0025E420;

s32 FsFontSetColor(s32 arg0) {
    sCurrentP_0025E420->unk54 = arg0;
    sCurrentP_0025E420->unk58 = arg0;
    sCurrentP_0025E420->unk5C = arg0;
    sCurrentP_0025E420->unk60 = arg0;
    return 0;
}
