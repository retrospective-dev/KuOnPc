#include "common.h"

typedef struct {
    /* 0x00 */ u8 unk0[0x10];
    /* 0x10 */ s32 unk10;
    /* 0x14 */ s32 unk14;
    /* 0x18 */ u8 unk18[0x28];
    /* 0x40 */ s32 unk40;
} Unk_0019D040;

s32 func_0010D980(s32);
s32 func_0010D9A0(s32);

s32 func_0019D040(Unk_0019D040 *arg0) {
    s32 temp_s0;

    func_0010D9A0(arg0->unk40);
    temp_s0 = arg0->unk14 + (arg0->unk10 << 0xB);
    func_0010D980(arg0->unk40);
    return temp_s0;
}
