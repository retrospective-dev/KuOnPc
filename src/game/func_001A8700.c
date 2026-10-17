#include "common.h"

void func_00127BE0(void* dst, s32 c, u32 n);
extern u8 D_00A3F370[];
extern u8 D_00A41570[];

u8 *func_001A8700(void) {
    u8 *var_s0;

    var_s0 = &D_00A3F370[0];
loop_1:
    if (*var_s0 == 0) {
        func_00127BE0(var_s0, 0, 0x220U);
        *var_s0 = 1;
        return var_s0;
    }
    var_s0 += 0x220;
    if (var_s0 == &D_00A41570[0]) {
        return NULL;
    }
    goto loop_1;
}
