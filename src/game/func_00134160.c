#include "common.h"
#include "kuon_types.h"

void func_001382B0(void);
extern DrawMng *D_0025DF80;
void func_00134160(f32 fov) {
    D_0025DF80->fov = fov;
    func_001382B0();
}
