#include "common.h"

extern s32 g_PrcStatus;

s32* GetMGPrcStatus(void) {
    return &g_PrcStatus;
}
