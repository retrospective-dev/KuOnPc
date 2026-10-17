#include "common.h"
#include "m2c_macros.h"

s32 func_0019DC30(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
s32 func_0019DE00(s32 arg0, u8 *arg1);
s32 func_0019DE50(void);
s32 func_0019DE80(void);
s32 func_0019DEB0(void);
s32 func_0019DEF0(void);
s32 func_0010B768();
s32 func_0010BBC0(u8 *, s32, s32 (*)(), s32);

s32 func_0019E580(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    func_0010B768();
    func_0010BBC0(arg0, 0, func_0019DEF0, 0);
    func_0010BBC0(arg0, 1, func_0019DEB0, 0);
    func_0010BBC0(arg0, 2, func_0019DE80, 0);
    func_0010BBC0(arg0, 3, func_0019DE50, 0);
    func_0010BBC0(arg0, 5, (s32 (*)()) func_0019DE00, 0);
    M2C_FIELD(arg0, s32 *, 0xA8) = 0;
    func_0019DC30(arg0 + 0x48, arg3, arg4, arg5, arg6, arg7);
    return 1;
}
