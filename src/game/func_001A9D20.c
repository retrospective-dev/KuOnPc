#include "common.h"
#include "kuon_types.h"

void func_001A99D0(MdlMng *lpEne, Ctrl *lpCtrl);
void func_001A9A60(MdlMng *lpEne, Ctrl *lpCtrl);
void func_001A9AE0(MdlMng *lpEne, Ctrl *lpCtrl, unsigned short AnimIndex);
void func_001A9B90(MdlMng *lpEne, Ctrl *lpCtrl);
void func_001A9BE0(void);
void func_001A9BF0(MdlMng *lpEne, Ctrl *lpCtrl);
void func_001A9D20(MdlMng *lpEne, Ctrl *lpCtrl) {
    lpCtrl->func.ActFunc[5] = func_001A9BF0;
    lpCtrl->func.ActFunc[0] = (void (*)(MdlMng *, Ctrl *)) func_001A9BE0;
    lpCtrl->func.ActFunc[4] = func_001A9B90;
    lpCtrl->func.SetActFunc[4] = func_001A9AE0;
    lpCtrl->func.DramaStartFunc = func_001A9A60;
    lpCtrl->func.DramaEndFunc = func_001A99D0;
    lpCtrl->bHitOff = 1;
    lpEne->NoSearched = -1;
    lpCtrl->noDamage = 0xFFFF;
    lpCtrl->AppearTypeAlpha = 1;
}
