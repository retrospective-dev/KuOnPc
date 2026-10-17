#include "common.h"

void func_00127BE0(void* dst, s32 c, u32 n);
extern s32 DramaCamInfo[];

void FreeDramaCamData(void) {
    func_00127BE0(&DramaCamInfo[0], 0, 0xC0400U);
}
