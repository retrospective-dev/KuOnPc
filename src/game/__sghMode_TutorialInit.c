#include "common.h"
#include "m2c_macros.h"

void* sghGetGameInfo(void);
void* sghPad_GetPadInfo(void);
void __sghMode_TutorialInit(void) {
    s8 *temp_s0;

    temp_s0 = sghGetGameInfo();
    M2C_FIELD(sghPad_GetPadInfo(), s32 *, 8) = 0;
    *temp_s0 = 0x1B;
}
