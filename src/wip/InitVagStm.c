#include "common.h"
#include "m2c_macros.h"

void func_00127BE0(void* dst, s32 c, u32 n);
void fssdivagSetPlayEndCallBack(s32 arg0);
void fssdivagSetPlayStartCallBack(s32 arg0);
void fssdivagSetDmaChannel(s32 arg0);
void fssdivagSetCoreVoice(s32 arg0);
void fssdivagSetMasterVolume(s32 arg0, s32 arg1);
void fssdivagSetSpuMemory(s32 arg0, s32 arg1);
void fssdivagSetPacket(s32 arg0);
s32 fssdivagInit(void);
void VagStmEndCallBack(void);
void VagStmStartCallBack(void);
extern s32 VoiceVol;
extern s32 BgmVol;
extern u8 VagStmMng[];

void InitVagStm(void) {
    s8 *var_a3;
    u32 var_a4;

    fssdivagInit();
    fssdivagSetPacket(0x1000);
    fssdivagSetSpuMemory(0x1E0000, 0x10000);
    fssdivagSetCoreVoice(0x28);
    fssdivagSetDmaChannel(1);
    fssdivagSetPlayStartCallBack((s32) VagStmStartCallBack);
    fssdivagSetPlayEndCallBack((s32) VagStmEndCallBack);
    fssdivagSetMasterVolume(0x3FFF, 0x3FFF);
    BgmVol = 0x3FFF;
    VoiceVol = 0x3FFF;
    func_00127BE0(&VagStmMng[0], 0, 0x4E0U);
    var_a4 = 0;
    var_a3 = &VagStmMng[0];
    do {
        if ((var_a4 == 0) || (var_a4 == 5)) {
            M2C_FIELD(var_a3, s8 *, 0x9F) = 2;
        } else {
            M2C_FIELD(var_a3, s8 *, 0x9F) = 1;
        }
        var_a4 += 1;
        var_a3 += 0xD0;
    } while (var_a4 < 6U);
}
