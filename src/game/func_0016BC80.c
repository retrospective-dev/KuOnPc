#include "common.h"
#include "kuon_types.h"
#include "m2c_macros.h"

int func_0016A860(unsigned char *pRtaFileBuf, RtaTable *pRtaTable, RtaTable *pRtaTable_parent, RtaData *pRtaData_root);
int func_0017E700(Mng_state *pMngState);
void func_0017E730(Mng_state *pMngState);
void func_0017E770(Mng_state *pMngState);
extern RtaMng D_009BB6C0;
extern u8 D_009BB6E0[];
extern u8 D_009BB7F8[];
extern u32 D_009BC404[];

s32 func_0016BC80(u32 data_id, u32 mdl_handle) {
    RtaData *temp_a3;
    u8 *temp_a0;

    if (func_0017E700(&D_009BB6C0.mng_state) != 1) {
        return 0;
    }
    if (data_id >= 0x302U) {
        return 0;
    }
    func_0017E770(&D_009BB6C0.mng_state);
    D_009BC404[0] = mdl_handle;
    temp_a3 = (struct RtaData *) (*(s32 *)(&D_009BB7F8[0] + (data_id * 4)));
    if (temp_a3 != NULL) {
        temp_a0 = (unsigned char *) (*(s32 *)(&D_009BB6E0[0] + (temp_a3->rta_id * 4)));
        if ((temp_a0 != NULL) && ((M2C_FIELD(temp_a0, u8 *, 0x1C) & 1) != 1)) {
            func_0016A860(temp_a0, temp_a0 + 0x20, NULL, temp_a3);
        }
    }
    func_0017E730(&D_009BB6C0.mng_state);
    return 1;
}
