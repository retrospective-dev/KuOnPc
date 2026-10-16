#include "common.h"
#include "m2c_macros.h"

s32 func_0012F290(void *arg0);
void func_0015FC90(void *arg0, void *arg1);
void func_001A9B90(void *arg0, s32 arg1) {
    if (func_0012F290(M2C_FIELD(arg0, void **, 0x100)) != 0) {
        func_0015FC90(arg0, (void *) arg1);
    }
}
