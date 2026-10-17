#include "common.h"

void func_001692A0(u16 arg0, u16 arg1);
extern u8 D_0022D4C0[];
extern u8 D_0022D4C4[];
extern u8 D_003AC8A4[];

void func_0013A420(void) {
    s32 temp_a0;

    temp_a0 = D_003AC8A4[0] * 8;
    func_001692A0((s16) *(s32 *)(&D_0022D4C0[0] + temp_a0), *(s32 *)(&D_0022D4C4[0] + temp_a0));
}
