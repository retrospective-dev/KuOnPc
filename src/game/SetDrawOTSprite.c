#include "common.h"

s32 _SetDrawOT(s8 arg0, s32 arg1, s32 arg2, s32 arg3);
void SetDrawOTSprite(s32 arg0, s32 arg1, s32 arg2) {
    _SetDrawOT(1, arg0, arg1, arg2);
}
