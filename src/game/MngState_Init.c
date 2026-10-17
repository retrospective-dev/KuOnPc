#include "common.h"

typedef struct {
    /* 0x00 */ s32 unk0;
    /* 0x04 */ s32 unk4;
    /* 0x08 */ s32 unk8;
    /* 0x0C */ s32 unkC;
    /* 0x10 */ s32 unk10;
} Unk_0017E7B0;

s32 MngState_Init(Unk_0017E7B0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unkC = 0;
    arg0->unk8 = 0;
    arg0->unk10 = 0;
    return 1;
}
