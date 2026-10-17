#include "common.h"
#include "m2c_macros.h"

void P036ActDead(s32 arg0, void *arg1);
void P036ActAppear(void *arg0, void *arg1);
void P036ActInit(s32 arg0, void *arg1) {
    M2C_FIELD(arg1, void (**)(void *, void *), 0x94) = P036ActAppear;
    M2C_FIELD(arg1, void (**)(s32, void *), 0x90) = P036ActDead;
}
