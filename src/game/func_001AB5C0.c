#include "common.h"

extern s8 D_00A43690[];

void *func_001AB5C0(u32 arg0) {
    void *var_v0;

    var_v0 = NULL;
    if (arg0 < 0x20U) {
        var_v0 = &D_00A43690[0] + (arg0 * 0x28);
    }
    return var_v0;
}
