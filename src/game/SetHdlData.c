#include "common.h"
#include "m2c_macros.h"

void RemapHmdData(u8 *arg0);
extern u8 MdlData[];

void SetHdlData(s32 arg0, u8 *arg1) {
    u8 *temp_v1;

    temp_v1 = &MdlData[0] + (arg0 * 0x680);
    if (arg1 != NULL) {
        M2C_FIELD(temp_v1, u8 **, 0x18) = (u8 *) M2C_FIELD(arg1, u8 **, 0x10);
        RemapHmdData(M2C_FIELD(temp_v1, u8 **, 0x18));
    }
}
