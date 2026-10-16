#include "common.h"

typedef struct {
    /* 0x0 */ s32 unk0;
    /* 0x4 */ s32 unk4;
    /* 0x8 */ s32 unk8;
    /* 0xC */ s32 unkC;
} UnkQuad;

extern u8 D_0077C120[0xC000];
extern UnkQuad D_006FC110;

void func_0013FFE0(void) {
    func_00127BE0(D_0077C120, 0, 0xC000);
    D_006FC110.unk0 = 0;
    D_006FC110.unk4 = 0;
    D_006FC110.unk8 = 0;
    D_006FC110.unkC = 0;
}
