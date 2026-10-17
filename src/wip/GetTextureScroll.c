#include "common.h"
/* mwcc_pad: any */

extern s8 TexScrollMng[];

void *GetTextureScroll(u32 arg0) {
    void *var_v0;

    var_v0 = NULL;
    if (arg0 < 0x20U) {
        var_v0 = &TexScrollMng[0] + (arg0 * 0x28);
    }
    return var_v0;
}
