#include "common.h"
#include "kuon_types.h"

int fsmc_MessageCheck(void);
int fsmc_FuncCheck(void);
int fsmc_Format(int port, int slot);
int fsmc_GetFileInfo(int port, int slot);
extern MCMng *lpMCMng;
s32 MCProcFormat(void) {
    MCMng *temp_s0;
    MCMng *temp_s0_2;
    s32 temp_v0;
    s32 temp_v0_3;
    s32 var_v0;
    u8 temp_v0_2;
    u8 temp_v0_4;
    u8 temp_v1;
    u8 temp_v1_2;

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
            goto block_31;
        }
        lpMCMng->State = 2;
        lpMCMng->Retry = 0;
    case 2:
        if (fsmc_FuncCheck() <= 0) {
            temp_s0 = lpMCMng;
            temp_s0->Message[temp_s0->Port] = fsmc_MessageCheck();
            temp_v1_2 = lpMCMng->Message[lpMCMng->Port];
            if ((temp_v1_2 != 0) && (temp_v1_2 != 3) && (temp_v1_2 != 4)) {
                return -1;
            }
            lpMCMng->State = 0x14;
        case 20:
            temp_v0_3 = fsmc_Format((s32) lpMCMng->Port, (s32) lpMCMng->Slot);
            if (temp_v0_3 != 0) {
                if (temp_v0_3 < 0) {
                    return -1;
                }
                temp_v0_4 = lpMCMng->Retry + 1;
                lpMCMng->Retry = temp_v0_4;
                if ((temp_v0_4 & 0xFF) >= 0xA) {
                    return -1;
                }
                goto block_31;
            }
            lpMCMng->State = 0x15;
            lpMCMng->Retry = 0;
        case 21:
            if (fsmc_FuncCheck() <= 0) {
                temp_s0_2 = lpMCMng;
                temp_s0_2->Message[temp_s0_2->Port] = fsmc_MessageCheck();
                if (lpMCMng->Message[lpMCMng->Port] != 0x34) {
                    var_v0 = -1;
                } else {
                    var_v0 = 1;
                }
                return var_v0;
            }
            goto block_31;
        }
block_31:
    default:
        return 0;
    }
}
