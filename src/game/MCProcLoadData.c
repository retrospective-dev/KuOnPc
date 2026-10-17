#include "common.h"
#include "kuon_types.h"

int fsmc_MessageCheck(void);
int fsmc_FuncCheck(void);
int fsmc_DataRead(int port, int slot, char *fname, u8 *dthead, unsigned int size);
int fsmc_GetFileInfo(int port, int slot);
void CopyLoadData(int Index);
extern MCMng *lpMCMng;
extern unsigned char FileName[64];
extern SaveData_t SaveData;
s32 func_00129770(u8 *, s32 *, u8);
extern u8 D_0025B900[];

s32 MCProcLoadData(void) {
    MCMng *temp_s0;
    MCMng *temp_s0_2;
    s32 temp_v0;
    s32 temp_v0_3;
    u8 temp_v0_2;
    u8 temp_v0_4;
    u8 temp_v1;

    temp_v1 = lpMCMng->State;
    switch (temp_v1) {
    case 1:
        temp_v0 = fsmc_GetFileInfo((s32) lpMCMng->Port, (s32) lpMCMng->Slot);
        if (temp_v0 != 0) {
            if (temp_v0 < 0) {
                return -1;
            }
            temp_v0_2 = lpMCMng->Retry + 1;
            lpMCMng->Retry = temp_v0_2;
            if ((temp_v0_2 & 0xFF) >= 0xA) {
                return -1;
            }
            goto block_28;
        }
        lpMCMng->State = 2;
        lpMCMng->Retry = 0;
    case 2:
        if (fsmc_FuncCheck() <= 0) {
            temp_s0 = lpMCMng;
            temp_s0->Message[temp_s0->Port] = fsmc_MessageCheck();
            if (lpMCMng->Message[lpMCMng->Port] != 0) {
                return -1;
            }
            lpMCMng->State = 8;
        case 8:
            func_00129770(FileName, &D_0025B900[0], lpMCMng->Data);
            temp_v0_3 = fsmc_DataRead((s32) lpMCMng->Port, (s32) lpMCMng->Slot, (s8 *) FileName, &SaveData, 0x320U);
            if (temp_v0_3 != 0) {
                if (temp_v0_3 < 0) {
                    return -1;
                }
                temp_v0_4 = lpMCMng->Retry + 1;
                lpMCMng->Retry = temp_v0_4;
                if ((temp_v0_4 & 0xFF) >= 0xA) {
                    return -1;
                }
                goto block_28;
            }
            lpMCMng->State = 9;
            lpMCMng->Retry = 0;
        case 9:
            if (fsmc_FuncCheck() <= 0) {
                temp_s0_2 = lpMCMng;
                temp_s0_2->Message[temp_s0_2->Port] = fsmc_MessageCheck();
                if (lpMCMng->Message[lpMCMng->Port] != 0x48) {
                    return -1;
                }
                CopyLoadData((s32) lpMCMng->Data);
                return 1;
            }
            goto block_28;
        }
block_28:
    default:
        return 0;
    }
}
