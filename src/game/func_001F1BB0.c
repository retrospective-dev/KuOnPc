#include "common.h"

typedef struct {
    /* 0x00 */ u8 unk0[0x20];
    /* 0x20 */ s32 unk20;
    /* 0x24 */ u8 unk24[0x48];
    /* 0x6C */ s32 unk6C;
    /* 0x70 */ u8 unk70[0x4];
    /* 0x74 */ s32 unk74;
    /* 0x78 */ u8 unk78[0x14];
    /* 0x8C */ s32 unk8C;
} Unk_001F1BB0;

s32 func_001F1BB0(Unk_001F1BB0 *arg0) {
    arg0->unk20 = 0;
    arg0->unk6C = 0;
    arg0->unk74 = 0;
    arg0->unk8C = 0;
    return 1;
}
