/*******************************************************************************
*                                 AMetal
*                       ----------------------------
*                       innovating embedded platform
*
* Copyright (c) 2001-2018 Guangzhou ZHIYUAN Electronics Co., Ltd.
* All rights reserved.
*
* Contact information:
* web site:    http://www.zlg.cn/
*******************************************************************************/

/**
 * \file
 * \brief NVRAM 标准服务存储段定义
 *
 * 当使用 NVRAM 标准接口进行非易失数据的存储或获取时，如 \sa am_nvram_set() 或
 * \sa am_nvram_get()，接口的详细介绍详见 \sa am_nvram.h
 *
 * 存储段的名字 name 和单元号 unit 均在该文件中定义，便于用户管理系统中所有的非易失
 * 存储段
 *
 * \internal
 * \par modification history
 * - 1.00 15-01-19  tee, first implementation
 * \endinternal
 */

#ifndef __AM_NVRAM_CFG_H
#define __AM_NVRAM_CFG_H

#ifdef __cplusplus
extern "C" {
#endif

/**
 * \brief NVRAM 标准服务初始化
 *
 * \note 使用 NVRAM 前，必须调用该函数，可通过将 am_prj_config.h 文件中的
 *       #AM_CFG_NVRAM_ENABLE 宏值修改为 1 实现，使系统启动时自动调用该函数
 */
void am_nvram_inst_init (void);

#ifdef __cplusplus
}
#endif

#endif /* __AM_NVRAM_CFG_H */

/* end of file */
