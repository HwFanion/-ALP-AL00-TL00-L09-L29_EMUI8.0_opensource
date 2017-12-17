#ifndef __SENSORHUB_DDR_MAP_H__
#define __SENSORHUB_DDR_MAP_H__ 


#include "global_ddr_map.h"
#include "soc_iomcu_baseaddr_interface.h"
#include "soc_acpu_baseaddr_interface.h"


#define SENSORHUB_DDR_WINDOW_SIZE (0x20000000)




#define DDR_RESERVE_ADDR_AP HISI_RESERVED_SENSORHUB_PHYMEM_BASE
#define DDR_RESERVE_SIZE HISI_RESERVED_SENSORHUB_PHYMEM_SIZE
#define DDR_IMAGE_BASE_AP (DDR_RESERVE_ADDR_AP)
#define DDR_IMAGE_SIZE (0x200000)
#define DDR_IMAGE_END_AP (DDR_IMAGE_BASE_AP + DDR_IMAGE_SIZE)
#define DDR_CODE_BASE_AP DDR_IMAGE_END_AP
#define DDR_CODE_SIZE (0x180000)
#define DDR_CODE_END_AP (DDR_CODE_BASE_AP + DDR_CODE_SIZE)
#define DDR_HEAP_START_AP DDR_CODE_END_AP
#define DDR_HEAP_SIZE (0x80000)
#define DDR_HEAP_END_AP (DDR_HEAP_START_AP + DDR_HEAP_SIZE)
#define DDR_DTB_BASE_AP DDR_HEAP_END_AP
#define DDR_DTB_SIZE (0x100000)
#define DDR_DTB_END_AP (DDR_DTB_BASE_AP + DDR_DTB_SIZE)
#define DDR_DUMP_BASE_AP DDR_DTB_END_AP
#define DDR_DUMP_SIZE (0x80000)
#define DDR_DUMP_END_AP (DDR_DUMP_BASE_AP + DDR_DUMP_SIZE)
#define DDR_FP_IMAGE_BASE_AP DDR_DUMP_END_AP
#define DDR_FP_IMAGE_SIZE (0x80000)
#define DDR_FP_IMAGE_END_AP (DDR_FP_IMAGE_BASE_AP + DDR_FP_IMAGE_SIZE)
#define DDR_RSV_RSV1_BASE_AP DDR_FP_IMAGE_END_AP
#define DDR_RSV_RSV1_SIZE (0x100000)
#define DDR_RSV_RSV1_END_AP (DDR_RSV_RSV1_BASE_AP + DDR_RSV_RSV1_SIZE)
#define DDR_RESERVED_USED_END DDR_RSV_RSV1_END_AP
#if DDR_RESERVED_USED_END > (DDR_RESERVE_ADDR_AP + DDR_RESERVE_SIZE)
 #error "DDR_RESERVED_USED overflow"
#endif
#define DDR_SHMEM_ADDR_AP HISI_RESERVED_SENSORHUB_SHARE_MEM_PHYMEM_BASE
#define DDR_SHMEM_SIZE HISI_RESERVED_SENSORHUB_SHARE_MEM_PHYMEM_SIZE
#define DDR_SHMEM_END_AP (DDR_SHMEM_ADDR_AP + DDR_SHMEM_SIZE)
#define DDR_CONFIG_SIZE (0x1000)
#define DDR_CONFIG_ADDR_AP (DDR_SHMEM_END_AP - DDR_CONFIG_SIZE)
#define DDR_SHELL_DBG_SIZE (0x1000)
#define DDR_SHELL_DBG_ADDR_AP (DDR_CONFIG_ADDR_AP - DDR_SHELL_DBG_SIZE)
#define DDR_F2L_CONFIG_SIZE (0x1000)
#define DDR_F2L_CONFIG_ADDR_AP (DDR_SHELL_DBG_ADDR_AP - DDR_F2L_CONFIG_SIZE)
#define DDR_LOG_BUFF_SIZE (DDR_F2L_CONFIG_ADDR_AP - DDR_SHMEM_ADDR_AP)
#define DDR_LOG_BUFF_ADDR_AP (DDR_SHMEM_ADDR_AP)
#define DDR_SHMEM1_ADDR_AP HISI_RESERVED_SENSORHUB_SHMEM_PHYMEM_BASE
#define DDR_SHMEM1_SIZE HISI_RESERVED_SENSORHUB_SHMEM_PHYMEM_SIZE
#define DDR_THERMAL_SHMEM_PHYMEM_BASE_AP DDR_SHMEM1_ADDR_AP
#define DDR_THERMAL_SHMEM_PHYMEM_SIZE (0x3C00)
#define DDR_LOADMONITOR_PHYMEM_BASE_AP (DDR_THERMAL_SHMEM_PHYMEM_BASE_AP + DDR_THERMAL_SHMEM_PHYMEM_SIZE)
#define DDR_LOADMONITOR_PHYMEM_SIZE (0x1000)
#define DDR_SHMEM_LARGE_BLK_BASE_AP (DDR_LOADMONITOR_PHYMEM_BASE_AP + DDR_LOADMONITOR_PHYMEM_SIZE)
#define DDR_SHMEM_LARGE_BLK_SIZE (DDR_SHMEM1_ADDR_AP + DDR_SHMEM1_SIZE - DDR_SHMEM_LARGE_BLK_BASE_AP)
#define DDR_SHMEM_CH_SEND_ADDR_AP DDR_SHMEM_LARGE_BLK_BASE_AP
#define DDR_SHMEM_CH_SEND_SIZE (DDR_SHMEM_LARGE_BLK_SIZE / 2)
#define DDR_SHMEM_AP_SEND_ADDR_AP (DDR_SHMEM_CH_SEND_ADDR_AP + DDR_SHMEM_CH_SEND_SIZE)
#define DDR_SHMEM_AP_SEND_SIZE (DDR_SHMEM_LARGE_BLK_SIZE / 2)
#endif
