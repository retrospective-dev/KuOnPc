#include "common.h"

typedef struct {
    /* 0x00 */ u8 unk0[0xB0];
    /* 0xB0 */ u16 unkB0;
} Unk_001B8650;

s32 SfxTracer_Kill(s32 arg0);
void __SFX_EndPtclTracer(Unk_001B8650 *arg0) {
    u16 temp_a0;

    temp_a0 = arg0->unkB0;
    if (temp_a0 != 0xFFFF) {
        SfxTracer_Kill((s32) temp_a0);
    }
}
