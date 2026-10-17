#include "common.h"

extern u8 FrameBuffer[0x15000];
extern s32 FrameID;

void ClearFadedFilter(void) {
    func_00127BE0(FrameBuffer, 0, 0x15000);
    FrameID = 0;
}
