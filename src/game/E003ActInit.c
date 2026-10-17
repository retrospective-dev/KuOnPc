#include "common.h"
#include "m2c_macros.h"

void E003ActAttack(void *arg0, void *arg1);
void E003ActWalk(void *arg0);
void E003ActStay(void *arg0);
void E003ActInit(s32 arg0, void *arg1) {
    M2C_FIELD(arg1, void (**)(void *), 0x80) = E003ActStay;
    M2C_FIELD(arg1, void (**)(void *), 0x84) = E003ActWalk;
    M2C_FIELD(arg1, void (**)(void *, void *), 0x88) = E003ActAttack;
}
