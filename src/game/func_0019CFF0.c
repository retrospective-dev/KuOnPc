#include "common.h"

typedef struct {
    /* 0x00 */ u8 unk0[0x14];
    /* 0x14 */ s32 unk14;
    /* 0x18 */ u8 unk18[0x28];
    /* 0x40 */ s32 unk40;
} Unk_0019CFF0;

s32 func_0010D980(s32);
s32 func_0010D9A0(s32);

void func_0019CFF0(Unk_0019CFF0 *arg0) {
    func_0010D9A0(arg0->unk40);
    arg0->unk14 = (s32) ((arg0->unk14 + 0x7FF) & ~0x7FF);
    func_0010D980(arg0->unk40);
}
