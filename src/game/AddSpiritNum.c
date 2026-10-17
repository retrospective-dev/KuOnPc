#include "common.h"

s32 ItemMng_Add(s32 arg0, s32 arg1, s32 arg2);
void AddSpiritNum(s32 arg0, s32 arg1, s32 arg2) {
    if (arg2 != 0) {
        ItemMng_Add(3, arg0 & 0xFFFF, arg1);
    }
}
