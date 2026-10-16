#include "common.h"

typedef struct {
    /* 0x00 */ u8 unk0[0xB4];
    /* 0xB4 */ u16 unkB4;
} Unk_001B1AE0;

s32 func_001D2060(s32 arg0);
void func_001B1AE0(Unk_001B1AE0 *arg0) {
    u16 temp_a0;

    temp_a0 = arg0->unkB4;
    if (temp_a0 != 0xFFFF) {
        func_001D2060((s32) temp_a0);
    }
}
