#include "common.h"
#include "kuon_types.h"
#include "m2c_macros.h"

Sprite *GetSpriteDraw(void);
void MGDrawSetMenuHelpWnd(u8 flag) {
    Sprite *temp_v0;

    temp_v0 = GetSpriteDraw();
    if (!(flag & 0xFF)) {
        M2C_FIELD(temp_v0, s8 *, 0x152) = 0;
        return;
    }
    M2C_FIELD(temp_v0, s8 *, 0x152) = 1;
}
