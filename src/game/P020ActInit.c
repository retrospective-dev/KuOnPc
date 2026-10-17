#include "common.h"
#include "m2c_macros.h"

void P020ActAppear(void *arg0, void *arg1);
void P020ActInit(s32 arg0, void *arg1) {
    M2C_FIELD(arg1, void (**)(void *, void *), 0x94) = P020ActAppear;
    M2C_FIELD(arg1, s8 *, 0x24D) = 1;
}
