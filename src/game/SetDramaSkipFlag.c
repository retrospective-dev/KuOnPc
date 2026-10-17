#include "common.h"

typedef struct {
    /* 0x00 */ u8 unk0[0x13];
    /* 0x13 */ s8 unk13;
} Unk_0017A180;

extern Unk_0017A180 *lpDramaMng;

void SetDramaSkipFlag(void) {
    lpDramaMng->unk13 = 1;
}
