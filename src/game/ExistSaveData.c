#include "common.h"

extern s8 D_00A3A8D0[];

u8 ExistSaveData(s32 arg0) {
    return *(&D_00A3A8D0[0] + (arg0 * 8));
}
