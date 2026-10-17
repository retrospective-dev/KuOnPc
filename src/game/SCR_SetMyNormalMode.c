#include "common.h"

void SetMyNormalMode(void);
void SCR_SetMyNormalMode(s32 *arg0) {
    SetMyNormalMode();
    *arg0 = 0;
}
