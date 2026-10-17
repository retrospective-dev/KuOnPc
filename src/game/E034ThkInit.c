#include "common.h"
#include "m2c_macros.h"

void E034ThkWalk(void *arg0, void *arg1);
void E034ThkStay(void *arg0, void *arg1);
void E034ThkInit(s32 arg0, void *arg1) {
    M2C_FIELD(arg1, void (**)(void *, void *), 0) = E034ThkStay;
    M2C_FIELD(arg1, void (**)(void *, void *), 4) = E034ThkWalk;
}
