#include "common.h"

typedef struct {
    /* 0x00 */ u8 unk0[0x4];
    /* 0x04 */ s32 unk4;
} Unk_00141AA0;

extern Unk_00141AA0 *D_0025DF98;

void func_00141AA0(s32 arg0) {
    D_0025DF98->unk4 = (s32) (D_0025DF98->unk4 + arg0);
}
