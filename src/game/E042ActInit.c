#include "common.h"
#include "m2c_macros.h"

void E042ActAttack(void *arg0, void *arg1);
void E042ActStay(void *arg0, void *arg1);
void E042ActInit(void *arg0, void *arg1) {
    M2C_FIELD(arg1, void (**)(void *, void *), 0x80) = E042ActStay;
    M2C_FIELD(arg1, void (**)(void *, void *), 0x88) = E042ActAttack;
    M2C_FIELD(arg1, u16 *, 0x1FA) = 0xFFFF;
    M2C_FIELD(arg1, s8 *, 0x1DA) = 1;
    M2C_FIELD(arg0, s8 *, 0x130) = 1;
    M2C_FIELD(arg0, s8 *, 0x132) = 1;
    M2C_FIELD(arg0, s8 *, 0x131) = 1;
}
