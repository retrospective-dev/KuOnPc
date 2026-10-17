#include "common.h"
#include "m2c_macros.h"

void E022ThkJump(void);
void E022ThkWalk(void *arg0, void *arg1);
void E022ThkStay(void *arg0, void *arg1);
void E022ThkInit(s32 arg0, void *arg1) {
    M2C_FIELD(arg1, void (**)(void *, void *), 0) = E022ThkStay;
    M2C_FIELD(arg1, void (**)(void *, void *), 4) = E022ThkWalk;
    M2C_FIELD(arg1, void (**)(), 0x20) = E022ThkJump;
}
