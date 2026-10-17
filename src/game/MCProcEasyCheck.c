#include "common.h"
#include "kuon_types.h"

int fsmc_MessageCheck(void);
int fsmc_FuncCheck(void);
int fsmc_GetFileInfo(int port, int slot);
extern MCMng *lpMCMng;
s32 MCProcEasyCheck(void) {
    MCMng *temp_s0;
    s32 temp_v0;
    u8 temp_v0_2;
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
            goto block_15;
        }
        lpMCMng->State = 2;
        lpMCMng->Retry = 0;
    case 2:
        if (fsmc_FuncCheck() <= 0) {
            temp_s0 = lpMCMng;
            temp_s0->Message[temp_s0->Port] = fsmc_MessageCheck();
            temp_v1_2 = lpMCMng->Message[lpMCMng->Port];
            if ((temp_v1_2 != 0) && (temp_v1_2 != 2)) {
                return -1;
            }
            return 1;
        }
block_15:
    default:
        return 0;
    }
}
