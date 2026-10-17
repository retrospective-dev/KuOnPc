#include "common.h"

s32 Menu_TD_DrawDialog(void);
extern u8 *pMenuTdMng;

s32 Menu_TD_Draw(void) {
    u8 temp_v1;

    temp_v1 = *pMenuTdMng;
    if ((temp_v1 != 0) && (temp_v1 != 1)) {
        Menu_TD_DrawDialog();
    }
    return 1;
}
