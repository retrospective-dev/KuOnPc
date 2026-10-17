#include "common.h"
#include "m2c_macros.h"

s32 GetE022DamageAnim(void *arg0);
s32 CalcE022Damage(void *arg0);
void SetE022Jump(s32 arg0, void *arg1);
void E022ActJump(s32 *arg0, void *arg1);
void E022ActDamage(void *arg0, void *arg1);
void E022ActInit(s32 arg0, void *arg1) {
    M2C_FIELD(arg1, void (**)(void *, void *), 0x8C) = E022ActDamage;
    M2C_FIELD(arg1, void (**)(s32 *, void *), 0xA0) = E022ActJump;
    M2C_FIELD(arg1, s32 (**)(void *), 0x184) = GetE022DamageAnim;
    M2C_FIELD(arg1, s32 (**)(void *), 0x188) = CalcE022Damage;
    M2C_FIELD(arg1, void (**)(s32, void *), 0x120) = SetE022Jump;
}
