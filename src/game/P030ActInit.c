#include "common.h"
#include "m2c_macros.h"

s32 GetP030DamageAnim(void *arg0);
void P030ActDead(void *arg0, s32 arg1, s32 arg2);
void P030ActDamage(void *arg0, void *arg1);
void P030ActStay(s32 arg0);
void P030ActAppear(void *arg0, void *arg1);
void P030ActInit(s32 arg0, void *arg1) {
    M2C_FIELD(arg1, void (**)(void *, void *), 0x94) = P030ActAppear;
    M2C_FIELD(arg1, void (**)(s32), 0x80) = P030ActStay;
    M2C_FIELD(arg1, void (**)(void *, void *), 0x8C) = P030ActDamage;
    M2C_FIELD(arg1, void (**)(void *, s32, s32), 0x90) = P030ActDead;
    M2C_FIELD(arg1, s32 (**)(void *), 0x184) = GetP030DamageAnim;
    M2C_FIELD(arg1, s8 *, 0x1DA) = 1;
    M2C_FIELD(arg1, u16 *, 0x1FA) = 0xFFFF;
}
