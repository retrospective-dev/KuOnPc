#include "common.h"

typedef struct {
    /* 0x00 */ u8 unk0[0xF];
    /* 0x0F */ u8 unkF;
} Unk_0017A1A0;

extern Unk_0017A1A0* D_0025DFCC;

u8 func_0017A1A0(void) {
    return D_0025DFCC->unkF;
}
