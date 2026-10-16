#include "common.h"

typedef struct {
    /* 0x00 */ u8 unk0[0x4];
    /* 0x04 */ s32 unk4;
} Unk_00141AC0;

extern Unk_00141AC0 *D_0025DF98;

s32 func_00141AC0(s32 arg0) {
    D_0025DF98->unk4 = (s32) (arg0 * ((s32) ((D_0025DF98->unk4 + arg0) - 1) / arg0));
    return (s32) ((D_0025DF98->unk4 + arg0) - 1) / arg0;
}
