#include "common.h"

s32 SND_SecRemoveSpirit(s32 arg0);
void FreeAllMyEquipSound(void) {
    s32 var_s0;

    var_s0 = 0;
    do {
        SND_SecRemoveSpirit(var_s0);
        var_s0 += 1;
    } while (var_s0 < 2);
}
