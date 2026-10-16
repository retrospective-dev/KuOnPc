#include "common.h"

typedef struct {
    /* 0x00 */ u8 unk0[0xBC];
    /* 0xBC */ u16 unkBC;
} Unk_001B3B60;

s32 func_001D2060(s32 arg0);
void func_001B3B60(Unk_001B3B60 *arg0) {
    u16 temp_a0;

    temp_a0 = arg0->unkBC;
    if (temp_a0 != 0xFFFF) {
        func_001D2060((s32) temp_a0);
    }
}
