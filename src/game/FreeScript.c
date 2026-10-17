#include "common.h"

void MemFree(s32 arg0);
extern s32 gpScrBuf;
extern s8 D_003AC89D[];

void FreeScript(void) {
    D_003AC89D[0] = 0;
    if (gpScrBuf != 0) {
        MemFree(gpScrBuf);
        gpScrBuf = 0;
    }
}
