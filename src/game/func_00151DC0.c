#include "common.h"

typedef struct {
    /* 0x000 */ u8 unk0[0x120];
    /* 0x120 */ s32 unk120;
} Unk_00151DC0;

s32 func_00151DC0(Unk_00151DC0 *arg0) {
    return arg0->unk120 < 0x46;
}
