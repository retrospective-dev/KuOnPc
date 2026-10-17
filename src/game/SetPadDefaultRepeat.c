#include "common.h"
#include "kuon_types.h"

void fspad_PadSetRepeat(int port, int slot, unsigned short key, unsigned short delay, unsigned short interval);
void SetPadDefaultRepeat(void) {
    s32 var_s0;

    var_s0 = 0;
    do {
        fspad_PadSetRepeat(var_s0, 0, 0xF000U, 0x2DU, 0xAU);
        fspad_PadSetRepeat(var_s0, 0, 0xF0U, 0x2DU, 0xAU);
        fspad_PadSetRepeat(var_s0, 0, 0xF00U, 0x2DU, 0xAU);
        var_s0 += 1;
    } while (var_s0 < 2);
}
