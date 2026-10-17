#include "common.h"

extern s32 s_stick_cursol_on;
extern s32 s_stick_udlr;
extern s32 s_stick_udlr_old;

void Menu_UtilUpdate(void) {
    if (s_stick_cursol_on > 0) {
        s_stick_cursol_on -= 1;
    }
    if (s_stick_udlr != 0) {
        s_stick_udlr_old = s_stick_udlr;
    }
    s_stick_udlr = 0;
}
