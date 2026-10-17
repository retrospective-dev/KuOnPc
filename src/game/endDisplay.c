#include "common.h"

extern s32 isCountVblank;

void endDisplay(void) {
    isCountVblank = 0;
}
