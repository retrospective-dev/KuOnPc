#include "common.h"

void func_00127BE0(void* dst, s32 c, u32 n);
extern s32 D_0025E3DC;
extern s32 D_00901530[];

void func_0015B940(void) {
    func_00127BE0(&D_00901530[0], 0, 0x1800U);
    D_0025E3DC = 0;
}
