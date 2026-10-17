#include "common.h"
#include "kuon_types.h"

void func_0013DD90(int port, float frame, float power, unsigned char addtype, unsigned char vibtype, int TimeLag);
extern u8 D_003AC89A[];

void func_0013D420(void) {
    func_0013DD90((s32) D_003AC89A[0], 3.0f, 30.0f, 0U, 0U, 0);
    func_0013DD90((s32) D_003AC89A[0], 3.0f, 60.0f, 0U, 0U, 0x14);
    func_0013DD90((s32) D_003AC89A[0], 3.0f, 1.0f, 0U, 1U, 0);
    func_0013DD90((s32) D_003AC89A[0], 3.0f, 1.0f, 0U, 1U, 0x14);
}
