#include "common.h"
#include "m2c_macros.h"

void* RtaMngGetRtaMng(void);
void CsMngSetBufType(s32 arg0) {
    M2C_FIELD(RtaMngGetRtaMng(), s32 *, 0xD48) = arg0;
}
