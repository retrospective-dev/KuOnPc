#include "common.h"
#include "m2c_macros.h"

void E011ThkWalk(s32 arg0, void *arg1);
void E011ThkStay(s32 arg0, void *arg1);
void E011ThkInit(s32 arg0, void *arg1) {
    M2C_FIELD(arg1, void (**)(s32, void *), 0) = E011ThkStay;
    M2C_FIELD(arg1, void (**)(s32, void *), 4) = E011ThkWalk;
}
