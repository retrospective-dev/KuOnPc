#include "common.h"
#include "kuon_types.h"

int fsmc_MessageCheck(void);
int fsmc_GetFreeMemory(int port, int slot);
int fsmc_FuncCheck(void);
int fsmc_MkDir(int port, int slot, char *dirname);
int fsmc_IconWrite(int port, int slot, char *fname, u8 *dthead, unsigned int size);
int fsmc_DataWrite(int port, int slot, char *fname, u8 *dthead, unsigned int size);
int fsmc_GetFileInfo(int port, int slot);
void MakeSaveData(int Index);
extern MCMng *lpMCMng;
extern int MCLoadListNum;
extern unsigned char FileName[64];
extern SaveSys_t SaveSys;
extern SaveData_t SaveData;
s32 func_00129770(u8 *, s32 *, u8);
extern s8 D_0025B870[];
extern s8 D_0025B890[];
extern s8 D_0025B8C0[];
extern s8 D_0025B8E0[];
extern u8 D_0025B900[];
extern u8 D_00A3A8D0[];

s32 MCProcSaveData(void) {
    MCMng *temp_s0;
    MCMng *temp_s0_2;
    MCMng *temp_s0_3;
    MCMng *temp_s0_4;
    MCMng *temp_s0_5;
    s32 temp_v0;
    s32 temp_v0_11;
    s32 temp_v0_3;
    s32 temp_v0_5;
    s32 temp_v0_7;
    s32 temp_v0_9;
    u8 temp_a0;
    u8 temp_v0_10;
    u8 temp_v0_12;
    u8 temp_v0_2;
    u8 temp_v0_4;
    u8 temp_v0_6;
    u8 temp_v0_8;
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
            goto block_84;
        }
        lpMCMng->State = 2;
        lpMCMng->Retry = 0;
    case 2:
        if (fsmc_FuncCheck() <= 0) {
            temp_s0 = lpMCMng;
            temp_s0->Message[temp_s0->Port] = fsmc_MessageCheck();
            temp_a0 = lpMCMng->Port;
            if (lpMCMng->Message[temp_a0] != 0) {
                return -1;
            }
            if (MCLoadListNum != 0) {
                if ((*(&D_00A3A8D0[0] + (lpMCMng->Data * 8)) == 0) && (fsmc_GetFreeMemory((s32) temp_a0, (s32) lpMCMng->Slot) < 2)) {
                    lpMCMng->Message[lpMCMng->Port] = 0x1F;
                    return -1;
                }
                goto block_38;
            }
            lpMCMng->State = 0xA;
        case 10:
            temp_v0_3 = fsmc_MkDir((s32) lpMCMng->Port, (s32) lpMCMng->Slot, &D_0025B870[0]);
            if (temp_v0_3 != 0) {
                if (temp_v0_3 < 0) {
                    return -1;
                }
                temp_v0_4 = lpMCMng->Retry + 1;
                lpMCMng->Retry = temp_v0_4;
                if ((temp_v0_4 & 0xFF) >= 0xA) {
                    return -1;
                }
                goto block_84;
            }
            lpMCMng->State = 0xB;
            lpMCMng->Retry = 0;
        case 11:
            if (fsmc_FuncCheck() <= 0) {
block_38:
                MakeSaveData((s32) lpMCMng->Data);
                lpMCMng->State = 0xE;
            case 14:
                func_00129770(FileName, &D_0025B900[0], lpMCMng->Data);
                temp_v0_5 = fsmc_DataWrite((s32) lpMCMng->Port, (s32) lpMCMng->Slot, (s8 *) FileName, &SaveData, 0x320U);
                if (temp_v0_5 != 0) {
                    if (temp_v0_5 < 0) {
                        return -1;
                    }
                    temp_v0_6 = lpMCMng->Retry + 1;
                    lpMCMng->Retry = temp_v0_6;
                    if ((temp_v0_6 & 0xFF) >= 0xA) {
                        return -1;
                    }
                    goto block_84;
                }
                lpMCMng->State = 0xF;
                lpMCMng->Retry = 0;
            case 15:
                if (fsmc_FuncCheck() <= 0) {
                    temp_s0_2 = lpMCMng;
                    temp_s0_2->Message[temp_s0_2->Port] = fsmc_MessageCheck();
                    if (lpMCMng->Message[lpMCMng->Port] != 0x3E) {
                        return -1;
                    }
                    lpMCMng->State = 0xC;
                case 12:
                    temp_v0_7 = fsmc_DataWrite((s32) lpMCMng->Port, (s32) lpMCMng->Slot, &D_0025B890[0], &SaveSys, 0x50U);
                    if (temp_v0_7 != 0) {
                        if (temp_v0_7 < 0) {
                            return -1;
                        }
                        temp_v0_8 = lpMCMng->Retry + 1;
                        lpMCMng->Retry = temp_v0_8;
                        if ((temp_v0_8 & 0xFF) >= 0xA) {
                            return -1;
                        }
                        goto block_84;
                    }
                    lpMCMng->State = 0xD;
                    lpMCMng->Retry = 0;
                case 13:
                    if (fsmc_FuncCheck() <= 0) {
                        temp_s0_3 = lpMCMng;
                        temp_s0_3->Message[temp_s0_3->Port] = fsmc_MessageCheck();
                        if (lpMCMng->Message[lpMCMng->Port] != 0x3E) {
                            return -1;
                        }
                        if (MCLoadListNum != 0) {
                            return 1;
                        }
                        lpMCMng->State = 0x10;
                    case 16:
                        temp_v0_9 = fsmc_IconWrite((s32) lpMCMng->Port, (s32) lpMCMng->Slot, &D_0025B8C0[0], lpMCMng->lpIconData[0], lpMCMng->IconSize[0]);
                        if (temp_v0_9 != 0) {
                            if (temp_v0_9 < 0) {
                                return -1;
                            }
                            temp_v0_10 = lpMCMng->Retry + 1;
                            lpMCMng->Retry = temp_v0_10;
                            if ((temp_v0_10 & 0xFF) >= 0xA) {
                                return -1;
                            }
                            goto block_84;
                        }
                        lpMCMng->State = 0x11;
                        lpMCMng->Retry = 0;
                    case 17:
                        if (fsmc_FuncCheck() <= 0) {
                            temp_s0_4 = lpMCMng;
                            temp_s0_4->Message[temp_s0_4->Port] = fsmc_MessageCheck();
                            if (lpMCMng->Message[lpMCMng->Port] != 0x3E) {
                                return -1;
                            }
                            lpMCMng->State = 0x12;
                        case 18:
                            temp_v0_11 = fsmc_IconWrite((s32) lpMCMng->Port, (s32) lpMCMng->Slot, &D_0025B8E0[0], lpMCMng->lpIconSys, 0x3C4U);
                            if (temp_v0_11 != 0) {
                                if (temp_v0_11 < 0) {
                                    return -1;
                                }
                                temp_v0_12 = lpMCMng->Retry + 1;
                                lpMCMng->Retry = temp_v0_12;
                                if ((temp_v0_12 & 0xFF) >= 0xA) {
                                    return -1;
                                }
                                goto block_84;
                            }
                            lpMCMng->State = 0x13;
                            lpMCMng->Retry = 0;
                        case 19:
                            if (fsmc_FuncCheck() <= 0) {
                                temp_s0_5 = lpMCMng;
                                temp_s0_5->Message[temp_s0_5->Port] = fsmc_MessageCheck();
                                if (lpMCMng->Message[lpMCMng->Port] != 0x3E) {
                                    return -1;
                                }
                                MCLoadListNum = 1;
                                return 1;
                            }
                            goto block_84;
                        }
                        goto block_84;
                    }
                    goto block_84;
                }
                goto block_84;
            }
            goto block_84;
        }
block_84:
    default:
        return 0;
    }
}
