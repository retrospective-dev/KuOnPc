#include "common.h"
#include "kuon_types.h"

RtaTable *func_0016A450(unsigned char *pRtaFileBuf, RtaTable *pRtaTable, unsigned int obj_id);
int func_0017E6E0(Mng_state *pMngState);
extern RtaMng D_009BB6C0;
extern u8 D_009BB6E0[];
extern u8 D_009BB7F8[];
extern u32 D_009BC404[];

RtaTable *func_0016A520(u32 data_id, u32 mdl_handle, u32 obj_id) {
    u8 *temp_v0;
    u8 *temp_a0;

    if (func_0017E6E0(&D_009BB6C0.mng_state) != 1) {
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
            return func_0016A450(temp_a0, temp_a0 + 0x20, obj_id);
        }
    }
    return NULL;
}
