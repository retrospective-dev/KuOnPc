#include "common.h"
#include "kuon_types.h"

int func_0019FC20(void);
int func_001A08F0(void);
extern MCMng *D_0025E044;
s32 func_001A0F60(void) {
    s32 temp_v0;

    if (D_0025E044->State != 0) {
        goto block_2;
    }
    return 0;
block_2:
    temp_v0 = D_0025E044->Function();
    if (temp_v0 == 0) {
        goto block_9;
    }
    if (temp_v0 <= 0) {
        goto block_8;
    }
    if (D_0025E044->Mode != 4) {
        goto block_8;
    }
    if (D_0025E044->Function != func_001A08F0) {
        goto block_8;
    }
    D_0025E044->State = 1;
    D_0025E044->Function = func_0019FC20;
    return 0;
block_8:
    D_0025E044->State = 0;
block_9:
    return temp_v0;
}
