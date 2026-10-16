#include "common.h"

typedef struct {
    /* 0x00 */ s32 unk0;
    /* 0x04 */ u8 unk4[0x4];
    /* 0x08 */ s32 unk8;
    /* 0x0C */ u8 unkC[0x4];
    /* 0x10 */ s32 unk10;
    /* 0x14 */ u8 unk14[0x4];
    /* 0x18 */ s32 unk18;
    /* 0x1C */ u8 unk1C[0x4];
    /* 0x20 */ s32 unk20;
} Unk_0016D810;

s32 func_00187E50(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void func_0016D810(Unk_0016D810 *arg0) {
    func_00187E50(arg0->unk8, arg0->unk10, 1, arg0->unk18, arg0->unk20);
    arg0->unk0 = 0;
}
