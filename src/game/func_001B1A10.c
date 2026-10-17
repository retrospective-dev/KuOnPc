#include "common.h"
#include "m2c_macros.h"

void func_00127BE0(void* dst, s32 c, u32 n);
void func_001A3DD0(s32 arg0);
void func_001A3DE0(s32 arg0);
void func_001A3DF0(s32 arg0);
void func_001A3E30(s32 arg0);
void func_001A4050(s32 arg0, s32 arg1);
void func_001A4120(s32 arg0, s32 arg1);
void func_001A4140(s32 arg0);
s32 func_001A4200(void);
void func_001B19F0(void);
void func_001B1A00(void);
extern s32 D_0025E564;
extern s32 D_0025E568;
extern u8 D_00A47780[];

void func_001B1A10(void) {
    s8 *var_a3;
    u32 var_a4;

    func_001A4200();
    func_001A4140(0x1000);
    func_001A4120(0x1E0000, 0x10000);
    func_001A3E30(0x28);
    func_001A3DF0(1);
    func_001A3DE0((s32) func_001B1A00);
    func_001A3DD0((s32) func_001B19F0);
    func_001A4050(0x3FFF, 0x3FFF);
    D_0025E568 = 0x3FFF;
    D_0025E564 = 0x3FFF;
    func_00127BE0(&D_00A47780[0], 0, 0x4E0U);
    var_a4 = 0;
    var_a3 = &D_00A47780[0];
    do {
        if ((var_a4 == 0) || (var_a4 == 5)) {
            M2C_FIELD(var_a3, s8 *, 0x9F) = 2;
        } else {
            M2C_FIELD(var_a3, s8 *, 0x9F) = 1;
        }
        var_a4 += 1;
        var_a3 += 0xD0;
    } while (var_a4 < 6U);
}
