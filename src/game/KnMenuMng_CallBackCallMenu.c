#include "common.h"

s32 KnMenuMng_CallMenu_(s32 arg0, s32 arg1);
extern s8 D_003AC89F[];
extern s16 D_00A500A8[];

void KnMenuMng_CallBackCallMenu(void) {
    if (KnMenuMng_CallMenu_((s32) D_00A500A8[0], 0) != 0) {
        D_003AC89F[0] = 0;
        D_00A500A8[0] = 0x3E7;
    }
}
