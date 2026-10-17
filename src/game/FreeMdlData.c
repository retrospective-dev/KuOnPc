#include "common.h"
#include "kuon_types.h"

void func_00127BE0(void* dst, s32 c, u32 n);
void FreeTexList(u8 *lpTexList);
void MemFree(u8 *lpMem);
extern u8 D_003AC895[];

void FreeMdlData(MdlData_t *lpMdlData, s32 bDataFree) {
    if (lpMdlData != NULL) {
        if (lpMdlData->MdlType == 2) {
            if (D_003AC895[0] == 4) {
                goto block_4;
            }
        } else {
block_4:
            MemFree(lpMdlData->lpPacket);
            MemFree(lpMdlData->lpTexPacket);
        }
        FreeTexList(lpMdlData->lpTexList);
        if (bDataFree != 0) {
            MemFree(lpMdlData->lpBndFile);
        }
        func_00127BE0(lpMdlData, 0, 0x680U);
    }
}
