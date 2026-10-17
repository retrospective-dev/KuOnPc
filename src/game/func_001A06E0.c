#include "common.h"
#include "kuon_types.h"

int func_001423E0(void);
int func_00142500(void);
int func_00142860(int port, int slot, char *fname, u8 *dthead, unsigned int size);
int func_00142A90(int port, int slot);
void func_0019F790(int Index);
extern MCMng *D_0025E044;
extern unsigned char D_00A3A650[64];
extern SaveData D_00A3A910;
s32 func_00129770(u8 *, s32 *, u8);
extern u8 D_0025B900[];

s32 func_001A06E0(void) {
    MCMng *temp_s0;
    MCMng *temp_s0_2;
    s32 temp_v0;
    s32 temp_v0_3;
    u8 temp_v0_2;
    u8 temp_v0_4;
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
            goto block_28;
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
            D_0025E044->State = 8;
        case 8:
            func_00129770(D_00A3A650, &D_0025B900[0], D_0025E044->Data);
            temp_v0_3 = func_00142860((s32) D_0025E044->Port, (s32) D_0025E044->Slot, (s8 *) D_00A3A650, &D_00A3A910, 0x320U);
            if (temp_v0_3 != 0) {
                if (temp_v0_3 < 0) {
                    return -1;
                }
                temp_v0_4 = D_0025E044->Retry + 1;
                D_0025E044->Retry = temp_v0_4;
                if ((temp_v0_4 & 0xFF) >= 0xA) {
                    return -1;
                }
                goto block_28;
            }
            D_0025E044->State = 9;
            D_0025E044->Retry = 0;
        case 9:
            if (func_00142500() <= 0) {
                temp_s0_2 = D_0025E044;
                temp_s0_2->Message[temp_s0_2->Port] = func_001423E0();
                if (D_0025E044->Message[D_0025E044->Port] != 0x48) {
                    return -1;
                }
                func_0019F790((s32) D_0025E044->Data);
                return 1;
            }
            goto block_28;
        }
block_28:
    default:
        return 0;
    }
}
