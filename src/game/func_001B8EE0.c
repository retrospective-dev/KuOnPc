#include "common.h"

typedef struct {
    /* 0x00 */ u8 unk0[0xB0];
    /* 0xB0 */ u16 unkB0;
} Unk_001B8EE0;

void func_001C8F40(s32 arg0);
void func_001B8EE0(Unk_001B8EE0 *arg0) {
    u16 temp_a0;

    temp_a0 = arg0->unkB0;
    if (temp_a0 != 0xFFFF) {
        func_001C8F40((s32) temp_a0);
    }
}
