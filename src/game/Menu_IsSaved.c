#include "common.h"

extern s32 menu_save_ok;

s32 Menu_IsSaved(void) {
    return menu_save_ok;
}
