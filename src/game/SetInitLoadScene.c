#include "common.h"

void SetSceneLoad(u16 arg0, u16 arg1);
extern u8 LoadSceneAndCamera[];
extern u8 D_0022D4C4[];
extern u8 D_003AC8A4[];

void SetInitLoadScene(void) {
    s32 temp_a0;

    temp_a0 = D_003AC8A4[0] * 8;
    SetSceneLoad((s16) *(s32 *)(&LoadSceneAndCamera[0] + temp_a0), *(s32 *)(&D_0022D4C4[0] + temp_a0));
}
