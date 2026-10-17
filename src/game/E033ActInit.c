#include "common.h"
#include "m2c_macros.h"

void SetE033Dead(s32 arg0, void *arg1);
void E033ActDead(void *arg0, void *arg1);
void E033ActInit(s32 arg0, void *arg1) {
    M2C_FIELD(arg1, void (**)(void *, void *), 0x90) = E033ActDead;
    M2C_FIELD(arg1, void (**)(s32, void *), 0x110) = SetE033Dead;
}
