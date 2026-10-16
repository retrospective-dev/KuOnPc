#include "common.h"

typedef struct {
    /* 0x00 */ u8 unk0[0x8];
    /* 0x08 */ s32 unk8;
    /* 0x0C */ u8 unkC[0x4];
    /* 0x10 */ s32 unk10;
} Unk_0017E730;

s32 func_0013ADA0(void);
void func_0017E730(Unk_0017E730 *arg0) {
    arg0->unk8 = (s32) (arg0->unk8 + (func_0013ADA0() - arg0->unk10));
    arg0->unk10 = 0;
}
