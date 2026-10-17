#include "common.h"
#include "m2c_macros.h"

s32 CheckAnimEndFrame(void *arg0);
void EneDeadProc(void *arg0, void *arg1);
void P019ActDead(void *arg0, s32 arg1) {
    if (CheckAnimEndFrame(M2C_FIELD(arg0, void **, 0x100)) != 0) {
        EneDeadProc(arg0, (void *) arg1);
    }
}
