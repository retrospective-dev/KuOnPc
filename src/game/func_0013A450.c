#include "common.h"

s32 SND_SecRemoveMap(void);
void MGFreeModel(void);
void MGFreeTexture(void);
void func_0013A450(void) {
    MGFreeTexture();
    MGFreeModel();
    SND_SecRemoveMap();
}
