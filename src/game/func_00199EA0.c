#include "common.h"

typedef struct {
    /* 0x00 */ u8 unk0[0x5C];
    /* 0x5C */ s32 unk5C;
    /* 0x60 */ u8 unk60[0x8];
    /* 0x68 */ s32 unk68;
} Unk_00199EA0;

s32 func_00199EA0(Unk_00199EA0 *arg0) {
    return arg0->unk68 >= arg0->unk5C;
}
