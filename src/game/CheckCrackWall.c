#include "common.h"
#include "m2c_macros.h"

extern u8 TexEffectMng[];
extern s32 D_00A41574[];

s32 CheckCrackWall(void *arg0) {
    if (TexEffectMng[0] == 0) {
        return 0;
    }
    return M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s32 *, 0x44) == D_00A41574[0];
}
