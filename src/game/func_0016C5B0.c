#include "common.h"
#include "kuon_types.h"

void func_0013DD90(int port, float frame, float power, unsigned char addtype, unsigned char vibtype, int TimeLag);
extern u8 D_003AC89A[];

void func_0016C5B0(Ss *ss) {
    s32 temp_a0;

    temp_a0 = ss->arg[0].val;
    switch (temp_a0) {
    case 0:
        func_0013DD90((s32) D_003AC89A[0], (f32) ss->arg[1].val, (f32) ss->arg[2].val, 0U, 0U, 0);
        break;
    case 1:
        func_0013DD90((s32) D_003AC89A[0], (f32) ss->arg[1].val, (f32) ss->arg[2].val, 1U, 0U, 0);
        break;
    case 2:
        func_0013DD90((s32) D_003AC89A[0], (f32) ss->arg[1].val, 1.0f, 0U, 1U, 0);
        break;
    }
    ss->kind = 0;
}
