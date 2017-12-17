/*
 * Copyright (C) Huawei Technologies Co., Ltd. 2012-2015. All rights reserved.
 * foss@huawei.com
 *
 * If distributed as part of the Linux kernel, the following license terms
 * apply:
 *
 * * This program is free software; you can redistribute it and/or modify
 * * it under the terms of the GNU General Public License version 2 and 
 * * only version 2 as published by the Free Software Foundation.
 * *
 * * This program is distributed in the hope that it will be useful,
 * * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * * GNU General Public License for more details.
 * *
 * * You should have received a copy of the GNU General Public License
 * * along with this program; if not, write to the Free Software
 * * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307, USA
 *
 * Otherwise, the following license terms apply:
 *
 * * Redistribution and use in source and binary forms, with or without
 * * modification, are permitted provided that the following conditions
 * * are met:
 * * 1) Redistributions of source code must retain the above copyright
 * *    notice, this list of conditions and the following disclaimer.
 * * 2) Redistributions in binary form must reproduce the above copyright
 * *    notice, this list of conditions and the following disclaimer in the
 * *    documentation and/or other materials provided with the distribution.
 * * 3) Neither the name of Huawei nor the names of its contributors may 
 * *    be used to endorse or promote products derived from this software 
 * *    without specific prior written permission.
 * 
 * * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 */


/*lint -e767*/
#define    THIS_FILE_ID        PS_FILE_ID_PSDIPC_C
/*lint +e767*/

/*****************************************************************************
  1 头文件包含
*****************************************************************************/
#include "product_config.h"


/*****************************************************************************
  1 头文件包含
*****************************************************************************/
#include "PsTypeDef.h"
#include "mdrv.h"

/*****************************************************************************
  3 函数实现
*****************************************************************************/
/*****************************************************************************
 函 数 名  : DIPC_GetDevHandleByRabId
 功能描述  : 通过RabId获取设备句柄，此函数是给AT使用 (STUB !!!)
 输入参数  : VOS_UINT8 ucRabId  用来查询设备句柄的Rab Id

 输出参数  : 无
 返 回 值  : RabId对应的句柄,无效时为UDI_INVALID_HANDLE

 修改历史      :
  1.日    期   : 2012年2月15日
    作    者   : x59651
    修改内容   : 新生成函数

*****************************************************************************/
UDI_HANDLE DIPC_GetDevHandleByRabId(VOS_UINT8 ucRabId)
{
    return UDI_INVAL_DEV_ID;
}

/*****************************************************************************
 函 数 名  : DIPC_Pid_InitFunc
 功能描述  : DIPC PID初始化
 输入参数  : VOS_INIT_PHASE_DEFINE ip   初始化类型
 输出参数  : 无
 返 回 值  : VOS_UINT32

 修改历史      :
  1.日    期   : 2012年2月16日
    作    者   : x59651
    修改内容   : 新生成函数
*****************************************************************************/
VOS_UINT32 DIPC_Pid_InitFunc( enum VOS_INIT_PHASE_DEFINE ip )
{
    return PS_SUCC;
}

/*****************************************************************************
 函 数 名  : DIPC_MsgProc
 功能描述  : DIPC的消息处理函数
 输入参数  : MsgBlock *pMsgBlock    从AT发来的消息

 输出参数  : 无
 返 回 值  : VOS_UINT32

 修改历史      :
  1.日    期   : 2012年2月15日
    作    者   : x59651
    修改内容   : 新生成函数

*****************************************************************************/
VOS_UINT32 DIPC_AtMsgProc( const MsgBlock *pMsgBlock )
{
    return VOS_OK;
}





