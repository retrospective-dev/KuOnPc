#include "common.h"
#include "kuon_types.h"
#include "m2c_macros.h"

int func_001D0890(int hSfx_, float (*mrx_)[4]);
u8 *func_001D46A0(u8 *pSList_, unsigned short hElem_);
unsigned short func_001D47C0(u8 *pSList_, u8 *pData_);
extern u8 *D_0025E574;
s32 func_001BEEF0(s32 hSfx_, MdlMng *pMdlMng_, u16 parts_id_) {
    u16 temp_a1;
    u8 *temp_v0;

    temp_a1 = func_001D47C0(D_0025E574, NULL) & 0xFFFF;
    if (temp_a1 == 0xFFFF) {
        return 0;
    }
    temp_v0 = func_001D46A0(D_0025E574, temp_a1);
    M2C_FIELD(temp_v0, s32 *, 0) = hSfx_;
    M2C_FIELD(temp_v0, MdlMng **, 4) = pMdlMng_;
    M2C_FIELD(temp_v0, u16 *, 8) = parts_id_;
    func_001D0890(hSfx_, pMdlMng_->lpObjMat[parts_id_ & 0xFFFF]);
    return 1;
}
