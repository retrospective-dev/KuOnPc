#include "common.h"
#include "kuon_types.h"

int func_001423E0(void);
int func_00142500(void);
int func_00142670(int port, int slot, char *dirname);
int func_001427A0(int port, int slot, char *fname, u8 *dthead, unsigned int size);
int func_00142920(int port, int slot, char *fname, u8 *dthead, unsigned int size);
int func_00142A90(int port, int slot);
extern MCMng *D_0025E044;
extern int D_0025E4F8;
extern SaveSys D_00A3A8C0;
extern s8 D_0025B870[];
extern s8 D_0025B890[];
extern s8 D_0025B8C0[];
extern s8 D_0025B8E0[];
extern u8 D_003AC8B2[];
extern u8 D_003AC8B8[];
extern u8 D_003AC8B9[];
extern u8 D_003AC8BA[];
extern u8 D_003AC8BB[];
extern u8 D_00A3A8C1[];
extern u8 D_00A3A8C2[];
extern u8 D_00A3A8C3[];
extern u8 D_00A3A8C4[];

s32 func_0019FC20(void) {
    MCMng *temp_s0;
    MCMng *temp_s0_2;
    MCMng *temp_s0_3;
    MCMng *temp_s0_4;
    s32 temp_v0;
    s32 temp_v0_3;
    s32 temp_v0_5;
    s32 temp_v0_7;
    s32 temp_v0_9;
    u8 temp_v0_10;
    u8 temp_v0_2;
    u8 temp_v0_4;
    u8 temp_v0_6;
    u8 temp_v0_8;
    u8 temp_v1;

    temp_v1 = D_0025E044->State;
    switch (temp_v1) {
    case 1:
        temp_v0 = func_00142A90((s32) D_0025E044->Port, (s32) D_0025E044->Slot);
        if (temp_v0 != 0) {
            if (temp_v0 < 0) {
                return -1;
            }
            temp_v0_2 = D_0025E044->Retry + 1;
            D_0025E044->Retry = temp_v0_2;
            if ((temp_v0_2 & 0xFF) >= 0xA) {
                return -1;
            }
            goto block_67;
        }
        D_0025E044->State = 2;
        D_0025E044->Retry = 0;
    case 2:
        if (func_00142500() <= 0) {
            temp_s0 = D_0025E044;
            temp_s0->Message[temp_s0->Port] = func_001423E0();
            if (D_0025E044->Message[D_0025E044->Port] != 0) {
                return -1;
            }
            if (D_0025E4F8 == 0) {
                D_0025E044->State = 0xA;
            case 10:
                temp_v0_3 = func_00142670((s32) D_0025E044->Port, (s32) D_0025E044->Slot, &D_0025B870[0]);
                if (temp_v0_3 != 0) {
                    if (temp_v0_3 < 0) {
                        return -1;
                    }
                    temp_v0_4 = D_0025E044->Retry + 1;
                    D_0025E044->Retry = temp_v0_4;
                    if ((temp_v0_4 & 0xFF) >= 0xA) {
                        return -1;
                    }
                    goto block_67;
                }
                D_0025E044->State = 0xB;
                D_0025E044->Retry = 0;
            case 11:
                if (func_00142500() <= 0) {
                    goto block_31;
                }
                goto block_67;
            }
block_31:
            D_00A3A8C0.ClearCount[0] |= D_003AC8B8[0];
            D_00A3A8C1[0] |= D_003AC8B9[0];
            D_00A3A8C2[0] |= D_003AC8BA[0];
            D_00A3A8C3[0] |= D_003AC8BB[0];
            D_00A3A8C4[0] |= D_003AC8B2[0];
            D_0025E044->State = 0xC;
        case 12:
            temp_v0_5 = func_00142920((s32) D_0025E044->Port, (s32) D_0025E044->Slot, &D_0025B890[0], &D_00A3A8C0, 0x50U);
            if (temp_v0_5 != 0) {
                if (temp_v0_5 < 0) {
                    return -1;
                }
                temp_v0_6 = D_0025E044->Retry + 1;
                D_0025E044->Retry = temp_v0_6;
                if ((temp_v0_6 & 0xFF) >= 0xA) {
                    return -1;
                }
                goto block_67;
            }
            D_0025E044->State = 0xD;
            D_0025E044->Retry = 0;
        case 13:
            if (func_00142500() <= 0) {
                temp_s0_2 = D_0025E044;
                temp_s0_2->Message[temp_s0_2->Port] = func_001423E0();
                if (D_0025E044->Message[D_0025E044->Port] != 0x3E) {
                    return -1;
                }
                if (D_0025E4F8 != 0) {
                    return 1;
                }
                D_0025E044->State = 0x10;
            case 16:
                temp_v0_7 = func_001427A0((s32) D_0025E044->Port, (s32) D_0025E044->Slot, &D_0025B8C0[0], D_0025E044->lpIconData[0], D_0025E044->IconSize[0]);
                if (temp_v0_7 != 0) {
                    if (temp_v0_7 < 0) {
                        return -1;
                    }
                    temp_v0_8 = D_0025E044->Retry + 1;
                    D_0025E044->Retry = temp_v0_8;
                    if ((temp_v0_8 & 0xFF) >= 0xA) {
                        return -1;
                    }
                    goto block_67;
                }
                D_0025E044->State = 0x11;
                D_0025E044->Retry = 0;
            case 17:
                if (func_00142500() <= 0) {
                    temp_s0_3 = D_0025E044;
                    temp_s0_3->Message[temp_s0_3->Port] = func_001423E0();
                    if (D_0025E044->Message[D_0025E044->Port] != 0x3E) {
                        return -1;
                    }
                    D_0025E044->State = 0x12;
                case 18:
                    temp_v0_9 = func_001427A0((s32) D_0025E044->Port, (s32) D_0025E044->Slot, &D_0025B8E0[0], D_0025E044->lpIconSys, 0x3C4U);
                    if (temp_v0_9 != 0) {
                        if (temp_v0_9 < 0) {
                            return -1;
                        }
                        temp_v0_10 = D_0025E044->Retry + 1;
                        D_0025E044->Retry = temp_v0_10;
                        if ((temp_v0_10 & 0xFF) >= 0xA) {
                            return -1;
                        }
                        goto block_67;
                    }
                    D_0025E044->State = 0x13;
                    D_0025E044->Retry = 0;
                case 19:
                    if (func_00142500() <= 0) {
                        temp_s0_4 = D_0025E044;
                        temp_s0_4->Message[temp_s0_4->Port] = func_001423E0();
                        if (D_0025E044->Message[D_0025E044->Port] != 0x3E) {
                            return -1;
                        }
                        D_0025E4F8 = 1;
                        return 1;
                    }
                    goto block_67;
                }
                goto block_67;
            }
            goto block_67;
        }
block_67:
    default:
        return 0;
    }
}
