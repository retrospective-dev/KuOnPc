#include "common.h"

extern s8 D_00A617F6[];

void sghDice_SetDiceSpots(s32 arg0, s8 arg1) {
    *(&D_00A617F6[0] + ((arg0 & 0xFF) * 0x60)) = arg1;
}
