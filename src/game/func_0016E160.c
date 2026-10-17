#include "common.h"
#include "kuon_types.h"

void func_00152360(void);
unsigned int func_00152630(MdlMng *lpMy, int button, int type, int id, int bFreeMdlData);
extern MdlMng D_006B90D0[];

void func_0016E160(Ss *ss) {
    func_00152630(&D_006B90D0[0], ss->arg[0].val, ss->arg[1].val, ss->arg[2].val, 1);
    func_00152360();
    ss->kind = 0;
}
