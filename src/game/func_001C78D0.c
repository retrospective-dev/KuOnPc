#include "common.h"

typedef struct {
    /* 0x00 */ u8 unk0[0xC];
    /* 0x0C */ u16 unkC;
} Unk_001C78D0;

extern Unk_001C78D0* D_0025E5C4;

u16 func_001C78D0(void) {
    return D_0025E5C4->unkC;
}
