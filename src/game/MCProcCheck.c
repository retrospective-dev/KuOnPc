#include "common.h"
#include "kuon_types.h"

int fsmc_MessageCheck(void);
int fsmc_GetDirPoints(void);
int fsmc_GetFreeMemory(int port, int slot);
int fsmc_FuncCheck(void);
int fsmc_GetDir(int port, int slot, char *name, unsigned int mode, unsigned int maxent, Flchk *table);
int fsmc_GetFileInfo(int port, int slot);
extern MCMng *lpMCMng;
extern int MCLoadListNum;
extern Flchk MCLoadList[8];
extern s8 D_0025B870[];

s32 MCProcCheck(void) {
    MCMng *temp_s0;
    s32 temp_s0_2;
    s32 temp_v0;
    s32 temp_v0_3;
    u8 temp_a0;
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
            if ((temp_v1_2 != 0) && (temp_v1_2 != 2)) {
                return -1;
            }
            lpMCMng->State = 4;
        case 4:
            temp_v0_3 = fsmc_GetDir((s32) lpMCMng->Port, (s32) lpMCMng->Slot, &D_0025B870[0], 0U, 8U, MCLoadList);
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
            lpMCMng->State = 5;
            lpMCMng->Retry = 0;
        case 5:
            if (fsmc_FuncCheck() <= 0) {
                MCLoadListNum = fsmc_GetDirPoints();
                if (MCLoadListNum == 0) {
                    temp_a0 = lpMCMng->Port;
                    if (lpMCMng->Message[temp_a0] != 2) {
                        temp_s0_2 = ((u32) (lpMCMng->IconSize[0] + 0x3FF) >> 0xA) + 7;
                        if (fsmc_GetFreeMemory((s32) temp_a0, (s32) lpMCMng->Slot) < temp_s0_2) {
                            lpMCMng->Message[lpMCMng->Port] = 0x1F;
                            return -1;
                        }
                    }
                }
                return 1;
            }
            goto block_31;
        }
block_31:
    default:
        return 0;
    }
}
