#include "common.h"

typedef struct {
    /* 0x00 */ s32 unk0;
    /* 0x04 */ u8 unk4[0x4];
    /* 0x08 */ u16 unk8;
    /* 0x0A */ u8 unkA[0x6];
    /* 0x10 */ s16 unk10;
} Unk_0016D750;

u64 func_001879C0(s32 arg0, s32 arg1);
void func_0016D750(Unk_0016D750 *arg0) {
    func_001879C0((s32) arg0->unk8, (s32) arg0->unk10);
    arg0->unk0 = 0;
}
