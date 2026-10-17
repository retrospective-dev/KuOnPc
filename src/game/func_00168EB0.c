#include "common.h"

void func_00127BE0(void *dst, s32 c, u32 n);
typedef struct 
{
  u8 unk0[0x4];
  u16 unk4;
} Unk_00168EB0;
void FreeGameCamData(s32 arg0);
void MemFree(s32 arg0);
void FreeMapData(s32 arg0);
void FreeAllMyEquipSound(void);
void FreeAllMyEquip(void);
void FreeScript(void);
void FECard_CancelVannishAll(void);
s32 SND_SecRemoveMap(void);
void func_001BEF80(s32 arg0);
extern Unk_00168EB0 *lpSceneLoad;
extern s32 D_0025E3F8;
extern s8 D_003AC899[];
void func_00168EB0(void)
{
  unsigned int new_var;
  FreeMapData(0);
  FreeGameCamData(0);
  MemFree(D_0025E3F8);
  FreeScript();
  FreeAllMyEquip();
  func_001BEF80(1);
  FECard_CancelVannishAll();
  FreeAllMyEquipSound();
  SND_SecRemoveMap();
  D_003AC899[0] = (new_var = (s8) lpSceneLoad->unk4);
}
