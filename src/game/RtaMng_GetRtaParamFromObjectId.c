#include "common.h"
#include "kuon_types.h"

RtaTable *RtaMng_GetRtaParamFromObjectId_R(unsigned char *pRtaFileBuf, RtaTable *pRtaTable, unsigned int obj_id);
int MngState_DrawExeCheck(Mng_state *pMngState);
extern RtaMng s_RtaMng;
extern u8 D_009BB6E0[];
extern u8 D_009BB7F8[];
extern u32 D_009BC404[];

RtaTable *RtaMng_GetRtaParamFromObjectId(u32 data_id, u32 mdl_handle, u32 obj_id) {
    u8 *temp_v0;
    u8 *temp_a0;

    if (MngState_DrawExeCheck(&s_RtaMng.mng_state) != 1) {
        return NULL;
    }
    if (data_id >= 0x302U) {
        return NULL;
    }
    D_009BC404[0] = mdl_handle;
    temp_v0 = (unsigned char *) (*(s32 *)(&D_009BB7F8[0] + (data_id * 4)));
    if (temp_v0 != NULL) {
        temp_a0 = (unsigned char *) (*(s32 *)(&D_009BB6E0[0] + (*(s32 *)temp_v0 * 4)));
        if (temp_a0 != NULL) {
            return RtaMng_GetRtaParamFromObjectId_R(temp_a0, temp_a0 + 0x20, obj_id);
        }
    }
    return NULL;
}
