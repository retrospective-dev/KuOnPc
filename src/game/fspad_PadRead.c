#include "common.h"

extern s8 __PADMNG[];

void *fspad_PadRead(s32 arg0, s32 arg1) {
    return &__PADMNG[0] + ((arg1 + (arg0 * 4)) * 0x1C0) + 0x100;
}
