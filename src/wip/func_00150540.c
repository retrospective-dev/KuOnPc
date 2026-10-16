#include "common.h"

typedef struct {
    /* 0x000 */ u8 unk000[0x148];
    /* 0x148 */ s32 unk148;
} UnkSys_006B90D0;

extern UnkSys_006B90D0 D_006B90D0;
void func_00132600(s32);
void func_00157630(s32);
void func_001549F0(UnkSys_006B90D0*, s32, s32);
void func_00196E30(s32);

void func_00150540(void) {
    UnkSys_006B90D0* sys = &D_006B90D0;
    s32 val = sys->unk148;

    func_00132600(0);
    func_00157630(0);
    func_001549F0(sys, val, 0);
    func_00196E30(1);
}
