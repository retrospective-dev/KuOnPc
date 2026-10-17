#include "common.h"
#include "kuon_types.h"

int func_001423E0(void);
int func_00142500(void);
int func_00142A90(int port, int slot);
extern MCMng *D_0025E044;
s32 func_001A0C20(void) {
    MCMng *temp_s0;
    s32 temp_v0;
    u8 temp_v0_2;
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
            goto block_15;
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
            return 1;
        }
block_15:
    default:
        return 0;
    }
}
