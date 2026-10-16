#include "common.h"

typedef struct {
    /* 0x00 */ u8 unk0[0x44];
    /* 0x44 */ s32 unk44;
    /* 0x48 */ s32 unk48;
    /* 0x4C */ s32 unk4C;
    /* 0x50 */ s32 unk50;
} Unk_00174B60;

extern Unk_00174B60 *D_0025E420;

s32 func_00174B60(s32 arg0) {
    D_0025E420->unk44 = arg0;
    D_0025E420->unk48 = arg0;
    D_0025E420->unk4C = arg0;
    D_0025E420->unk50 = arg0;
    return 0;
}
