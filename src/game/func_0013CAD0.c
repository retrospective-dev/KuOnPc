#include "common.h"
#include "kuon_types.h"

void func_00127BE0(void* dst, s32 c, u32 n);
void func_0013F910(u8 *lpTexList);
void func_0014B580(u8 *lpMem);
extern u8 D_003AC895[];

void func_0013CAD0(MdlData *lpMdlData, s32 bDataFree) {
    if (lpMdlData != NULL) {
        if (lpMdlData->MdlType == 2) {
            if (D_003AC895[0] == 4) {
                goto block_4;
            }
        } else {
block_4:
            func_0014B580(lpMdlData->lpPacket);
            func_0014B580(lpMdlData->lpTexPacket);
        }
        func_0013F910(lpMdlData->lpTexList);
        if (bDataFree != 0) {
            func_0014B580(lpMdlData->lpBndFile);
        }
        func_00127BE0(lpMdlData, 0, 0x680U);
    }
}
