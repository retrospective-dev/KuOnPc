#include "common.h"

void func_001FC480(void);
void func_00203360(s32 arg0);
u8* func_00203370(void);
void func_00203380(s32 arg0);
void* func_002043B0(void);
void func_002069F0(s32 arg0);
void func_00207DE0(void);
void func_001FCED0(void) {
    s8 *temp_s0;

    temp_s0 = func_00203370();
    func_002043B0();
    *temp_s0 = 0;
    func_00203360(0);
    func_002069F0((s32) *func_00203370());
    func_00203380(0x80);
    func_00207DE0();
    func_001FC480();
}
