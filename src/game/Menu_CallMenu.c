#include "common.h"

void KnMenuMng_CallMenu(u16 arg0, s32 arg1);
void Menu_CallMenu(s32 arg0, s32 arg1) {
    KnMenuMng_CallMenu(arg1 & 0xFFFF, arg0);
}
