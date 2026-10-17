#include "common.h"
#include "m2c_macros.h"

void E016ThkDead(void);
void E016ThkDamage(void);
void E016ThkWalk(s32 arg0, void *arg1);
void E016ThkStay(s32 arg0, void *arg1);
void E016ThkAppear(void);
void E016ThkInit(s32 arg0, void *arg1) {
    M2C_FIELD(arg1, void (**)(), 0x14) = E016ThkAppear;
    M2C_FIELD(arg1, void (**)(s32, void *), 0) = E016ThkStay;
    M2C_FIELD(arg1, void (**)(s32, void *), 4) = E016ThkWalk;
    M2C_FIELD(arg1, void (**)(), 0xC) = E016ThkDamage;
    M2C_FIELD(arg1, void (**)(), 0x10) = E016ThkDead;
}
