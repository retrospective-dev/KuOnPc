#include "common.h"

void func_00127BE0(void* dst, s32 c, u32 n);
void _InitSequenceData(void);
extern s32 s_aItemNum[];

void ItemMng_Clear(void) {
    func_00127BE0(&s_aItemNum[0], 0, 0x280U);
    _InitSequenceData();
}
