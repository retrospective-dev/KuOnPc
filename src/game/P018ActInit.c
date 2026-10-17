#include "common.h"
#include "m2c_macros.h"

void P018DramaEnd(void *arg0, void *arg1);
void P018DramaStart(void *arg0, void *arg1);
s32 CalcP018Damage(void *arg0);
void SetP018Dead(void *arg0, void *arg1, s32 arg2);
void P018ActDead(s32 arg0, void *arg1);
void P018ActStay(void);
void P018ActAppear(void *arg0, void *arg1);
void P018ActInit(s32 arg0, void *arg1) {
    M2C_FIELD(arg1, void (**)(void *, void *), 0x94) = P018ActAppear;
    M2C_FIELD(arg1, void (**)(), 0x80) = P018ActStay;
    M2C_FIELD(arg1, void (**)(s32, void *), 0x90) = P018ActDead;
    M2C_FIELD(arg1, s32 (**)(void *), 0x188) = CalcP018Damage;
    M2C_FIELD(arg1, void (**)(void *, void *, s32), 0x110) = SetP018Dead;
    M2C_FIELD(arg1, void (**)(void *, void *), 0x190) = P018DramaStart;
    M2C_FIELD(arg1, void (**)(void *, void *), 0x194) = P018DramaEnd;
    M2C_FIELD(arg1, s8 *, 0x24D) = 1;
}
