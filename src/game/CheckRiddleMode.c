#include "common.h"

extern s32 RiddleMng[];

s32 CheckRiddleMode(void) {
    return RiddleMng[0] != 0;
}
