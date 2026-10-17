#include "common.h"

void func_001819D0();
void func_00196E30(s32 arg0);
void func_001A8210(void);
extern s32 D_00A3F320[];
extern s32 D_00A3F324[];
extern s32 D_00A3F32C[];
extern s32 D_00A3F330[];

void func_001A8280(s32 arg0) {
    s8 sp20[16];
    s32 var_v0;
    s8 *var_v1;

    var_v0 = 0x10;
    var_v1 = sp20;
    if (var_v1 != NULL) {
        do {
            *var_v1 = 0;
            var_v0 -= 1;
            var_v1 += 1;
        } while (var_v0 != 0);
    }
    func_001819D0(5, sp20, 0x1E, 0, func_001A8210, 0, 0);
    D_00A3F324[0] = arg0;
    D_00A3F320[0] = 1;
    D_00A3F32C[0] = -1;
    D_00A3F330[0] = 0;
    func_00196E30(0);
}
