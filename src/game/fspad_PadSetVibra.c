#include "common.h"

typedef struct {
    /* 0x000 */ u8 unk0[0x174];
    /* 0x174 */ s8 unk174;
    /* 0x175 */ s8 unk175;
    /* 0x176 */ u8 unk176[0xC];
    /* 0x182 */ u8 unk182;
} Unk_00147060;

extern u8 __PADMNG[];

void fspad_PadSetVibra(s32 arg0, s32 arg1, u8 arg2) {
    Unk_00147060 *temp_a0;

    temp_a0 = &__PADMNG[0] + ((arg1 + (arg0 * 4)) * 0x1C0);
    if (temp_a0->unk182 == 0) {
        if ((arg2 & 0xFF) > 0) {
            temp_a0->unk174 = 1;
        } else {
            temp_a0->unk174 = 0;
        }
    }
    temp_a0->unk175 = arg2;
}
