#include "common.h"

s32 * _ItoE_RpcDispatch(s32 arg0, void *arg1);
s32 func_0010D850();
s32 func_001103C0(s32);
s32 func_00110F60(s32 *, s32);
s32 func_00110FF8(s32 *, s32, s32 *(*)(s32, void *), s32 *, s32, s32, s32 *);
s32 func_00111410(s32 *);
extern s32 D_00A3B4A0[];
extern s32 D_00A3B4F0[];
extern s32 D_00A3D740[];

void _ItoE_RpcThread(void) {
    func_001103C0(0);
    func_00110F60(&D_00A3B4F0[0], func_0010D850());
    func_00110FF8(&D_00A3B4A0[0], 0x4020, _ItoE_RpcDispatch, &D_00A3D740[0], 0, 0, &D_00A3B4F0[0]);
    func_00111410(&D_00A3B4F0[0]);
}
