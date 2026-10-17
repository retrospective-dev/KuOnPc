#include "common.h"
#include "kuon_types.h"

int func_00147FC0(void);
void func_00148100(int iSdModuleId, u8 *(*psrcFunc)());
int func_00148460(int iModule, int iIsBlock, int iCmd);
s32 * func_001A4760(s32 arg0, u8 *arg1, s32 arg2, s32 *arg3);
s32 func_001A4200(void) {
    if (func_00148460(0xA, 1, 0x10000) == 0) {
        return 0;
    }
    func_00148100(0xA, (u8 *(*)()) func_001A4760);
    func_00147FC0();
    return 1;
}
