#include "common.h"

void SetGoToTitleFlag(void);
void SetFadeMng();
void SND_RemoveSound(void);
extern s8 D_003AC89F[];

void SetGoToTitleFade(void) {
    s8 sp10[16];
    s32 var_v0;
    s8 *var_v1;

    var_v0 = 0x10;
    var_v1 = sp10;
    if (var_v1 != NULL) {
        do {
            *var_v1 = 0;
            var_v0 -= 1;
            var_v1 += 1;
        } while (var_v0 != 0);
    }
    SetFadeMng(0xA, sp10, 0x1E, 0, SetGoToTitleFlag, 0, 0);
    D_003AC89F[0] = 0;
    SND_RemoveSound();
}
