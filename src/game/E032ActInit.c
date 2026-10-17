#include "common.h"
#include "m2c_macros.h"

void SetE032Dead(s32 arg0, void *arg1, s32 arg2);
void E032ActAttack(void *arg0, void *arg1);
void E032ActInit(s32 arg0, void *arg1) {
    M2C_FIELD(arg1, void (**)(void *, void *), 0x88) = E032ActAttack;
    M2C_FIELD(arg1, void (**)(s32, void *, s32), 0x110) = SetE032Dead;
}
