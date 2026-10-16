#include "common.h"
#include "m2c_macros.h"

s32 func_001A2E30(void *arg0);
s32 func_001A3840(void *arg0) {
    if (arg0 == NULL) {
        return 0;
    }
    return func_001A2E30(M2C_FIELD(arg0, void **, 0x1C));
}
