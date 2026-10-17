#include "common.h"
#include "m2c_macros.h"

void P025ThkWalk(s32 arg0, void *arg1);
void P025ThkStay(s32 arg0, void *arg1);
void P025ThkInit(s32 arg0, void *arg1) {
    M2C_FIELD(arg1, void (**)(s32, void *), 0) = P025ThkStay;
    M2C_FIELD(arg1, void (**)(s32, void *), 4) = P025ThkWalk;
}
