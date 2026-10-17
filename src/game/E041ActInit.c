#include "common.h"
#include "m2c_macros.h"

void SetE041Dead(s32 arg0, void *arg1);
void E041ActDead(void *arg0, void *arg1);
void E041ActInit(s32 arg0, void *arg1) {
    M2C_FIELD(arg1, void (**)(void *, void *), 0x90) = E041ActDead;
    M2C_FIELD(arg1, void (**)(s32, void *), 0x110) = SetE041Dead;
}
