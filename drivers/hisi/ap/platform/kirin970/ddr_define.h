#ifndef __DDR_ASIC_3670_DEFINE_H__
#define __DDR_ASIC_3670_DEFINE_H__ 
#define MAX_RANK_NUM_PER_DMC (2)
#define AXI_MAX_PORT (11)
#define MAX_DDR_DENSITY (10)
#define DDR_TYPE_LPDDR3 (0)
#define DDR_TYPE_LPDDR4 (1)
#define DDR_TYPE_UNKNOW (2)
#define PLL_INIT_ID (1)
#define TRAINING_TYPE_DLYMEAS_ID (2)
#define TRAINING_TYPE_ZCAl_ID (3)
#define TRAINING_TYPE_WL_ID (4)
#define TRAINING_TYPE_GT_ID (5)
#define TRAINING_TYPE_GDST_ID (6)
#define TRAINING_TYPE_WL2_ID (7)
#define TRAINING_TYPE_RDET_ID (8)
#define TRAINING_TYPE_WDET_ID (9)
#define TRAINING_TYPE_DRAMINIT_ID (10)
#define TRAINING_TYPE_CAT_ID (11)
#define TRAINING_TYPE_DRAMRST_ID (12)
#define TRAINING_TYPE_DVREFT_ID (16)
#define TRAINING_TYPE_HVREFT_ID (17)
#define TRAINING_TYPE_DXDVREFS_ID (18)
#define TRAINING_TYPE_ACDVREFT_ID (19)
#define TRAINING_TYPE_ACHVREFT_ID (20)
#define TRAINING_SYNC_ACDVREFTS_ID (21)
#define TRAINING_TYPE_CST_ID (22)
#define TRAINING_TYPE_MAX_ID (TRAINING_TYPE_CST_ID + 1)
#define PLL_INIT (1 << PLL_INIT_ID)
#define TRAINING_TYPE_DLYMEAS (1 << TRAINING_TYPE_DLYMEAS_ID)
#define TRAINING_TYPE_ZCAl (1 << TRAINING_TYPE_ZCAl_ID)
#define TRAINING_TYPE_WL (1 << TRAINING_TYPE_WL_ID)
#define TRAINING_TYPE_GT (1 << TRAINING_TYPE_GT_ID)
#define TRAINING_TYPE_GDST (1 << TRAINING_TYPE_GDST_ID)
#define TRAINING_TYPE_WL2 (1 << TRAINING_TYPE_WL2_ID)
#define TRAINING_TYPE_RDET (1 << TRAINING_TYPE_RDET_ID)
#define TRAINING_TYPE_WDET (1 << TRAINING_TYPE_WDET_ID)
#define TRAINING_TYPE_DRAMINIT (1 << TRAINING_TYPE_DRAMINIT_ID)
#define TRAINING_TYPE_CAT (1 << TRAINING_TYPE_CAT_ID)
#define TRAINING_TYPE_DRAMRST (1 << TRAINING_TYPE_DRAMRST_ID)
#define TRAINING_TYPE_DVREFT (1 << TRAINING_TYPE_DVREFT_ID)
#define TRAINING_TYPE_HVREFT (1 << TRAINING_TYPE_HVREFT_ID)
#define TRAINING_TYPE_DXDVREFS (1 << TRAINING_TYPE_DXDVREFS_ID)
#define TRAINING_TYPE_ACDVREFT (1 << TRAINING_TYPE_ACDVREFT_ID)
#define TRAINING_TYPE_ACHVREFT (1 << TRAINING_TYPE_ACHVREFT_ID)
#define TRAINING_SYNC_ACDVREFTS (1 << TRAINING_SYNC_ACDVREFTS_ID)
#define TRAINING_TYPE_CST (1 << TRAINING_TYPE_CST_ID)
#if defined(KIRIN660_DDR_TC) || defined(KIRIN660_DDR_CS)
#define FREQ_NUM_MAX (7)
#else
#define FREQ_NUM_MAX (6)
#endif
#define FREQ_RANGE_EXT (5)
#define DDR_FREQ_1866 (1866)
#define DDR_FREQ_1600 (1600)
#define DDR_FREQ_1333 (1333)
#define DDR_FREQ_1244 (1244)
#define DDR_FREQ_1066 (1066)
#define DDR_FREQ_830 (830)
#define DDR_FREQ_800 (800)
#define DDR_FREQ_667 (667)
#define DDR_FREQ_533 (533)
#define DDR_FREQ_400 (400)
#define DDR_FREQ_266 (266)
#define DDR_FREQ_133 (133)
#define DDR_FREQ_100 (100)
#define DDR_FREQ_55 (55)
#define DDR_MODE_SDR (0)
#define DDR_MODE_HDR (1)
#define DDR_PHYPLL_BYPASS (0)
#define DDR_PHYPLL_MISSION (1)
#define IO_WIDTH_X16 (0)
#define IO_WIDTH_X8 (1)
#define IO_WIDTH_X32 (2)
#define RANK_MAX_NR (2)
#define BYTELANE_LPDDR4_MAX_NR (2)
#define EDGETYPE_MAX_NR (2)
#ifdef DDR_SINGLE_CHANNEL
#define CHANNEL_LPDDR4_MAX_NR (1)
#define QOSBUF_MAX_NUM (1)
#define DMC_PER_QOSBUF (1)
#define PACK_MAX_NUM (1)
#define PHY_MAX_NUM (1)
#define DMC_MAX_NUM (1)
#else
#define CHANNEL_LPDDR4_MAX_NR (4)
#define QOSBUF_MAX_NUM (2)
#define DMC_PER_QOSBUF (2)
#define PACK_MAX_NUM (4)
#define PHY_MAX_NUM (4)
#define DMC_MAX_NUM (4)
#endif
#define LPDDR4_PHY_BYTELANE_NUM (2)
#define LPDDR4_PACK_BYTELANE_NUM (2)
#define LPDDR_WDQNBDL_MAX (127)
#define LPDDR_RDQNBDL_MAX (127)
#define TRAINING_TYPE_HW (1)
#define TRAINING_TYPE_SW (2)
#define TRAINING_TYPE_EYET (1)
#define TRAINING_TYPE_VREFT (2)
#define TYPE_CAT (1)
#define TYPE_CST (2)
#define TRANS_TO_LPM3_PROFILE_NUM(x) ((x)-1)
#define LEFTBOUND (1)
#define ADDRBDL (1<<1)
#define RDQNBDL (1<<2)
#define DXNWDQBDL (1<<3)
#if defined(KIRIN660_DDR_TC)
#define DDR_BUCK0_MAX_NR (0x2)
#define DDR_BUCK0_STEP (0xA)
#else
#define DDR_BUCK0_MAX_NR (0x4)
#define DDR_BUCK0_STEP (0x32)
#endif
#define MANU_ID_SAMSUNG (0x1)
#define MANU_ID_MICRON (0xff)
#define MANU_ID_HYNIX (0x6)
#define FREQ_VOLT_RANGE (5)
#if defined(DDR_SINGLE_CHANNEL)
#define DDR_DMC_MASK (0x1)
#define DDR_PACK_MASK (0x1)
#define DDR_PHY_MASK (0x1)
#elif defined(DDR_TWO_CHANNEL)
#define DDR_DMC_MASK (0x3)
#define DDR_PACK_MASK (0x3)
#define DDR_PHY_MASK (0x3)
#else
#define DDR_DMC_MASK (0xF)
#define DDR_PACK_MASK (0xF)
#define DDR_PHY_MASK (0xF)
#endif
#define HOST_ODT_VDDQ_2 (1)
#define HOST_ODT_3VDDQ_5 (2)
#define DRAM_ODT_VDDQ_2 (1)
#define DRAM_ODT_3VDDQ_5 (2)
#define CK_ODT_1RANK (1)
#define CK_ODT_2RANK (2)
#define DDR_INIT_TYPE_ONCE (0)
#define DDR_INIT_TYPE_STEP (1)
#define DDR_TARGET_PRARA_STATIC (0)
#define DDR_TARGET_PRARA_MODIFY (1)
typedef enum {
    DDR_BUCK0 = 0,
 DDR_BUCK1,
 DDR_BUCK7,
 DDR_BUCK8,
 DDR_LDO5,
    DDR_VOL_MAX,
} DDR_VOL_ID;
typedef enum {
 DDRC_NUM_0 = 0,
#ifndef DDR_SINGLE_CHANNEL
 DDRC_NUM_1,
#endif
 DDRC_NUM_MAX,
}DDRC_NUM;
typedef enum {
 DMC_NUM_0 = 0,
#ifndef DDR_SINGLE_CHANNEL
 DMC_NUM_1,
#endif
 DMC_NUM_MAX,
} DMC_NUM;
typedef enum {
 DDR_PLL0 = 0,
 DDR_PLL1,
 DDR_PLL4,
 DDR_PLL_MAX,
} DDR_PLL_IDX;
typedef enum {
        DDR_VOL_LEVEL0 = 0,
        DDR_VOL_LEVEL1,
        DDR_VOL_LEVEL2,
        DDR_VOL_LEVEL3,
        DDR_VOL_END
} DDR_VOL_LEVEL;
typedef enum {
 ASIC = 0,
 FPGA,
 EMULATOR,
} DDR_BOARD_TYPE;
#define DDR_BURST_LEN_16 (0)
#define DDR_BURST_LEN_32 (1)
#define DDR_BURST_LEN_OTF (2)
typedef enum {
 DDR_AUTOFSGT_ENABLE = 1,
 DDR_AUTOFSGT_DISABLE,
 DDR_AUTOFSGT_LOGIC_EN,
 DDR_AUTOFSGT_LOGIC_DIS,
} DDR_AUTOFSGT_CMD_ID;
typedef enum {
 DDR_AUTOFSGT_CLIENT_LPMCU = 0,
 DDR_AUTOFSGT_CLIENT_BL31 = 1,
 DDR_AUTOFSGT_PROXY_CLIENT_FREQDUMP,
 DDR_AUTOFSGT_PROXY_CLIENT_DDRREG,
 DDR_AUTOFSGT_PROXY_CLIENT_KERNEL_CODE,
 DDR_AUTOFSGT_PROXY_CLIENT_XDUMP,
 DDR_AUTOFSGT_PROXY_CLIENT_EVSOPEN,
 DDR_AUTOFSGT_PROXY_CLIENT_EVSCLOSE,
 DDR_AUTOFSGT_CLIENT_SECURE_OS = 9,
 DDR_AUTOFSGT_PROXY_CLIENT_SETSEC = 9,
 DDR_AUTOFSGT_PROXY_CLIENT_CLRSEC = 9,
 DDR_AUTOFSGT_PROXY_CLIENT_CHECKSEC = 9,
 DDR_AUTOFSGT_CLIENT_AP,
 DDR_AUTOFSGT_PROXY_CLIENT_DDRFLUX,
 DDR_AUTOFSGT_PROXY_CLIENT_DMSSPT,
 DDR_AUTOFSGT_PROXY_CLIENT_BUTT,
} DDR_AUTOFSGT_PROXY_CLIENT_ID;
#ifdef __CORTEX_M3
#if ((DDR_AUTOFSGT_PROXY_CLIENT_BUTT) > 16)
    #error "ddr autofsgt bypass bit overflow!!!"
#endif
#endif
#endif