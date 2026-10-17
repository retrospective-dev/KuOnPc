#include "common.h"

typedef struct {
    /* 0x00 */ u8 unk0[0xC];
    /* 0x0C */ s32 unkC;
} Unk_0020B820;

void func_0017D690(s32 arg0, s32 arg1, s32 arg2);
void func_0020B820(Unk_0020B820 *arg0) {
    if (arg0->unkC == 0) {
        func_0017D690(0x68FE1, 1, 1);
        func_0017D690(0x68FE2, 1, 0);
        arg0->unkC = 1;
    }
}
