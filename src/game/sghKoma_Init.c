#include "common.h"

void func_00127BE0(void* dst, s32 c, u32 n);
extern s32 gKomaInfo[];

void sghKoma_Init(void) {
    func_00127BE0(&gKomaInfo[0], 0, 0x600U);
}
