#include "common.h"

void func_00127BE0(void* dst, s32 c, u32 n);
s32 AioInit(s32 arg0);
extern s32 *lpSetCdvd;
extern s32 *lpLastCdvd;
extern s32 *lpCdvdRead;
extern s32 CdvdReadSt[];

void InitCdvdRead(void) {
    func_00127BE0(&CdvdReadSt[0], 0, 0x14C00U);
    lpSetCdvd = &CdvdReadSt[0];
    lpLastCdvd = &CdvdReadSt[0];
    lpCdvdRead = &CdvdReadSt[0];
    AioInit(0x14);
}
