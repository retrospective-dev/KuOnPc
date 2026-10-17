#include "common.h"

typedef struct {
    /* 0x00 */ u8 unk0[0x42E];
    /* 0x42E */ s8 unk42E;
} Unk_00185B10;

extern Unk_00185B10* lpDrawMng;

void SetBlurFilter(s32 arg0) {
    lpDrawMng->unk42E = arg0;
}
