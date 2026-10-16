#include "common.h"

typedef struct {
    /* 0x00 */ u8 unk0[0x10];
    /* 0x10 */ u8 unk10;
} Unk_0017A190;

extern Unk_0017A190* D_0025DFCC;

u8 func_0017A190(void) {
    return D_0025DFCC->unk10;
}
