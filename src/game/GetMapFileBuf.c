#include "common.h"

extern s32 lpMapFile;

s32* GetMapFileBuf(void) {
    return &lpMapFile;
}
