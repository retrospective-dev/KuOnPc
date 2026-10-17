#include "common.h"
#include "m2c_macros.h"

extern u8 *s_pSysInfo_0025E424;
extern s32 sCurrentP_0025E428;

void FsFont_SetDmaBuffer(s32 arg0, s32 arg1) {
    s_pSysInfo_0025E424 = (unsigned char *) (sCurrentP_0025E428 + 0x9C);
    M2C_FIELD(s_pSysInfo_0025E424, s32 *, 0) = arg0;
    M2C_FIELD(s_pSysInfo_0025E424, s32 *, 4) = arg1;
}
