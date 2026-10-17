#include "common.h"

s32 StopPeepCamera(void);
void SCR_StopPeepCamera(s32 *arg0) {
    StopPeepCamera();
    *arg0 = 0;
}
