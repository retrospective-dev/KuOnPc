#include "common.h"
#include "m2c_macros.h"

extern s8 VagStmMng[];

s32 CheckVagStmFade(s32 arg0) {
    return M2C_FIELD((&VagStmMng[0] + ((arg0 & 0xFF) * 0xD0)), s32 *, 0xA0) != 0;
}
