#include "common.h"
#include "kuon_types.h"

u8 *func_001D46A0(u8 *pSList_, unsigned short hElem_);
unsigned short func_001D47C0(u8 *pSList_, u8 *pData_);
void func_00209270(Mng *pMng_, Create2 *pParam_);
extern u8 *D_0025E774;
u16 func_00209200(Create2 *pParam_) {
    u16 temp_s0;

    temp_s0 = func_001D47C0(D_0025E774, NULL) & 0xFFFF;
    if (temp_s0 == 0xFFFF) {
        return 0xFFFFU;
    }
    func_00209270(func_001D46A0(D_0025E774, temp_s0), pParam_);
    return temp_s0;
}
