#ifndef __MDRV_MSP_SLEEP_COMMON_H__ 
#define __MDRV_MSP_SLEEP_COMMON_H__
#ifdef __cplusplus
extern "C"
{
#endif

#include "mdrv_pm_common.h"

#define SLAVE_MODE_BUTT (PWC_COMM_MODE_NUMBER)
#define DSP_WAIT_IDLE_FLAG (0xa5)

enum MasterMode_Enum
{
    MASTER_MODE_LTE = 0,
    MASTER_MODE_TDS = 1,
    MASTER_MODE_BUTT
};

enum TLSLEEP_RttForceAwake_Type
{
    TLSLEEP_MAILBOX = 0,
    TLSLEEP_OTHERS
};

typedef enum cpm_mode_e
{
    CPM_LTE0,
    CPM_LTE1,
    CPM_TDS,
    CPM_COMMON,
    CPM_1X,
    CPM_HRPD,
    BUTT_MODE,
    CPM_MAX = 10
}CPM_MODE_E;

typedef enum cpm_req_e
{
    IDLE_REQ = 0 /*0����idle������dsp˯��*/
                 /*��0����busy����ֹdsp˯��*/
}CPM_REQ_E;

typedef enum cpm_phy_state_e
{
    PHY_LOW_POWER_STATE = 0,
    PHY_NORMAL_STATE 
}CPM_PHY_STATE_E;
 
struct MasterAwakeSlaveFlag
{
    unsigned int SlaveAwakeFlag[MASTER_MODE_BUTT][SLAVE_MODE_BUTT];
};

struct DspDvsFlag
{
    unsigned int DspDvsReq;            /*bit0-bit7:BBP��ѹ���� 01��ѹ 00��ѹ;bit8-bit15:BBE16��ѹ���� 01��ѹ 00��ѹ;
                                         bit16-bit23:�������к�(��BBE16����);bit24-bit31:��ѹ������Ч��־(0x55)*/
    unsigned int DspDvsReq_timestamp;   
    unsigned int DspDvsRespond;        /*bit0-bit7:BBP��ѹ״̬ 01��ѹ 00��ѹ;bit8-bit15:BBE16��ѹ״̬ 01��ѹ 00��ѹ;
                                         bit16-bit23:��ѹӦ�����к�(���ڵ�ѹ�������к�);bit24-bit31:��ѹӦ����Ч��־(0xAA)*/   
    unsigned int DspDvsRespond_timestamp;
    unsigned int ddr_freq;
};

typedef struct
{
    unsigned int ulLightSleepFlag;    /*DSP��˯ǳ˯�ı�־*/
    unsigned int ulTdsPreSfn;         /*DSP����������*/
    unsigned int ulRfTime;            /*RF�ȶ�ʱ����Ҫ1ms*/
    unsigned int dspState;            /*DSP��˯�߻����ѣ�0:˯ 1:��*/
    unsigned int dspTime;             /*DSP��Ӧ��dspState���ʱ���*/ 
}RTT_SLEEP_INFO_STRU;

struct sleep_state_req
{
    unsigned int  mode_req[CPM_MAX];
    unsigned int  core_req[2];
    unsigned char dsp_state[CPM_MAX];  
    unsigned char core_state[2];
};

struct mst_awake_slv
{
    unsigned char awake_flag[PWC_COMM_MODEM_2][SLAVE_MODE_BUTT];
};

struct rtt_info
{
    unsigned int  rf_time[4];       /*��Ա[0]����rfic0��tcrv_on��ʱ��
                                      ��Ա[1]����rfic1��tcrv_on��ʱ��
                                      ��Ա[2]����rfic2��tcrv_on��ʱ��
                                      ��Ա[3]����rfic3��tcrv_on��ʱ�� */                                    
};

typedef struct{
    RTT_SLEEP_INFO_STRU PstRttSleepInfo;     /* �����������ͨ���׵�ַƫ�Ʒ�ʽʹ�øýṹ���������Ҫ�����ýṹ�����ڲ���Ա˳����֪�������ͬ�� */
    struct DspDvsFlag DvsFlag;
    struct MasterAwakeSlaveFlag AwakeFlag;
    struct sleep_state_req   state_req;
    struct mst_awake_slv     mst_awake_slv;
    struct rtt_info          rtt_sleep_info;
    unsigned char dsp_wait_idle_flag;
    unsigned char reserve[3];
}SRAM_SOC_TLDSP_INTERACTION_STRU;

#ifdef __cplusplus
}
#endif
#endif
  
