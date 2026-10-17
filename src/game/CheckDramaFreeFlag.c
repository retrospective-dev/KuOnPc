#include "common.h"

typedef struct {
    /* 0x00 */ u8 unk0[0xF];
    /* 0x0F */ u8 unkF;
} Unk_0017A1B0;

void FreeDramaData(void);
extern Unk_0017A1B0 *lpDramaMng;
extern s8 D_003AC895[];

void CheckDramaFreeFlag(void) {
    if (lpDramaMng->unkF != 0) {
        FreeDramaData();
        D_003AC895[0] = 0;
    }
}
