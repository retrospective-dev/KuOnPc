#include "common.h"
#include "kuon_types.h"
#include "m2c_macros.h"

int RtaMngSetMat(unsigned char *pRtaFileBuf, RtaTable *pRtaTable, RtaTable *pRtaTable_parent, RtaData *pRtaData_root, float (*mat)[4], Set_mat_type set_mat_type);
int MngState_DrawExeCheck(Mng_state *pMngState);
extern RtaMng s_RtaMng;
extern u8 D_009BB6E0[];
extern u8 D_009BB7F8[];
extern u32 D_009BC404[];

s32 RtaMngRtaSetMat(u32 data_id, u32 mdl_handle, f32 (*mat)[4], enum Set_mat_type set_mat_type) {
    RtaData *temp_a3;
    u8 *temp_a0;

    if (MngState_DrawExeCheck(&s_RtaMng.mng_state) != 1) {
        return 1;
    }
    if (data_id >= 0x302U) {
        return 0;
    }
    D_009BC404[0] = mdl_handle;
    temp_a3 = (struct RtaData *) (*(s32 *)(&D_009BB7F8[0] + (data_id * 4)));
    if (temp_a3 != NULL) {
        temp_a0 = (unsigned char *) (*(s32 *)(&D_009BB6E0[0] + (temp_a3->rta_id * 4)));
        if ((temp_a0 != NULL) && ((M2C_FIELD(temp_a0, u8 *, 0x1C) & 1) != 1)) {
            RtaMngSetMat(temp_a0, temp_a0 + 0x20, NULL, temp_a3, mat, set_mat_type);
        }
    }
    return 1;
}
