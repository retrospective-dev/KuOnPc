#include "common.h"

void func_00170ED0(void);
extern u8 D_003AC89D[];
extern u8 D_003AC89F[];

void func_0016FA30(void) {
    if ((D_003AC89F[0] == 0) && (D_003AC89D[0] != 0)) {
        func_00170ED0();
    }
}
