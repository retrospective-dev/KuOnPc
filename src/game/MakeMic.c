#include "common.h"
#include "m2c_macros.h"

void InitMic(void *arg0, void *arg1);
s32 MakeMic(s32 arg0, void *arg1) {
    InitMic((void *) arg0, M2C_FIELD(arg1, void **, 4));
    return 1;
}
