#include "common.h"

extern u8 D_00A1D990[0x15000];
extern s32 D_0025E46C;

void func_001862A0(void) {
    func_00127BE0(D_00A1D990, 0, 0x15000);
    D_0025E46C = 0;
}
