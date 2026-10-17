#include "common.h"

extern u8 SCR_GValue[];

void fsScr_SetGameVal(s32 arg0, s32 arg1) {
    *(s32 *)(&SCR_GValue[0] + (arg0 * 4)) = arg1;
}
