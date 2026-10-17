#include "common.h"

void SetCamCtrlMode(s32 arg0);
void SCR_SetCamModePath(s32 *arg0) {
    SetCamCtrlMode(0);
    *arg0 = 0;
}
