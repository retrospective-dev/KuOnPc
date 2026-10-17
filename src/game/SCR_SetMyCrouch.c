#include "common.h"

void SetMyCrouch(void *arg0);
extern s32 D_006B90D0[];

void SCR_SetMyCrouch(s32 *arg0) {
    SetMyCrouch(&D_006B90D0[0]);
    *arg0 = 0;
}
