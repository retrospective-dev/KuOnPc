#include "common.h"

extern u8 s_setting_00A484A0[];

void* SFX_GetSettingData(void) {
    return s_setting_00A484A0;
}
