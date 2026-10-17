#include "common.h"

typedef struct {
    /* 0x00 */ s32 unk0;
    /* 0x04 */ u8 unk4[0x1C];
    /* 0x20 */ s32 unk20;
    /* 0x24 */ u8 unk24[0x8];
    /* 0x2C */ s32 unk2C;
} Unk_0019F350;

s32 func_0017E7B0(Unk_0019F350 *arg0);
void func_0019F170(Unk_0019F350 *arg0);
s32 func_0019F230(Unk_0019F350 *arg0);
s32 func_0019F350(Unk_0019F350 *arg0, s32 arg1) {
    if (arg1 == 0) {
        return 0;
    }
    func_0017E7B0(arg0);
    arg0->unk20 = arg1;
    arg0->unk2C = -1;
    if (func_0019F230(arg0) != 1) {
        func_0019F170(arg0);
        arg0->unk0 = 0;
        return 0;
    }
    arg0->unk0 = 2;
    return 1;
}
