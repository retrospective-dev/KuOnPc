#include "common.h"
#include "kuon_types.h"

s32 func_00220240(void);
extern unsigned char D_0025E4B8;
extern u8 *D_0025E4C0;
void func_00198B80(void) {
    if (D_0025E4C0 == NULL) {
        if (D_0025E4B8 != 1) {
            goto block_3;
        }
    } else {
block_3:
        if (func_00220240() != 0) {
            D_0025E4B8 = 1;
        }
    }
}
