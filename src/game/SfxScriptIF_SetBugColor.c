#include "common.h"

extern s32 s_params;

void SfxScriptIF_SetBugColor(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s_params = (arg3 & 0xFF) + (((arg2 & 0xFF) << 8) + (((arg0 & 0xFF) << 0x18) + ((arg1 & 0xFF) << 0x10)));
}
