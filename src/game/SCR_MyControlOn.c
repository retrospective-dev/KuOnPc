#include "common.h"

void SetMyDizzy(s32 arg0);
void SetMyControlOn(void);
s32 Msg_GetDizzyOffFlag(void);
void SCR_MyControlOn(s32 *arg0) {
    SetMyControlOn();
    if (Msg_GetDizzyOffFlag() != 0) {
        SetMyDizzy(1);
    }
    *arg0 = 0;
}
