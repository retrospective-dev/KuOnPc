#include "common.h"
#include "m2c_macros.h"

extern u8 D_00900BD0[];
extern u8 D_00901530[];

void func_0015B220(void) {
    s8 *var_a1;

    var_a1 = &D_00900BD0[0];
    do {
        if (var_a1 != NULL) {
            M2C_FIELD(var_a1, s32 *, 0) = 0;
            M2C_FIELD(var_a1, s32 *, 4) = 0;
            M2C_FIELD(var_a1, s32 *, 0xC) = -1;
        }
        var_a1 += 0x10;
    } while (var_a1 != &D_00901530[0]);
}
