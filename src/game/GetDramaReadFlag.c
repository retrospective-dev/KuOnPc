#include "common.h"

typedef struct {
    /* 0x00 */ u8 unk0[0x10];
    /* 0x10 */ u8 unk10;
} Unk_0017A190;

extern Unk_0017A190* lpDramaMng;

u8 GetDramaReadFlag(void) {
    return lpDramaMng->unk10;
}
