#include "common.h"

void InitMyEquip(void);
void ReadMyMdl(void);
s32 SND_SecLoadPlayer(s32 arg0);
s32 KnMenuMng_ReLoadMenu(s32 arg0);
extern u8 D_003AC8A4[];

void func_0013A560(void) {
    InitMyEquip();
    ReadMyMdl();
    SND_SecLoadPlayer(D_003AC8A4[0] + 1);
    KnMenuMng_ReLoadMenu(0x4000);
}
