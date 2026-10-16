#include "common.h"
#include "m2c_macros.h"

void* func_0020CC40(void);
void* func_00214280(void);
void func_002119D0(void) {
    s8 *temp_s0;

    temp_s0 = func_0020CC40();
    M2C_FIELD(func_00214280(), s32 *, 8) = 0;
    *temp_s0 = 0x1B;
}
