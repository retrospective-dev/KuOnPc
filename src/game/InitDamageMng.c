#include "common.h"

void func_00127BE0(void* dst, s32 c, u32 n);
extern s32 DamageNum;
extern s32 DamageMng[];

void InitDamageMng(void) {
    func_00127BE0(&DamageMng[0], 0, 0x1800U);
    DamageNum = 0;
}
