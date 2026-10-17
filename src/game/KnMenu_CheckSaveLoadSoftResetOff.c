#include "common.h"

extern s32 s_save_load_reset_off;

s32 KnMenu_CheckSaveLoadSoftResetOff(void) {
    return s_save_load_reset_off;
}
