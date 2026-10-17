#include "common.h"
#include "kuon_types.h"

void ChangeMyEquipSound(void);
unsigned int SetMyEquip(MdlMng_t *lpMy, int button, int type, int id, int bFreeMdlData);
extern MdlMng_t D_006B90D0[];

void SCR_SetMyEquip(Ss *ss) {
    SetMyEquip(&D_006B90D0[0], ss->arg[0].val, ss->arg[1].val, ss->arg[2].val, 1);
    ChangeMyEquipSound();
    ss->kind = 0;
}
