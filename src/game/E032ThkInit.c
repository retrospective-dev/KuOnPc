#include "common.h"
#include "m2c_macros.h"

void E032ThkWalk(s32 arg0, void *arg1);
void E032ThkStay(s32 arg0, void *arg1);
void E032ThkInit(s32 arg0, void *arg1) {
    M2C_FIELD(arg1, void (**)(s32, void *), 0) = E032ThkStay;
    M2C_FIELD(arg1, void (**)(s32, void *), 4) = E032ThkWalk;
}
