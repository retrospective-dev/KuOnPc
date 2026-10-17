#include "common.h"

typedef struct {
    /* 0x00 */ u8 unk0[0x8];
    /* 0x08 */ s32 unk8;
} Unk_001AC790;

extern Unk_001AC790* g_pSndMng;

s32 SND_GetListenerMatPtr(void) {
    return g_pSndMng->unk8;
}
