#include "common.h"

typedef struct {
    /* 0x00 */ s32 unk0;
    /* 0x04 */ u8 unk4[0x4];
    /* 0x08 */ u8 unk8;
} Unk_0016C770;

void func_00151DD0(s32 arg0);
void func_0016C770(Unk_0016C770 *arg0) {
    func_00151DD0((s32) arg0->unk8);
    arg0->unk0 = 0;
}
