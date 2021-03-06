/******************************************************************************
 *
 *  pac/pac.h
 *
 *****************************************************************************/

/*
 *  Copyright (C) 2012 Ku Ying <PacBridge Corp.>
 *  All rights reserved.
 *
 *  == 说明 ==
 *  pac模块头文件，提供接口供外部模块调用，创建于2012.2.16
 *  原则上只能提供函数接口、枚举、消息接� *  不能暴漏结构体、数据结构等内部实现给外部模块
 *
 */

#ifndef _PAC_H_
#define _PAC_H_


/******************************************************************************
 *
 *  函数接口
 *
 *****************************************************************************/
void vport_master_init();

void ac_cli_init(struct cli_tree *ctree);
void pw_cli_init(struct cli_tree *ctree);
void tun_cli_init(struct cli_tree *ctree);

void service_master_init();
void vpn_cli_init(struct cli_tree *ctree);
void lsp_cli_init(struct cli_tree *ctree);
void lsp_grp_cli_init(struct cli_tree *ctree);
void lsp_oam_cli_init(struct cli_tree *ctree);


void ptp_cli_init(struct cli_tree *ctree);
void ptp_port_cli_init(struct cli_tree *ctree);


#endif
