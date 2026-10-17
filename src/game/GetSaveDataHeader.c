#include "common.h"

extern s8 SaveSys[];

void *GetSaveDataHeader(s32 arg0) {
    return &SaveSys[0] + (arg0 * 8) + 0x10;
}
