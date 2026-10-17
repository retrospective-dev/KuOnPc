#include "common.h"

extern u8 gsPadInfo[];

void* sghPad_GetPadInfo(void) {
    return gsPadInfo;
}
