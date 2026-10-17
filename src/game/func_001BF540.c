#include "common.h"
#include "kuon_types.h"

unsigned int func_0013ADA0(void);
int func_001C2940(unsigned short id_);
int func_001C29A0(unsigned short id_);
void func_001C2AB0(void);
void func_001C3210(float dt_);
int func_001D3640(void);
int func_00209650(void);
extern s32 D_0025E57C;

void func_001BF540(void) {
    u32 temp_s0;

    temp_s0 = func_0013ADA0();
    func_001C29A0(1U);
    func_001D3640();
    func_001C3210(0.0166666f);
    func_001C2AB0();
    func_00209650();
    func_001C2940(1U);
    D_0025E57C += func_0013ADA0() - temp_s0;
}
