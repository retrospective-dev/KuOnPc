#include "common.h"
#include "m2c_macros.h"

extern u8 D_00A61860[];

u8 func_0020EBC0(void) {
    return M2C_FIELD((&D_00A61860[0] + (D_00A61860[0] << 5)), u8 *, 2);
}
