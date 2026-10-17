#include "common.h"

extern s8 DramaCamInfo[];

void *GetDramaCamInfo(s32 arg0) {
    return &DramaCamInfo[0] + (arg0 * 0x3010);
}
