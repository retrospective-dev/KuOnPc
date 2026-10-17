#include "common.h"
#include "kuon_types.h"

RtaTable *func_0016A450(u8 *pRtaFileBuf, RtaTable *pRtaTable, u32 obj_id) {
    RtaTable *temp_v0;
    RtaTable *temp_v0_2;
    u8 *temp_a1;
    u8 *temp_s0;

    if (pRtaFileBuf == NULL) {
        return NULL;
    }
    if (pRtaTable == NULL) {
        return NULL;
    }
    if (pRtaTable->mdl_obj_id == obj_id) {
        return pRtaTable;
    }
    temp_a1 = &pRtaFileBuf[pRtaTable->child_offset];
    temp_s0 = &pRtaFileBuf[pRtaTable->sibling_offset];
    if (temp_a1 != pRtaFileBuf) {
        temp_v0_2 = func_0016A450(pRtaFileBuf, (RtaTable *) temp_a1, obj_id);
        if (temp_v0_2 != NULL) {
            return temp_v0_2;
        }
    }
    if (temp_s0 != pRtaFileBuf) {
        temp_v0 = func_0016A450(pRtaFileBuf, (RtaTable *) temp_s0, obj_id);
        if (temp_v0 != NULL) {
            return temp_v0;
        }
    }
    return NULL;
}
