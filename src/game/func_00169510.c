#include "common.h"
#include "m2c_macros.h"

void func_00141480(void *arg0);
void func_00169460(void *arg0);
extern s8 D_0062C0D0[];

void func_00169510(s32 arg0, void *arg1) {
    void *temp_s0;

    temp_s0 = &D_0062C0D0[0] + (arg0 * 0x680);
    if (arg1 != NULL) {
        M2C_FIELD(temp_s0, void **, 0x1C) = (void *) M2C_FIELD(arg1, void **, 0x10);
        func_00141480(M2C_FIELD(temp_s0, void **, 0x1C));
        func_00169460(temp_s0);
    }
}
