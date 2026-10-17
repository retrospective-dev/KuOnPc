#include "common.h"

extern s32 menu_load_ok;

s32 Menu_IsLoaded(void) {
    return menu_load_ok;
}
