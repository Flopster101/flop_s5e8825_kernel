/*
 * linux/drivers/video/fbdev/exynos/panel/s6e3fc3/s6e3fc3_aod.h
 *
 * Header file for AOD Driver
 *
 * Copyright (c) 2016 Samsung Electronics
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef __S6E3FAC_AOD_H__
#define __S6E3FAC_AOD_H__

#include "../decon_panel.h"
#include "../aod/aod_drv.h"

#define SI_ICON_ENABLE		0x01
#define SG_GRID_ENABLE		0x10

#define SI_ENABLE_REG		2

#define SI_POS_X_POS0_REG	3
#define SI_POS_X_POS1_REG	4
#define SI_POS_Y_POS0_REG	5
#define SI_POS_Y_POS1_REG	6

#define SI_IMG_WIDTH0_REG	7
#define SI_IMG_WIDTH1_REG	8
#define SI_IMG_HEIGHT0_REG	9
#define SI_IMG_HEIGHT1_REG	10

#define GI_SX_POS0_REG		13
#define GI_SX_POS1_REG		14
#define GI_SY_POS0_REG		15
#define GI_SY_POS1_REG		16

#define GI_EX_POS0_REG		17
#define GI_EX_POS1_REG		18
#define GI_EY_POS0_REG		19
#define GI_EY_POS1_REG		20

#define DIG_CLK_POS1_X1_REG	1
#define DIG_CLK_POS1_X2_REG	2
#define DIG_CLK_POS1_Y1_REG	3
#define DIG_CLK_POS1_Y2_REG	4
#define DIG_CLK_POS2_X1_REG	5
#define DIG_CLK_POS2_X2_REG	6
#define DIG_CLK_POS2_Y1_REG	7
#define DIG_CLK_POS2_Y2_REG	8

#define DIG_CLK_POS3_X1_REG	9
#define DIG_CLK_POS3_X2_REG	10
#define DIG_CLK_POS3_Y1_REG	11
#define DIG_CLK_POS3_Y2_REG	12

#define DIG_CLK_POS4_X1_REG	13
#define DIG_CLK_POS4_X2_REG	14
#define DIG_CLK_POS4_Y1_REG	15
#define DIG_CLK_POS4_Y2_REG	16

#define DIG_CLK_WIDTH1		17
#define DIG_CLK_WIDTH2		18
#define DIG_CLK_HEIGHT1		19
#define DIG_CLK_HEIGHT2		20
#define DIG_BLK_EN		0xC0

#define DIG_BLK_EN_REG		1

#define DIG_BLK1_RADIUS_REG	9
#define DIG_BLK2_RADIUS_REG	10
#define DIG_BLK1_COLOR1_REG	11
#define DIG_BLK1_COLOR2_REG	12
#define DIG_BLK1_COLOR3_REG	13


#define DIG_BLK2_COLOR1_REG	14
#define DIG_BLK2_COLOR2_REG	15
#define DIG_BLK2_COLOR3_REG	16


#define DIG_BLK1_POS_X1_REG	17
#define DIG_BLK1_POS_X2_REG	18
#define DIG_BLK1_POS_Y1_REG	19
#define DIG_BLK1_POS_Y2_REG	20

#define DIG_BLK2_POS_X1_REG	21
#define DIG_BLK2_POS_X2_REG	22
#define DIG_BLK2_POS_Y1_REG	23
#define DIG_BLK2_POS_Y2_REG	24

#define DIGITAL_FORMAT_REG	0x03
/* for hab */
#define TIME_HH_REG		0x01
#define TIME_MM_REG		0x02
#define TIME_SS_REG		0x03
#define TIME_MSS_REG		0x04

#define TIME_RATE_REG		0x08
#define TIME_COMP_REG		0x09

/* Reg: 0x77, Offset : 0x02 */
#define DIG_CLK_EN_REG		0x01
#define SC_DISP_ON		(0x01 << 1)
#define SC_D_CLK_EN		(0x01 << 0)

#define SC_A_CLK_EN		(0x01 << 0)


#define SC_TIME_EN		(0x01 << 2)

#define SC_24H_EN		(0x01 << 5)

#define SC_D_EN_HH		0x04
#define SC_D_EN_SS		0x01

#define SM_ENABLE_REG		2
#define FB_SELF_MOVE_EN		0x01
#define ICON_SELF_MOVE_EN	0x02

#define SELFMASK_CHECKSUM_VALID1 0xD3
#define SELFMASK_CHECKSUM_VALID2 0x9B

#define SELFMASK_CHECKSUM_LEN	2

#define ANALOG_EN_REG		2
#define ANALOG_POS_X1_REG	1
#define ANALOG_POS_X2_REG	2
#define ANALOG_POS_Y1_REG	3
#define ANALOG_POS_Y2_REG	4
#define ANALOG_ROT_REG		5

#define DIGITAL_EN_REG		0x02
#define DIGITAL_UN_REG		0x03
#define DIGITAL_FMT_REG		0x04

#define REG_MOVE_DSP_X		4

#define ICON_REG_EN		2
#define ICON_ENABLE		0x11

#define ICON_REG_XPOS0		3
#define ICON_REG_XPOS1		4
#define ICON_REG_YPOS0		5
#define ICON_REG_YPOS1		6

#define ICON_REG_WIDTH0		7
#define ICON_REG_WIDTH1		8

#define ICON_REG_HEIGHT0	9
#define ICON_REG_HEIGHT1	10

#define ICON_REG_COLOR0		11
#define ICON_REG_COLOR1		12
#define ICON_REG_COLOR2		13
#define ICON_REG_COLOR3		14

#define DIG_COLOR_ALPHA_REG	0x1
#define DIG_COLOR_RED_REG	0x2
#define DIG_COLOR_GREEN_REG	0x3
#define DIG_COLOR_BLUE_REG	0x4

#define DIG_UN_WIDTH0		0x1
#define DIG_UN_WIDTH1		0x2

#define SCAN_ENABLE_REG		0x1
#define SCAN_MODE_REG		0x2

#define ENABLE_PARTIAL_HLPM_VAL 0x01
#define ENABLE_PARTIAL_SCAN_VAL 0x10

/*SP_PLT_SCAN_.. */
#define PARTIAL_AREA_SL0_REG	0x01
#define PARTIAL_AREA_SL1_REG	0x02
#define PARTIAL_AREA_EL0_REG	0x03
#define PARTIAL_AREA_EL1_REG	0x04

#define PARTIAL_HLPM1_L0_REG	0x01
#define PARTIAL_HLPM1_L1_REG	0x02

#define PARTIAL_HLPM2_L0_REG	0x03
#define PARTIAL_HLPM2_L1_REG	0x04

#define PARTIAL_HLPM3_L0_REG	0x05
#define PARTIAL_HLPM3_L1_REG	0x06

#define PARTIAL_HLPM4_L0_REG	0x07
#define PARTIAL_HLPM4_L1_REG	0x08

void s6e3fc3_copy_self_mask_ctrl(struct maptbl *tbl, u8 *dst);
int s6e3fc3_init_self_mask_ctrl(struct maptbl *tbl);
#endif
