#include "common.h"

void MemFree(s32 arg0);
extern s32 s_pSec;

void SND_ReleaseBunk(void) {
    if (s_pSec != 0) {
        MemFree(s_pSec);
        s_pSec = 0;
    }
}
