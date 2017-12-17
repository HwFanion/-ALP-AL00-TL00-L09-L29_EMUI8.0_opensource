#ifndef __UCE_RUNTIME_SRAM_MAP_H__
#define __UCE_RUNTIME_SRAM_MAP_H__ 
#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif
#ifdef __CMSIS_RTOS
#define UCE_SRAM_BASE (0x0)
#else
#define UCE_SRAM_BASE (0x0)
#endif
#define UCE_SRAM_SIZE (0x7000)
#define UCE_SRAM_END (UCE_SRAM_BASE + UCE_SRAM_SIZE)
#define UCE_SYS_CODE_SEC_BASE (UCE_SRAM_BASE)
#define UCE_SYS_CODE_SEC_RESERVED_SIZE (0x0)
#define UCE_SYS_CODE_SEC_SIZE (0x3C00 - UCE_SYS_CODE_SEC_RESERVED_SIZE)
#define UCE_SYS_DATA_SEC_BASE (UCE_SYS_CODE_SEC_BASE + UCE_SYS_CODE_SEC_SIZE)
#define UCE_SYS_DATA_SEC_RESERVED_SIZE (0x0)
#define UCE_SYS_DATA_SEC_SIZE (0x1800- UCE_SYS_DATA_SEC_RESERVED_SIZE)
#define UCE_SYS_STACK_SEC_SIZE (0x800)
#define UCE_SYS_STACK_SEC_BASE (UCE_SRAM_END - UCE_SYS_STACK_SEC_SIZE)
#define UCE_DDR_PROFILE_SIZE (0x400)
#define UCE_DDR_PROFILE_BASE (UCE_SYS_STACK_SEC_BASE - UCE_DDR_PROFILE_SIZE)
#define UCE_INT_TRACK_SIZE (0x240)
#define UCE_INT_TRACK_BASE (UCE_DDR_PROFILE_BASE - UCE_INT_TRACK_SIZE)
#define UCE_REG_BACKUP_SIZE (0x1C0)
#define UCE_REG_BACKUP_BASE (UCE_INT_TRACK_BASE - UCE_REG_BACKUP_SIZE)
#define UCE_FLAG_MEM_SIZE (0x100)
#define UCE_FLAG_MEM_BASE (UCE_REG_BACKUP_BASE - UCE_FLAG_MEM_SIZE)
#define UCE_PRINT_LOG_SIZE (0x400)
#define UCE_PRINT_LOG_BASE (UCE_FLAG_MEM_BASE - UCE_PRINT_LOG_SIZE)
#define UCE_ERR_LOG_SIZE (0x200)
#define UCE_ERR_LOG_BASE (UCE_PRINT_LOG_BASE - UCE_ERR_LOG_SIZE)
#define UCE_STORAGE_AREA_BASE (UCE_ERR_LOG_BASE)
#if ((UCE_SYS_DATA_SEC_BASE + UCE_SYS_DATA_SEC_SIZE) > (UCE_STORAGE_AREA_BASE))
#error uce_region_size((UCE_SYS_DATA_SEC_BASE + UCE_SYS_DATA_SEC_SIZE - UCE_STORAGE_AREA_BASE + UCE_SRAM_SIZE)) used beyond (UCE_SRAM_SIZE)
#endif
#define UCE_SRAM_ADDR_OFFSET(addr) ((addr) - UCE_SRAM_BASE)
#define UCE_DDR_INFO_PACK_SIZE (0x1000)
#define UCE_DDR_INFO_PACK_BASE (0x7000)
#define DDR_TRAIN_TRACK_BUF_BASE (UCE_DDR_INFO_PACK_BASE)
#define DDR_TRAIN_TRACK_BUF_SIZE (0xFC0)
#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif
#endif