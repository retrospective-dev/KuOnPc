#include "common.h"

typedef struct {
    /* 0x00 */ u8 unk0[0x4];
    /* 0x04 */ s32 unk4;
} Unk_00141AA0;

extern Unk_00141AA0 *lpVramMng;

void SetNextVramAddr(s32 arg0) {
    lpVramMng->unk4 = (s32) (lpVramMng->unk4 + arg0);
}
