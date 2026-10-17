#include "common.h"

void FreeTexList(u8 *arg0);
void MemFree(s32 arg0);
s32 KnMenuMng_ReMakeMenu(s32 arg0);
extern u8 * D_00A3A3A0[];
extern u8 * D_00A3A3A4[];
extern u8 * D_00A3A3A8[];

void FreeTitleTexture(void) {
    if (D_00A3A3A0[0] != NULL) {
        FreeTexList(D_00A3A3A0[0]);
        MemFree((s32) D_00A3A3A0[0]);
        D_00A3A3A0[0] = NULL;
    }
    if (D_00A3A3A4[0] != NULL) {
        FreeTexList(D_00A3A3A4[0]);
        MemFree((s32) D_00A3A3A4[0]);
        D_00A3A3A4[0] = NULL;
    }
    if (D_00A3A3A8[0] != NULL) {
        FreeTexList(D_00A3A3A8[0]);
        MemFree((s32) D_00A3A3A8[0]);
        D_00A3A3A8[0] = NULL;
    }
    KnMenuMng_ReMakeMenu(0x64);
}
