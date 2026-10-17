#include "common.h"

typedef struct {
    /* 0x00 */ s32 unk0;
    /* 0x04 */ u8 unk4[0x1C];
    /* 0x20 */ s32 unk20;
    /* 0x24 */ u8 unk24[0x8];
    /* 0x2C */ s32 unk2C;
} Unk_0019F350;

s32 MngState_Init(Unk_0019F350 *arg0);
void MsgFileMng_Free(Unk_0019F350 *arg0);
s32 MsgFileMng_Alloc(Unk_0019F350 *arg0);
s32 MsgFileMng_Init(Unk_0019F350 *arg0, s32 arg1) {
    if (arg1 == 0) {
        return 0;
    }
    MngState_Init(arg0);
    arg0->unk20 = arg1;
    arg0->unk2C = -1;
    if (MsgFileMng_Alloc(arg0) != 1) {
        MsgFileMng_Free(arg0);
        arg0->unk0 = 0;
        return 0;
    }
    arg0->unk0 = 2;
    return 1;
}
