#include "common.h"
#include "m2c_macros.h"

s32 GetP004DamageAnim(void *arg0);
void SetP004Walk(s32 arg0, void *arg1, s32 arg2);
void SetP004Stay(s32 arg0, void *arg1, s32 arg2);
void P004ActInit(s32 arg0, void *arg1) {
    M2C_FIELD(arg1, s32 (**)(void *), 0x184) = GetP004DamageAnim;
    M2C_FIELD(arg1, void (**)(s32, void *, s32), 0x100) = SetP004Stay;
    M2C_FIELD(arg1, void (**)(s32, void *, s32), 0x104) = SetP004Walk;
}
