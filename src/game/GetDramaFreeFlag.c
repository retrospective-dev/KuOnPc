#include "common.h"

typedef struct {
    /* 0x00 */ u8 unk0[0xF];
    /* 0x0F */ u8 unkF;
} Unk_0017A1A0;

extern Unk_0017A1A0* lpDramaMng;

u8 GetDramaFreeFlag(void) {
    return lpDramaMng->unkF;
}
