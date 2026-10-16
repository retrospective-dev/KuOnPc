#include "common.h"

typedef struct {
    /* 0x00 */ s32 unk0;
    /* 0x04 */ u8 unk4[0x4];
    /* 0x08 */ s32 unk8;
} Unk_0016E0D0;

void func_001505A0(s32 arg0);
void func_0016E0D0(Unk_0016E0D0 *arg0) {
    func_001505A0(arg0->unk8);
    arg0->unk0 = 0;
}
