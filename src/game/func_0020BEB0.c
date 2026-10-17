#include "common.h"
#include "kuon_types.h"

int func_0016C510(int EventFlag);
int func_0017D690(int id, int priority, User_data user_data);
extern u8 D_003AC8A4[];

void func_0020BEB0(Event *lpEvent) {
    if (lpEvent->State[0] == 0) {
        if (D_003AC8A4[0] != 2) {
            if (func_0016C510(0x550) == 0) {
                func_0017D690(0x68FDE, 1, 1);
                func_0017D690(0x68FDF, 1, 0);
                lpEvent->State[0] = 1;
                return;
            }
            func_0017D690(0x68FF7, 1, 0);
            return;
        }
        func_0017D690(0x68FE0, 1, 0);
    }
}
