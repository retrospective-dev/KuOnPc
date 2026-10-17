#include "common.h"

extern u8 DarkFilterMng;

u8 CheckDarkFilter(void) {
    return ((s32) DarkFilterMng >= 2) & 0xFF;
}
