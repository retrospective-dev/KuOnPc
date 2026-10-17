#include "common.h"
#include "kuon_types.h"

u8 *SList_GetElemPtr(u8 *pSList_, unsigned short hElem_);
unsigned short SList_PushFront(u8 *pSList_, u8 *pData_);
void _InitMng(Mng *pMng_, Create2 *pParam_);
extern u8 *s_pMngObjList;
u16 SfxBugs_Create(Create2 *pParam_) {
    u16 temp_s0;

    temp_s0 = SList_PushFront(s_pMngObjList, NULL) & 0xFFFF;
    if (temp_s0 == 0xFFFF) {
        return 0xFFFFU;
    }
    _InitMng(SList_GetElemPtr(s_pMngObjList, temp_s0), pParam_);
    return temp_s0;
}
