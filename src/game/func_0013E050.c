#include "common.h"
#include "kuon_types.h"

void func_001470B0(int port, int slot, unsigned short key, unsigned short delay, unsigned short interval);
void func_0013E050(void) {
    s32 var_s0;

    var_s0 = 0;
    do {
        func_001470B0(var_s0, 0, 0xF000U, 0x2DU, 0xAU);
        func_001470B0(var_s0, 0, 0xF0U, 0x2DU, 0xAU);
        func_001470B0(var_s0, 0, 0xF00U, 0x2DU, 0xAU);
        var_s0 += 1;
    } while (var_s0 < 2);
}
