#include "common.h"

void func_00127BE0(void *dst, s32 c, u32 n);
typedef unsigned long long u128_t;
enum Ccmd
{
  C_CD_SEARCHFILE = 1330200857,
  C_IOCTL2 = 1330200856,
  C_DEVCTL = 1330200855,
  C_UMOUNT = 1330200854,
  C_MOUNT = 1330200853,
  C_FORMAT = 1330200852,
  C_SYNC = 1330200851,
  C_DREAD = 1330200850,
  C_DCLOSE = 1330200849,
  C_DOPEN = 1330200848,
  C_RMDIR = 1330200847,
  C_MKDIR = 1330200846,
  C_CHDIR = 1330200845,
  C_SYMLINK = 1330200844,
  C_READLINK = 1330200843,
  C_REMOVE = 1330200842,
  C_RENAME = 1330200841,
  C_GETSTAT = 1330200840,
  C_CHSTAT = 1330200839,
  C_LSEEK64 = 1330200838,
  C_LSEEK = 1330200837,
  C_WRITE = 1330200836,
  C_READ = 1330200835,
  C_CLOSE = 1330200834,
  C_OPEN = 1330200833,
  C_NONE = 1330200832
};
typedef enum Ccmd Ccmd;
enum Blend_type
{
  U_ITEM__RENDER_BREND_TYPE__DECAL = 1313164547,
  U_ITEM__RENDER_BREND_TYPE__SUB = 1313164546,
  U_ITEM__RENDER_BREND_TYPE__ADD = 1313164545,
  U_ITEM__RENDER_BREND_TYPE__ALPHA = 1313164544
};
typedef enum Blend_type Blend_type;
enum Cmd
{
  ERB_CMD_VOLCHANGE = 1447383554,
  ERB_CMD_TYPECHANGE = 1447383553,
  ERB_CMD_NONE = 1447383552
};
typedef enum Cmd Cmd;
enum Cng_type
{
  U_RELOAD_MAP_CHANGE_TYPE_UG = 1313164550,
  U_RELOAD_MAP_CHANGE_TYPE_L = 1313164549,
  U_RELOAD_MAP_CHANGE_TYPE_RIGHT = 1313164548,
  U_RELOAD_MAP_CHANGE_TYPE_LEFT = 1313164547,
  U_RELOAD_MAP_CHANGE_TYPE_DOWN = 1313164546,
  U_RELOAD_MAP_CHANGE_TYPE_UP = 1313164545,
  U_RELOAD_MAP_CHANGE_TYPE_NOW = 1313164544
};
typedef enum Cng_type Cng_type;
enum State_order
{
  U_CTRL_MNG__MENU_CTRL_STATE__EXEC_DUMMY = 1313164556,
  U_CTRL_MNG__MENU_CTRL_STATE__EXEC_TERMINATE = 1313164555,
  U_CTRL_MNG__MENU_CTRL_STATE__EXEC_END_TERMINATE = 1313164554,
  U_CTRL_MNG__MENU_CTRL_STATE__EXEC_END = 1313164553,
  U_CTRL_MNG__MENU_CTRL_STATE__EXEC_END_INIT = 1313164552,
  U_CTRL_MNG__MENU_CTRL_STATE__EXEC_WAIT_TERMINATE = 1313164551,
  U_CTRL_MNG__MENU_CTRL_STATE__EXEC_WAIT = 1313164550,
  U_CTRL_MNG__MENU_CTRL_STATE__EXEC_WAIT_INIT = 1313164549,
  U_CTRL_MNG__MENU_CTRL_STATE__EXEC_START_TERMINATE = 1313164548,
  U_CTRL_MNG__MENU_CTRL_STATE__EXEC_START = 1313164547,
  U_CTRL_MNG__MENU_CTRL_STATE__EXEC_START_INIT = 1313164546,
  U_CTRL_MNG__MENU_CTRL_STATE__EXEC_INIT = 1313164545,
  U_CTRL_MNG__MENU_CTRL_STATE__NONE = 1313164544
};
typedef enum State_order State_order;
enum Data_type
{
  U_ITEM_DATA_TYPE_PAGE = 1313164551,
  U_ITEM_DATA_TYPE_DOC = 1313164550,
  U_ITEM_DATA_TYPE_NUM = 1313164549,
  U_ITEM_DATA_TYPE_TEX = 1313164548,
  U_ITEM_DATA_TYPE_NOTE = 1313164547,
  U_ITEM_DATA_TYPE_NAME = 1313164546,
  U_ITEM_DATA_TYPE_ID = 1313164545
};
typedef enum Data_type Data_type;
enum Enum_1
{
  ype_ERR = 1413631235,
  ype_DB2 = 1413631234,
  ype_DB1 = 1413631233,
  ype_SB = 1413631232
};
typedef enum Enum_1 Enum_1;
enum Enum_12
{
  _REVERB_HANDLE_MAX = 1145983752,
  _REVERB_RESERV7 = 1145983751,
  _REVERB_RESERV6 = 1145983750,
  _REVERB_RESERV5 = 1145983749,
  _REVERB_PAUSE1 = 1145983748,
  _REVERB_PAUSE0 = 1145983747,
  _REVERB_SECORE1 = 1145983746,
  _REVERB_SECORE0 = 1145983745,
  _REVERB_SQSONG = 1145983744
};
typedef enum Enum_12 Enum_12;
enum Execute
{
  ANSBANK_EXECUTE_SETHSYN = 1381261066,
  ANSBANK_EXECUTE_FREEDIVMEMORY = 1381261065,
  ANSBANK_EXECUTE_VOICETRANSSTATUS = 1381261064,
  ANSBANK_EXECUTE_DIVTRANSBD_TRANSIOPTOSPU2 = 1381261063,
  ANSBANK_EXECUTE_DIVTRANSBD_TRANSEETOIOPSTAT = 1381261062,
  ANSBANK_EXECUTE_DIVTRANSBD_TRANSEETOIOP = 1381261061,
  ANSBANK_EXECUTE_DIVTRANSBD_VOICETRANSSTATUS = 1381261060,
  ANSBANK_EXECUTE_DIVTRANSBD = 1381261059,
  ANSBANK_EXECUTE_MAKEMONOHD = 1381261058,
  ANSBANK_EXECUTE_SYNCTRANSHD = 1381261057,
  ANSBANK_EXECUTE_TRANSHD = 1381261056
};
typedef enum Execute Execute;
enum Fade2
{
  _SQSONG_FADE_STATE_QUO = 1145983747,
  _SQSONG_FADE_IN = 1145983746,
  _SQSONG_FADE_OUT_STATE_QUO = 1145983745,
  _SQSONG_FADE_OUT = 1145983744
};
typedef enum Fade2 Fade2;
enum SndMode
{
  _MODE_MAX = 1145983747,
  _MODE_SURROUND = 1145983746,
  _MODE_STEREO = 1145983745,
  _MODE_MONO = 1145983744
};
typedef enum SndMode SndMode;
enum Id
{
  U_DIALOG_RESULT__NUM = 1313164548,
  U_DIALOG_RESULT__PAGE_CHECK = 1313164547,
  U_DIALOG_RESULT__MEMOCA = 1313164546,
  U_DIALOG_RESULT__GENE2 = 1313164545,
  U_DIALOG_RESULT__GENE1 = 1313164544
};
typedef enum Id Id;
enum State
{
  U_ITEM_MNG__MENU_ITEM_STATE__EXEC_DUMMY = 1313164556,
  U_ITEM_MNG__MENU_ITEM_STATE__EXEC_TERMINATE = 1313164555,
  U_ITEM_MNG__MENU_ITEM_STATE__EXEC_END_OUT = 1313164554,
  U_ITEM_MNG__MENU_ITEM_STATE__EXEC_END = 1313164553,
  U_ITEM_MNG__MENU_ITEM_STATE__EXEC_END_IN = 1313164552,
  U_ITEM_MNG__MENU_ITEM_STATE__EXEC_WAIT_OUT = 1313164551,
  U_ITEM_MNG__MENU_ITEM_STATE__EXEC_WAIT = 1313164550,
  U_ITEM_MNG__MENU_ITEM_STATE__EXEC_WAIT_IN = 1313164549,
  U_ITEM_MNG__MENU_ITEM_STATE__EXEC_START_OUT = 1313164548,
  U_ITEM_MNG__MENU_ITEM_STATE__EXEC_START = 1313164547,
  U_ITEM_MNG__MENU_ITEM_STATE__EXEC_START_IN = 1313164546,
  U_ITEM_MNG__MENU_ITEM_STATE__EXEC_INIT = 1313164545,
  U_ITEM_MNG__MENU_ITEM_STATE__NONE = 1313164544
};
typedef enum State State;
enum Key_type
{
  U__KEY_TTPE__DUMMY = 1313164560,
  U__KEY_TYPE__DIALOG_CANCEL = 1313164559,
  U__KEY_TYPE__DIALOG_OK = 1313164558,
  U__KEY_TYPE__CALL_END_SAVE_MENU = 1313164557,
  U__KEY_TYPE__CALL_SET_MENU = 1313164556,
  U__KEY_TYPE__CALL_ITEM_MENU = 1313164555,
  U__KEY_TYPE__CALL_MAP_MENU = 1313164554,
  U__KEY_TYPE__CALL_LOAD_MENU = 1313164553,
  U__KEY_TYPE__CALL_SAVE_MENU = 1313164552,
  U__KEY_TYPE__CALL_MAIN_MENU = 1313164551,
  U__KEY_TYPE__OPTION = 1313164550,
  U__KEY_TYPE__RIGHT = 1313164549,
  U__KEY_TYPE__LEFT = 1313164548,
  U__KEY_TYPE__DOWN = 1313164547,
  U__KEY_TYPE__UP = 1313164546,
  U__KEY_TYPE__CANCEL = 1313164545,
  U__KEY_TYPE__DECIDE = 1313164544
};
typedef enum Key_type Key_type;
enum Menu_id
{
  ON_MENU__DMY_MENU = 1430979559,
  ON_MENU__MAKE_GAME = 1430978662,
  ON_MENU__MAKE_TITLE = 1430978661,
  ON_MENU__MAKE_NONE = 1430978660,
  ON_MENU__MENU_NUM = 1430978572,
  ON_MENU__DEAD_MENU = 1430978571,
  ON_MENU__END_SAVE_MENU = 1430978570,
  ON_MENU__SET_MENU = 1430978569,
  ON_MENU__MSG_MENU = 1430978568,
  ON_MENU__ITEM_MENU = 1430978567,
  ON_MENU__MAP_MENU = 1430978566,
  ON_MENU__LOAD_MENU = 1430978565,
  ON_MENU__SAVE_MENU = 1430978564,
  ON_MENU__MAIN_MENU = 1430978563,
  ON_MENU__START_MENU = 1430978562,
  ON_MENU__TITLE_MENU = 1430978561,
  ON_MENU__TEST_MENU = 1430978560
};
typedef enum Menu_id Menu_id;
enum State2
{
  _MNG__MSG_STATE__LIST = 1196641542,
  _MNG__MSG_STATE__EXEC_TERMINATE = 1196641541,
  _MNG__MSG_STATE__EXEC_END = 1196641540,
  _MNG__MSG_STATE__EXEC_WAIT = 1196641539,
  _MNG__MSG_STATE__EXEC_INIT = 1196641538,
  _MNG__MSG_STATE__EXEC_START = 1196641537,
  _MNG__MSG_STATE__NONE = 1196641536
};
typedef enum State2 State2;
enum Type
{
  T_MNG__LIST_TYPE__MAX = 1397312516,
  T_MNG__LIST_TYPE__PRIORITY_QUEUE = 1397312515,
  T_MNG__LIST_TYPE__QUEUE = 1397312514,
  T_MNG__LIST_TYPE__STACK = 1397312513,
  T_MNG__LIST_TYPE__NONE = 1397312512
};
typedef enum Type Type;
enum Load_flag
{
  ON_MENU_RELOAD_FLAG_TITLE = 1431011328,
  ON_MENU_RELOAD_FLAG_GAME = 1430994944,
  ON_MENU_RELOAD_FLAG_DOC = 1430986752,
  ON_MENU_RELOAD_FLAG_MM_END = 1430982656,
  ON_MENU_RELOAD_FLAG_MM_SET = 1430980608,
  ON_MENU_RELOAD_FLAG_MM_MAP = 1430979584,
  ON_MENU_RELOAD_FLAG_MM_BOOK = 1430979072,
  ON_MENU_RELOAD_FLAG_MM_ITEM = 1430978816,
  ON_MENU_RELOAD_FLAG_MM_EQUIP = 1430978688,
  ON_MENU_RELOAD_FLAG_MM_TOP = 1430978624,
  ON_MENU_RELOAD_FLAG_DEAD = 1430978592,
  ON_MENU_RELOAD_FLAG_LOAD = 1430978576,
  ON_MENU_RELOAD_FLAG_SAVE = 1430978568,
  ON_MENU_RELOAD_FLAG_MAIN = 1430978564,
  ON_MENU_RELOAD_FLAG_START = 1430978562,
  ON_MENU_RELOAD_FLAG_TITLE_ = 1430978561,
  ON_MENU_RELOAD_FLAG_NONE = 1430978560
};
typedef enum Load_flag Load_flag;
enum MapTex_SorL
{
  U_RELOAD_MAP_TYPE__FREE = 1313164546,
  U_RELOAD_MAP_TYPE__LMAP = 1313164545,
  U_RELOAD_MAP_TYPE__SMAP = 1313164544
};
typedef enum MapTex_SorL MapTex_SorL;
enum State3
{
  U_ID_STATE__TERMINATE = 1313164560,
  U_TD_STATE__PLAY_END_END = 1313164559,
  U_TD_STATE__PLAY_END = 1313164558,
  U_TD_STATE__PLAY_END_IN = 1313164557,
  U_TD_STATE__PLAY_CHANGE_OUT = 1313164556,
  U_TD_STATE__PLAY_CHANGE_UP = 1313164555,
  U_TD_STATE__PLAY_CHANGE_DOWN = 1313164554,
  U_TD_STATE__PLAY_CHANGE_IN = 1313164553,
  U_TD_STATE__PLAY_WAIT_OUT = 1313164552,
  U_TD_STATE__PLAY_WAIT = 1313164551,
  U_TD_STATE__PLAY_WAIT_IN = 1313164550,
  U_TD_STATE__PLAY_START_OUT = 1313164549,
  U_TD_STATE__PLAY_START = 1313164548,
  U_TD_STATE__PLAY_START_IN = 1313164547,
  U_ID_STATE__INIT = 1313164546,
  U_TD_STATE__WAIT = 1313164545,
  U_TD_STATE__NONE = 1313164544
};
typedef enum State3 State3;
enum Mode
{
  ONT_MODE_MAX = 1179862532,
  ONT_MODE_FFMD = 1179862531,
  ONT_MODE_DMAOVERDRAW = 1179862530,
  ONT_MODE_CONTEXT = 1179862529,
  ONT_MODE_TRANS = 1179862528
};
typedef enum Mode Mode;
enum Now_equip_button
{
  U_EQUIP_BUTTON_BATU = 1313164799,
  U_EQUIP_BUTTON_MARU = 1313164546,
  U_EQUIP_BUTTON_SANKAKU = 1313164545,
  U_EQUIP_BUTTON_SIKAKU = 1313164544
};
typedef enum Now_equip_button Now_equip_button;
enum Order
{
  _MENU__UDDRAW_ORDER__OFF_FORCE = 1347245058,
  _MENU__UDDRAW_ORDER__OFF = 1347245057,
  _MENU__UDDRAW_ORDER__ON = 1347245056
};
typedef enum Order Order;
enum Port
{
  N_PORT_MAX = 1498630160,
  N_PORT_SE_11 = 1498630159,
  N_PORT_SE_10 = 1498630158,
  N_PORT_SE_9 = 1498630157,
  N_PORT_SE_8 = 1498630156,
  N_PORT_SE_7 = 1498630155,
  N_PORT_SE_6 = 1498630154,
  N_PORT_SE_5 = 1498630153,
  N_PORT_SE_4 = 1498630152,
  N_PORT_SE_3 = 1498630151,
  N_PORT_SE_2 = 1498630150,
  N_PORT_SE_1 = 1498630149,
  N_PORT_SE_0 = 1498630148,
  N_PORT_SQBGM3 = 1498630147,
  N_PORT_SQBGM2 = 1498630146,
  N_PORT_SQBGM1 = 1498630145,
  N_PORT_SQBGM = 1498630144
};
typedef enum Port Port;
enum PrepareStatus
{
  EPARE_STATUS_END = 1380998920,
  EPARE_STATUS_ADDSQ3_SYNC = 1380998919,
  EPARE_STATUS_ADDSQ3 = 1380998918,
  EPARE_STATUS_ADDSQ2_SYNC = 1380998917,
  EPARE_STATUS_ADDSQ2 = 1380998916,
  EPARE_STATUS_ADDSQ1_SYNC = 1380998915,
  EPARE_STATUS_ADDSQ1 = 1380998914,
  EPARE_STATUS_ADDSQ = 1380998913,
  EPARE_STATUS_BANKSYNC = 1380998912
};
typedef enum PrepareStatus PrepareStatus;
enum RollOffType
{
  _ROLLOFF_MAX = 1145983747,
  _ROLLOFF_SQAREDISTANCE = 1145983746,
  _ROLLOFF_MINDISTANCE = 1145983745,
  _ROLLOFF_LINEAR = 1145983744
};
typedef enum RollOffType RollOffType;
enum S_ctrler_state
{
  DT_RIGHT = 1397968132,
  DT_LEFT = 1397968131,
  DT_DOWN = 1397968130,
  DT_UP = 1397968129,
  DT_NONE = 1397968128
};
typedef enum S_ctrler_state S_ctrler_state;
enum S_go_ttl_state
{
  U_GOTO_TITLE_STATE__END = 1313164547,
  U_GOTO_TITLE_STATE__CHECK = 1313164546,
  U_GOTO_TITLE_STATE__CHECK_IN = 1313164545,
  U_GOTO_TITLE_STATE__WAIT = 1313164544
};
typedef enum S_go_ttl_state S_go_ttl_state;
enum S_memoca_decide_state_order
{
  U_MEMOCA_DECIDE_STATE__CANCEL = 1313164590,
  U_MEMOCA_DECIDE_STATE__CANCEL_IN = 1313164589,
  U_MEMOCA_DECIDE_STATE__END = 1313164588,
  U_MEMOCA_DECIDE_STATE__END_IN = 1313164587,
  U_MEMOCA_DECIDE_STATE__END_WAIT = 1313164586,
  U_MEMOCA_DECIDE_STATE__END_WAIT_IN = 1313164585,
  U_MEMOCA_DECIDE_STATE__SAVELOAD_ADVANCE_IMPOSSIBLE_US = 1313164584,
  U_MEMOCA_DECIDE_STATE__SAVELOAD_ADVANCE_IMPOSSIBLE_US_IN = 1313164583,
  U_MEMOCA_DECIDE_STATE__FIXED_FAILE_AFTER_ADVANCE_IMPOSSIBLE_MC = 1313164582,
  U_MEMOCA_DECIDE_STATE__FIXED_FAILE_AFTER_ADVANCE_IMPOSSIBLE_MC_IN = 1313164581,
  U_MEMOCA_DECIDE_STATE__SAVELOAD_FAILE_FIXED_MSG_US = 1313164580,
  U_MEMOCA_DECIDE_STATE__SAVELOAD_FAILE_FIXED_MSG_US_IN = 1313164579,
  U_MEMOCA_DECIDE_STATE__SAVELOAD_FAILE_US = 1313164578,
  U_MEMOCA_DECIDE_STATE__SAVELOAD_FAILE_US_IN = 1313164577,
  U_MEMOCA_DECIDE_STATE__LOAD_LOAD_END_CHECK_US = 1313164576,
  U_MEMOCA_DECIDE_STATE__LOAD_LOAD_END_CHECK_US_IN = 1313164575,
  U_MEMOCA_DECIDE_STATE__LOAD_LOAD_MC = 1313164574,
  U_MEMOCA_DECIDE_STATE__LOAD_LOAD_MC_IN = 1313164573,
  U_MEMOCA_DECIDE_STATE__LOAD_LISTLOAD_CHECK_MC = 1313164572,
  U_MEMOCA_DECIDE_STATE__LOAD_LISTLOAD_CHECK_MC_IN = 1313164571,
  U_MEMOCA_DECIDE_STATE__LOAD_DATA_CHECK_US = 1313164570,
  U_MEMOCA_DECIDE_STATE__LOAD_DATA_CHECK_US_IN = 1313164569,
  U_MEMOCA_DECIDE_STATE__LOAD_UPDATE_LOAD_CHECK_US = 1313164568,
  U_MEMOCA_DECIDE_STATE__LOAD_UPDATE_LOAD_CHECK_US_IN = 1313164567,
  U_MEMOCA_DECIDE_STATE__PLAY_LOAD = 1313164566,
  U_MEMOCA_DECIDE_STATE__PLAY_LOAD_IN = 1313164565,
  U_MEMOCA_DECIDE_STATE__SAVE_SAVE_END_CHECK_US = 1313164564,
  U_MEMOCA_DECIDE_STATE__SAVE_SAVE_END_CHECK_US_IN = 1313164563,
  U_MEMOCA_DECIDE_STATE__SAVE_SAVE_MC = 1313164562,
  U_MEMOCA_DECIDE_STATE__SAVE_SAVE_MC_IN = 1313164561,
  U_MEMOCA_DECIDE_STATE__SAVE_UPDATE_SAVE_CHECK_US = 1313164560,
  U_MEMOCA_DECIDE_STATE__SAVE_UPDATE_SAVE_CHECK_US_IN = 1313164559,
  U_MEMOCA_DECIDE_STATE__END_SAVE_SAVE_MC = 1313164558,
  U_MEMOCA_DECIDE_STATE__END_SAVE_SAVE_MC_IN = 1313164557,
  U_MEMOCA_DECIDE_STATE__END_SAVE_UPDATE_SAVE_CHECK_US = 1313164556,
  U_MEMOCA_DECIDE_STATE__END_SAVE_UPDATE_SAVE_CHECK_US_IN = 1313164555,
  U_MEMOCA_DECIDE_STATE__SAVE_FORMAT_OK_CHECK_MC = 1313164554,
  U_MEMOCA_DECIDE_STATE__SAVE_FORMAT_OK_CHECK_MC_IN = 1313164553,
  U_MEMOCA_DECIDE_STATE__SAVE_FORMAT_PLAY_CHECK_US = 1313164552,
  U_MEMOCA_DECIDE_STATE__SAVE_FORMAT_PLAY_CHECK_US_IN = 1313164551,
  U_MEMOCA_DECIDE_STATE__SAVE_UNFORMAT_CHECK_MC = 1313164550,
  U_MEMOCA_DECIDE_STATE__SAVE_UNFORMAT_CHECK_MC_IN = 1313164549,
  U_MEMOCA_DECIDE_STATE__SAVE_LISTLOAD_CHECK_MC = 1313164548,
  U_MEMOCA_DECIDE_STATE__SAVE_LISTLOAD_CHECK_MC_IN = 1313164547,
  U_MEMOCA_DECIDE_STATE__PLAY_SAVE = 1313164546,
  U_MEMOCA_DECIDE_STATE__PLAY_SAVE_IN = 1313164545,
  U_MEMOCA_DECIDE_STATE__NOTHING = 1313164544,
  U_MEMOCA_DECIDE_STATE__DMY = 1313164799
};
typedef enum S_memoca_decide_state_order S_memoca_decide_state_order;
enum S_memoca_real_time_check_state
{
  U_MEMOCA_REAL_TIME_CHECK_STATE_WAIT = 1313164556,
  U_MEMOCA_REAL_TIME_CHECK_STATE_END_SAVE = 1313164555,
  U_MEMOCA_REAL_TIME_CHECK_STATE_END_CHECK = 1313164554,
  U_MEMOCA_REAL_TIME_CHECK_STATE_END_CHECK_IN = 1313164553,
  U_MEMOCA_REAL_TIME_CHECK_STATE_DECIDE_OK = 1313164552,
  U_MEMOCA_REAL_TIME_CHECK_STATE_DECIDE_WAIT = 1313164551,
  U_MEMOCA_REAL_TIME_CHECK_STATE_TOGGLE_CHECK = 1313164550,
  U_MEMOCA_REAL_TIME_CHECK_STATE_TOGGLE_CHECK_IN = 1313164549,
  U_MEMOCA_REAL_TIME_CHECK_STATE_TOGGLE_CHECK_IN_FRONT = 1313164548,
  U_MEMOCA_REAL_TIME_CHECK_STATE_INIT = 1313164547,
  U_MEMOCA_REAL_TIME_CHECK_STATE_FIRST1 = 1313164546,
  U_MEMOCA_REAL_TIME_CHECK_STATE_FIRST0 = 1313164545,
  U_MEMOCA_REAL_TIME_CHECK_STATE_FIRST_IN = 1313164544
};
typedef enum S_memoca_real_time_check_state S_memoca_real_time_check_state;
enum S_memoca_state
{
  U_MEMOCA_STATE_11 = 1313164548,
  U_MEMOCA_STATE_01 = 1313164547,
  U_MEMOCA_STATE_10 = 1313164546,
  U_MEMOCA_STATE_00 = 1313164545,
  U_MEMOCA_STATE_NONE = 1313164544
};
typedef enum S_memoca_state S_memoca_state;
enum S_memoca_state_msg_id
{
  MMC_SM__CHECKING = 1598901330,
  MMC_SM__SLOT2_EXTRACTED = 1598881821,
  MMC_SM__SLOT1_EXTRACTED = 1598881820,
  MMC_SM__SLOT12_NONE = 1598881817,
  MMC_SM__SLOT12_LACKING = 1598881816,
  MMC_SM__SLOT2_LACKING = 1598881815,
  MMC_SM__SLOT1_LACKING = 1598881814,
  MMC_SM__END_GAME = 1598881813,
  MMC_SM__DAMAGE = 1598881812,
  MMC_SM__NOT_DATA = 1598881811,
  MMC_SM__LOAD_FAILE = 1598881810,
  MMC_SM__LOAD_OK = 1598881809,
  MMC_SM__LOAD_NOW = 1598881808,
  MMC_SM__LOAD_ON = 1598881807,
  MMC_SM__LACKING = 1598881806,
  MMC_SM__SAVE_FAILE = 1598881805,
  MMC_SM__SAVE_OK = 1598881804,
  MMC_SM__NOT_GUARANTEED = 1598881803,
  MMC_SM__SAVE_NOW = 1598881802,
  MMC_SM__OVERWRITTEN = 1598881801,
  MMC_SM__SAVE_ON = 1598881800,
  MMC_SM__FOMAT_FAILE = 1598881799,
  MMC_SM__END_FORMAT = 1598881798,
  MMC_SM__FORMAT_NOW = 1598881797,
  MMC_SM__NON_FORMAT = 1598881796,
  MMC_SM__EXTRACTED_ = 1598881795,
  MMC_SM__CHECKING_ = 1598881794,
  MMC_SM__SLOT2_NONE = 1598881793,
  MMC_SM__SLOT1_NONE = 1598881792,
  MMC_SM__OK = 1598947327,
  MMC_SM__ERR = 1598947326
};
typedef enum S_memoca_state_msg_id S_memoca_state_msg_id;
enum SeKind
{
  KIND_MAX = 1598378764,
  KIND_11 = 1598378763,
  KIND_10 = 1598378762,
  KIND_9 = 1598378761,
  KIND_8 = 1598378760,
  KIND_7 = 1598378759,
  KIND_6 = 1598378758,
  KIND_5 = 1598378757,
  KIND_4 = 1598378756,
  KIND_3 = 1598378755,
  KIND_2 = 1598378754,
  KIND_1 = 1598378753,
  KIND_0 = 1598378752
};
typedef enum SeKind SeKind;
enum Set_mat_type
{
  _MNG__SET_MAT_TYPE__INIT = 1096045057,
  _MNG__SET_MAT_TYPE__NOW = 1096045056
};
typedef enum Set_mat_type Set_mat_type;
enum SndVolume
{
  _VOLKIND_MAX = 1145983748,
  _VOLKIND_SE = 1145983747,
  _VOLKIND_SQ = 1145983746,
  _VOLKIND_BGM = 1145983745,
  _VOLKIND_MASTER = 1145983744
};
typedef enum SndVolume SndVolume;
enum Status
{
  D_SYNTH_TRANSBANK_ERROR = 1397966338,
  D_SYNTH_TRANSBANK_FINISH = 1397966337,
  D_SYNTH_TRANSBANK_EXECUTE = 1397966336
};
typedef enum Status Status;
enum Tex_type
{
  U_CNGTEX_TYPE__BOOK__16 = 1313164620,
  U_CNGTEX_TYPE__BOOK__15 = 1313164619,
  U_CNGTEX_TYPE__BOOK__14 = 1313164618,
  U_CNGTEX_TYPE__BOOK__13 = 1313164617,
  U_CNGTEX_TYPE__BOOK__12 = 1313164616,
  U_CNGTEX_TYPE__BOOK__11 = 1313164615,
  U_CNGTEX_TYPE__BOOK__10 = 1313164614,
  U_CNGTEX_TYPE__BOOK__09 = 1313164613,
  U_CNGTEX_TYPE__BOOK__08 = 1313164612,
  U_CNGTEX_TYPE__BOOK__07 = 1313164611,
  U_CNGTEX_TYPE__BOOK__06 = 1313164610,
  U_CNGTEX_TYPE__BOOK__05 = 1313164609,
  U_CNGTEX_TYPE__BOOK__04 = 1313164608,
  U_CNGTEX_TYPE__BOOK__03 = 1313164607,
  U_CNGTEX_TYPE__BOOK__02 = 1313164606,
  U_CNGTEX_TYPE__BOOK__01 = 1313164605,
  U_CNGTEX_TYPE__ITEM__16 = 1313164600,
  U_CNGTEX_TYPE__ITEM__15 = 1313164599,
  U_CNGTEX_TYPE__ITEM__14 = 1313164598,
  U_CNGTEX_TYPE__ITEM__13 = 1313164597,
  U_CNGTEX_TYPE__ITEM__12 = 1313164596,
  U_CNGTEX_TYPE__ITEM__11 = 1313164595,
  U_CNGTEX_TYPE__ITEM__10 = 1313164594,
  U_CNGTEX_TYPE__ITEM__09 = 1313164593,
  U_CNGTEX_TYPE__ITEM__08 = 1313164592,
  U_CNGTEX_TYPE__ITEM__07 = 1313164591,
  U_CNGTEX_TYPE__ITEM__06 = 1313164590,
  U_CNGTEX_TYPE__ITEM__05 = 1313164589,
  U_CNGTEX_TYPE__ITEM__04 = 1313164588,
  U_CNGTEX_TYPE__ITEM__03 = 1313164587,
  U_CNGTEX_TYPE__ITEM__02 = 1313164586,
  U_CNGTEX_TYPE__ITEM__01 = 1313164585,
  U_CNGTEX_TYPE__EQUIP__16 = 1313164580,
  U_CNGTEX_TYPE__EQUIP__15 = 1313164579,
  U_CNGTEX_TYPE__EQUIP__14 = 1313164578,
  U_CNGTEX_TYPE__EQUIP__13 = 1313164577,
  U_CNGTEX_TYPE__EQUIP__12 = 1313164576,
  U_CNGTEX_TYPE__EQUIP__11 = 1313164575,
  U_CNGTEX_TYPE__EQUIP__10 = 1313164574,
  U_CNGTEX_TYPE__EQUIP__09 = 1313164573,
  U_CNGTEX_TYPE__EQUIP__08 = 1313164572,
  U_CNGTEX_TYPE__EQUIP__07 = 1313164571,
  U_CNGTEX_TYPE__EQUIP__06 = 1313164570,
  U_CNGTEX_TYPE__EQUIP__05 = 1313164569,
  U_CNGTEX_TYPE__EQUIP__04 = 1313164568,
  U_CNGTEX_TYPE__EQUIP__03 = 1313164567,
  U_CNGTEX_TYPE__EQUIP__02 = 1313164566,
  U_CNGTEX_TYPE__EQUIP__01 = 1313164565,
  U_CNGTEX_TYPE__GET_ITEM2 = 1313164559,
  U_CNGTEX_TYPE__EQUIP_CANCEL2 = 1313164558,
  U_CNGTEX_TYPE__GET_ITEM = 1313164557,
  U_CNGTEX_TYPE__EQUIP_CANCEL = 1313164556,
  U_CNGTEX_TYPE__BOOK_PAGE = 1313164555,
  U_CNGTEX_TYPE__BOOK_DOC = 1313164554,
  U_CNGTEX_TYPE__EQUIP_FU = 1313164553,
  U_CNGTEX_TYPE__EQUIP_BUKI = 1313164552,
  U_CNGTEX_TYPE__EQUIP_FU3 = 1313164551,
  U_CNGTEX_TYPE__EQUIP_FU2 = 1313164550,
  U_CNGTEX_TYPE__EQUIP_FU1 = 1313164549,
  U_CNGTEX_TYPE__BOOK = 1313164548,
  U_CNGTEX_TYPE__ITEM = 1313164547,
  U_CNGTEX_TYPE__EQUIP = 1313164546,
  U_CNGTEX_TYPE__HPBAR = 1313164545
};
typedef enum Tex_type Tex_type;
enum Tgt
{
  _ENETHK_TGT_SELF = 1212633857,
  _ENETHK_TGT_ENE = 1212633856
};
typedef enum Tgt Tgt;
enum Type2
{
  U_DIALOG_CALL__NO_PAD = 1313164545
};
typedef enum Type2 Type2;
enum Type_type
{
  E_TYPE__MAX = 1348031501,
  E_TYPE__BOOL = 1348031500,
  E_TYPE__FVECTOR = 1348031499,
  E_TYPE__Q128 = 1348031498,
  E_TYPE__U128 = 1348031497,
  E_TYPE__U64 = 1348031496,
  E_TYPE__U32 = 1348031495,
  E_TYPE__U16 = 1348031494,
  E_TYPE__U8 = 1348031493,
  E_TYPE__F32 = 1348031492,
  E_TYPE__S64 = 1348031491,
  E_TYPE__S32 = 1348031490,
  E_TYPE__S16 = 1348031489,
  E_TYPE__S8 = 1348031488
};
typedef enum Type_type Type_type;
enum Udlr
{
  U_UDLR_TYPE__RIGHT = 1313164548,
  U_UDLR_TYPE__LEFT = 1313164547,
  U_UDLR_TYPE__DOWN = 1313164546,
  U_UDLR_TYPE__UP = 1313164545
};
typedef enum Udlr Udlr;
enum User_data
{
  ON_MSG__USER_DATA__15 = 1431011328,
  ON_MSG__USER_DATA__14 = 1430994944,
  ON_MSG__USER_DATA__13 = 1430986752,
  ON_MSG__USER_DATA__12 = 1430982656,
  ON_MSG__USER_DATA__11 = 1430980608,
  ON_MSG__USER_DATA__10 = 1430979584,
  ON_MSG__USER_DATA__09 = 1430979072,
  ON_MSG__USER_DATA__08 = 1430978816,
  ON_MSG__USER_DATA__07 = 1430978688,
  ON_MSG__USER_DATA__06 = 1430978624,
  ON_MSG__USER_DATA__05 = 1430978592,
  ON_MSG__USER_DATA__VOICE_ON = 1430978576,
  ON_MSG__USER_DATA__SET_ARG_ID3 = 1430978568,
  ON_MSG__USER_DATA__SET_MDL_ANIM_ID_END_PLAY = 1430978564,
  ON_MSG__USER_DATA__SET_MDL_ANIM_ID_START_PLAY = 1430978562,
  ON_MSG__USER_DATA__PLAYER_RESTART_OFF = 1430978561
};
typedef enum User_data User_data;
enum XYZ_ENUM
{
  W = 50354690,
  Y = 16799744
};
typedef enum XYZ_ENUM XYZ_ENUM;
typedef struct Act Act;
typedef struct Actlist Actlist;
typedef struct Add_data Add_data;
typedef struct Aio Aio;
typedef struct AllBindInfo AllBindInfo;
typedef struct AllocMng AllocMng;
typedef struct Alpha Alpha;
typedef struct AlphaBlend AlphaBlend;
typedef struct AngData0 AngData0;
typedef struct AniHead AniHead;
typedef struct AnimCtrl AnimCtrl;
typedef struct Anim_arrange Anim_arrange;
typedef struct Menu_ctrl_anim_flag Menu_ctrl_anim_flag;
typedef struct AnimList AnimList;
typedef struct AnimeInfo AnimeInfo;
typedef struct Attach Attach;
typedef struct Attack Attack;
typedef struct B B;
typedef struct B2 B2;
typedef struct B3 B3;
typedef struct Param2 Param2;
typedef struct BankInfo BankInfo;
typedef struct Bgcolor Bgcolor;
typedef struct BindHead BindHead;
typedef struct Bit Bit;
typedef struct Bit_flag Bit_flag;
typedef struct Bitbltbuf Bitbltbuf;
typedef struct Blast Blast;
typedef struct Blink Blink;
typedef struct Block Block;
typedef struct BlockAry BlockAry;
typedef struct BloodControlMng BloodControlMng;
typedef struct Bmp Bmp;
typedef struct Book Book;
typedef struct BoundBox BoundBox;
typedef struct Buddhist Buddhist;
typedef struct Bug Bug;
typedef union Button Button;
typedef struct CCM CCM;
typedef struct CamHead CamHead;
typedef struct CamInfo CamInfo;
typedef struct CamPath CamPath;
typedef struct CdRMode CdRMode;
typedef struct Cdlfile Cdlfile;
typedef struct Cdvd Cdvd;
typedef struct Chcr Chcr;
typedef struct ChVif1 ChVif1;
typedef struct Child Child;
typedef struct ChunkHead ChunkHead;
typedef struct Rgbaq Rgbaq;
typedef struct Prim Prim;
typedef struct Test1 Test1;
typedef struct Xyz2a Xyz2a;
typedef struct Clear0 Clear0;
typedef struct Colclamp Colclamp;
typedef struct Color Color;
typedef struct CommonParam CommonParam;
typedef struct Create Create;
typedef struct Create2 Create2;
typedef struct Key Key;
typedef struct Func Func;
typedef struct Ctrl Ctrl;
typedef struct CtrlGS CtrlGS;
typedef struct CurOT CurOT;
typedef struct CursorInfo CursorInfo;
typedef struct Cylinder Cylinder;
typedef struct D_stat D_stat;
typedef struct Damage Damage;
typedef struct DarkFilterMng DarkFilterMng;
typedef struct Data Data;
typedef struct Data2 Data2;
typedef struct Scissor1 Scissor1;
typedef struct Prmodecont Prmodecont;
typedef struct Zbuf1 Zbuf1;
typedef struct Xyoffset1 Xyoffset1;
typedef struct Frame1 Frame1;
typedef struct Dthe Dthe;
typedef struct Draw0 Draw0;
typedef struct Giftag0 Giftag0;
typedef struct Display Display;
typedef struct Smode2 Smode2;
typedef struct Pmode Pmode;
typedef struct Dispfb Dispfb;
typedef struct Disp Disp;
typedef struct DbBuf DbBuf;
typedef struct DizzyEffect DizzyEffect;
typedef struct GlareInfo GlareInfo;
typedef struct TexScroll TexScroll;
typedef struct DebugParam DebugParam;
typedef struct DebugSystem DebugSystem;
typedef struct Dice Dice;
typedef struct DieAnimeInfo DieAnimeInfo;
typedef struct DiffuseTexture DiffuseTexture;
typedef struct DizzyMng DizzyMng;
typedef struct DizzyWorm DizzyWorm;
typedef struct DmgPrm DmgPrm;
typedef struct DmyPath DmyPath;
typedef struct DmyPoly DmyPoly;
typedef struct DramaCut DramaCut;
typedef struct DramaDataInfo DramaDataInfo;
typedef struct DramaHead DramaHead;
typedef struct DramaMng DramaMng;
typedef struct DrawMng DrawMng;
typedef struct DrawRegs DrawRegs;
typedef struct Flag2 Flag2;
typedef struct Dsc Dsc;
typedef struct DssAnim DssAnim;
typedef struct DssData DssData;
typedef struct DssDmg DssDmg;
typedef struct DssFlg DssFlg;
typedef struct DssHead DssHead;
typedef struct DssPlay DssPlay;
typedef struct DssSfx DssSfx;
typedef struct DssSnd DssSnd;
typedef struct EmtrExDat EmtrExDat;
typedef union Emtr_state Emtr_state;
typedef struct EneData EneData;
typedef struct EneExtGeneEventData EneExtGeneEventData;
typedef struct EnePrm EnePrm;
typedef struct EneSave EneSave;
typedef struct Equip Equip;
typedef struct Mng_state Mng_state;
typedef struct EtcEventMng EtcEventMng;
typedef struct Event Event;
typedef struct EventData EventData;
typedef struct Ext_data Ext_data;
typedef struct Ext_data2 Ext_data2;
typedef struct Ext_data3 Ext_data3;
typedef struct Ext_data4 Ext_data4;
typedef struct Ext_data5 Ext_data5;
typedef union FEnable FEnable;
typedef struct Fade Fade;
typedef struct FadeMng FadeMng;
typedef struct FileHeader FileHeader;
typedef struct Finish Finish;
typedef struct FixParam FixParam;
typedef struct Fix_param Fix_param;
typedef struct Fix_param10 Fix_param10;
typedef struct Fix_param11 Fix_param11;
typedef struct Fix_param12 Fix_param12;
typedef struct Fix_param13 Fix_param13;
typedef struct Fix_param14 Fix_param14;
typedef struct Fix_param15 Fix_param15;
typedef struct Fix_param16 Fix_param16;
typedef struct Fix_param17 Fix_param17;
typedef struct Fix_param18 Fix_param18;
typedef struct Fix_param19 Fix_param19;
typedef struct Fix_param2 Fix_param2;
typedef struct Fix_param20 Fix_param20;
typedef struct Fix_param21 Fix_param21;
typedef struct Fix_param22 Fix_param22;
typedef struct Fix_param23 Fix_param23;
typedef struct Fix_param24 Fix_param24;
typedef struct Fix_param25 Fix_param25;
typedef struct Fix_param3 Fix_param3;
typedef struct Fix_param4 Fix_param4;
typedef struct Fix_param5 Fix_param5;
typedef struct Fix_param6 Fix_param6;
typedef struct Fix_param7 Fix_param7;
typedef struct Fix_param8 Fix_param8;
typedef struct Fix_param9 Fix_param9;
typedef struct Flag Flag;
typedef struct Flag3 Flag3;
typedef struct Flag4 Flag4;
typedef struct Flags Flags;
typedef struct Flags2 Flags2;
typedef struct Flags3 Flags3;
typedef struct Flchk Flchk;
typedef struct Flicker Flicker;
typedef struct FontCol FontCol;
typedef struct FovData0 FovData0;
typedef struct FrameCam FrameCam;
typedef struct FrameEtc FrameEtc;
typedef struct FrameHead FrameHead;
typedef struct FrameMdl FrameMdl;
typedef struct Free Free;
typedef struct Func2 Func2;
typedef struct FuncTable FuncTable;
typedef struct FuncTable2 FuncTable2;
typedef struct GDice GDice;
typedef struct Map Map;
typedef struct GEnemyData GEnemyData;
typedef struct GHitLine GHitLine;
typedef struct GKomaInfo GKomaInfo;
typedef struct Maplist Maplist;
typedef struct GMainTblMap GMainTblMap;
typedef struct SqSong SqSong;
typedef struct Listener Listener;
typedef struct Param3 Param3;
typedef struct G_pSndMng G_pSndMng;
typedef struct G_voice G_voice;
typedef struct GameOverMng GameOverMng;
typedef struct GameSt GameSt;
typedef struct Glyph Glyph;
typedef struct GmInfo GmInfo;
typedef struct GodShelf GodShelf;
typedef struct Trxpos Trxpos;
typedef struct Trxdir Trxdir;
typedef struct Trxreg Trxreg;
typedef struct Gs_simage Gs_simage;
typedef struct Head Head;
typedef struct HeadParam HeadParam;
typedef struct Header Header;
typedef struct Header2 Header2;
typedef struct Header_data_flag Header_data_flag;
typedef struct Header_data_flag2 Header_data_flag2;
typedef struct HitInfo HitInfo;
typedef struct HitResult HitResult;
typedef struct HmdHead HmdHead;
typedef struct Position Position;
typedef struct HmdObj HmdObj;
typedef struct Node Node;
typedef struct HmdPrim HmdPrim;
typedef struct LineBox LineBox;
typedef struct HmdPrimList HmdPrimList;
typedef struct IconSys IconSys;
typedef struct Index Index;
typedef struct Info Info;
typedef struct InnerShadow InnerShadow;
typedef struct Item Item;
typedef struct ItemGS ItemGS;
typedef struct JcnFileHead JcnFileHead;
typedef struct JconData JconData;
typedef struct JconHead JconHead;
typedef struct KMM_Data KMM_Data;
typedef struct Key2 Key2;
typedef struct KeyTop KeyTop;
typedef struct Store_data Store_data;
typedef struct KnMenuMng KnMenuMng;
typedef struct KnMenuModelMng KnMenuModelMng;
typedef struct KnMenuWindMng KnMenuWindMng;
typedef struct Msg_data_flag Msg_data_flag;
typedef struct Msg_data Msg_data;
typedef struct ListMng ListMng;
typedef struct MsgMng MsgMng;
typedef struct MsgFileMng MsgFileMng;
typedef struct KnMsgMng KnMsgMng;
typedef struct Krdp Krdp;
typedef struct Li Li;
typedef struct LightAnim LightAnim;
typedef struct LightDir LightDir;
typedef struct LightObject LightObject;
typedef struct LightVec LightVec;
typedef struct LineHit LineHit;
typedef struct Link Link;
typedef struct LinkData LinkData;
typedef struct List List;
typedef struct List2 List2;
typedef struct List3 List3;
typedef struct LodVertex LodVertex;
typedef struct LogObj LogObj;
typedef struct MCMNG MCMNG;
typedef struct MCMng MCMng;
typedef struct MGDieAnimFuncTbl MGDieAnimFuncTbl;
typedef struct MGProcsts MGProcsts;
typedef struct MapData MapData;
typedef struct MapFuncTable MapFuncTable;
typedef struct MapHead MapHead;
typedef struct MapHit MapHit;
typedef struct MapInfo MapInfo;
typedef struct MapSe MapSe;
typedef struct MapSfx MapSfx;
typedef struct Material Material;
typedef struct Material2 Material2;
typedef struct MaterialParam MaterialParam;
typedef struct Matrix Matrix;
typedef struct MdlData MdlData;
typedef struct MdlInfo MdlInfo;
typedef struct MdlLink MdlLink;
typedef struct Target Target;
typedef struct MdlMng MdlMng;
typedef struct MemocaMng MemocaMng;
typedef struct MenuCtrlData MenuCtrlData;
typedef struct MenuCtrlFileHeader MenuCtrlFileHeader;
typedef struct MenuCtrlMng MenuCtrlMng;
typedef struct Menu_ctrl_param_flag Menu_ctrl_param_flag;
typedef struct MenuCtrlParam MenuCtrlParam;
typedef struct Menu_ctrl_tex_param_flag Menu_ctrl_tex_param_flag;
typedef struct MenuCtrlTexParam MenuCtrlTexParam;
typedef struct Menu_ctrl_texlist_param_flag Menu_ctrl_texlist_param_flag;
typedef struct MenuCtrlTexlistParam MenuCtrlTexlistParam;
typedef struct MenuData MenuData;
typedef struct MenuFileHeader MenuFileHeader;
typedef union Variable Variable;
typedef struct MenuItemData MenuItemData;
typedef struct Wait_flag Wait_flag;
typedef struct MenuItemMng MenuItemMng;
typedef struct Mip_gene_flag Mip_gene_flag;
typedef struct MenuItemParam MenuItemParam;
typedef struct Mmid_flag Mmid_flag;
typedef struct MenuMapIconData MenuMapIconData;
typedef struct Mmii_flag Mmii_flag;
typedef struct MenuMapIconInfo MenuMapIconInfo;
typedef struct MenuMng MenuMng;
typedef struct Menu_param_flag Menu_param_flag;
typedef struct MenuParam MenuParam;
typedef struct MenuTdMng MenuTdMng;
typedef struct Mi2Head Mi2Head;
typedef struct Mi3Head Mi3Head;
typedef struct Mi3Index Mi3Index;
typedef struct Mi3Obj Mi3Obj;
typedef struct MicHead MicHead;
typedef struct MimeData MimeData;
typedef struct MimeData2 MimeData2;
typedef struct Mmidh_flag Mmidh_flag;
typedef struct Mng Mng;
typedef struct Next Next;
typedef struct Mng2 Mng2;
typedef struct Mng3 Mng3;
typedef struct ModelBlurMng ModelBlurMng;
typedef struct MorphChanData MorphChanData;
typedef struct MorphMng MorphMng;
typedef struct MorphTargetMng MorphTargetMng;
typedef struct MoviePlay MoviePlay;
typedef struct MyCtrl MyCtrl;
typedef struct Normal Normal;
typedef struct NowPath NowPath;
typedef struct Wind Wind;
typedef struct Obj Obj;
typedef struct Obj2 Obj2;
typedef struct ObjData ObjData;
typedef struct ObjParam ObjParam;
typedef struct ObjReserve ObjReserve;
typedef struct Offset Offset;
typedef struct Offset2 Offset2;
typedef struct OldScroll OldScroll;
typedef struct OldParam OldParam;
typedef struct Repeat_state Repeat_state;
typedef struct Press Press;
typedef struct Pad Pad;
typedef struct Sdp Sdp;
typedef struct PADMNG PADMNG;
typedef struct PMObject PMObject;
typedef struct PMPrim PMPrim;
typedef struct PackP PackP;
typedef struct PadCurInfo PadCurInfo;
typedef struct PadInfo PadInfo;
typedef struct PadVib PadVib;
typedef struct PadVibPlan PadVibPlan;
typedef struct Param Param;
typedef struct Param_offset Param_offset;
typedef struct Params Params;
typedef struct Parts Parts;
typedef struct PathData1 PathData1;
typedef struct PathMng PathMng;
typedef struct Pb Pb;
typedef struct PeepCamera PeepCamera;
typedef struct PeepCameraInfo PeepCameraInfo;
typedef struct Pelorus Pelorus;
typedef struct PlayerHit PlayerHit;
typedef struct PlayerInfo PlayerInfo;
typedef struct PointLightMng PointLightMng;
typedef struct PosData0 PosData0;
typedef struct Prev Prev;
typedef struct PrimHead PrimHead;
typedef struct Prm_dmc Prm_dmc;
typedef struct Prm_stt Prm_stt;
typedef struct Ptcl Ptcl;
typedef struct Ptcl2 Ptcl2;
typedef struct PtclExDat PtclExDat;
typedef struct PtclExDat2 PtclExDat2;
typedef struct Ptcl_data Ptcl_data;
typedef struct Rect Rect;
typedef struct RegsData RegsData;
typedef struct RemapInfo RemapInfo;
typedef struct Reverb Reverb;
typedef struct RhrFileHeader RhrFileHeader;
typedef struct RiddleMng RiddleMng;
typedef struct Rpcd Rpcd;
typedef struct RtaData RtaData;
typedef struct RtaFileHeader RtaFileHeader;
typedef struct RtaMng RtaMng;
typedef struct Rta_param Rta_param;
typedef struct Table_data_flag Table_data_flag;
typedef struct RtaTable RtaTable;
typedef struct Rtc Rtc;
typedef struct Rv Rv;
typedef struct Rvp Rvp;
typedef struct Ss Ss;
typedef struct SCR SCR;
typedef struct SCurrentP SCurrentP;
typedef struct SMemMng SMemMng;
typedef struct SPInfo SPInfo;
typedef struct SState SState;
typedef struct S_aCardFuncs S_aCardFuncs;
typedef struct S_aCircleVertices S_aCircleVertices;
typedef struct S_aFade S_aFade;
typedef struct S_aItemData S_aItemData;
typedef struct S_aItemNum S_aItemNum;
typedef struct S_aSeGroup S_aSeGroup;
typedef struct S_dbgmsg S_dbgmsg;
typedef struct Sep Sep;
typedef struct Sqp Sqp;
typedef struct S_esmData S_esmData;
typedef struct S_fire_attach S_fire_attach;
typedef struct Setting Setting;
typedef struct S_mng S_mng;
typedef struct S_mngp S_mngp;
typedef struct S_msg_buf S_msg_buf;
typedef struct S_pFileInfo S_pFileInfo;
typedef struct S_pMenuMapIconDataHeader S_pMenuMapIconDataHeader;
typedef struct Work_mng Work_mng;
typedef struct S_pSfxMng S_pSfxMng;
typedef struct S_pSysInfo S_pSysInfo;
typedef struct S_params S_params;
typedef struct S_qdIopToEeRpc S_qdIopToEeRpc;
typedef union S_rndr_stt S_rndr_stt;
typedef struct S_scdRpc S_scdRpc;
typedef struct S_sddSeTrans S_sddSeTrans;
typedef struct S_sdiData S_sdiData;
typedef struct SfxPrm SfxPrm;
typedef struct S_setting S_setting;
typedef union S_states S_states;
typedef struct S_svpBuf S_svpBuf;
typedef struct S_tex_id_table S_tex_id_table;
typedef struct S_vibration_act S_vibration_act;
typedef struct SandEffectMng SandEffectMng;
typedef struct SaveData SaveData;
typedef struct SaveDataHeader SaveDataHeader;
typedef struct SaveEvent SaveEvent;
typedef struct SaveSys SaveSys;
typedef struct SceneLoad SceneLoad;
typedef struct SeData SeData;
typedef struct SeData2 SeData2;
typedef struct SecHead SecHead;
typedef struct SeqParam SeqParam;
typedef struct Sequence Sequence;
typedef struct Sfx Sfx;
typedef struct SfxData SfxData;
typedef struct SfxSetting SfxSetting;
typedef struct Sfx_data Sfx_data;
typedef struct Sfx_data10 Sfx_data10;
typedef struct Sfx_data11 Sfx_data11;
typedef struct Sfx_data12 Sfx_data12;
typedef struct Sfx_data2 Sfx_data2;
typedef struct Sfx_data3 Sfx_data3;
typedef struct Sfx_data4 Sfx_data4;
typedef struct Sfx_data5 Sfx_data5;
typedef struct Sfx_data6 Sfx_data6;
typedef struct Sfx_data7 Sfx_data7;
typedef struct Sfx_data8 Sfx_data8;
typedef struct Sfx_data9 Sfx_data9;
typedef struct Sfx_state Sfx_state;
typedef struct ShadowPos ShadowPos;
typedef struct Sibling Sibling;
typedef struct Tex1 Tex1;
typedef struct Tex0 Tex0;
typedef struct Sp Sp;
typedef struct Sp2 Sp2;
typedef struct SpecVec SpecVec;
typedef struct Spr Spr;
typedef struct Sprite Sprite;
typedef struct StainMng StainMng;
typedef struct StartFrame StartFrame;
typedef struct StmMng StmMng;
typedef struct Stream Stream;
typedef struct Struct_10 Struct_10;
typedef struct Struct_102 Struct_102;
typedef struct Struct_144 Struct_144;
typedef struct Struct_20 Struct_20;
typedef struct Struct_202 Struct_202;
typedef struct Struct_203 Struct_203;
typedef struct Struct_30 Struct_30;
typedef struct Struct_302 Struct_302;
typedef struct Struct_4 Struct_4;
typedef struct Struct_60 Struct_60;
typedef struct Struct_8 Struct_8;
typedef struct TVEffectMng TVEffectMng;
typedef struct TVFlash TVFlash;
typedef struct TVNoise TVNoise;
typedef struct TVSwitch TVSwitch;
typedef struct Table Table;
typedef struct Tadr Tadr;
typedef struct Tex02 Tex02;
typedef struct Tex03 Tex03;
typedef struct Tex04 Tex04;
typedef struct Tex12 Tex12;
typedef struct Tex13 Tex13;
typedef struct Tex14 Tex14;
typedef struct TexCoord TexCoord;
typedef struct TexEffectMng TexEffectMng;
typedef struct TexMng TexMng;
typedef struct TexPosInfo TexPosInfo;
typedef struct TexScrollMng TexScrollMng;
typedef struct Texinfo Texinfo;
typedef struct Thp Thp;
typedef struct TitleMessageInfo TitleMessageInfo;
typedef struct TitleMng TitleMng;
typedef struct Tm2 Tm2;
typedef struct Tm2Head Tm2Head;
typedef union Tmp Tmp;
typedef struct TmpMenuMng TmpMenuMng;
typedef struct Tod Tod;
typedef struct TodData TodData;
typedef struct TodData2 TodData2;
typedef struct Tp Tp;
typedef struct TracerObj TracerObj;
typedef struct TransBank TransBank;
typedef struct Tree Tree;
typedef struct TreeReserve TreeReserve;
typedef struct VagInfo VagInfo;
typedef struct VagMng VagMng;
typedef struct VagParam VagParam;
typedef struct Vert Vert;
typedef struct Vertex Vertex;
typedef struct Vib Vib;
typedef struct VmdHead VmdHead;
typedef struct VmdObj VmdObj;
typedef struct Voice Voice;
typedef struct VolSet VolSet;
typedef struct VramMng VramMng;
typedef struct Wall Wall;
typedef struct WaterCameraInfo WaterCameraInfo;
typedef struct WaterInfo WaterInfo;
typedef struct WaterMng WaterMng;
typedef struct Wnd Wnd;
typedef struct Work_buff Work_buff;
struct Act
{
  unsigned char spots;
  unsigned char komaID;
};
struct Actlist
{
  Act act[2];
};
struct Add_data
{
  MdlMng *pCreater;
};
struct Aio
{
  char name0[256];
  char name1[256];
  char buf[4096];
  int a[8];
  long al;
  Ccmd ccmd;
  Ccmd lcmd;
  int result;
};
struct AllBindInfo
{
  char filename[128];
  unsigned int lsn;
  unsigned int size;
  unsigned int hash;
};
struct AllocMng
{
  unsigned char bUse;
  unsigned char bFree;
  unsigned short no;
  unsigned int addr;
  unsigned int addrB;
  unsigned int size;
  AllocMng *prev;
  AllocMng *next;
  char *lpfuncname;
};
struct Alpha
{
  unsigned int A : 2;
  unsigned int B : 2;
  unsigned int C : 2;
  unsigned int D : 2;
  unsigned int pad8 : 24;
  unsigned int FIX : 8;
  unsigned int pad40 : 24;
};
struct AlphaBlend
{
  Alpha Alpha;
  unsigned char Abe;
  unsigned char Pabe;
  unsigned char Pad0[2];
};
struct AngData0
{
  unsigned short key;
  unsigned short nframe;
  unsigned short key_no;
  unsigned short unused1;
  unsigned int unused2[2];
  float local_ang[4];
  float ang_intan[4];
  float ang_outtan[4];
};
struct AniHead
{
  unsigned int Signature;
  unsigned int Flag;
  unsigned int Version;
  int ChunkNum;
  ChunkHead *lpChunkTable;
};
struct AnimCtrl
{
  float NumFrame;
  float PrevFrame;
  float StartFrame;
  float EndFrame;
  float MaxFrame;
  float HokanFrame;
  int ObjId;
  float AnimSpeed;
  unsigned int ObjGroup;
  unsigned int Flag;
  unsigned char Loop;
  unsigned char ClothJoint;
  short State;
  Mi3Head *lpMi3Head;
  Mi3Obj *lpMi3Obj;
  float (*lpVector)[3];
  Tod *lpTod;
  float Pos[4];
  float Ang[4];
  float Scl[4];
  float UserScl[4];
  float LocalMat[4][4];
  AnimCtrl *lpParent;
  AnimCtrl *lpChild;
  AnimCtrl *lpSibling;
  float (*lpHokanFunc)();
};
struct Anim_arrange
{
  int pos_x;
  int pos_y;
  int size_w;
  int size_h;
  int col_r;
  int col_g;
  int col_b;
  int col_a;
};
struct Menu_ctrl_anim_flag
{
  unsigned int relative_pos_x : 1;
  unsigned int relative_pos_y : 1;
  unsigned int relative_size_x : 1;
  unsigned int relative_size_y : 1;
  unsigned int relative_cal_r : 1;
  unsigned int relative_cal_g : 1;
  unsigned int relative_cal_b : 1;
  unsigned int relative_cal_a : 1;
  unsigned int reserve : 24;
};
struct AnimList
{
  int id;
  int anim_type;
  int frame_num;
  float rate;
  Menu_ctrl_anim_flag menu_ctrl_anim_flag;
  int next_anim_id;
  int next_anim_play_num;
  int wait_through;
  Anim_arrange anim_arrange;
};
struct AnimeInfo
{
  unsigned char IndexAnim;
  float height;
  float move_speed;
  float frame_num;
  float tilt;
  float freq_ang;
  float amp_rate;
  float start_pos[4];
  float end_pos[4];
  float tilt_z;
  unsigned char key_count;
  unsigned char num;
  char direction;
};
struct Attach
{
  unsigned short sfx_idx;
  short skip;
  u128_t fParts;
};
struct Attack
{
  unsigned int power;
  unsigned char per;
  unsigned char clingAt;
  unsigned char pushAt;
  unsigned char blowAt;
  unsigned short ang;
  unsigned short angCorrect;
  unsigned short area[2];
  unsigned char finish;
  unsigned char damageID;
  unsigned short waitTime;
  unsigned char pullAt;
  unsigned char pauseAt;
  unsigned char recover;
  unsigned char fire;
  unsigned char perframe;
  unsigned char disnodamage;
  unsigned char blastAt;
  unsigned char unused1[13];
};
struct B
{
  unsigned int cframe : 20;
  unsigned int phase : 12;
};
struct B2
{
  unsigned int initialized : 1;
  unsigned int play : 1;
  unsigned int step : 1;
  unsigned int draw : 1;
  unsigned int dmy : 28;
};
struct B3
{
  unsigned int bZTest : 1;
  unsigned int blend_type : 2;
  unsigned int tex_mode : 2;
  unsigned int bUseTex : 1;
  unsigned int prim_type : 4;
  unsigned int bUseST : 1;
  unsigned int bFog : 1;
  unsigned int texwrap_mode : 2;
  unsigned int dmy : 18;
  unsigned int rgba : 32;
};
struct Param2
{
  unsigned short usFreq;
  unsigned char ucLoop;
  char cDmy[1];
};
struct BankInfo
{
  unsigned int uiProgNum;
  char cDmy[12];
  Param2 aParam[128];
};
struct Bgcolor
{
  unsigned int R : 8;
  unsigned int G : 8;
  unsigned int B : 8;
  unsigned int p0 : 8;
  unsigned int p1;
};
struct BindHead
{
  char appname[4];
  unsigned int version;
  unsigned int filesize;
  unsigned int filenum;
};
struct Bit
{
  unsigned short select : 1;
  unsigned short L3 : 1;
  unsigned short R3 : 1;
  unsigned short start : 1;
  unsigned short Lup : 1;
  unsigned short Lright : 1;
  unsigned short Ldown : 1;
  unsigned short Lleft : 1;
  unsigned short L2 : 1;
  unsigned short R2 : 1;
  unsigned short L1 : 1;
  unsigned short R1 : 1;
  unsigned short Rup : 1;
  unsigned short Rdown : 1;
  unsigned short Rright : 1;
  unsigned short Rleft : 1;
};
struct Bit_flag
{
  unsigned short disable_draw : 1;
  unsigned short disable_draw_by_map : 1;
  unsigned short disable_act : 1;
  unsigned short disable_act_by_map : 1;
  unsigned short draw_stage : 4;
  unsigned short unused : 8;
};
struct Bitbltbuf
{
  unsigned long SBP : 14;
  unsigned long pad14 : 2;
  unsigned long SBW : 6;
  unsigned long pad22 : 2;
  unsigned long SPSM : 6;
  unsigned long pad30 : 2;
  unsigned long DBP : 14;
  unsigned long pad46 : 2;
  unsigned long DBW : 6;
  unsigned long pad54 : 2;
  unsigned long DPSM : 6;
  unsigned long pad62 : 2;
};
struct Blast
{
  unsigned char bUse;
  unsigned char Dizzy;
  unsigned short HeartAdd;
  float Frame;
  float MaxFrame;
  float Power;
  float Dir[4];
};
struct Blink
{
  float freq;
  float range;
  float progress;
  float prev_ratio;
  float next_ratio;
  char dmy[12];
};
struct Block
{
  unsigned int low;
  unsigned int high;
  unsigned int iGlyph;
};
struct BlockAry
{
  int begin;
  int low;
  int high;
};
struct BloodControlMng
{
  short x;
  short y;
  short w;
  short h;
  float Ang;
  float Acc;
};
struct Bmp
{
  void *hd_iopp;
  void *hd_m_iopp;
  void *bd_iopp;
  void *bd_spup;
  int hd_size;
  int bd_size;
  short hsyn_port;
  char ch;
  char bank;
  unsigned int stereo;
  int iNum;
};
struct Book
{
  unsigned char have : 1;
  unsigned char dmy : 5;
  unsigned char read : 1;
  unsigned char got : 1;
};
struct BoundBox
{
  short AveVertex[3];
  short AveRadius;
  short MinMaxVertex[2][3];
};
struct Buddhist
{
  unsigned char WoodBoard[3];
  unsigned char NowCur;
  unsigned char CurState[3];
  unsigned char MsgState;
  unsigned char NailNum;
  unsigned char SilkWormNum;
  unsigned char CrowNum;
  unsigned char BrokenNum;
};
struct Bug
{
  float pos_x;
  float pos_y;
  float pos_z;
  unsigned int move_ptn;
  float life_curr;
  float life_max;
};
union Button
{
  Bit bit;
  unsigned short set;
};
struct CCM
{
  unsigned int version;
  unsigned int size;
  short fontHeight;
  short texWidth;
  short texHeight;
  short bpp;
  short nBlock;
  short nGlyph;
  Block *pBlock;
  Glyph *pGlyph;
  unsigned char charCode;
  unsigned char isBigEndian;
  unsigned char nTex;
  unsigned char reserved;
};
struct CamHead
{
  char mg_code[4];
  unsigned int file_size;
  unsigned int ver;
  unsigned short scene_id;
  unsigned short cam_num;
  unsigned short map_parts_num;
  unsigned short wall_num;
  unsigned short prim_num;
  unsigned short vert_num;
  unsigned int camPath;
  unsigned int dmyPath;
  unsigned int wallData;
  unsigned short chardata_num;
  unsigned char drama_flag;
  unsigned char drama_id;
  unsigned int unused1[2];
};
struct CamInfo
{
  unsigned char *lpCamData;
  int nowIndex;
  float frame;
  unsigned char LockDirFlag;
  char LockL3V;
  char LockL3H;
  unsigned char noneUpdate;
  unsigned char eraseMap[256][48];
};
struct CamPath
{
  char cam_name[16];
  unsigned short cam_id;
  unsigned short cam_type;
  unsigned short pos_key_num;
  unsigned short ang_key_num;
  unsigned short fov_key_num;
  unsigned short wall_num;
  float fov;
  float position[4];
  float angle[4];
  unsigned int posData;
  unsigned int angData;
  unsigned int fovData;
  unsigned int wallData;
  unsigned int mapInfo;
  unsigned int charData;
  unsigned char limitAngX;
  unsigned char limitAngY;
  unsigned char bUseAng;
  unsigned char unused1;
  unsigned int ambData;
  unsigned int reverbData;
  unsigned int unused2[3];
};
struct CdRMode
{
  unsigned char trycount;
  unsigned char spindlctrl;
  unsigned char datapattern;
  unsigned char pad;
};
struct Cdlfile
{
  unsigned int lsn;
  unsigned int size;
  char name[16];
  unsigned char date[8];
  unsigned int flag;
};
struct Cdvd
{
  Cdlfile cdlfile;
  char fname[128];
  char sname[128];
  int state;
  int fileType;
  int index;
  int fhd;
  int size;
  int sector;
  unsigned int align;
  unsigned char retry;
  unsigned char unused[3];
  unsigned char **lplpAddr;
  unsigned char *lpDmyData;
};
struct Chcr
{
  unsigned int DIR : 1;
  unsigned int p0 : 1;
  unsigned int MOD : 2;
  unsigned int ASP : 2;
  unsigned int TTE : 1;
  unsigned int TIE : 1;
  unsigned int STR : 1;
  unsigned int p1 : 7;
  unsigned int TAG : 16;
};
struct ChVif1
{
  Chcr chcr;
  unsigned int p0[3];
  void *madr;
  unsigned int p1[3];
  unsigned int qwc;
  unsigned int p2[3];
  Tadr *tadr;
  unsigned int p3[3];
  void *as0;
  unsigned int p4[3];
  void *as1;
  unsigned int p5[3];
  unsigned int p6[4];
  unsigned int p7[4];
  void *sadr;
  unsigned int p8[3];
};
struct Child
{
  unsigned short TodKeyNum;
  unsigned short MimeKeyNum;
  unsigned short Tp2Id;
  unsigned short ObjId;
  unsigned int unused[2];
  float InitAng[4];
  float InitPos[4];
  TodData *lpTodData;
  MimeData2 *lpMimeData;
  Child *lpChild;
  Child *lpSibling;
};
struct ChunkHead
{
  unsigned int AniChunkId;
  void *lpDataTop;
  int DataNum;
  unsigned int ChunkSize;
};
struct Rgbaq
{
  unsigned int R : 8;
  unsigned int G : 8;
  unsigned int B : 8;
  unsigned int A : 8;
  float Q;
};
struct Prim
{
  unsigned long PRIM : 3;
  unsigned long IIP : 1;
  unsigned long TME : 1;
  unsigned long FGE : 1;
  unsigned long ABE : 1;
  unsigned long AA1 : 1;
  unsigned long FST : 1;
  unsigned long CTXT : 1;
  unsigned long FIX : 1;
  unsigned long pad11 : 53;
};
struct Test1
{
  unsigned long ATE : 1;
  unsigned long ATST : 3;
  unsigned long AREF : 8;
  unsigned long AFAIL : 2;
  unsigned long DATE : 1;
  unsigned long DATM : 1;
  unsigned long ZTE : 1;
  unsigned long ZTST : 2;
  unsigned long pad19 : 45;
};
struct Xyz2a
{
  unsigned long X : 16;
  unsigned long Y : 16;
  unsigned long Z : 32;
};
struct Clear0
{
  Test1 testa;
  long testaaddr;
  Prim prim;
  long primaddr;
  Rgbaq rgbaq;
  long rgbaqaddr;
  Xyz2a xyz2a;
  long xyz2aaddr;
  Xyz2a xyz2b;
  long xyz2baddr;
  Test1 testb;
  long testbaddr;
};
struct Colclamp
{
  unsigned long CLAMP : 1;
  unsigned long pad01 : 63;
};
struct Color
{
  unsigned char Color[4];
};
struct CommonParam
{
  unsigned int Frame;
  char szName[26];
  unsigned short sfx_idx;
};
struct Create
{
  unsigned char Resv2;
  unsigned char Sec;
  unsigned char Min;
  unsigned char Hour;
  unsigned char Day;
  unsigned char Month;
  unsigned short Year;
};
struct Create2
{
  unsigned char form;
  float pos[4];
  float azim;
  float radius;
  float scale;
  float speed;
  float rnd_range;
  unsigned short tex_no;
  unsigned short num_bugs;
  unsigned int rgba;
  float life;
  float width_limit;
  float height_limit;
  float wall_r;
  float wall_l;
  unsigned char bWallR;
  unsigned char bWallL;
};
struct Key
{
  Pad *lpPad;
  char L3H;
  char L3V;
  char R3H;
  char R3V;
  unsigned int unused[2];
};
struct Func
{
  void (*ThkFunc[32])();
  void (*ActFunc[32])();
  void (*SetActFunc[32])();
  unsigned char actID;
  unsigned char actIDB;
  unsigned char freeEnd;
  unsigned char unused0[1];
  int (*GetDmgAnimFunc)();
  int (*CalcDmgFunc)();
  void (*FrameLastFunc)();
  void (*DramaStartFunc)();
  void (*DramaEndFunc)();
  int unused[2];
};
struct Ctrl
{
  Func func;
  Key key;
  float InitPos[4];
  float DstPos[4];
  float moveRange;
  float moveAngle;
  unsigned char bDash;
  unsigned char Rebirth;
  unsigned char bHitOff;
  unsigned char bDead;
  unsigned short stayTimer;
  unsigned short walkTimer;
  unsigned short approachTimer;
  unsigned short ClingDmgMyAnim;
  MdlMng *lpCling;
  int attackOff;
  short RebirthTimer;
  unsigned short PauseTime;
  unsigned char bWeak;
  unsigned char UseSfxHdlNum;
  unsigned char bFired;
  unsigned char bFree;
  float rollAng;
  unsigned short lifecut;
  unsigned short noDamage;
  short DisableSearch;
  short GuardFrame;
  int SfxHdl[8];
  int SeHdl[8];
  MdlMng *lpP019;
  unsigned char lifecutscl;
  unsigned char captureLock;
  unsigned char ClingPos;
  unsigned char ClingFree;
  unsigned char NoSave;
  unsigned char FreeDamage;
  unsigned char bEraseDisable;
  unsigned char NoFloorDeadTimer;
  unsigned char bNoFloorDeadDisable;
  unsigned char AppearTypeAlpha;
  unsigned char unused0[2];
  float PowerScl;
  int MaxHp;
  int ItemId;
  float SclLimit;
};
struct CtrlGS
{
  State_order get_state;
  int get_goto;
  int get_goto_order;
  int get_call_menu_id;
  int dmy2[7];
};
struct CurOT
{
  unsigned char Use;
  unsigned char Type;
  unsigned char unused[2];
  float Dist2;
  MdlMng *lpMdlMng;
  Sp *lpSprite;
  CurOT *lpNextOT;
};
struct CursorInfo
{
  short Pos[3][2];
  float Scale;
  unsigned char Alpha;
};
struct Cylinder
{
  float P[4];
  float N[4];
  float H;
  float R;
};
struct D_stat
{
  unsigned int st_mode;
  unsigned int st_attr;
  unsigned int st_size;
  unsigned char st_ctime[8];
  unsigned char st_atime[8];
  unsigned char st_mtime[8];
  unsigned int st_hisize;
  unsigned int st_private[6];
};
struct Damage
{
  MdlMng *lpMaster;
  void *lpData;
  float Size;
  unsigned char TeamNo;
  unsigned char AttackNo;
  short DataId;
  void (*lpFunc)();
  int unused1[3];
  float Pos[4];
};
struct DarkFilterMng
{
  unsigned char State;
  unsigned char Alpha;
  unsigned char unused[2];
};
struct Data
{
  int hSfx;
  MdlMng *pMdlMng;
  unsigned short parts_id;
};
struct Data2
{
  unsigned short char_id;
  Attach aAttach[2];
};
struct Scissor1
{
  unsigned long SCAX0 : 11;
  unsigned long pad11 : 5;
  unsigned long SCAX1 : 11;
  unsigned long pad27 : 5;
  unsigned long SCAY0 : 11;
  unsigned long pad43 : 5;
  unsigned long SCAY1 : 11;
  unsigned long pad59 : 5;
};
struct Prmodecont
{
  unsigned long AC : 1;
  unsigned long pad01 : 63;
};
struct Zbuf1
{
  unsigned long ZBP : 9;
  unsigned long pad09 : 15;
  unsigned long PSM : 4;
  unsigned long pad28 : 4;
  unsigned long ZMSK : 1;
  unsigned long pad33 : 31;
};
struct Xyoffset1
{
  unsigned long OFX : 16;
  unsigned long pad16 : 16;
  unsigned long OFY : 16;
  unsigned long pad48 : 16;
};
struct Frame1
{
  unsigned long FBP : 9;
  unsigned long pad09 : 7;
  unsigned long FBW : 6;
  unsigned long pad22 : 2;
  unsigned long PSM : 6;
  unsigned long pad30 : 2;
  unsigned long FBMSK : 32;
};
struct Dthe
{
  unsigned long DTHE : 1;
  unsigned long pad01 : 63;
};
struct Draw0
{
  Frame1 frame1;
  unsigned long frame1addr;
  Zbuf1 zbuf1;
  long zbuf1addr;
  Xyoffset1 xyoffset1;
  long xyoffset1addr;
  Scissor1 scissor1;
  long scissor1addr;
  Prmodecont prmodecont;
  long prmodecontaddr;
  Colclamp colclamp;
  long colclampaddr;
  Dthe dthe;
  long dtheaddr;
  Test1 test1;
  long test1addr;
};
struct Giftag0
{
  unsigned long NLOOP : 15;
  unsigned long EOP : 1;
  unsigned long pad16 : 16;
  unsigned long id : 14;
  unsigned long PRE : 1;
  unsigned long PRIM : 11;
  unsigned long FLG : 2;
  unsigned long NREG : 4;
  unsigned long REGS0 : 4;
  unsigned long REGS1 : 4;
  unsigned long REGS2 : 4;
  unsigned long REGS3 : 4;
  unsigned long REGS4 : 4;
  unsigned long REGS5 : 4;
  unsigned long REGS6 : 4;
  unsigned long REGS7 : 4;
  unsigned long REGS8 : 4;
  unsigned long REGS9 : 4;
  unsigned long REGS10 : 4;
  unsigned long REGS11 : 4;
  unsigned long REGS12 : 4;
  unsigned long REGS13 : 4;
  unsigned long REGS14 : 4;
  unsigned long REGS15 : 4;
};
struct Display
{
  unsigned int DX : 12;
  unsigned int DY : 11;
  unsigned int MAGH : 4;
  unsigned int MAGV : 2;
  unsigned int p0 : 3;
  unsigned int DW : 12;
  unsigned int DH : 11;
  unsigned int p1 : 9;
};
struct Smode2
{
  unsigned int INT : 1;
  unsigned int FFMD : 1;
  unsigned int DPMS : 2;
  unsigned int p0 : 28;
  unsigned int p1;
};
struct Pmode
{
  unsigned int EN1 : 1;
  unsigned int EN2 : 1;
  unsigned int CRTMD : 3;
  unsigned int MMOD : 1;
  unsigned int AMOD : 1;
  unsigned int SLBG : 1;
  unsigned int ALP : 8;
  unsigned int p0 : 16;
  unsigned int p1;
};
struct Dispfb
{
  unsigned int FBP : 9;
  unsigned int FBW : 6;
  unsigned int PSM : 5;
  unsigned int p0 : 12;
  unsigned int DBX : 11;
  unsigned int DBY : 11;
  unsigned int p1 : 10;
};
struct Disp
{
  Pmode pmode;
  Smode2 smode2;
  Dispfb dispfb;
  Display display;
  Bgcolor bgcolor;
};
struct DbBuf
{
  Disp disp[2];
  Giftag0 giftag0;
  Draw0 draw0;
  Clear0 clear0;
  Giftag0 giftag1;
  Draw0 draw1;
  Clear0 clear1;
};
struct DizzyEffect
{
  unsigned char Num;
  unsigned char Length;
  unsigned char unused[2];
  float Speed;
  float RangeDiff;
  float RangeMin;
  float RangeMax;
  float SizeDiff;
  float SizeMin;
  float SizeMax;
  unsigned char ColorRMax;
  unsigned char ColorRMin;
  unsigned char ColorGMax;
  unsigned char ColorGMin;
  unsigned char ColorBMax;
  unsigned char ColorBMin;
  unsigned char ColorAMax;
  unsigned char ColorAMin;
};
struct GlareInfo
{
  unsigned char Threshold[3];
  unsigned char Rate;
};
struct TexScroll
{
  unsigned char Type[2];
  unsigned char Wave[2];
  float Speed[2];
  float Amplitude[2];
  float SinSpeed[2];
  float SinAmplitude[2];
  float SinWavelength[2];
};
struct DebugParam
{
  unsigned int FileVersion;
  unsigned int FileSize;
  DizzyEffect DizzyEffect;
  TexScroll TexScroll[32];
  float AmbientColor[32][4];
  GlareInfo GlareInfo[32];
};
struct DebugSystem
{
  char timeStr[32];
  unsigned char ViewerMasterMove;
  unsigned char NoneAnim;
  unsigned char unused[2];
  unsigned short TexID;
  unsigned short CapFontTimer;
  int BMPNum;
  unsigned int MaxMdlPacket;
  unsigned int UseMdlPacket;
  unsigned int unused2[3];
};
struct Dice
{
  unsigned char spots[2];
};
struct DieAnimeInfo
{
  unsigned char IndexAnim;
  float height;
  float move_speed;
  float frame_num;
  float tilt;
  float angle_speed;
  float local_ang[4];
  float offset;
  unsigned char count;
  unsigned char num;
  float quaternion[4];
};
struct DiffuseTexture
{
  char *lpTexFileName;
  Tex02 *lpTex0;
  Tex12 *lpTex1;
  int Pad0;
};
struct DizzyMng
{
  unsigned char Mode;
  unsigned char Flag;
  unsigned char Alpha;
  unsigned char Counter;
  float Rate;
  float Max;
  float Add;
  short PosX;
  short PosY;
  short HalfSizeW;
  short HalfSizeH;
  MdlMng *lpMdlMng;
};
struct DizzyWorm
{
  unsigned char Use;
  unsigned char Mode;
  unsigned char Cnt;
  unsigned char unused;
  unsigned char R;
  unsigned char G;
  unsigned char B;
  unsigned char A;
  float Ang;
  float Range;
  float Size;
  float PosX;
  float PosY;
};
struct DmgPrm
{
  float DmgPos[4];
  MdlMng *lpTarget;
  void *lpMasterPrm;
  unsigned char TeamNo;
  unsigned char AttackNo;
  unsigned short PauseTime;
  unsigned char bFinish;
  unsigned char unused[3];
  float PowerScl;
};
struct DmyPath
{
  char name[16];
  unsigned short dummy_id;
  unsigned short pos_key_num;
  unsigned int posData;
  unsigned int unused1[2];
  float position[4];
};
struct DmyPoly
{
  float Pos[4];
  float Nrm[4];
  short ObjectId;
  unsigned char Type;
  unsigned char Id;
  unsigned int unused[3];
};
struct DramaCut
{
  unsigned short cut_id;
  unsigned short data_num;
  unsigned short frames;
  unsigned short unused0;
  unsigned int frameData;
  unsigned int unused1[5];
};
struct DramaDataInfo
{
  char filename[128];
  unsigned int filesize;
  unsigned int offset;
  unsigned char data_type;
  unsigned char unused0[3];
  int mdl_id;
  unsigned int unused1[4];
};
struct DramaHead
{
  unsigned int version;
  unsigned short cam_num;
  unsigned short mdl_num;
  unsigned short cut_num;
  unsigned short lit_num;
  unsigned int cutData;
  float InitPos[4];
  float InitAng[4];
  unsigned char cinema_off;
  unsigned char gameover;
  unsigned char nextScene;
  unsigned char nextCamera;
  unsigned char bContinue;
  unsigned char nextDrama;
  unsigned char whiteIn;
  unsigned char unused0[1];
  unsigned int unused1[2];
};
struct DramaMng
{
  unsigned char *lpDramaData;
  float nowFrame;
  float prevFrame;
  unsigned short cut_id;
  unsigned char DramaStopFlag;
  unsigned char DramaFreeFlag;
  unsigned char readFlag;
  unsigned char drama_id;
  unsigned char SkipStart;
  unsigned char DramaSkipFlag;
  unsigned char bContinue;
  unsigned char nextDrama;
  unsigned char GameOver;
  unsigned char NoNext;
};
struct DrawMng
{
  DbBuf dbBuf;
  float camPos[4];
  float camAng[4];
  float camPosB[4];
  float camAngB[4];
  float vsMat[4][4];
  float wsMat[4][4];
  float wvMat[4][4];
  float lcMat[4][4];
  float wcMat[4][4];
  float csMat[4][4];
  float scrDepth;
  unsigned int *sprBuf[2];
  int sprBufID;
  unsigned int DMATag;
  int ctxt;
  int dbBufID;
  int oddeven;
  unsigned int calcTime;
  unsigned int drawTime;
  unsigned int frameTime;
  float fov;
  int TotalPolyNum;
  int TotalPrimNum;
  float WaterLevel;
  unsigned char DrawFlag;
  unsigned char DrawHitModel;
  unsigned char BlurMode;
  unsigned char BlurRate;
  unsigned char ProjectionType;
  unsigned char unused[15];
  float PlaneParam[4];
  float FogParam[4];
  float FogParam16[4];
};
struct DrawRegs
{
  unsigned int TEST : 19;
  unsigned int unused1 : 5;
  unsigned int ZMSK : 1;
  unsigned int unused2 : 7;
};
struct Flag2
{
  unsigned short disable_draw_scr : 1;
  unsigned short disable_draw_map : 1;
  unsigned short disable_act_scr : 1;
  unsigned short disable_act_map : 1;
  unsigned short unused : 12;
};
struct Dsc
{
  float mRot[4][4];
  float loc[4];
  float ang[4];
  float scale[4];
  float (*p_matrix)[4][4];
  int prev_ptcl;
  short life_time;
  unsigned short ptcl_num;
  unsigned short prog_no;
  Flag2 flag;
  unsigned short sfx_sttdata_idx;
};
struct DssAnim
{
  unsigned short animID;
  unsigned short data_num;
  unsigned short data_offset;
  unsigned short unused;
};
struct DssData
{
  unsigned char kind;
  unsigned char unused[3];
  unsigned short frame;
  unsigned short framen;
};
struct DssDmg
{
  unsigned short dmyID;
  unsigned short unused0[6];
  unsigned short r;
  unsigned short unused1[8];
};
struct DssFlg
{
  unsigned short objID;
  short vx;
  short vy;
  short vz;
  short ax;
  short ay;
  short az;
  unsigned short flagID;
  short value[8];
};
struct DssHead
{
  unsigned int version;
  unsigned int anim_tablen;
  unsigned char filename[8];
};
struct DssPlay
{
  MdlMng *lpMdl;
  float nowFrame;
  float prvFrame;
  unsigned int nowAnimID;
};
struct DssSfx
{
  unsigned short dmyID;
  unsigned short unused0[6];
  short sfxID;
  unsigned char nrmIgnore;
  unsigned char noAttach;
  short unused2[7];
};
struct DssSnd
{
  short random;
  short random_pitch;
  short random_vol;
  short unused1[1];
  short range;
  short vol;
  unsigned short index;
  short pitch;
  short unused2[8];
};
struct EmtrExDat
{
  TexMng *pTex;
};
union Emtr_state
{
  unsigned int val;
  B b;
};
struct EneData
{
  int CtrlId;
  int AA_EventFlag;
  int AA_RandRatio;
  int dmy[8];
  unsigned int Flag1_16 : 16;
  unsigned int AutoAppearOn : 1;
  unsigned int Flag18_32 : 15;
  int dmy2[4];
};
struct EneExtGeneEventData
{
  int state;
  MdlMng *pMdlMng;
  Ctrl *pEneCtrl;
  unsigned int ene_num;
  unsigned int counter;
  unsigned int dmy[3];
};
struct EnePrm
{
  unsigned short no;
  unsigned short game_no;
  unsigned int hp;
  unsigned char revival;
  unsigned char clingTarget;
  unsigned char pushTarget;
  unsigned char blowTarget;
  unsigned char wanderType;
  unsigned char thinkType;
  unsigned char unionThink;
  unsigned char searchType;
  unsigned short searchArea[2];
  unsigned short searchAng;
  unsigned short hitR;
  unsigned short hitH;
  unsigned short angMoveCorrect;
  unsigned short angStayCorrect;
  unsigned char throughSearch;
  unsigned char throughMove;
  unsigned short scale;
  unsigned char summonAnimType;
  unsigned char useHeart;
  unsigned short shadowSize;
  unsigned char noDamageFlag;
  unsigned char headId;
  unsigned short shadowHigh;
  unsigned short sfxId;
  unsigned short lifecut;
  unsigned char decoy;
  unsigned char breakfollow;
  unsigned char revival_rate;
  unsigned char bite_rate;
  unsigned short revival_time;
  unsigned short bite_wait_time;
  unsigned short no_damage_time;
  unsigned short use_wait;
  unsigned char item_rate[2];
  unsigned int item_id[2];
  unsigned char unused1[92];
  Attack Attack[5];
};
struct EneSave
{
  unsigned char bUse;
  unsigned char SceneNo;
  unsigned char MdlMngIndex;
  unsigned char ActID;
  unsigned short AnimID;
  unsigned short blood_pool_sfx_idx;
  float Frame;
  int Hp;
  float Pos[4];
  float Ang[4];
  float Scl[4];
  short RebirthTimer;
  unsigned char Rebirth;
  unsigned char HitOff;
  unsigned char GravOff;
  unsigned char MapHitOff;
  unsigned char Weak;
  unsigned char bFired;
  int ItemId;
};
struct Equip
{
  unsigned char type;
  unsigned char bRead;
  short num;
  int id;
  int dataIndex;
};
struct Mng_state
{
  int state;
  unsigned int flag;
  unsigned int calc_total_time;
  unsigned int total_time;
  unsigned int get_time;
  unsigned int dmy[3];
};
struct EtcEventMng
{
  Mng_state mng_state;
  int DrawState;
  unsigned char **pEtcEventFileBuf;
  EneExtGeneEventData EneExtGeneEventData;
};
struct Event
{
  void (*InitFunc)();
  void (*PlayFunc)();
  void (*ActiFunc)();
  int State[10];
  MdlMng *lpMdl[10];
};
struct EventData
{
  int CtrlId;
  int FollowId;
  int FollowType;
  int EventKind;
  int EventData1;
  int EventData2;
  float EventDist;
  float EventAng;
  int EventSaveFlag;
  int EventSaveCtrlFlag;
  int NeckLevel;
  unsigned int Flag1 : 1;
  unsigned int Flag2_32 : 31;
  int MapParts;
  int EventSaveFlag2;
  int EventSaveCtrlFlag2;
  int EventData3;
};
struct Ext_data
{
  unsigned int frame_count;
  unsigned short model_id;
};
struct Ext_data2
{
  unsigned char cut_offset;
  unsigned char dmy;
};
struct Ext_data3
{
  unsigned short hFlicker;
};
struct Ext_data4
{
  unsigned short hTracer;
};
struct Ext_data5
{
  float last_pos[4];
};
union FEnable
{
  unsigned char data;
  unsigned char flicker : 1;
  unsigned char dmy : 7;
};
struct Fade
{
  int type;
  float scale;
};
struct FadeMng
{
  int Col[4];
  unsigned char Type;
  unsigned char unused[3];
  int Timer;
  int OutEnd;
  int StartIn;
  float AlphaStep;
  float Alpha;
  void (*lpMidFunc)();
  void (*lpEndFunc)();
};
struct FileHeader
{
  unsigned short FileID;
  unsigned short ObjectNum;
  char *SfxName;
  Param **paObjects;
  unsigned int Size;
};
struct Finish
{
  unsigned long pad00;
};
struct FixParam
{
  char cdummy;
};
struct Fix_param
{
  unsigned int id;
  int life;
  unsigned int frame;
  unsigned int num;
  unsigned short independent;
  unsigned short kill_ptcl;
  float loc[3];
  float ang[3];
  unsigned short call_num;
  short gen_rnd;
};
struct Fix_param10
{
  unsigned short model_id;
  short life;
  unsigned short life_margin;
  unsigned short type;
  float area[3];
  unsigned short dmy0;
  unsigned char dmy1;
  unsigned char bDirRand;
  float ini_spd[2];
  float pressure[2];
  float valance[2];
  float pitchspd[2];
};
struct Fix_param11
{
  unsigned int life;
  unsigned int dmy;
  unsigned short vanish_sfx;
  unsigned short dmy1;
  float vanish_dist;
};
struct Fix_param12
{
  unsigned int life;
  float ang[2][2];
  float spd[2];
  unsigned char tgt_char;
  unsigned char dmypoly_id;
};
struct Fix_param13
{
  unsigned short fadeout;
  unsigned short blink_frame;
  float blink_range;
  char bEnableWind;
  char bDisableShadow;
  short dmy1;
  int dmy2;
};
struct Fix_param14
{
  unsigned int life;
  float sphereR;
  short hit_sfx_id[4];
  unsigned char bFire;
  unsigned char bNotHitVanish;
  unsigned char bStraightLineHit;
  unsigned char dmy;
};
struct Fix_param15
{
  unsigned char bFirst;
  unsigned char target;
  unsigned short dmy1;
  unsigned int life;
  float acc;
  float spd_limit;
};
struct Fix_param16
{
  short life;
  unsigned short type;
  unsigned short model_id;
  unsigned short dmy;
  float size;
  float length;
  float alpha;
  unsigned short divH;
  unsigned short divV;
  float cut;
};
struct Fix_param17
{
  short life;
  unsigned short life_margin;
  unsigned short dmy;
  unsigned short gen_type;
  float area[3];
  float vel[3][2];
  float cycle;
  float cycle_rand;
  float add_z;
};
struct Fix_param18
{
  unsigned int life;
  unsigned int life_margin;
  float ang[2][2];
  float spd[2];
  float offset[3];
  unsigned char bScaleSync;
  unsigned char dmy;
  unsigned short dmy1;
  unsigned int dmy2;
};
struct Fix_param19
{
  unsigned int life;
  unsigned int life_margin;
  float ang[2][2];
  float dmy[6];
  float spd[2];
  unsigned char dir_ctrl;
};
struct Fix_param2
{
  unsigned short model_id;
  short life;
  unsigned short life_margin;
  unsigned short type;
  float area[3];
  float rot[2];
  float vel[2];
  float vel_py[2][2];
  float add_z;
  unsigned char bFog;
  unsigned char alpha;
  unsigned char f_scale_sync;
  unsigned char draw_stage;
  unsigned short loop;
  unsigned char bZTest;
  unsigned char bDistAlpha;
};
struct Fix_param20
{
  float radius;
  float speed;
  float scale;
  float rnd_range;
  unsigned int tex_no;
  float rgb[3];
  float life;
  char dmy[12];
};
struct Fix_param21
{
  unsigned short se_id;
  unsigned short volume;
  unsigned short volume_rnd;
  short pitch;
  unsigned short pitch_rnd;
  unsigned char control;
  unsigned char dmy;
  float dist;
  float interval;
};
struct Fix_param22
{
  unsigned int life;
  float offset[3];
  unsigned int dmy[4];
};
struct Fix_param23
{
  float range_holy;
  float range_vert;
  float freq_holy;
  float freq_vert;
  float time;
  float dmy;
};
struct Fix_param24
{
  unsigned int life;
};
struct Fix_param25
{
  unsigned int life;
  unsigned int climb_time;
  float acc;
  float spd_limit;
};
struct Fix_param3
{
  unsigned short model_id;
  short life;
  unsigned short life_margin;
  unsigned short type;
  float area[3];
  float ang[3][2];
  float vel[3][2];
  float add_z;
  unsigned char alpha;
  unsigned char bFog;
  unsigned short loop;
  unsigned char f_scale_sync;
  unsigned char dmy;
};
struct Fix_param4
{
  unsigned short model_id;
  short life;
  unsigned short life_margin;
  unsigned short type;
  float area[3];
  float ang[3][2];
  float vel[3][2];
  float add_z;
  unsigned char alpha;
  unsigned char h_div;
  unsigned char v_div;
  unsigned char bFog;
  unsigned short loop;
  unsigned char f_scale_sync;
  unsigned char bRdmStartCut;
  unsigned int dmy2;
};
struct Fix_param5
{
  unsigned short model_id;
  short life;
  unsigned short life_margin;
  unsigned short type;
  float area[3];
  float rot[2];
  float vel[2];
  float vel_py[2][2];
  float add_z;
  unsigned char bFog;
  unsigned char alpha;
  unsigned char h_div;
  unsigned char v_div;
  unsigned char f_scale_sync;
  unsigned char anim_type;
  unsigned short loop;
  unsigned char bRdmStartCut;
  unsigned char draw_stage;
  unsigned char bZTest;
  unsigned char dmy1;
};
struct Fix_param6
{
  unsigned short model_id;
  short life;
  unsigned short life_margin;
  unsigned short type;
  float area[3];
  float size;
  float move_radius;
  float speed_limit;
};
struct Fix_param7
{
  unsigned short model_id;
  short life;
  unsigned short life_margin;
  unsigned short type;
  float area[3];
  float vel[2];
  float vel_py[2][2];
  float pyr[3][2];
  unsigned char draw_stage;
  unsigned char h_div;
  unsigned char v_div;
  unsigned char anim_type;
  float cut_or_s;
  float t;
  unsigned char rot_ahead;
  unsigned char f_scale_sync;
  unsigned short loop;
  float z_offset;
};
struct Fix_param8
{
  unsigned short model_id;
  short life;
  unsigned short life_margin;
  unsigned short type;
  float area[3];
  float vel[2];
  float ang[3][2];
  unsigned char dmy;
  unsigned char h_div;
  unsigned char v_div;
  unsigned char anim_type;
  float cut_or_s;
  float t;
  unsigned char rot_ahead;
  unsigned char f_scale_sync;
  unsigned short loop;
  float z_offset;
};
struct Fix_param9
{
  unsigned short model_id;
  short life;
  unsigned short life_margin;
  unsigned short type;
  float area[3];
  float vel[3][2];
  float add_z;
  unsigned char alpha;
  unsigned char dmy0;
};
struct Flag
{
  unsigned char isColor : 1;
  unsigned char isAlpha : 1;
  unsigned char isBold : 1;
  unsigned char isItalic : 1;
  unsigned char ruby : 2;
  unsigned char isInit : 1;
  unsigned char dummy : 1;
};
struct Flag3
{
  unsigned short unused : 8;
};
struct Flag4
{
  char bEnableBlink : 1;
  char bEnableWind : 1;
  char bDeleting : 1;
  char bDisable : 1;
  char bDisableShadow : 1;
};
struct Flags
{
  unsigned char inhibit_mirror_sfx : 1;
  unsigned char dmy : 7;
};
struct Flags2
{
  char bMillorMode : 1;
  char dmy : 7;
};
struct Flags3
{
  unsigned char f_independent : 1;
  unsigned char f_disable_draw : 1;
  unsigned char f_disable_draw_by_map : 1;
  unsigned char f_disable_act : 1;
  unsigned char f_disable_act_by_map : 1;
  unsigned char f_dummy : 3;
};
struct Flchk
{
  Create _Create;
  Create _Modify;
  unsigned int FileSizeByte;
  unsigned short AttrFile;
  unsigned short Reserve1;
  unsigned int Reserve2;
  unsigned int PdaAplNo;
  unsigned char EntryName[32];
};
struct Flicker
{
  float pos_x;
  float pos_y;
  float pos_z;
  float scale;
  float amplitude;
  float cycle;
  float time;
  unsigned short type;
  Flag3 flag;
  unsigned char dmy[1];
};
struct FontCol
{
  unsigned char r;
  unsigned char g;
  unsigned char b;
  unsigned char a;
};
struct FovData0
{
  unsigned short key;
  unsigned short nframe;
  float fov_angle;
  unsigned short key_no;
  unsigned short unused1;
  unsigned int unused2;
};
struct FrameCam
{
  unsigned short cam_id;
  unsigned short cam_frame;
  unsigned short unused[6];
};
struct FrameEtc
{
  unsigned char act;
  unsigned char flag[3];
  unsigned short value[6];
};
struct FrameHead
{
  unsigned char kind;
  unsigned char unused0[3];
  unsigned short frame;
  unsigned short framen;
  unsigned int unused1[2];
};
struct FrameMdl
{
  unsigned char act;
  unsigned char unused0[3];
  unsigned short mdl_id;
  unsigned short value;
  unsigned int unused1[2];
};
struct Free
{
  short top;
  short num;
};
struct Func2
{
  void (*ThkFunc[32])();
  void (*ActFunc[32])();
  unsigned char actID;
  unsigned char actIDB;
  unsigned char actFree;
  unsigned char unused0[1];
  unsigned int unused1[3];
};
struct FuncTable
{
  void (*init)();
  void (*act)();
  void (*draw)();
  void (*ptcl_draw)();
  void (*ptcl_end)();
};
struct FuncTable2
{
  int (*initfunc)();
  int (*actfunc)();
  int (*endfunc)();
};
struct GDice
{
  float s_pos[4];
  float e_pos[3][4];
  float w[4];
  int frm_cnt;
  unsigned char bound_cnt;
  unsigned char animeID;
  unsigned char spots;
};
struct Map
{
  unsigned char knum[25];
  unsigned char dummy[7];
};
struct GEnemyData
{
  unsigned char selfID;
  unsigned char eneID;
  Map map[2];
};
struct GHitLine
{
  unsigned char Use;
  unsigned char unused[3];
  HmdPrim *lpHmdPrim;
  float Rate;
  HitResult *lpHitResult;
};
struct GKomaInfo
{
  float s_pos[4];
  float e_pos[4];
  int frm_cnt;
  unsigned char animeID;
};
struct Maplist
{
  Map map[2];
};
struct GMainTblMap
{
  Maplist knumlist;
  float kposlist[25][4];
};
struct SqSong
{
  short sCalcedVol;
  char bid;
  char sid;
  char PlayId;
  char reserv[3];
  int sq_fade;
  int sq_vol;
};
struct Listener
{
  float (*fvListenerPosPtr)[4];
  float (*fvListenerAngPtr)[4];
  float (*fmListenerMatPtr)[4][4];
};
struct Param3
{
  float panlim;
  float zofs;
  char dopp;
  char pad[3];
  float range;
  char reserved[16];
};
struct G_pSndMng
{
  Listener Listener;
  Param3 Param;
  SndMode SndMode;
  unsigned char bfMasterVolume : 1;
  unsigned char bfReserv : 7;
  unsigned char ucMasterVolume;
  unsigned char ucBgmVolume;
  unsigned char ucSqVolume;
  unsigned char ucSeVolume;
  unsigned short usVolumeFadeOutFrame;
  char rid[8];
  unsigned short ucVoiceCnt;
  int Handle[12];
  SqSong aSqSong[4];
  unsigned char calloff;
  BankInfo aBankInfo[12];
  unsigned short aaIdTable[12][128];
  unsigned int uiUseVoiceNum;
};
struct G_voice
{
  int pend;
  int work;
  unsigned char voi_stat[48];
  unsigned short voi_env[48];
  int dummy[2];
};
struct GameOverMng
{
  short Counter;
  unsigned char BGM;
  unsigned char FontAlpha;
};
struct GameSt
{
  unsigned int SystemCounter;
  unsigned char ControlMode;
  unsigned char GameMode;
  unsigned char GameModePrev;
  unsigned char DebugMode;
  unsigned char StopMode;
  unsigned char sceneNo;
  unsigned char padport;
  unsigned char ShadowTest;
  unsigned char DepthTest;
  unsigned char ScriptMode;
  unsigned char DizzyTest;
  unsigned char Pause;
  unsigned char EnePause;
  unsigned char EnemyOff;
  unsigned char FadedTest;
  unsigned char PeepMask;
  unsigned char PlayerId;
  unsigned char PadVib;
  unsigned char KeyConfType;
  unsigned char EneSearchOff;
  unsigned char GameLevel;
  unsigned char StartEquip;
  unsigned char PenanceMode;
  unsigned char NineHitNum;
  unsigned char NegaPosi;
  unsigned char LoadStart;
  char Brightness;
  unsigned char GlareId;
  unsigned char MyAllAttack;
  unsigned char DebugMenuOn;
  unsigned char Sugoroku;
  unsigned char TutorialOff;
  float AmbRate;
  unsigned char ClearCount[3];
  unsigned char ExtraClear;
  unsigned char VoiceLanguage;
  unsigned char LastLanguage;
  unsigned char unused[2];
};
struct Glyph
{
  float left;
  float top;
  float right;
  float bottom;
  short offset;
  short width;
  short advance;
  short texID;
};
struct GmInfo
{
  unsigned char modeID;
  unsigned char ctrlID;
  unsigned char gameID;
  unsigned char dbgID;
  unsigned char nowPlayerID;
  unsigned char aPlayerType[2];
  unsigned char anWin_num[2];
};
struct GodShelf
{
  unsigned char NowCur;
  unsigned char Complete;
  unsigned char unused[2];
  unsigned char Box[12];
};
struct Trxpos
{
  unsigned long SSAX : 11;
  unsigned long pad11 : 5;
  unsigned long SSAY : 11;
  unsigned long pad27 : 5;
  unsigned long DSAX : 11;
  unsigned long pad43 : 5;
  unsigned long DSAY : 11;
  unsigned long DIR : 2;
  unsigned long pad61 : 3;
};
struct Trxdir
{
  unsigned long XDR : 2;
  unsigned long pad02 : 62;
};
struct Trxreg
{
  unsigned long RRW : 12;
  unsigned long pad12 : 20;
  unsigned long RRH : 12;
  unsigned long pad44 : 20;
};
struct Gs_simage
{
  unsigned int vifcode[4];
  Giftag0 giftag;
  Bitbltbuf bitbltbuf;
  long bitbltbufaddr;
  Trxpos trxpos;
  long trxposaddr;
  Trxreg trxreg;
  long trxregaddr;
  Finish finish;
  long finishaddr;
  Trxdir trxdir;
  long trxdiraddr;
};
struct Head
{
  char appname[4];
  unsigned int filesize;
  unsigned int filenum;
  unsigned short alignsize;
  unsigned char dummy1[2];
};
struct HeadParam
{
  int ProgramID;
  unsigned char ParallelDraw;
  unsigned char Fog;
  unsigned char ParallelLight;
  unsigned char PointLight;
  unsigned char AlphaSort;
  unsigned char Mirror;
  unsigned char AmbientID;
  unsigned char Specular;
  unsigned char ClothDataID;
  unsigned char DrawRegsID;
  unsigned char Pad0[2];
};
struct Header
{
  unsigned short using_top;
  unsigned short free_top;
  unsigned short num_free;
  unsigned short single_data_byte;
  unsigned short max_num_data;
  unsigned short limit;
  unsigned int buffer_byte;
  List3 *aList;
  void *pBuff;
  unsigned char dmy[8];
};
struct Header2
{
  int version;
  int fileSize;
  unsigned char charCode;
  unsigned char isBigEndian;
  short userTagNum;
  int blockNum;
  int dataNum;
  int iOffset;
  unsigned int reserved;
};
struct Header_data_flag
{
  unsigned int no_update : 1;
  unsigned int reserve : 31;
};
struct Header_data_flag2
{
  unsigned int no_update : 1;
  unsigned int open_order_update_off : 1;
  unsigned int open_order_key_off : 1;
  unsigned int reserve : 29;
};
struct HitInfo
{
  float t1;
  float t2;
};
struct HitResult
{
  float Normal[4];
  unsigned int Hit;
};
struct HmdHead
{
  unsigned int HmdFileVersion;
  unsigned int Ap2FileVersion;
  unsigned int FileSize;
  int MaterialNum;
  int ObjNum;
  int VertexNum;
  int NormalNum;
  int ColorNum;
  Material2 *pMaterial;
  HmdObj *pObject;
  unsigned int Unused[2];
  unsigned int Unused2[4];
};
struct Position
{
  float x;
  float y;
  float z;
  unsigned char a;
  unsigned char b;
  unsigned char c;
  unsigned char d;
};
struct HmdObj
{
  Position Position;
  Position Angle;
  Position Scale;
  short ObjectID;
  short GeomObjectID;
  short ParentObjectID;
  short ChildObjectID;
  short SiblingObjectID;
  short Pad[3];
  int ListNum;
  HmdPrimList *pList;
  int VertexNum;
  Position *pVertex;
  int NormalNum;
  Position *pNormal;
  int ColorNum;
  FontCol *pColor;
};
struct Node
{
  short VertexID;
  short SubVertexID;
};
struct HmdPrim
{
  Node Node[3];
  short MinVertexID;
  short MaxVertexID;
  short NormalID;
  unsigned char ColorID;
  char MaterialID;
};
struct LineBox
{
  Position Min;
  Position Max;
  Position Center;
  float Rxyz;
  float Rxz;
  float ZeroRxyz;
  float ZeroRxz;
};
struct HmdPrimList
{
  unsigned short PrimNum;
  unsigned short PrimTotal;
  HmdPrimList *pChild;
  HmdPrimList *pSibling;
  HmdPrimList *pParent;
  LineBox Box;
};
struct IconSys
{
  unsigned char Head[4];
  unsigned short Reserv1;
  unsigned short OffsLF;
  unsigned int Reserv2;
  unsigned int TransRate;
  int BgColor[4][4];
  float LightDir[3][4];
  float LightColor[3][4];
  float Ambient[4];
  unsigned char TitleName[68];
  unsigned char FnameView[64];
  unsigned char FnameCopy[64];
  unsigned char FnameDel[64];
  unsigned char Reserve3[512];
};
struct Index
{
  unsigned short VertexId : 15;
  unsigned short Adc : 1;
};
struct Info
{
  int iSpuAddr;
  int iSize;
  short next;
  short prev;
  int pad;
};
struct InnerShadow
{
  Cylinder Cylinder;
  float WorldPos[4];
  float GeomScale;
};
struct Item
{
  unsigned char num : 7;
  unsigned char got : 1;
};
struct ItemGS
{
  State get_state;
  State get_old_state;
  int get_goto;
  int get_through;
  int dmy1[5];
  int dmy2[8];
};
struct JcnFileHead
{
  int Version;
  unsigned int Remapped;
  int DataNum;
  JconHead **lpJconHead;
};
struct JconData
{
  short CtrlObjID;
  short YAxisObjID;
  unsigned int ProgramID;
  int Reserved;
  void *lpOwnData;
};
struct JconHead
{
  int ObjectNum;
  JconData *lpJconData;
};
struct KMM_Data
{
  int draw_on;
  int dmy[3];
};
struct Key2
{
  Pad *lpPad;
  char L3H;
  char L3V;
  char R3H;
  char R3V;
  char preL3H;
  char preL3V;
  char preR3H;
  char preR3V;
  unsigned short LStruggle;
  unsigned short RStruggle;
  unsigned short LStruggleB;
  unsigned short RStruggleB;
  unsigned int unused1[3];
};
struct KeyTop
{
  unsigned short CommandId;
  unsigned short CommandSize;
};
struct Store_data
{
  float cam_pos[4];
  float cam_ang[4];
  float cam_fov;
  int game_mode_store;
  int pad_analog_mode;
  int dmy[1];
  float anb_col[4];
  float AmbRate;
};
struct KnMenuMng
{
  Mng_state mng_state;
  MenuMng **pMenuMngList;
  unsigned int menu_num;
  Menu_id call_mode;
  Menu_id now_call_mode;
  int call_timer;
  Store_data store_data;
};
struct KnMenuModelMng
{
  Mng_state mng_state;
  unsigned char **pKnMenuModelFileBuf;
  KMM_Data KMM_Data[15];
};
struct KnMenuWindMng
{
  Mng_state mng_state;
  KMM_Data wind_data;
};
struct Msg_data_flag
{
  unsigned int wait_until_exec_wait : 1;
  unsigned int overwrite : 1;
  unsigned int reserve : 30;
};
struct Msg_data
{
  int priority;
  State2 state;
  unsigned int proc_id;
  int counter;
  int counter2;
  Msg_data_flag msg_data_flag;
  int msg_id;
  int id1;
  int id2;
  int id3;
  float fdata1;
  float fdata2;
  float fdata3;
  unsigned int user_data;
  unsigned int print_msg_len;
  int dmy[7];
};
struct ListMng
{
  Mng_state mng_state;
  Type type;
  List2 *pList;
  unsigned char *pDataTop;
  unsigned char priority_type;
  unsigned int data_size;
  unsigned int key_offset;
  int node_num;
  int top_node_id;
  int end_node_id;
  int csr_node_id;
};
struct MsgMng
{
  Mng_state mng_state;
  MsgFileMng *pMsgFileMng;
  unsigned int msg_data_num;
  Msg_data *pMsgDataBuf;
  ListMng list_mng;
  Msg_data now_draw_msg;
  unsigned int str_max_length;
  unsigned short *pFileStr;
  unsigned short *pWorkStr;
  unsigned short *pDrawStr;
  float draw_pos[4];
  unsigned int buf_on;
  unsigned int msg_mng_state;
  int befor_select;
  int select;
  int select_num;
  unsigned short *aSelectPtr[64];
  int msg_clear_counter;
};
struct MsgFileMng
{
  Mng_state mng_state;
  unsigned int msg_file_num;
  unsigned char **pMsgFileBuf;
  unsigned char *pTexBuf;
  int tex_id;
};
struct KnMsgMng
{
  Mng_state mng_state;
  MsgMng msg_mng_test;
  MsgFileMng msg_file;
};
struct Krdp
{
  unsigned char delay;
  unsigned char interval;
  unsigned char frame_ct;
  unsigned char flag;
};
struct Li
{
  Giftag0 giftag0;
  Bitbltbuf bitbltbuf;
  long bitbltbufaddr;
  Trxpos trxpos;
  long trxposaddr;
  Trxreg trxreg;
  long trxregaddr;
  Trxdir trxdir;
  long trxdiraddr;
  Giftag0 giftag1;
};
struct LightAnim
{
  unsigned char *lpLightData;
  float frame;
};
struct LightDir
{
  char LightDir[3];
  char LightSpecularPow;
};
struct LightObject
{
  float LightColor[3];
  unsigned char DiffuseEnable;
  unsigned char SpecularEnable;
  unsigned char Pad0[2];
  float Position[3];
  float NearAttenStart;
  float NearAttenEnd;
  float FarAttenStart;
  float FarAttenEnd;
  short ObjectId;
  short ParentObjectId;
  short ChildObjectId;
  short SiblingObjectId;
  char *lpObjectName;
  void *lpLightObjParam;
};
struct LightVec
{
  char LightId[4];
  char LightDiffusePow[4];
  LightDir LightDir[4];
};
struct LineHit
{
  float P[4];
  float V[4];
};
struct Link
{
  unsigned int command;
  void *(*func)();
  void *buff;
  int size;
  void *(*cfunc)();
  void *cbuff;
  int csize;
  S_scdRpc *client;
  void *paddr;
  unsigned int fno;
  void *receive;
  int rsize;
  int rmode;
  unsigned int rid;
  Link *link;
  Link *next;
  S_qdIopToEeRpc *base;
};
struct LinkData
{
  unsigned short Frame;
  unsigned short LinkObjId;
  unsigned int unused[3];
  float LinkPos[4];
  float LinkAng[4];
  float LinkScl[4];
};
struct List
{
  unsigned char pos[25];
};
struct List2
{
  int next;
  int prev;
};
struct List3
{
  unsigned short prev;
  unsigned short next;
};
struct LodVertex
{
  short Vertex[3];
};
struct LogObj
{
  float pos[4];
  float qtn[4];
  float life;
  unsigned short next;
  unsigned short prev;
  unsigned char dmy[8];
};
struct MCMNG
{
  int type[2][4];
  int free[2][4];
  int format[2][4];
  int result[2][4];
  int portno;
  int slotno;
  int funcno;
  int transno;
  int errorno;
  int getdir;
  int messno;
  int count;
  char *name;
  char *name2;
  unsigned int dataui;
  unsigned int dataui2;
  Flchk *table;
  void *datahd;
  void *datahdc;
};
struct MCMng
{
  unsigned char Mode;
  unsigned char State;
  unsigned char Port;
  unsigned char Slot;
  unsigned char Data;
  unsigned char Retry;
  unsigned char Message[2];
  int (*Function)();
  IconSys *lpIconSys;
  unsigned char *lpIconData[3];
  unsigned int IconSize[3];
};
struct MGDieAnimFuncTbl
{
  void (*AnimeFunc)();
};
struct MGProcsts
{
  unsigned char ctrlID;
  unsigned char sgmodeID;
};
struct MapData
{
  int s_or_l;
  int l_map_id;
  int s_map_id;
  int l_map_text_id;
  int s_map_text_id;
  int ld_real_pos_x;
  int ld_real_pos_y;
  int ld_tex_pos_x;
  int ld_tex_pos_y;
  int ru_real_pos_x;
  int ru_real_pos_y;
  int ru_tex_pos_x;
  int ru_tex_pos_y;
  int l_ld_real_pos_x;
  int l_ld_real_pos_y;
  int l_ld_tex_pos_x;
  int l_ld_tex_pos_y;
  int l_ru_real_pos_x;
  int l_ru_real_pos_y;
  int l_ru_tex_pos_x;
  int l_ru_tex_pos_y;
};
struct MapFuncTable
{
  unsigned char item_name[32];
  void (*GetDataFunc)();
  void (*SetDataFunc)();
  void (*DecideFunc)();
  void (*CountUpFunc)();
  void (*CountDownFunc)();
  void (*Gene1Func)();
  void (*Gene2Func)();
  void (*EvrfrmFunc)();
  void (*InitFunc)();
  void (*CheckFunc)();
};
struct MapHead
{
  unsigned short MapMdlNum;
  unsigned short ObjMdlNum;
  unsigned short EneMdlNum;
  unsigned short PathMdlNum;
  unsigned short SfxMdlNum;
  unsigned short EventMdlNum;
  unsigned short SeMdlNum;
  unsigned short ItemMdlNum;
  unsigned short MapNum;
  unsigned short ObjNum;
  unsigned short EneNum;
  unsigned short PathNum;
  unsigned short SfxNum;
  unsigned short EventNum;
  unsigned short SeNum;
  unsigned short ItemNum;
  unsigned int MapMdlInfo;
  unsigned int ObjMdlInfo;
  unsigned int EneMdlInfo;
  unsigned int PathMdlInfo;
  unsigned int SfxMdlInfo;
  unsigned int EventMdlInfo;
  unsigned int SeMdlInfo;
  unsigned int ItemMdlInfo;
  unsigned int MapData;
  unsigned int ObjData;
  unsigned int EneData;
  unsigned int PathData;
  unsigned int SfxData;
  unsigned int EventData;
  unsigned int SeData;
  unsigned int ItemData;
  unsigned int MapObjectData;
  unsigned int ObjObjectData;
  unsigned int EneObjectData;
  unsigned int PathObjectData;
  unsigned int SfxObjectData;
  unsigned int EvtObjectData;
  unsigned int SeObjectData;
  unsigned int ItemObjectData;
};
struct MapHit
{
  float P1[4];
  float P2[4];
  float P3[4];
  float V12[4];
  float V13[4];
  float N[4];
};
struct MapInfo
{
  unsigned int unused0;
  unsigned char MapAmbR;
  unsigned char MapAmbG;
  unsigned char MapAmbB;
  unsigned char unused1;
  unsigned char glare;
  unsigned char unused3[3];
  unsigned int unused2[5];
};
struct MapSe
{
  float Pos[4];
  unsigned char bUse;
  unsigned char unused0[3];
  int SeId;
  int WaitTimer;
  int PlayTimer;
  SeData *lpSeData;
  int SeHdl;
  int unused1[2];
};
struct MapSfx
{
  unsigned char bUse;
  unsigned char unused0[3];
  int SfxHdl;
  MdlMng *lpMap;
  int unused[1];
};
struct Material
{
  float DiffuseColor[3];
  float SpecularLevel;
  float SpecularColor[3];
  float SpecularExp;
  DiffuseTexture *lpDiffuseTexture;
  DiffuseTexture *lpReflectionTexture;
  unsigned char SemiTrans;
  unsigned char DummyPolyId;
  unsigned char Selfillum;
  unsigned char Pad0;
  MaterialParam *lpMaterialParam;
  AlphaBlend AlphaBlend;
  void *lpMaterialReserve;
};
struct Material2
{
  unsigned char *pMaterialTexture;
  unsigned char *pEventTexture;
};
struct MaterialParam
{
  unsigned char ShadowFlag;
  unsigned char NoneAnti;
  unsigned char UseCompTex;
  unsigned char unused[1];
};
struct Matrix
{
  short MatrixId;
  short BlendMatrixId;
  float BlendWeight;
  float BlendWeightAdjust;
  int BlendInverse;
};
struct MdlData
{
  int MaxAnimParam;
  unsigned int TexInVmd;
  unsigned short MdlNo;
  unsigned short MdlType;
  unsigned char bMultiDraw;
  unsigned char DmyPolyNum;
  unsigned char DropShadow;
  char unused0;
  void *lpVmdHead;
  void *lpAniHead;
  void *lpHmdHead;
  void *lpSmdHead;
  void *lpMicHead;
  void *lpMi3Index;
  void *lpJcnFileHead;
  void *lpAnimParam;
  void *lpBndFile;
  void *lpMdlFile;
  void *lpAniFile;
  void *lpHdlFile;
  void *lpSdlFile;
  void *lpTexList;
  void *lpDss;
  void *lpPrm;
  unsigned int *lpObjGroupID;
  unsigned int *lpPacket;
  unsigned int *lpCurrent;
  unsigned int *lpTexPacket;
  unsigned int *lpTexCurrent;
  unsigned int MdlPacketSize;
  unsigned int TexPacketSize;
  float aMorphRate[3];
  unsigned int unused[2];
  DmyPoly DmyPoly[32];
};
struct MdlInfo
{
  char FileName[32];
};
struct MdlLink
{
  char *lpSeq;
  void *lpData;
  int DataSize;
  char *lpFileName;
  void *lpFile;
  int FileSize;
  MdlLink *lpNextNode;
  int Pad0;
};
struct Target
{
  float angY;
  float distXZ;
  float angStep;
  unsigned short stayAnim;
  unsigned short walkAnim;
  unsigned short prevAnim;
  short unused[5];
  MdlMng *lpMdl;
};
struct MdlMng
{
  unsigned char bUse;
  unsigned char bMultiDraw;
  unsigned char bErase;
  unsigned char bEraseByMapDraw;
  unsigned char bPresetMatrix;
  unsigned char FadeType;
  unsigned char Priority;
  unsigned char bUseMdlLight;
  unsigned char bUseMdlAmbient;
  unsigned char bUseWorldMat;
  unsigned char unused0[2];
  MdlData *lpMdlData;
  float (*lpObjMat)[4][4];
  float (*lpShadowMat)[4][4];
  float (*lpLocalMat)[4][4];
  void *lpMi3Head;
  float Pos[4];
  float Ang[4];
  float Scl[4];
  float Acc[4];
  float Dcy[4];
  float PosB[4];
  float AngB[4];
  float LightDir[4];
  float LightCol[4];
  float AmbientCol[4];
  float WorldMat[4][4];
  void *lpAnimCtrl;
  short IndexAnim;
  short AnimState;
  float AnimSpeed;
  float Alpha;
  float HitSize;
  float HitHigh;
  float ShadowSize;
  float ShadowHigh;
  int Hp;
  unsigned int timer;
  unsigned char TeamNo;
  unsigned char TeamNoBase;
  unsigned char AttackNo;
  unsigned char Flags;
  short DmgCnt;
  short NoSearched;
  unsigned char HitOff;
  unsigned char GravOff;
  unsigned char MapHitOff;
  unsigned char CharHitOutOff;
  unsigned int HitFlag;
  MdlMng *lpHitMap[2];
  void *lpParts;
  void *lpEventData;
  void *lpCtrlSt;
  float FadeStep;
  DrawRegs DrawRegs;
  int State[10];
  void *lpPathMng;
  int PLightIndex;
  float Z_Offset;
  short DebugAnimState;
  unsigned char CtrlMode;
  unsigned char CtrlModeB;
  unsigned int *lpShiftTexPacket;
  unsigned char sceneNo;
  unsigned short hSfxPLight;
  Flags flags;
  Target Target;
  int remnant_HP;
  unsigned short blood_pool_sfx_idx;
};
struct MemocaMng
{
  unsigned char state[2];
  unsigned char mode_[2];
  unsigned char checking_port;
  unsigned char checking_port_ok;
  unsigned char data_index;
  unsigned char list_ok;
  unsigned char checking_on;
};
struct MenuCtrlData
{
  int temp_wait;
  int get_goto_order;
  float size;
  float colR;
  float colG;
  float colB;
  float colA;
  int cloth_wait;
  int dmy2[8];
};
struct MenuCtrlFileHeader
{
  unsigned long magic_code;
  unsigned long file_size;
  unsigned short version_id;
  unsigned short ctrl_type;
  unsigned int item_num;
  unsigned int data_offset;
  Header_data_flag header_data_flag;
  unsigned int id;
  unsigned int default_item_id;
  int pos_x;
  int pos_y;
  int anim_num;
  int tex_num;
  unsigned int restart_default_item_id_on;
  unsigned int draw_priority_num;
  unsigned char aTexDirName[64];
  int ctrl_init_time;
  int ctrl_end_time;
  int cloth_wait_time_init;
  int cloth_wait_time_end;
  int dmy1[4];
  int system_fade_in_time;
  int system_fade_out_time;
  int alpha_fade_on;
  int dmy2[1];
  int init_se_id;
  int end_se_id;
  int dmy3[2];
};
struct MenuCtrlMng
{
  Mng_state mng_state;
  unsigned char *pMenuCtrlFileBuf;
  int file_id;
  int menu_file_id;
  MenuCtrlData MenuCtrlData;
  MenuItemMng *pMenuItemMng;
  State_order state;
  int *pTexIdList;
  int now_cursor_id;
  int force_change_cursor_id;
  int check_cursor_id;
  State_order state_order;
  int key_enable;
  unsigned char **pMenuTexlistBuf;
};
struct Menu_ctrl_param_flag
{
  unsigned int decide_end : 1;
  unsigned int cancel_end : 1;
  unsigned int up_end : 1;
  unsigned int down_end : 1;
  unsigned int left_end : 1;
  unsigned int right_end : 1;
  unsigned int option_end : 1;
  unsigned int check_cursol_on : 1;
  unsigned int reserve : 24;
};
struct MenuCtrlParam
{
  int id;
  unsigned int item_type;
  unsigned int type_data_id;
  int linked_item_id;
  int item_state_end_change_type;
  int item_state_end_change_id;
  int item_state_none_change_type;
  int item_state_none_change_id;
  int ctrl_move_decide;
  int ctrl_move_cancel;
  int ctrl_move_up;
  int ctrl_move_down;
  int ctrl_move_left;
  int ctrl_move_right;
  int draw_priority;
  Menu_ctrl_param_flag menu_ctrl_param_flag;
  int item_move_decide;
  int item_move_cancel;
  int item_move_up;
  int item_move_down;
  int item_move_left;
  int item_move_right;
  unsigned int item_break_on;
  int item_move_option;
  int func_exe_decide;
  int func_exe_cancel;
  int func_exe_up;
  int func_exe_down;
  int func_exe_left;
  int func_exe_right;
  unsigned int func_break_on;
  int func_exe_option;
};
struct Menu_ctrl_tex_param_flag
{
  unsigned int read_tex_on : 1;
  unsigned int reserve : 31;
};
struct MenuCtrlTexParam
{
  Menu_ctrl_tex_param_flag menu_ctrl_tex_param_flag;
  int draw_priority;
  int dmy[2];
  char aFilename[64];
};
struct Menu_ctrl_texlist_param_flag
{
  unsigned int read_list_on : 1;
  unsigned int reserve : 31;
};
struct MenuCtrlTexlistParam
{
  Menu_ctrl_texlist_param_flag menu_ctrl_texlist_param_flag;
  int draw_priority;
  unsigned int load_per_list_on;
  int dmy[1];
  char aFilename[64];
};
struct MenuData
{
  int dmy1[8];
  int dmy2[8];
};
struct MenuFileHeader
{
  unsigned long magic_code;
  unsigned long file_size;
  unsigned short version_id;
  unsigned short dmy1;
  unsigned int ctrl_num;
  unsigned int data_offset;
  Header_data_flag2 header_data_flag;
};
union Variable
{
  char _s8;
  short _s16;
  int _s32;
  long _s64;
  unsigned char _u8;
  unsigned short _u16;
  unsigned int _u32;
  unsigned int _u64;
  float _f32;
  u128_t _u128;
  int _q128[4];
  unsigned char *_p8;
  void *_pv;
};
struct MenuItemData
{
  Anim_arrange anim_arrange;
  int now_frame;
  int now_anim_id;
  int now_tex_anim_counter;
  int anim_play_counter;
  int func_id;
  float tex_u;
  float tex_v;
  float tex_w;
  float tex_h;
  Variable variable;
  int force_anim_id;
  float force_anim_ratio;
  float dmy;
};
struct Wait_flag
{
  unsigned int ctrl_decide : 1;
  unsigned int ctrl_cancel : 1;
  unsigned int ctrl_up : 1;
  unsigned int ctrl_down : 1;
  unsigned int ctrl_left : 1;
  unsigned int ctrl_right : 1;
  unsigned int ctrl_option : 1;
  unsigned int item_decide : 1;
  unsigned int item_cancel : 1;
  unsigned int item_up : 1;
  unsigned int item_down : 1;
  unsigned int item_left : 1;
  unsigned int item_right : 1;
  unsigned int item_option : 1;
  unsigned int exe_decide : 1;
  unsigned int exe_cancel : 1;
  unsigned int exe_up : 1;
  unsigned int exe_down : 1;
  unsigned int exe_left : 1;
  unsigned int exe_right : 1;
  unsigned int exe_option : 1;
  unsigned int force_end_none : 1;
  unsigned int force_end_end : 1;
  unsigned int through : 1;
  unsigned int reserve : 18;
};
struct MenuItemMng
{
  Mng_state mng_state;
  MenuItemParam *pMenuItemParam;
  State state;
  MenuItemData MenuItemData;
  int goto_id;
  State state_order;
  int *pParentPosX;
  int *pParentPosY;
  int *pAnimNum;
  AnimList *pAnimList;
  int *pTexIdList;
  Wait_flag wait_flag;
  float old_draw_pos[4];
  int link_id;
};
struct Mip_gene_flag
{
  unsigned int use_ctrl_arg_data : 1;
  unsigned int reserve : 31;
};
struct MenuItemParam
{
  int id;
  int item_type;
  Mip_gene_flag mip_gene_flag;
  unsigned int set_item_data_on;
  int p_data;
  unsigned int data_type;
  unsigned int special_proc_type;
  unsigned int blend_type;
  int bokasi_data;
  int dmy4;
  int center_flg;
  int msg_id;
  int start_anim_id;
  int wait_anim_id;
  int end_anim_id;
  float font_scale;
  int start_anim_play_num;
  int wait_anim_play_num;
  int end_anim_play_num;
  int font_size;
  int select_se_id;
  int decide_se_id;
  int cancel_se_id;
  unsigned int size_def_on;
  int start_func_id;
  int wait_func_id;
  int end_func_id;
  unsigned short tex_uv_rrot_num;
  unsigned short tex_uv_rl_symmetry;
  int tex_index_id;
  int tex_anim_type;
  int tex_anim_x;
  int tex_anim_y;
  float tex_u;
  float tex_v;
  float tex_w;
  float tex_h;
  Anim_arrange anim_arrange;
  unsigned char item_name[64];
};
struct Mmid_flag
{
  unsigned int tex_to_world : 1;
  unsigned int no_use : 1;
  unsigned int ignore_event_flag : 1;
  unsigned int dmy : 29;
};
struct MenuMapIconData
{
  int id;
  int icon_info_id;
  int map_id;
  int event_flag;
  float pos_x;
  float pos_y;
  float ang;
  Mmid_flag mmid_flag;
  int icon_data_id[3];
  short icon_data_id_icon_offset_x;
  short icon_data_id_icon_offset_y;
};
struct Mmii_flag
{
  unsigned int dmy : 1;
};
struct MenuMapIconInfo
{
  int id;
  Mmii_flag mmii_flag;
  int tex_size_x;
  int tex_size_y;
  int pos_x;
  int pos_y;
  int size_x;
  int size_y;
  unsigned char aTexName[32];
};
struct MenuMng
{
  Mng_state mng_state;
  MenuData MenuData;
  unsigned char *pMenuFileBuf;
  MenuCtrlMng *pMenuCtrlMng;
  MenuMng *pMenuMng_Open;
  int file_id;
  int now_ctrl_node;
  int update_off;
  int key_off;
};
struct Menu_param_flag
{
  unsigned int decide_restart : 1;
  unsigned int cancel_restart : 1;
  unsigned int reserve : 30;
};
struct MenuParam
{
  int id;
  int dmy2;
  int menu_id;
  int dmy;
  int child_id;
  int sibling_id;
  int parent_id;
  Menu_param_flag menu_param_flag;
};
struct MenuTdMng
{
  State3 state;
  int msg_id;
  int now_msg_id;
  int next;
  int dmy[4];
  unsigned char aMsg[512];
};
struct Mi2Head
{
  unsigned int Size;
  unsigned int FileId;
  unsigned int ObjNum;
  unsigned int Frame;
};
struct Mi3Head
{
  unsigned int DataSize;
  unsigned int FileId;
  short ObjectNum;
  unsigned short Flag;
  int FrameNum;
};
struct Mi3Index
{
  unsigned int Offset;
};
struct Mi3Obj
{
  unsigned short TodKeyNum;
  unsigned short MimeKeyNum;
  unsigned short Tp2Id;
  unsigned short ObjectId;
  unsigned int InitAngleIndex;
  unsigned int InitPositionIndex;
  Tod *lpTodData;
  MimeData *lpMimeData;
  Mi3Obj *lpChild;
  Mi3Obj *lpSibling;
};
struct MicHead
{
  unsigned int FileSize;
  unsigned int DataNum;
  unsigned int VectorOffset;
  unsigned int Reserved;
};
struct MimeData
{
  unsigned short Key;
  unsigned short FrameNum;
  unsigned short VertexNum;
  unsigned short NormalNum;
  unsigned int *pVertexList;
  unsigned int *pNormalList;
};
struct MimeData2
{
  unsigned short Key;
  unsigned short FrameNum;
  unsigned short VerNum;
  unsigned short NrmNum;
  unsigned int *lpVerList;
  unsigned int *lpNrmList;
};
struct Mmidh_flag
{
  unsigned int dmy : 32;
};
struct Mng
{
  float mrx[4][4];
  float time;
  float scale;
  float speed;
  float rnd_range;
  unsigned int rgba;
  float life;
  TexMng *pTex;
  float wall_r;
  float wall_l;
  unsigned char bWallR;
  unsigned char bWallL;
  void *pBugLinkList;
  int dmy[3];
  char buglink_buff[3072];
};
struct Next
{
  unsigned char ucType;
  unsigned char ucVolume;
  unsigned char ucDelay;
  unsigned char ucFeedback;
  char cDmy[4];
};
struct Mng2
{
  Next Current;
  Next Next;
  Cmd Cmd;
};
struct Mng3
{
  unsigned char sq_now;
  unsigned char ucVolMaster[4];
  unsigned char ucVol[4];
};
struct ModelBlurMng
{
  unsigned char Use;
  unsigned char MakeTexture;
  unsigned char unused[2];
  MdlMng *lpMdlMng;
  void *lpImage;
};
struct MorphChanData
{
  unsigned int KeyNum;
  unsigned int ObjId;
  unsigned int *lpMorphList;
  unsigned int dummy;
};
struct MorphMng
{
  unsigned char *lpMiz;
  float Frame;
  unsigned char bPlay;
  unsigned char unused[7];
};
struct MorphTargetMng
{
  short Num;
  short List[3];
};
struct MoviePlay
{
  unsigned char *lpBuf;
  int sizeBuf;
  unsigned char path[64];
  unsigned char bUse;
  unsigned char unused[3];
};
struct MyCtrl
{
  Func2 func;
  Key2 key;
  float SummonPos[4];
  float LastPreAnimPos[4];
  float moveRange[6];
  float moveAngle[6];
  float backAngle;
  float totterAngle;
  unsigned char bDash;
  unsigned char bControlOff;
  unsigned char bClinged;
  unsigned char bDrawWrist;
  unsigned char ConcentLoop;
  unsigned char bDead;
  unsigned char bDoubleAttack;
  unsigned char bHeartStop;
  unsigned char bCrouch;
  unsigned char WristObjId;
  unsigned char bBackDisable;
  unsigned char unused1[1];
  int sndHeartHdl;
  int sfxLumpHdl;
  int HpRecMax;
  int HeartBeat;
  int HeartBeatTimer;
  int HeartBeatTimerEnd;
  unsigned char bFantomDizzy;
  unsigned char WepId;
  unsigned char btnId;
  unsigned char BreakFollow;
  unsigned char bDashDisable;
  unsigned char DoorType;
  unsigned char StairsState;
  unsigned char bCrouchDisable;
  MdlMng *lpP030;
  unsigned int WallHit;
  int sfxPLightHdl;
  int sndConcentrateHdl;
  int UseWait[2];
  unsigned short ClingedDisable;
  unsigned short stepTimer;
};
struct Normal
{
  char Normal[3];
};
struct NowPath
{
  float Pos[4];
  NowPath *lpParent;
  NowPath *lpChild;
};
struct Wind
{
  float val_target;
  float val_curr;
  float recover;
  float response;
  float last_pos[4];
};
struct Obj
{
  float pos[4];
  float rgba[4];
  float curr_fade;
  float init_fade;
  float range;
  float dimmer;
  int plight_id;
  Flag4 flag;
  char dmy[11];
  Blink blink;
  Wind wind;
};
struct Obj2
{
  float st[2];
};
struct ObjData
{
  int CtrlId;
  int IndexId;
  int EventKind;
  int EventData1;
  int EventData2;
  float EventDist;
  float EventAng;
  int LightId;
  int SeId;
  int AnimId;
  int DrawOn_MP_CtrlId;
  unsigned int obj_shadow : 1;
  unsigned int char_shadow : 1;
  unsigned int use_item : 1;
  unsigned int Flag4_8 : 5;
  unsigned int init_play : 1;
  unsigned int init_rand : 1;
  unsigned int vault : 1;
  unsigned int Flag12_16 : 5;
  unsigned int draw_use : 1;
  unsigned int Flag18_32 : 15;
  int dmy2[4];
};
struct ObjParam
{
  unsigned char Specular;
  unsigned char Scissor;
  unsigned char Fog;
  unsigned char ParallelLight;
  unsigned char PointLight;
  unsigned char Joint;
  unsigned char TexScroll;
  unsigned char SortPrio;
  unsigned char ShadowLevel;
  unsigned char MorphID;
  unsigned char Mirror;
  unsigned char Pad0;
};
struct ObjReserve
{
  unsigned int MicroCodeAddr;
  unsigned int *lpModelPacket;
  unsigned int *lpShadowPacket;
  unsigned int *lpObjSort;
  unsigned int *lpMorphPacket;
};
struct Offset
{
  unsigned short fileID;
  unsigned short groupID;
  unsigned int dataoffset;
  unsigned int nameoffset;
};
struct Offset2
{
  unsigned short fileID;
  unsigned short groupID;
  unsigned int dataoffset;
  unsigned int filesize;
  unsigned int nameoffset;
};
struct OldScroll
{
  unsigned char Type[2];
  unsigned char unused[2];
  float Speed[2];
  float Amplitude[2];
};
struct OldParam
{
  unsigned int FileVersion;
  unsigned int FileSize;
  DizzyEffect DizzyEffect;
  OldScroll TexScroll[32];
  float AmbientColor[32][4];
};
struct Repeat_state
{
  Krdp key[16];
  unsigned short repeat_key;
  unsigned short sdummy;
};
struct Press
{
  unsigned char Lright;
  unsigned char Lleft;
  unsigned char Lup;
  unsigned char Ldown;
  unsigned char Rup;
  unsigned char Rright;
  unsigned char Rdown;
  unsigned char Rleft;
  unsigned char L1;
  unsigned char R1;
  unsigned char L2;
  unsigned char R2;
};
struct Pad
{
  unsigned char success;
  unsigned char data_len;
  Button button;
  unsigned char r3h;
  unsigned char r3v;
  unsigned char l3h;
  unsigned char l3v;
  unsigned char apress[12];
  Press press;
  Button edge;
  Button repeat;
};
struct Sdp
{
  u128_t work[16];
  Pad pdata;
  Repeat_state repeat_state;
  int state;
  int req_state;
  int act_no;
  unsigned char act_data[6];
  unsigned char phase;
  unsigned char ret_phase;
  unsigned char term_id;
  unsigned char type;
  unsigned char mode;
  unsigned char modechg;
  unsigned char modelock;
  unsigned char sent_align;
  unsigned char vibrasep_mode;
  unsigned char analog_edge;
  unsigned char cdummy;
};
struct PADMNG
{
  Sdp sdata[8];
  unsigned char open_slot[2];
};
struct PMObject
{
  PMPrim *lpPMPrim[2];
  int PMPrimNum[2];
  int PMIndexNum[2];
  unsigned short *lpPMChange[2];
  int PMVertexNum;
  void *lpPMVertex;
  int Pad[2];
};
struct PMPrim
{
  Material *lpMaterial;
  unsigned short IndexStart;
  unsigned short IndexNum;
  Index *lpIndex;
};
struct PackP
{
  int vol;
  int pan;
  int id;
  int update;
};
struct PadCurInfo
{
  List klist;
  unsigned char knum;
  List dlist;
  unsigned char dnum;
};
struct PadInfo
{
  int curposID;
  int itemposID;
  int tutorialID;
  unsigned char komaID;
  unsigned char spotsID;
};
struct PadVib
{
  float NowLPower;
  float AddLPower;
  float SmallFrame;
  float LargeFrame;
  int NowSPower;
  int AddType;
  int unused[2];
};
struct PadVibPlan
{
  unsigned char bUse;
  unsigned char Type;
  unsigned char unused[6];
  unsigned int Frame;
  int Port;
  PadVib PadVib;
};
struct Param
{
  int ProgramId;
  Param *pParent;
  Param *pChild;
  Param *pSibling;
  int FixParamNum;
  FixParam *pFixParam;
  int SeqParamNum;
  SeqParam *pSeqParam;
  CommonParam CommonParam;
};
struct Param_offset
{
  unsigned int offset;
  unsigned int num;
};
struct Params
{
  unsigned short type;
  TexMng *pTex;
  float size;
  float length;
  float life;
  float split;
  unsigned short divH;
  unsigned short divV;
  float cut;
  float alpha;
};
struct Parts
{
  float Pos[4];
  float Ang[4];
  float Scl[4];
  int ModelID;
  int MdlKindId;
  unsigned int MapObjData;
  int unused1[1];
  char Name[16];
};
struct PathData1
{
  int CtrlId;
  int FollowId;
  int FollowType;
  int ParentPath;
  int ChildPath;
  int dmy[6];
  unsigned int Flag1_32 : 32;
  int dmy2[4];
};
struct PathMng
{
  unsigned char bUse;
  unsigned char bLost;
  unsigned char bLoop;
  unsigned char Type;
  int CtrlId;
  NowPath *lpNowPath;
  NowPath *lpPrePath;
  NowPath PathData[16];
  unsigned short EndAnimId;
  unsigned short MoveAnimId;
  float AngCorrect;
  int unused1[2];
};
struct Pb
{
  float loc[4];
  float ang[4];
  float scale[4];
  float rgba[4];
};
struct PeepCamera
{
  PeepCameraInfo *lpInfo;
  CamPath *lpCamPath;
  unsigned char Status;
  unsigned char CamIndex;
  unsigned char CamLock;
  unsigned char Look;
  unsigned char Visible;
  unsigned char Mask;
  unsigned char CancelOff;
  unsigned char unused;
};
struct PeepCameraInfo
{
  unsigned char CamIndex;
  unsigned char TargetObj[3];
  float MinAngX;
  float MaxAngX;
  float MinAngY;
  float MaxAngY;
  int (*InitEventFunc)();
  int (*CtrlEventFunc)();
  int (*QuitEventFunc)();
};
struct Pelorus
{
  unsigned char Disc1Now;
  unsigned char Disc2Now;
  unsigned char Disc3Now;
  char Disc1Dir;
  char Disc2Dir;
  char Disc3Dir;
  unsigned char Disc1Lock;
  unsigned char Disc2Lock;
  unsigned char Disc3Lock;
  unsigned char unused[3];
};
struct PlayerHit
{
  float P[4];
  float H;
  float R;
  unsigned char Through;
  unsigned char unused[7];
};
struct PlayerInfo
{
  float Position[3];
  float Angle;
  unsigned char SceneNo;
  unsigned char CameraNo;
  unsigned char EquipType[3];
  unsigned char EquipId[3];
  unsigned char WepId;
  unsigned char Hp;
  unsigned char HeartBeat;
  unsigned char Clear;
  unsigned char NineHitNum;
  unsigned char Penance;
  unsigned char unused[2];
};
struct PointLightMng
{
  unsigned char bUse;
  unsigned char ShadowOff;
  unsigned char unused0[2];
  float Radius;
  unsigned int unused1[2];
  float Pos[4];
  float Col[4];
};
struct PosData0
{
  unsigned short key;
  unsigned short nframe;
  unsigned short key_no;
  unsigned short unused1;
  unsigned int unused2[2];
  float local_pos[4];
  float pos_intan[4];
  float pos_outtan[4];
};
struct Prev
{
  float matrix[4][4];
  float (*p_matrix)[4][4];
  unsigned short prog_no;
  unsigned char ptcl_num;
  unsigned char dmy;
  Ptcl *p_ptcl_top;
  FixParam *p_fix_param;
  SeqParam *p_seq_param;
  Prev *p_prev;
  Prev *p_next;
  Prev *p_relation_prev;
  Prev *p_relation_next;
  unsigned int lifecnt;
  unsigned int cnt;
  Bit_flag bit_flag;
  unsigned short sfx_sttdata_idx;
  unsigned short cframe;
  unsigned char dmy2[14];
  unsigned char extra_data[32];
};
struct PrimHead
{
  unsigned short KickMaterial : 1;
  unsigned short Index : 15;
  unsigned char PolyNum;
  unsigned char PrimNum;
  BoundBox *lpBoundBox;
  PrimHead *lpNext;
  Vertex *lpVertex;
  Normal *lpNormal;
  TexCoord *lpTexCoord;
  Color *lpColor;
  LightVec *lpLightVec;
  SpecVec *lpSpecVec;
  LodVertex *lpLodVertex;
  PrimHead *lpNextTree;
  Material *lpMaterial;
  void *lpPrimHeadReserve;
  unsigned int Pad0[3];
};
struct Prm_dmc
{
  float qtn[4];
};
struct Prm_stt
{
  float rot_spd[4];
  unsigned short hModel;
};
struct Ptcl
{
  float mRot[4][4];
  float loc[4];
  float ang[4];
  float scale[4];
  float rgba[4];
  float n_speed[4];
  float add_uv[2];
  float dmy;
  char rand[4];
  unsigned int lifecnt;
  unsigned int cnt;
  Ptcl *p_sibling;
  Prev *pEmitter;
  unsigned char extra_data[32];
  float qtn[4];
};
struct Ptcl2
{
  float matrix[4][4];
  float (*p_matrix)[4][4];
  unsigned short id;
  unsigned char ptcl_num;
  unsigned char dmy;
};
struct PtclExDat
{
  float press_coeff;
  float valance;
  float pitch_coeff;
  unsigned short hModel;
};
struct PtclExDat2
{
  float arrival_pos[4];
  float next_movcount;
  float blink_coeff;
  float scale;
};
struct Ptcl_data
{
  Ptcl *p_free;
  Ptcl *buff_top;
  short num;
  short num_max;
};
struct Rect
{
  float left;
  float top;
  float right;
  float bottom;
};
struct RegsData
{
  unsigned long data;
  unsigned int regs;
};
struct RemapInfo
{
  unsigned int ChunkId;
  unsigned int (*lpRemapFunc)();
  unsigned int (*lpCreateFunc)();
};
struct Reverb
{
  short type;
  short volume;
  short delay;
  short feedback;
  short depth;
  char envvol[4];
  char dummy[2];
};
struct RhrFileHeader
{
  unsigned long magic_code;
  unsigned long file_size;
  unsigned int version_id;
  unsigned int param_num;
  unsigned int param_size;
  unsigned char dmy[4];
  Param_offset param_offset[12];
};
struct RiddleMng
{
  int State;
  int No;
  int Timer;
  int Result;
  unsigned char *lpRiddleBuf;
  int TutorialMsgId;
  int TutorialFlag;
  int unused[1];
  Pelorus Pelorus;
  Buddhist Buddhist;
  GodShelf GodShelf;
};
struct Rpcd
{
  void *paddr;
  unsigned int pid;
  int tid;
  unsigned int mode;
};
struct RtaData
{
  unsigned int rta_id;
  unsigned char reserve1[60];
  float mat[4][4];
  float vec[4];
  float air_move_vec[4];
  float tmp_fp_pos[4];
  unsigned char reserve4[16];
  float tmp_mat[4][4];
  float pulled_by_parent_vec[4];
  float pulled_by_child_vec[4];
  unsigned char reserve3[224];
};
struct RtaFileHeader
{
  unsigned long magic_code;
  unsigned long file_size;
  unsigned short version_id;
  unsigned short rhr_file_id;
  unsigned int obj_num;
  unsigned int data_offset;
  Header_data_flag header_data_flag;
};
struct RtaMng
{
  Mng_state mng_state;
  unsigned char *pRtaFileBuf[35];
  unsigned char *pRhrFileBuf[35];
  RtaData *pRtaDataBuf[770];
  unsigned char *pRtaBndBuf;
  unsigned int mdl_handle;
  unsigned int buf_id;
  unsigned int dmy[2];
};
struct Rta_param
{
  unsigned int id;
  float max_length;
  float min_length;
  float spring_k;
  float obj_len;
  float move_vec_add_rate;
  float vec_decay;
  float gravity;
  float max_rot;
  float max_vec;
  float air_decay;
  float vertical_air_decay;
  float rebound_k;
  unsigned int rhr_group_id;
  float hit_decay;
  float vec_move_add_rate;
  unsigned char proc_param[64];
};
struct Table_data_flag
{
  unsigned int no_use : 1;
  unsigned int wind_type : 1;
  unsigned int acosf_table : 1;
  unsigned int reserve : 29;
};
struct RtaTable
{
  unsigned int id;
  unsigned short mdl_obj_id;
  unsigned short anm_obj_id;
  Table_data_flag table_data_flag;
  unsigned char follow_mdl_or_anm;
  unsigned char proc_id;
  unsigned char dmy1[2];
  float init_rot[4];
  float init_trans[4];
  unsigned int rta_data_offset;
  unsigned int child_offset;
  unsigned int sibling_offset;
  unsigned char dmy[4];
  float init_mat[4][4];
  Rta_param rta_param;
};
struct Rtc
{
  unsigned char stat;
  unsigned char second;
  unsigned char minute;
  unsigned char hour;
  unsigned char pad;
  unsigned char day;
  unsigned char month;
  unsigned char year;
};
struct Rv
{
  int kind;
  int val;
};
struct Rvp
{
  int core;
  int mode;
  short ldepth;
  short rdepth;
  int delay;
  int feedback;
  short lvol;
  short rvol;
};
struct Ss
{
  int kind;
  Rv arg[16];
  int wkL[7];
  float wkF[8];
};
struct SCR
{
  unsigned short on;
  char pad1[2];
  unsigned int *ScrNow;
  char pad2[4];
  Ss fifo[12];
  unsigned char Reg[128];
};
struct SCurrentP
{
  unsigned char *pTex[16];
  CCM *pCCM;
  unsigned int baseColor[4];
  unsigned int color[4];
  float italicParam;
  float spaceX[2];
  float spaceY[2];
  float scaleX[3];
  float scaleY[3];
  unsigned int reserved;
  unsigned char alignX : 2;
  unsigned char alignY : 2;
  unsigned char isRubyCenter : 1;
  unsigned char isDisableColor : 1;
  unsigned char dummy : 2;
  unsigned char dummy2[3];
  char brightness;
  unsigned char piecePixel;
  unsigned short moveRange;
  unsigned char aGeneralBuffer[64];
};
struct SMemMng
{
  Free free[16];
  Free alloc[16];
  Free info;
};
struct SPInfo
{
  unsigned short id;
  unsigned char draw_sw;
  unsigned char before_sw;
  int pos_x;
  int pos_y;
  int width;
  int height;
  int bk_pos_x;
  int bk_pos_y;
  int bk_width;
  int bk_height;
  int col[4];
  int anime_col[4];
  int tex_x;
  int tex_y;
  int tex_w;
  int tex_h;
  unsigned char alpha;
};
struct SState
{
  float x;
  float y;
  float scaledHeight[2];
  float nextHeight[2];
  float saveX;
  float saveY;
  unsigned char tb[256];
  float screenW;
  float screenH;
  unsigned long colorMask;
  Flag flag;
  unsigned char dummy[3];
  Rect rect;
  unsigned short (*charNextFP)();
  unsigned short (*charCheckFP)();
  float lineHeight;
  int currentLine;
  int isBegin;
  float maxChar;
  unsigned char lastAlpha;
  char dummyCode;
  unsigned char dummy2[2];
};
struct S_aCardFuncs
{
  void (*pActFunc)();
  void (*pDrawFunc)();
};
struct S_aCircleVertices
{
  float pos[4];
  float uv[4];
  float st[4];
  unsigned int color;
};
struct S_aFade
{
  float alpha;
  float alpha_min;
  float alpha_max;
  float alpha_spd;
  unsigned char state;
};
struct S_aItemData
{
  unsigned short id;
  unsigned short image_id;
  char *pName;
  TexMng *pTex;
  int dmy;
};
struct S_aItemNum
{
  Item item;
  Book book;
};
struct S_aSeGroup
{
  unsigned short usNumber;
  unsigned short ausSe[7];
};
struct S_dbgmsg
{
  unsigned int count;
  char szMsg[256];
  char szSrcFile[256];
  unsigned int line;
};
struct Sep
{
  char bt_idx;
  char ch;
  char key;
  char use;
};
struct Sqp
{
  void *iopp;
  int size;
  int bt_idx;
  int midi_port;
};
struct S_esmData
{
  Bmp bank_tbl[16];
  Sqp sq_tbl[4];
  Sep se_tbl[64];
  Rvp rev_tbl[4];
  Rvp cur_reverb;
  void *top_iopp;
  void *iop_se_strp;
  void *iop_pktp;
  Stream *se_strp;
  unsigned int mvol;
  unsigned short stereo;
  unsigned short running;
};
struct S_fire_attach
{
  unsigned short num_data;
  unsigned short default_sfx;
  short default_skip;
  Data2 aData[64];
};
struct Setting
{
  unsigned short scene_id;
  unsigned short drama_id;
  float alpha;
};
struct S_mng
{
  Prm_stt prm_stt[3];
  Prm_dmc prm_dmc[3];
  Setting setting[128];
  unsigned char setting_max_num;
  int bActive;
};
struct S_mngp
{
  int sfx_max;
  Emtr_state *p_emtr_state;
  Prev *p_emtr_buff;
  Prev **p_emtr_link;
  Param **p_param_table;
  char *p_param_buf;
  int frame_cnt;
  int cur_seek_sfx;
  int act_sfx_cnt;
  int param_max;
  int handle;
  int dmy2;
  Ptcl_data ptcl_data;
  Flags2 flags;
  char dmy[3];
};
struct S_msg_buf
{
  int id;
  int use;
  int msg_id;
  int flag;
  int check;
  int prev;
  int next;
};
struct S_pFileInfo
{
  unsigned int dataOffset;
  unsigned int filesize;
};
struct S_pMenuMapIconDataHeader
{
  unsigned long magic_code;
  unsigned long file_size;
  unsigned short version_id;
  unsigned short dmy1;
  unsigned int info_num;
  unsigned int data_num;
  Mmidh_flag mmidh_flag;
  unsigned char aFilename[32];
};
struct Work_mng
{
  int num;
  Work_buff *p_work_buff;
  unsigned int *p_work_flag;
};
struct S_pSfxMng
{
  int num_max;
  int num;
  int param_max;
  unsigned int frame;
  Sfx *p_sfx_buf;
  Sfx *p_free;
  Sfx *p_free_last;
  Sfx_state *p_sfx_state;
  char *p_param_buf;
  Work_mng work_mng;
  Param *p_param_table[1024];
};
struct S_pSysInfo
{
  void *pDmaBuffer;
  unsigned int uiDmaBufferSize;
  void *pDmaCurrent;
  void *pDmaLatest;
  void *pCodeBuffer;
  unsigned int uiCodeBufferSize;
  void *pCodeCurrent;
  unsigned short usEntryStrNum;
  unsigned short usStrNum;
  unsigned short usCodeEntryNum;
  unsigned char bfMode : 1;
  unsigned char bfConText : 1;
  unsigned char bfDmaOverDraw : 1;
  unsigned char bfFfmd : 1;
  unsigned char bfDummy : 4;
  unsigned char ucBfTransTexId;
  char cDmy[26];
  unsigned short usBegin;
};
struct S_params
{
  unsigned int bugs_rgba;
};
struct S_qdIopToEeRpc
{
  int key;
  int active;
  Link *link;
  Link *start;
  Link *end;
  S_qdIopToEeRpc *next;
};
union S_rndr_stt
{
  u128_t sb;
  B3 b;
};
struct S_scdRpc
{
  Rpcd rpcd;
  unsigned int command;
  void *buff;
  void *gp;
  void (*func)();
  void *para;
  Link *serve;
};
struct S_sddSeTrans
{
  unsigned int data;
  unsigned int addr;
  unsigned int size;
  unsigned int mode;
};
struct S_sdiData
{
  char *d_buff;
  char *s_buff;
  int remain_size;
  int trans_size;
  int real_size;
  int did;
  int stat;
  int dummy;
};
struct SfxPrm
{
  float amplitude;
  float speed;
  float transparency;
};
struct S_setting
{
  SfxPrm flicker;
  FEnable fEnable;
};
union S_states
{
  unsigned int ui32;
  B2 b;
};
struct S_svpBuf
{
  short Lvol;
  short Rvol;
  void *pHD;
  short prog_no;
  unsigned short se_idx;
  unsigned short port;
  unsigned short update;
};
struct S_tex_id_table
{
  int tex_id;
  int udlr_tex_id[6];
  int ld_pos[2];
  int ld_tex[2];
  int ru_pos[2];
  int ru_tex[2];
  int name_msg_id;
  TexMng *pTexMng;
  void *pTexList;
  unsigned char aTexListName[64];
  unsigned char aTexFileName[32];
};
struct S_vibration_act
{
  float holy;
  float vert;
  float max_timer;
  float curr_timer;
  int type;
};
struct SandEffectMng
{
  MdlMng *lpMdlMng;
  unsigned char *lpSandTexBuf;
  short Counter;
};
struct SaveData
{
  PlayerInfo PlayerInfo;
  unsigned char GameEventFlag[256];
  unsigned char ItemData[512];
};
struct SaveDataHeader
{
  unsigned char Use;
  unsigned char Player;
  unsigned char Map;
  unsigned char Level;
  unsigned int Time;
};
struct SaveEvent
{
  int State;
  unsigned short ItemNum;
  unsigned short unused;
  int PathId;
  int BoatId;
  MdlMng *lpBoat;
};
struct SaveSys
{
  unsigned char ClearCount[3];
  unsigned char ExtraClear;
  unsigned char Sugoroku;
  unsigned char KeyConfType;
  unsigned char PadVib;
  char Brightness;
  unsigned short BGMVolume;
  unsigned short VoiceVolume;
  unsigned char SEVolume;
  unsigned char SndMode;
  unsigned char VoiceLanguage;
  unsigned char unused;
  SaveDataHeader SaveDataHeader[8];
};
struct SceneLoad
{
  unsigned char bLoad;
  unsigned char movie_id;
  unsigned char unused[2];
  unsigned short scene_id;
  unsigned short cam_id;
};
struct SeData
{
  int CtrlId;
  int FollowType;
  int FollowId;
  int InitWait;
  float MaxDist;
  int MaxVol;
  float MinDist;
  int StopFlag;
  int Pitch;
  int PlayFrm;
  float Reverb;
  unsigned int InitPlayOff : 1;
  unsigned int Flag1_32 : 31;
  unsigned int InitWaitRand;
  unsigned int MaxVolRand;
  unsigned int PitchRand;
  unsigned int PlayFrmRand;
};
struct SeData2
{
  char cPort;
  char cBank;
  char cDmy[14];
  void *pHd;
  unsigned int uiHdSize;
  void *pBd;
  unsigned int uiBdSize;
};
struct SecHead
{
  int bgmid;
  int bgmtype;
  int boffs[8];
  int bsize[8];
  int iNum;
  char reserved[52];
};
struct SeqParam
{
  unsigned int ParamSize;
  KeyTop *pKeyTop;
};
struct Sequence
{
  KeyTop SeqCmd;
  unsigned short Frame;
  unsigned char DiffFlag;
  unsigned char HokanType;
  unsigned int Reserved;
};
struct Sfx
{
  Pb pb;
  Sfx *pRoot;
  Param *p_sfx_data;
  FixParam *p_fix_param;
  SeqParam *p_seq_param;
  Sfx *p_parent;
  Sfx *p_child;
  Sfx *p_sibling;
  Sfx *p_prev_sibling;
  float (*p_matrix)[4][4];
  float (*p_parent_matrix)[4][4];
  void *p_arg;
  char *p_data;
  unsigned int life_cnt;
  unsigned int cnt;
  int ptcl_handle;
  unsigned char atk_no;
  unsigned char dmg_char_id;
  Flags3 flags;
  unsigned char prog_no;
};
struct SfxData
{
  int CtrlId;
  int FollowId;
  int FollowType;
  int DrawOn_MP_CtrlId;
  int dmy[7];
  unsigned int use_normal : 1;
  unsigned int Flag2_16 : 15;
  unsigned int draw_use : 1;
  unsigned int Flag18_32 : 15;
  int dmy2[4];
};
struct SfxSetting
{
  float sprite_far_clip;
  float sprite_near_clip;
  float sprite_power;
  float sprite_LowAlpha_limit;
  unsigned char abDrawMillor[1024];
};
struct Sfx_data
{
  unsigned short gen_wait;
  unsigned short call_num;
};
struct Sfx_data10
{
  int hSE;
  unsigned int last_cnt;
};
struct Sfx_data11
{
  float qtn[4];
  float vSpeed[4];
  float phase_time;
  MdlMng *pTarget;
  unsigned short phase;
};
struct Sfx_data12
{
  int hWhirlPool;
};
struct Sfx_data2
{
  float press_coeff;
  float valance;
  float pitch_coeff;
  unsigned short hModel;
  unsigned short dmy;
  float speed[4];
};
struct Sfx_data3
{
  float vPredictHitPos[4];
  HitResult vPredictHitResult;
  unsigned short bHit;
};
struct Sfx_data4
{
  float dmytgt_pos[4];
  float rotX;
  float rotY;
  float dist;
  float time;
  int recover;
};
struct Sfx_data5
{
  float qtn[4];
  float vSpeed[4];
  unsigned int phase_time;
  MdlMng *pTarget;
  unsigned short phase;
  unsigned int count;
};
struct Sfx_data6
{
  float qtn[4];
  float spd;
};
struct Sfx_data7
{
  float vSpd[4];
};
struct Sfx_data8
{
  unsigned short hPLight;
  unsigned short progress;
  float next_ratio;
  float prev_ratio;
  int dmy;
};
struct Sfx_data9
{
  float n_speed[4];
};
struct Sfx_state
{
  unsigned char state;
  unsigned char dmy[3];
  unsigned int cframe : 20;
  unsigned int f_exec : 12;
};
struct ShadowPos
{
  float x;
  float y;
};
struct Sibling
{
  unsigned short TodKeyNum;
  unsigned short MimeKeyNum;
  unsigned short Tp2Id;
  unsigned short ObjId;
  short AnimType;
  unsigned short MorphChanNum;
  unsigned short LinkTargetNum;
  unsigned short unused;
  float InitAng[4];
  float InitPos[4];
  TodData2 *lpTodData;
  MimeData2 *lpMimeData;
  MorphChanData *lpMorphChanData;
  LinkData *lpLinkData;
  Sibling *lpChild;
  Sibling *lpSibling;
};
struct Tex1
{
  unsigned long LCM : 1;
  unsigned long pad01 : 1;
  unsigned long MXL : 3;
  unsigned long MMAG : 1;
  unsigned long MMIN : 3;
  unsigned long MTBA : 1;
  unsigned long pad10 : 9;
  unsigned long L : 2;
  unsigned long pad21 : 11;
  unsigned long K : 12;
  unsigned long pad44 : 20;
};
struct Tex0
{
  unsigned long TBP0 : 14;
  unsigned long TBW : 6;
  unsigned long PSM : 6;
  unsigned long TW : 4;
  unsigned long TH : 4;
  unsigned long TCC : 1;
  unsigned long TFX : 2;
  unsigned long CBP : 14;
  unsigned long CPSM : 4;
  unsigned long CSM : 1;
  unsigned long CSA : 5;
  unsigned long CLD : 3;
};
struct Sp
{
  unsigned short bUse : 1;
  unsigned short Fst : 1;
  unsigned short Alpha : 2;
  unsigned short LoadOff : 1;
  unsigned short unused : 11;
  unsigned short texID;
  int ver[4][4];
  int col[4][4];
  int uv[4][4];
  float st[4][4];
  Tex0 tex0;
  Tex1 tex1;
  Test1 test;
};
struct Sp2
{
  int currentCount;
  int maxCount;
  int initCount;
  int numWaitThreads;
  unsigned int attr;
  unsigned int option;
};
struct SpecVec
{
  LightDir LightDir[4];
};
struct Spr
{
  int ver[4][4];
  int uv[4][4];
  float st[4][4];
};
struct Sprite
{
  SPInfo a_sprite[108];
};
struct StainMng
{
  unsigned char Use;
  unsigned char unused[3];
  short x;
  short y;
  short w;
  short h;
  unsigned char r;
  unsigned char g;
  unsigned char b;
  unsigned char a;
};
struct StartFrame
{
  unsigned char FrmType;
  unsigned char Reserved[3];
  float Value;
};
struct StmMng
{
  int InfoIndex;
};
struct Stream
{
  unsigned int size;
  unsigned char data[4];
};
struct Struct_10
{
  unsigned long nloop : 15;
  unsigned long eop : 1;
  unsigned long dummy : 30;
  unsigned long pre : 1;
  unsigned long prim : 11;
  unsigned long flg : 2;
  unsigned long nreg : 4;
  unsigned long regs;
};
struct Struct_102
{
  unsigned short Key;
  unsigned short FrameNum;
  float MorphValue;
  float MorphIntan;
  float MorphOuttan;
};
struct Struct_144
{
  D_stat d_stat;
  char d_name[256];
  void *d_private;
};
struct Struct_20
{
  float N[4];
  float depth;
};
struct Struct_202
{
  float P[4];
  float H;
  float R;
};
struct Struct_203
{
  float P[4];
  float R;
};
struct Struct_30
{
  int ID;
  unsigned int bLoop;
  unsigned short DataType;
  short DataId;
  unsigned int AnimGroup;
  float HokanFrame;
  StartFrame StartFrame;
  StartFrame EndFrame;
  float OwnParam;
  unsigned char Reserved[8];
};
struct Struct_302
{
  float P1[4];
  float P2[4];
  float R;
};
struct Struct_4
{
  unsigned int RR : 5;
  unsigned int Z : 1;
  unsigned int SR : 7;
  unsigned int Y : 3;
  unsigned int SL : 4;
  unsigned int DR : 4;
  unsigned int AR : 7;
  unsigned int X : 1;
};
struct Struct_60
{
  unsigned int next;
  unsigned int prev;
  Msg_data msg_data;
};
struct Struct_8
{
  char *szName;
  unsigned int id;
};
struct TVEffectMng
{
  int WaitCounter;
  int AlreadyOn;
};
struct TVFlash
{
  unsigned char Use;
  unsigned char Alpha;
  unsigned char TexNo;
  unsigned char Counter;
  char ShiftX;
  char ShiftY;
  unsigned char unused[2];
};
struct TVNoise
{
  unsigned char Use;
  unsigned char Mode;
  unsigned char Counter;
  unsigned char Alpha;
  int VoiceHdl;
};
struct TVSwitch
{
  unsigned char Use;
  unsigned char Mode;
  unsigned char Counter;
  unsigned char Alpha;
  int Width;
  int Height;
};
struct Table
{
  unsigned char PieceNum;
  unsigned char PieceID[16];
  float PiecePos[16][4];
  ShadowPos ShadowPos[16];
};
struct Tadr
{
  unsigned short qwc;
  unsigned char mark;
  unsigned char id;
  Tadr *next;
  unsigned int p[2];
};
struct Tex02
{
  unsigned int TBP0 : 14;
  unsigned int TBW : 6;
  unsigned int PSM : 6;
  unsigned int TW : 4;
  unsigned int TH_L : 2;
  unsigned int TH_H : 2;
  unsigned int TCC : 1;
  unsigned int TFX : 2;
  unsigned int CBP : 14;
  unsigned int CPSM : 4;
  unsigned int CSM : 1;
  unsigned int CSA : 5;
  unsigned int CLD : 3;
};
struct Tex03
{
  unsigned long TBP0 : 14;
  unsigned long TBW : 6;
  unsigned long PSM : 6;
  unsigned long TW : 4;
  unsigned long TH_L : 2;
  unsigned long TH_H : 2;
  unsigned long TCC : 1;
  unsigned long TFX : 2;
  unsigned long CBP : 14;
  unsigned long CPSM : 4;
  unsigned long CSM : 1;
  unsigned long CSA : 5;
  unsigned long CLD : 3;
};
struct Tex04
{
  unsigned long tbp0 : 14;
  unsigned long tbw : 6;
  unsigned long psm : 6;
  unsigned long tw : 4;
  unsigned long th : 4;
  unsigned long tcc : 1;
  unsigned long tfx : 2;
  unsigned long cbp : 14;
  unsigned long cpsm : 4;
  unsigned long csm : 1;
  unsigned long csa : 5;
  unsigned long cld : 3;
};
struct Tex12
{
  unsigned int LCM : 1;
  unsigned int pad01 : 1;
  unsigned int MXL : 3;
  unsigned int MMAG : 1;
  unsigned int MMIN : 3;
  unsigned int MTBA : 1;
  unsigned int pad10 : 9;
  unsigned int L : 2;
  unsigned int pad21 : 11;
  unsigned int K : 12;
  unsigned int pad44 : 20;
};
struct Tex13
{
  unsigned long lcm : 1;
  unsigned long blank1 : 1;
  unsigned long mxl : 3;
  unsigned long mmag : 1;
  unsigned long mmin : 3;
  unsigned long mtba : 1;
  unsigned long blank2 : 9;
  unsigned long l : 2;
  unsigned long dummy0 : 11;
  unsigned long k : 12;
  unsigned long dummy1 : 20;
};
struct Tex14
{
  unsigned long LCM : 1;
  unsigned long dummy0 : 1;
  unsigned long MXL : 3;
  unsigned long MMAG : 1;
  unsigned long MMIN : 3;
  unsigned long MTBA : 1;
  unsigned long dummy1 : 9;
  unsigned long L : 2;
  unsigned long dummy2 : 11;
  unsigned long K : 12;
  unsigned long dummy3 : 20;
};
struct TexCoord
{
  short TexCoord[2];
};
struct TexEffectMng
{
  unsigned char BloodStain;
  unsigned char CrackState;
  unsigned char unused[2];
  void *lpCrackTexList;
  float CrackCenter[2];
  float CrackScale;
  float CrackScaleMax;
  float CrackSpeed;
  float FloorScale;
};
struct TexMng
{
  unsigned char bUse;
  unsigned char unused0;
  unsigned short id;
  Tm2 *lpTm2;
  void *lpTexList;
  int unused1[1];
  unsigned char texName[32];
  unsigned char texNameBase[32];
  int texW;
  int texH;
  int texTBW;
  int texPSM;
};
struct TexPosInfo
{
  short x;
  short y;
  short w;
  short h;
  short u;
  short v;
  unsigned char Mode;
  unsigned char unused[3];
};
struct TexScrollMng
{
  float st[2];
  float phase[2];
  float SinPhase[2];
  float SinAmplitude[2];
  float SinWavelength[2];
};
struct Texinfo
{
  Tex03 tex0;
  Tex14 tex1;
};
struct Thp
{
  unsigned int size;
  unsigned int wnum;
  unsigned int dummy0;
  unsigned int dummy1;
  Texinfo tex;
};
struct TitleMessageInfo
{
  short X;
  short Y;
  int MsgID;
};
struct TitleMng
{
  unsigned char State;
  unsigned char NextState;
  short Counter;
  unsigned char TitleNo;
  unsigned char BGMStart;
  unsigned char Select;
  unsigned char Port;
  unsigned char MaxChapter;
  unsigned char MaxLevel[3];
  unsigned char MaxEquip;
  unsigned char MaxPenance;
  unsigned char SelectMode;
  unsigned char MoviePlay;
  unsigned char Flicker;
  unsigned char LogoAlpha;
  unsigned char StartAlpha;
  unsigned char SelectFlag;
  float SelectRate;
  float SelectAlpha;
  float ChapterScale[3];
  unsigned char ChapterAlpha[3];
  unsigned char ChapterShadow[3];
  unsigned char ChapterLight[3];
  unsigned char MaruAlpha;
  unsigned char LoadModel;
  unsigned char YesNo;
  unsigned char MsgNo;
  unsigned char unused[3];
  float WinkRate;
};
struct Tm2
{
  unsigned int size;
  unsigned int wnum;
  unsigned char dummy[5];
  unsigned char compare;
  unsigned short tex_id;
  Tex0 tex0;
  Tex1 tex1;
};
struct Tm2Head
{
  unsigned int size;
  unsigned int wnum;
  unsigned int dummy0;
  unsigned int dummy1;
  Texinfo texinfo;
};
union Tmp
{
  unsigned char r;
  unsigned char g;
  unsigned char b;
  unsigned char a;
  unsigned int color;
};
struct TmpMenuMng
{
  Mng_state mng_state;
  int DrawState;
  unsigned char **pTmpMenuFileBuf;
  float draw_up_rate;
  unsigned char dmy[12];
};
struct Tod
{
  unsigned short KeyFrame;
  unsigned short FrameNum;
  unsigned int PositionIndex;
  unsigned int PosInTanIndex;
  unsigned int PosOutTanIndex;
  unsigned int AngleIndex;
  unsigned int AngInTanIndex;
  unsigned int AngOutTanIndex;
  unsigned int ScaleIndex;
};
struct TodData
{
  unsigned short Key;
  unsigned short FrameNum;
  int KeyNo;
  unsigned int unused[2];
  float Pos[4];
  float PosIntan[4];
  float PosOuttan[4];
  float Ang[4];
  float AngIntan[4];
  float AngOuttan[4];
  float Scl[4];
};
struct TodData2
{
  unsigned short Key;
  unsigned short FrameNum;
  unsigned int unused[3];
  float Pos[4];
  float PosIntan[4];
  float PosOuttan[4];
  float Ang[4];
  float AngIntan[4];
  float AngOuttan[4];
  float Scl[4];
};
struct Tp
{
  int status;
  void (*entry)();
  void *stack;
  int stackSize;
  void *gpReg;
  int initPriority;
  int currentPriority;
  unsigned int attr;
  unsigned int option;
  int waitType;
  int waitId;
  int wakeupCount;
};
struct TracerObj
{
  unsigned short head;
  unsigned short num_log;
  unsigned short type;
  float life;
  float size;
  float log_life;
  float split;
  TexMng *pTex;
  unsigned short divH;
  unsigned short divV;
  unsigned short frame;
  float cut;
  float alpha;
};
struct TransBank
{
  Status Status;
  Execute Execute;
  Bmp *pBankMng;
  char *pHdBuff;
  char *pBdBuff;
  unsigned char *ucSpu2AddrPtr;
  unsigned int uiDivSize;
  unsigned char *ucDivPacketIopPtr;
  unsigned int uiRemainSize;
  int iDma;
};
struct Tree
{
  BoundBox *lpBoundBox;
  PrimHead *lpFirstTreeNode;
  Tree *lpSibling;
  Tree *lpChild;
  TreeReserve *lpTreeReserve;
};
struct TreeReserve
{
  unsigned int *lpModelPacket;
  unsigned int *lpShadowPacket;
};
struct VagInfo
{
  unsigned int Creator;
  unsigned int Type;
  unsigned int chunkSize;
  unsigned int maxVagInfoNumber;
  unsigned int vagInfoOffsetAddr[0];
};
struct VagMng
{
  float Pos[4];
  unsigned char FileName[128];
  int StmIndex;
  int State;
  int NextState;
  unsigned char FadeType;
  unsigned char FadeReserve;
  unsigned char b3DStm;
  unsigned char Channel;
  int Timer;
  int VolStep;
  int Vol;
  int MaxVol;
  float MaxDist;
  float NowDist;
  float DistRate;
  int Pan;
  int LastPan;
  float Ang;
  MdlMng *lpMdlMng;
  int Frame;
};
struct VagParam
{
  unsigned int vagOffsetAddr;
  unsigned short vagSampleRate;
  unsigned char vagAttribute;
  unsigned char dmy;
};
struct Vert
{
  float stq[3];
  unsigned int rgba;
  float pos[4];
};
struct Vertex
{
  short Vertex[3];
  unsigned short Cull : 2;
  unsigned short MatrixId : 10;
  unsigned short Morph : 1;
  unsigned short Dir : 1;
  unsigned short End : 1;
  unsigned short Adc : 1;
};
struct Vib
{
  float range_holy;
  float range_vert;
  float freq_holy;
  float freq_vert;
};
struct VmdHead
{
  unsigned int VmdFileVersion;
  char *lpAp2FileName;
  int VmdFileSize;
  short MaterialNum;
  short MatrixNum;
  short ObjectNum;
  short GeomObjectNum;
  Material *lpMaterial;
  Matrix *lpMatrix;
  VmdObj *lpObject;
  float GeomScale;
  unsigned int PrimNodeFormat;
  LightObject *lpLightObject;
  short LightObjectNum;
  short TextureNum;
  BoundBox *lpBoundBox;
  int PolyNum : 24;
  int PrimNodeMax : 8;
  HeadParam *lpHeadParam;
  DiffuseTexture *lpTexture;
  void *lpHeadReserve;
  PMObject *lpPMObject;
  int Pad0[2];
};
struct VmdObj
{
  float Position[4];
  float Angle[4];
  float Scale[4];
  short ObjectId;
  short GeomObjectId;
  short ParentObjectId;
  short ChildObjectId;
  short SiblingObjectId;
  short MatrixNum;
  unsigned short *lpMatrixId;
  int PrimListNum;
  PrimHead *lpPrimHead;
  unsigned short PolyNum;
  unsigned short TreeNum;
  BoundBox *lpBoundBox;
  char *lpObjectName;
  ObjParam *lpObjParam;
  Tree *lpTree;
  ObjReserve *lpObjReserve;
};
struct Voice
{
  char on;
  char job;
  char type;
  char cDmy1[1];
  int SeKind;
  unsigned short usSndId;
  short BankId;
  short bd_prog;
  short vid;
  float fAngleNoClip;
  short sVolume;
  short sCalcedVolume;
  short sPan;
  short bend;
  short p_bend;
  short sDmy3[1];
  float Pos[4];
  float (*pPos)[4];
  float fDistMax;
  float fDistMin;
  int flm;
};
struct VolSet
{
  short sTrack;
  short sCh;
  short sVol;
  short sPan;
};
struct VramMng
{
  int base;
  int addr;
  int unused[2];
};
struct Wall
{
  char wall_name[16];
  char cam_name[16];
  unsigned short wall_id;
  unsigned short scene_id;
  unsigned short cam_id;
  unsigned short prim_num;
  unsigned int primData;
  unsigned int vertData;
  unsigned int unused1[4];
};
struct WaterCameraInfo
{
  unsigned char SceneNo;
  unsigned char CameraNo;
  short InfoNum;
  WaterInfo *lpWaterInfo;
};
struct WaterInfo
{
  float Pos[4];
  float Ang[4];
};
struct WaterMng
{
  unsigned char Use;
  unsigned char unused[3];
  float Phase[2];
  float Wavelength[2];
  float Amplitude[2];
  float Speed[2];
  WaterInfo *lpWaterInfo;
};
struct Wnd
{
  float pos[4];
  unsigned short frame;
  unsigned short frame_phase;
  unsigned short state;
  unsigned short btn;
  TexMng *pBaseTex;
  TexMng *pFrontTex;
  TexMng *pNextTex;
  short num;
  int card_id;
  int next_card_id;
  unsigned char dmy[26];
};
struct Work_buff
{
  unsigned int work[8];
};
GmInfo *func_0020CC40(void);
PadInfo *func_00214280(void);
void func_002143B0(unsigned int spriteID_, int fadeID_);
void func_002144F0(void)
{
  PadInfo *temp_s0;
  temp_s0 = func_00214280();
  if (((s32) func_0020CC40()->modeID) > (0x1B - 1))
  {
    func_002143B0(temp_s0->tutorialID + 0x6D, 0);
  }
}
