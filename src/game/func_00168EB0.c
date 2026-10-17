#include "common.h"

void func_00127BE0(void *dst, s32 c, u32 n);
typedef struct 
{
  u8 unk0[0x4];
  u16 unk4;
} Unk_00168EB0;
void func_00132870(s32 arg0);
void func_0014B580(s32 arg0);
void func_0014F4F0(s32 arg0);
void func_001522C0(void);
void func_001523E0(void);
void func_0016FA70(void);
void func_00194C00(void);
s32 func_001AC520(void);
void func_001BEF80(s32 arg0);
extern Unk_00168EB0 *D_0025DFB0;
extern s32 D_0025E3F8;
extern s8 D_003AC899[];
void func_00168EB0(void)
{
  unsigned int new_var;
  func_0014F4F0(0);
  func_00132870(0);
  func_0014B580(D_0025E3F8);
  func_0016FA70();
  func_001523E0();
  func_001BEF80(1);
  func_00194C00();
  func_001522C0();
  func_001AC520();
  D_003AC899[0] = (new_var = (s8) D_0025DFB0->unk4);
}
