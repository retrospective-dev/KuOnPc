#include "common.h"

void FreeTexList(void *arg0);
void MemFree(s32 arg0);
extern void *D_0025E738;

void MGFreeTexture(void) {
    FreeTexList(D_0025E738);
    MemFree((s32) D_0025E738);
    D_0025E738 = NULL;
}
