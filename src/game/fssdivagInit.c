#include "common.h"
#include "kuon_types.h"

int fssdRequireIopToEeRpc(void);
void fssdRegister(int iSdModuleId, u8 *(*psrcFunc)());
int fssdCallRpcVoid(int iModule, int iIsBlock, int iCmd);
s32 * _IopToEeRpcDispatch(s32 arg0, u8 *arg1, s32 arg2, s32 *arg3);
s32 fssdivagInit(void) {
    if (fssdCallRpcVoid(0xA, 1, 0x10000) == 0) {
        return 0;
    }
    fssdRegister(0xA, (u8 *(*)()) _IopToEeRpcDispatch);
    fssdRequireIopToEeRpc();
    return 1;
}
