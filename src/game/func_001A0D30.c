#include "common.h"
#include "kuon_types.h"

int func_001423E0(void);
int func_001423F0(void);
int func_00142400(int port, int slot);
int func_00142500(void);
int func_001429E0(int port, int slot, char *name, unsigned int mode, unsigned int maxent, Flchk *table);
int func_00142A90(int port, int slot);
extern MCMng *D_0025E044;
extern int D_0025E4F8;
extern Flchk D_00A3A6C0[8];
extern s8 D_0025B870[];

s32 func_001A0D30(void) {
    MCMng *temp_s0;
    s32 temp_s0_2;
    s32 temp_v0;
    s32 temp_v0_3;
    u8 temp_a0;
    u8 temp_v0_2;
    u8 temp_v0_4;
    u8 temp_v1;
    u8 temp_v1_2;

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
            goto block_31;
        }
        D_0025E044->State = 2;
        D_0025E044->Retry = 0;
    case 2:
        if (func_00142500() <= 0) {
            temp_s0 = D_0025E044;
            temp_s0->Message[temp_s0->Port] = func_001423E0();
            temp_v1_2 = D_0025E044->Message[D_0025E044->Port];
            if ((temp_v1_2 != 0) && (temp_v1_2 != 2)) {
                return -1;
            }
            D_0025E044->State = 4;
        case 4:
            temp_v0_3 = func_001429E0((s32) D_0025E044->Port, (s32) D_0025E044->Slot, &D_0025B870[0], 0U, 8U, D_00A3A6C0);
            if (temp_v0_3 != 0) {
                if (temp_v0_3 < 0) {
                    return -1;
                }
                temp_v0_4 = D_0025E044->Retry + 1;
                D_0025E044->Retry = temp_v0_4;
                if ((temp_v0_4 & 0xFF) >= 0xA) {
                    return -1;
                }
                goto block_31;
            }
            D_0025E044->State = 5;
            D_0025E044->Retry = 0;
        case 5:
            if (func_00142500() <= 0) {
                D_0025E4F8 = func_001423F0();
                if (D_0025E4F8 == 0) {
                    temp_a0 = D_0025E044->Port;
                    if (D_0025E044->Message[temp_a0] != 2) {
                        temp_s0_2 = ((u32) (D_0025E044->IconSize[0] + 0x3FF) >> 0xA) + 7;
                        if (func_00142400((s32) temp_a0, (s32) D_0025E044->Slot) < temp_s0_2) {
                            D_0025E044->Message[D_0025E044->Port] = 0x1F;
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
