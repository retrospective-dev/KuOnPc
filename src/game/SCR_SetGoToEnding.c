#include "common.h"

void SetGoToEndingFade(void);
void SCR_SetGoToEnding(s32 *arg0) {
    SetGoToEndingFade();
    *arg0 = 0;
}
