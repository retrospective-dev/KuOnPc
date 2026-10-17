#include "common.h"

void func_001E67B0();
s16 func_001E8150(void);
extern s16 D_0025E0EC;
extern s32 D_0025E6A0;
extern s32 D_0025E6A4;
extern s32 D_0025E6B4;

void func_001E6420(void) {
    func_001E67B0();
    D_0025E6A0 = 0;
    D_0025E6A4 = 0;
    if (D_0025E6B4 == 0) {
        D_0025E0EC = 0x19;
        return;
    }
    func_001E8150();
}
