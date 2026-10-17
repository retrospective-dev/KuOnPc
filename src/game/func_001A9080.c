#include "common.h"

typedef struct {
    /* 0x000 */ u8 unk0[0x1DC];
    /* 0x1DC */ u16 unk1DC;
} Unk_001A9080;

void func_0015FC90(u8 *arg0, Unk_001A9080 *arg1);
void func_001A9080(s32 arg0, Unk_001A9080 *arg1) {
    s32 temp_a2;

    temp_a2 = arg1->unk1DC + 1;
    arg1->unk1DC = temp_a2;
    if ((temp_a2 & 0xFFFF) == 0x3C) {
        func_0015FC90((u8 *) arg0, arg1);
    }
}
