#include "common.h"

s32 MmoFsFontSetCurrent(s32 arg0);
s32 MmoFsFontBegin(void);
extern s32 s_System[];
extern s32 D_00A62894[];
extern u8 D_00A628A4[];

void Font_Begin(void) {
    if (s_System[0] != 0) {
        MmoFsFontSetCurrent((s32) &D_00A628A4[0]);
        MmoFsFontBegin();
        D_00A62894[0] = 1;
    }
}
