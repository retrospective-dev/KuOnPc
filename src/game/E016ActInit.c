#include "common.h"
#include "m2c_macros.h"

void E016ActDead(void);
void E016ActDamage(void);
void E016ActWalk(void *arg0, void *arg1);
void E016ActStay(void *arg0);
void E016ActAppear(void *arg0, void *arg1);
void E016ActInit(void *arg0, void *arg1) {
    M2C_FIELD(arg1, void (**)(void *, void *), 0x94) = E016ActAppear;
    M2C_FIELD(arg1, void (**)(void *), 0x80) = E016ActStay;
    M2C_FIELD(arg1, void (**)(void *, void *), 0x84) = E016ActWalk;
    M2C_FIELD(arg1, void (**)(), 0x8C) = E016ActDamage;
    M2C_FIELD(arg1, void (**)(), 0x90) = E016ActDead;
    M2C_FIELD(arg0, s8 *, 0x130) = 1;
    M2C_FIELD(arg0, s8 *, 0x131) = 1;
    M2C_FIELD(arg0, s8 *, 0x132) = 1;
}
