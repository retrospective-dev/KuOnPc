#include "common.h"

void func_0013D7A0(void *arg0, u16 *arg1);
void func_001FE460(void);
extern void *D_0025E354;
extern s8 D_003AC899[];

void func_002001D0(void) {
    u16 sp1E;

    func_0013D7A0(D_0025E354, &sp1E);
    D_003AC899[0] = 0x35;
    func_001FE460();
}
