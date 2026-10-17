#include "common.h"
#include "m2c_macros.h"

void E003ThkWalk(s32 arg0, void *arg1);
void E003ThkStay(s32 arg0, void *arg1);
void E003ThkInit(s32 arg0, void *arg1) {
    M2C_FIELD(arg1, void (**)(s32, void *), 0) = E003ThkStay;
    M2C_FIELD(arg1, void (**)(s32, void *), 4) = E003ThkWalk;
}
