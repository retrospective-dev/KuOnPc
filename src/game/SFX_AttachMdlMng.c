#include "common.h"
#include "kuon_types.h"
#include "m2c_macros.h"

int SfxMng_AttachMatrix(int hSfx_, float (*mrx_)[4]);
u8 *SList_GetElemPtr(u8 *pSList_, unsigned short hElem_);
unsigned short SList_PushFront(u8 *pSList_, u8 *pData_);
extern u8 *s_pAddDataList;
s32 SFX_AttachMdlMng(s32 hSfx_, MdlMng_t *pMdlMng_, u16 parts_id_) {
    u16 temp_a1;
    u8 *temp_v0;

    temp_a1 = SList_PushFront(s_pAddDataList, NULL) & 0xFFFF;
    if (temp_a1 == 0xFFFF) {
        return 0;
    }
    temp_v0 = SList_GetElemPtr(s_pAddDataList, temp_a1);
    M2C_FIELD(temp_v0, s32 *, 0) = hSfx_;
    M2C_FIELD(temp_v0, MdlMng_t **, 4) = pMdlMng_;
    M2C_FIELD(temp_v0, u16 *, 8) = parts_id_;
    SfxMng_AttachMatrix(hSfx_, pMdlMng_->lpObjMat[parts_id_ & 0xFFFF]);
    return 1;
}
