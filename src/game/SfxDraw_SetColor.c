#include "common.h"

extern s32 D_00A49F84[];

void SfxDraw_SetColor(s32 arg0) {
    D_00A49F84[0] = arg0;
}
