#include "common.h"

typedef struct {
    /* 0x00 */ u8 unk0[0xC];
    /* 0x0C */ u16 unkC;
} Unk_001C78E0;

extern Unk_001C78E0* D_0025E5C0;

u16 func_001C78E0(void) {
    return D_0025E5C0->unkC;
}
