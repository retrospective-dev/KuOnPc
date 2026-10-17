#include "common.h"
#include "m2c_macros.h"

u8 GetMyWeaponId(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 0x148), u8 *, 0x1AD);
}
