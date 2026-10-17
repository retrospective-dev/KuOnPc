#include "common.h"

typedef struct {
    /* 0x00 */ u8 unk0[0x6];
    /* 0x06 */ u16 unk6;
    /* 0x08 */ u8 unk8[0xC];
    /* 0x14 */ s32 unk14;
} Unk_001D46A0;

s32 func_001D46A0(Unk_001D46A0 *arg0, u32 arg1) {
    s32 temp_a1;

    temp_a1 = arg1 & 0xFFFF;
    if (temp_a1 == 0xFFFF) {
        return 0;
    }
    return arg0->unk14 + (temp_a1 * arg0->unk6);
}
