#include "common.h"
#include "kuon_types.h"

int CheckEventFlag(int EventFlag);
int KnMsgMng_SendMsgEx(int id, int priority, User_data user_data);
extern u8 D_003AC8A4[];

void ActiS0031Event000(Event *lpEvent) {
    if (lpEvent->State[0] == 0) {
        if (D_003AC8A4[0] != 2) {
            if (CheckEventFlag(0x550) == 0) {
                KnMsgMng_SendMsgEx(0x68FDE, 1, 1);
                KnMsgMng_SendMsgEx(0x68FDF, 1, 0);
                lpEvent->State[0] = 1;
                return;
            }
            KnMsgMng_SendMsgEx(0x68FF7, 1, 0);
            return;
        }
        KnMsgMng_SendMsgEx(0x68FE0, 1, 0);
    }
}
