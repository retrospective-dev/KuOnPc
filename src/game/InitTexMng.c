#include "common.h"

typedef struct {
    /* 0x0 */ s32 unk0;
    /* 0x4 */ s32 unk4;
    /* 0x8 */ s32 unk8;
    /* 0xC */ s32 unkC;
} UnkQuad;

extern u8 TexMngSt[0xC000];
extern UnkQuad lpMapTexFile_006FC110;

void InitTexMng(void) {
    func_00127BE0(TexMngSt, 0, 0xC000);
    lpMapTexFile_006FC110.unk0 = 0;
    lpMapTexFile_006FC110.unk4 = 0;
    lpMapTexFile_006FC110.unk8 = 0;
    lpMapTexFile_006FC110.unkC = 0;
}
