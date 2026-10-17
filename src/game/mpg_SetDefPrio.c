#include "common.h"

typedef struct {
    /* 0x000 */ s32 unk0;
    /* 0x004 */ u8 unk4[0x1F0];
    /* 0x1F4 */ s32 unk1F4;
    /* 0x1F8 */ s32 unk1F8;
} Unk_0019BC40;

extern Unk_0019BC40 *s_pMpgMng;
extern s32 s_isInit;

void mpg_SetDefPrio(s32 arg0) {
    if ((s_isInit != 0) && (s_pMpgMng->unk1F8 == -1) && (s_pMpgMng->unk1F4 == -1)) {
        s_pMpgMng->unk0 = arg0;
    }
}
