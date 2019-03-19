/****************************************Copyright (c)****************************************************
**--------------File Info---------------------------------------------------------------------------------
** File name:              led_display_cfg.c
** Latest modified Date:    2019-3-14
** Latest Version:          
** Descriptions:            数码管显示，可配置引脚
**--------------------------------------------------------------------------------------------------------
** Created by:             张桂荧
** Created date:            2019-3-14
** Version:                 
** Descriptions:            宏定义与引脚配置，头文件相关
**--------------------------------------------------------------------------------------------------------
*********************************************************************************************************/


#include<reg51.h>
#include<string.h>

#ifndef LED_DISPLAY_CFG_H
#define LED_DISPLAY_CFG_H

/*********************************************************************************************************
  引脚配置
*********************************************************************************************************/
sbit P2_0=P2^0;
sbit P2_1=P2^1;
sbit P2_2=P2^2;
sbit P2_3=P2^3;
sbit P2_4=P2^4;
sbit P2_5=P2^5;


/*********************************************************************************************************
  伪函数定义
*********************************************************************************************************/
#define LED_DIG1_ON() P2_0=0
#define LED_DIG2_ON() P2_1=0
#define LED_DIG3_ON() P2_2=0
#define LED_DIG4_ON() P2_3=0
#define LED_DIG5_ON() P2_4=0
#define LED_DIG6_ON() P2_5=0


#define LED_DIG1_OFF() P2_0=1
#define LED_DIG2_OFF() P2_1=1
#define LED_DIG3_OFF() P2_2=1
#define LED_DIG4_OFF() P2_3=1
#define LED_DIG5_OFF() P2_4=1
#define LED_DIG6_OFF() P2_5=1

#define LED_SEG_DATA(data) P0=data


#endif

/*********************************************************************************************************
  END FILE
*********************************************************************************************************/
