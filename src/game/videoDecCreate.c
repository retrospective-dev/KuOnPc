#include "common.h"
#include "m2c_macros.h"

s32 viBufCreate(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
s32 mpegTS(s32 arg0, u8 *arg1);
s32 mpegRestartDMA(void);
s32 mpegStopDMA(void);
s32 mpegNodata(void);
s32 mpegError(void);
s32 func_0010B768();
s32 func_0010BBC0(u8 *, s32, s32 (*)(), s32);

s32 videoDecCreate(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    func_0010B768();
    func_0010BBC0(arg0, 0, mpegError, 0);
    func_0010BBC0(arg0, 1, mpegNodata, 0);
    func_0010BBC0(arg0, 2, mpegStopDMA, 0);
    func_0010BBC0(arg0, 3, mpegRestartDMA, 0);
    func_0010BBC0(arg0, 5, (s32 (*)()) mpegTS, 0);
    M2C_FIELD(arg0, s32 *, 0xA8) = 0;
    viBufCreate(arg0 + 0x48, arg3, arg4, arg5, arg6, arg7);
    return 1;
}
