#include "common.h"

typedef struct {
    /* 0x00 */ s8 unk0;
    /* 0x01 */ u8 unk1;
    /* 0x02 */ u8 unk2[0xE];
    /* 0x10 */ s32 unk10;
    /* 0x14 */ s32 unk14;
    /* 0x18 */ s32 unk18;
    /* 0x1C */ s32 unk1C;
} Unk_001AC7A0;

s32 fssdsynthAddBankFromEE2(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s8 arg5);
void _TransBankData_EE2SPU(Unk_001AC7A0 *arg0) {
    fssdsynthAddBankFromEE2((s32) arg0->unk0, arg0->unk10, arg0->unk14, arg0->unk18, arg0->unk1C, arg0->unk1);
}
