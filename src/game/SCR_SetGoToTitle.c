#include "common.h"

void SetGoToTitleFade(void);
void SCR_SetGoToTitle(s32 *arg0) {
    SetGoToTitleFade();
    *arg0 = 0;
}
