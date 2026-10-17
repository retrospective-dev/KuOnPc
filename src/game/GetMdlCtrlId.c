#include "common.h"
#include "m2c_macros.h"

s32 GetMdlCtrlId(void *arg0) {
    void *temp_v0;

    temp_v0 = M2C_FIELD(arg0, void **, 0x140);
    if (temp_v0 != NULL) {
        return *M2C_FIELD(temp_v0, s32 **, 0x38);
    }
    return -1;
}
