#include "common.h"

void func_00203360(s32 arg0);
u8* func_00203370(void);
void func_002069F0(s32 arg0);
void func_00208C80(void);
extern s8 D_0025E730;
extern s8 D_0025E731;

void func_001FC790(void) {
    func_00208C80();
    func_00203360(0);
    func_002069F0((s32) *func_00203370());
    D_0025E730 = 0;
    D_0025E731 = 0;
}
