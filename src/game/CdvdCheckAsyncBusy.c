#include "common.h"

typedef struct {
    /* 0x000 */ u8 unk0[0x124];
    /* 0x124 */ s32 unk124;
} Unk_001826C0;

extern Unk_001826C0 *lpLastCdvd;

s32 CdvdCheckAsyncBusy(void) {
    return lpLastCdvd->unk124 != 0;
}
