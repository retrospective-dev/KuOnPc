#include "common.h"

typedef struct {
    /* 0x00 */ u8 unk0[0x98];
    /* 0x98 */ s8 unk98;
} Unk_00174A10;

extern Unk_00174A10 *D_0025E420;

s32 func_00174A10(s8 arg0) {
    D_0025E420->unk98 = arg0;
    return 0;
}
