#include "common.h"

typedef struct {
    /* 0x00 */ u8 unk0[0x4];
    /* 0x04 */ u16 unk4;
    /* 0x06 */ u8 unk6[0x2];
    /* 0x08 */ u16 unk8;
} Unk_001D4650;

s32 func_001D4650(Unk_001D4650 *arg0) {
    return (arg0->unk8 - arg0->unk4) & 0xFFFF;
}
