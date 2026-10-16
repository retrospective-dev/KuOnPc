#include "common.h"

typedef struct {
    /* 0x00 */ u8 unk0[0x2C];
    /* 0x2C */ s32 unk2C;
} Unk_0019EED0;

s32 func_0019EED0(Unk_0019EED0* arg0) {
    return arg0->unk2C;
}
