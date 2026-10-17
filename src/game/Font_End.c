#include "common.h"

s32 MmoFsFontEnd(void);
extern s32 s_System[];
extern s32 D_00A62894[];

void Font_End(void) {
    if (s_System[0] != 0) {
        MmoFsFontEnd();
        D_00A62894[0] = 0;
    }
}
