#include "common.h"

s32 FreeMemory(s32 arg0);
extern s32 UseMemSize;

void MemFree(s32 arg0) {
    if (arg0 != 0) {
        UseMemSize -= FreeMemory(arg0);
    }
}
