#include "common.h"
#include "kuon_types.h"

extern f32 D_00A4158C[];

void SetBloodPoolScale(f32 Scale) {
    D_00A4158C[0] = Scale;
}
