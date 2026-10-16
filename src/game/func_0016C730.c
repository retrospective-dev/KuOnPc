#include "common.h"

typedef struct {
    /* 0x00 */ s32 unk0;
    /* 0x04 */ u8 unk4[0x4];
    /* 0x08 */ s32 unk8;
    /* 0x0C */ u8 unkC[0x4];
    /* 0x10 */ s32 unk10;
} Unk_0016C730;

s32 func_00217E40(s32 arg0, s32 arg1, s32 arg2);
void func_0016C730(Unk_0016C730 *arg0) {
    func_00217E40(arg0->unk8, arg0->unk10, 0);
    arg0->unk0 = 0;
}
