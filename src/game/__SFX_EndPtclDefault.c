#include "common.h"

typedef struct {
    /* 0x00 */ u8 unk0[0xB4];
    /* 0xB4 */ u16 unkB4;
} Unk_001BBF00;

s32 SfxMdl_Free(s32 arg0);
void __SFX_EndPtclDefault(Unk_001BBF00 *arg0) {
    u16 temp_a0;

    temp_a0 = arg0->unkB4;
    if (temp_a0 != 0xFFFF) {
        SfxMdl_Free((s32) temp_a0);
    }
}
