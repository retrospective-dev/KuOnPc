#include "common.h"

typedef struct {
    /* 0x00 */ s32 unk0;
    /* 0x04 */ u8 unk4[0x4];
    /* 0x08 */ u32 unk8;
} Unk_0016D8C0;

void func_00194280(u32 arg0);
void func_0016D8C0(Unk_0016D8C0 *arg0) {
    func_00194280(arg0->unk8);
    arg0->unk0 = 0;
}
