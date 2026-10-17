#include "common.h"

typedef struct {
    /* 0x00 */ s32 unk0;
    /* 0x04 */ u8 unk4[0x13];
    /* 0x17 */ s8 unk17;
} Unk_0017A140;

void FreeDramaMdlMng(void);
void FreeDramaData(void);
extern Unk_0017A140 *lpDramaMng;

void CheckFreeDramaData(void) {
    if (lpDramaMng->unk0 != 0) {
        lpDramaMng->unk17 = 1;
        FreeDramaMdlMng();
        FreeDramaData();
    }
}
