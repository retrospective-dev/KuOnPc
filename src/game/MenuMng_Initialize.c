#include "common.h"

typedef struct {
    /* 0x00 */ u8 unk0[0x60];
    /* 0x60 */ s32 unk60;
    /* 0x64 */ s32 unk64;
    /* 0x68 */ s32 unk68;
} Unk_001DCE70;

s32 MenuMng_Initialize(Unk_001DCE70 *arg0) {
    arg0->unk60 = 0;
    arg0->unk64 = 0;
    arg0->unk68 = 0;
    return 1;
}
