#include "common.h"
#include "kuon_types.h"
#include "m2c_macros.h"

void func_0013D7A0(Pad *lpPadData, unsigned short *stick);
void func_001FE460(void);
extern Pad *D_0025E350[2];
extern Pad *D_0025E354;
extern s8 D_003AC899[];

void func_002002F0(void) {
    u16 sp3E;
    Pad *temp_s0;
    Pad *temp_s1;

    temp_s0 = *D_0025E350;
    temp_s1 = D_0025E354;
    func_0013D7A0(temp_s0, &sp3E);
    func_0013D7A0(temp_s1, &sp3E);
    if ((((u64) ((s64) M2C_FIELD(temp_s0, u8 *, 0x21) << 0x39) >> 0x3F) != 0) || (((u64) ((s64) M2C_FIELD(temp_s1, u8 *, 0x21) << 0x39) >> 0x3F) != 0)) {
        D_003AC899[0] = 0x2F;
        func_001FE460();
    }
}
