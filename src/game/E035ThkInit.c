#include "common.h"
#include "m2c_macros.h"

void E035ThkWalk(void *arg0, void *arg1);
void E035ThkStay(void *arg0, void *arg1);
void E035ThkInit(s32 arg0, void *arg1) {
    M2C_FIELD(arg1, void (**)(void *, void *), 0) = E035ThkStay;
    M2C_FIELD(arg1, void (**)(void *, void *), 4) = E035ThkWalk;
}
