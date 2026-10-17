#include "common.h"
#include "m2c_macros.h"

void P007ActDead(s32 arg0, void *arg1);
void P007ActStay(void);
void P007ActAppear(void *arg0, void *arg1);
void P007ActInit(s32 arg0, void *arg1) {
    M2C_FIELD(arg1, void (**)(void *, void *), 0x94) = P007ActAppear;
    M2C_FIELD(arg1, void (**)(), 0x80) = P007ActStay;
    M2C_FIELD(arg1, void (**)(s32, void *), 0x90) = P007ActDead;
    M2C_FIELD(arg1, s8 *, 0x1DA) = 1;
}
