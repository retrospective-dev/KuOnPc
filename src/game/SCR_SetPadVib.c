#include "common.h"
#include "kuon_types.h"

void PadSetVib(int port, float frame, float power, unsigned char addtype, unsigned char vibtype, int TimeLag);
extern u8 D_003AC89A[];

void SCR_SetPadVib(Ss *ss) {
    s32 temp_a0;

    temp_a0 = ss->arg[0].val;
    switch (temp_a0) {
    case 0:
        PadSetVib((s32) D_003AC89A[0], (f32) ss->arg[1].val, (f32) ss->arg[2].val, 0U, 0U, 0);
        break;
    case 1:
        PadSetVib((s32) D_003AC89A[0], (f32) ss->arg[1].val, (f32) ss->arg[2].val, 1U, 0U, 0);
        break;
    case 2:
        PadSetVib((s32) D_003AC89A[0], (f32) ss->arg[1].val, 1.0f, 0U, 1U, 0);
        break;
    }
    ss->kind = 0;
}
