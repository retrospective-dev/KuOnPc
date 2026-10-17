#include "common.h"

extern s8 lpMapTexFile_006FC110[];

void *GetMapTexListBuf(s32 arg0) {
    return &lpMapTexFile_006FC110[0] + (arg0 * 4);
}
