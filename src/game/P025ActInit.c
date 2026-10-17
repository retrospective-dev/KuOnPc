#include "common.h"
#include "m2c_macros.h"

s32 GetP025DamageAnim(void *arg0);
s32 CalcP025Damage(void *arg0);
void SetP025Dead(s32 arg0, void *arg1, s32 arg2);
void SetP025Walk(s32 arg0, void *arg1, s32 arg2);
void SetP025Stay(s32 arg0, void *arg1, s32 arg2);
void P025ActInit(s32 arg0, void *arg1) {
    M2C_FIELD(arg1, s32 (**)(void *), 0x184) = GetP025DamageAnim;
    M2C_FIELD(arg1, s32 (**)(void *), 0x188) = CalcP025Damage;
    M2C_FIELD(arg1, void (**)(s32, void *, s32), 0x100) = SetP025Stay;
    M2C_FIELD(arg1, void (**)(s32, void *, s32), 0x104) = SetP025Walk;
    M2C_FIELD(arg1, void (**)(s32, void *, s32), 0x110) = SetP025Dead;
}
