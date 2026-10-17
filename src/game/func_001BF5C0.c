#include "common.h"
#include "kuon_types.h"

unsigned int func_0013ADA0(void);
void func_001BDBB0(u8 *pData_);
Ptcl2 *func_001BDED0(void);
Ptcl2 *func_001BDF90(void);
int func_001C2940(unsigned short id_);
int func_001C29A0(unsigned short id_);
extern s32 D_0025E57C;
extern u8 D_0025E580;

void func_001BF5C0(void) {
    Ptcl2 *var_v0;
    u32 temp_s0;

    temp_s0 = func_0013ADA0();
    func_001C29A0(1U);
    if (((u64) ((s64) D_0025E580 << 0x3C) >> 0x3F) != 0) {
        var_v0 = func_001BDF90();
        if (var_v0 != NULL) {
            do {
                func_001BDBB0(var_v0);
                var_v0 = func_001BDED0();
            } while (var_v0 != NULL);
        }
    }
    func_001C2940(1U);
    D_0025E57C = func_0013ADA0() - temp_s0;
}
