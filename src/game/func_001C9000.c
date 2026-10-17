#include "common.h"
#include "kuon_types.h"

int func_001C7A70(Flicker *pFlicker_);
int func_001C7E70(Flicker *pFlicker_);
int func_001C8270(Flicker *pFlicker_);
int func_001C87F0(Flicker *pFlicker_);
int func_001C8D70(Flicker *pFlicker_);
u8 *func_001D46A0(u8 *pSList_, unsigned short hElem_);
extern u8 *D_0025E5D0;
s32 func_001C9000(u16 hFlicker_) {
    Flicker *temp_v0;
    u16 temp_a0;

    temp_v0 = func_001D46A0(D_0025E5D0, hFlicker_);
    temp_a0 = temp_v0->type;
    switch (temp_a0) {
    case 0:
        func_001C7E70(temp_v0);
        break;
    case 1:
        func_001C8D70(temp_v0);
        break;
    case 2:
        func_001C7A70(temp_v0);
        break;
    case 3:
        func_001C87F0(temp_v0);
        break;
    case 4:
        func_001C8270(temp_v0);
        break;
    }
    return 1;
}
