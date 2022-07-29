/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright 2016 Freescale Semiconductor, Inc.
 * Copyright 2017 NXP
 */

#ifndef __DT_BINDINGS_CLOCK_IMX8MQ_H
#define __DT_BINDINGS_CLOCK_IMX8MQ_H

#define IMX8MQ_CLK_DUMMY		0
#define IMX8MQ_CLK_32K			1
#define IMX8MQ_CLK_25M			2
#define IMX8MQ_CLK_27M			3
#define IMX8MQ_CLK_EXT1			4
#define IMX8MQ_CLK_EXT2			5
#define IMX8MQ_CLK_EXT3			6
#define IMX8MQ_CLK_EXT4			7

/* ANAMIX PLL clocks */
/* FRAC PLLs */
/* ARM PLL */
#define IMX8MQ_ARM_PLL_REF_SEL		8
#define IMX8MQ_ARM_PLL_REF_DIV		9
#define IMX8MQ_ARM_PLL			10
#define IMX8MQ_ARM_PLL_BYPASS		11
#define IMX8MQ_ARM_PLL_OUT		12

/* GPU PLL */
#define IMX8MQ_GPU_PLL_REF_SEL		13
#define IMX8MQ_GPU_PLL_REF_DIV		14
#define IMX8MQ_GPU_PLL			15
#define IMX8MQ_GPU_PLL_BYPASS		16
#define IMX8MQ_GPU_PLL_OUT		17

/* VPU PLL */
#define IMX8MQ_VPU_PLL_REF_SEL		18
#define IMX8MQ_VPU_PLL_REF_DIV		19
#define IMX8MQ_VPU_PLL			20
#define IMX8MQ_VPU_PLL_BYPASS		21
#define IMX8MQ_VPU_PLL_OUT		22

/* AUDIO PLL1 */
#define IMX8MQ_AUDIO_PLL1_REF_SEL	23
#define IMX8MQ_AUDIO_PLL1_REF_DIV	24
#define IMX8MQ_AUDIO_PLL1		25
#define IMX8MQ_AUDIO_PLL1_BYPASS	26
#define IMX8MQ_AUDIO_PLL1_OUT		27

/* AUDIO PLL2 */
#define IMX8MQ_AUDIO_PLL2_REF_SEL	28
#define IMX8MQ_AUDIO_PLL2_REF_DIV	29
#define IMX8MQ_AUDIO_PLL2		30
#define IMX8MQ_AUDIO_PLL2_BYPASS	31
#define IMX8MQ_AUDIO_PLL2_OUT		32

/* VIDEO PLL1 */
#define IMX8MQ_VIDEO_PLL1_REF_SEL	33
#define IMX8MQ_VIDEO_PLL1_REF_DIV	34
#define IMX8MQ_VIDEO_PLL1		35
#define IMX8MQ_VIDEO_PLL1_BYPASS	36
#define IMX8MQ_VIDEO_PLL1_OUT		37

/* SYS1 PLL */
#define IMX8MQ_SYS1_PLL1_REF_SEL	38
#define IMX8MQ_SYS1_PLL1_REF_DIV	39
#define IMX8MQ_SYS1_PLL1		40
#define IMX8MQ_SYS1_PLL1_OUT		41
#define IMX8MQ_SYS1_PLL1_OUT_DIV	42
#define IMX8MQ_SYS1_PLL2		43
#define IMX8MQ_SYS1_PLL2_DIV		44
#define IMX8MQ_SYS1_PLL2_OUT		45

/* SYS2 PLL */
#define IMX8MQ_SYS2_PLL1_REF_SEL	46
#define IMX8MQ_SYS2_PLL1_REF_DIV	47
#define IMX8MQ_SYS2_PLL1		48
#define IMX8MQ_SYS2_PLL1_OUT		49
#define IMX8MQ_SYS2_PLL1_OUT_DIV	50
#define IMX8MQ_SYS2_PLL2		51
#define IMX8MQ_SYS2_PLL2_DIV		52
#define IMX8MQ_SYS2_PLL2_OUT		53

/* SYS3 PLL */
#define IMX8MQ_SYS3_PLL1_REF_SEL	54
#define IMX8MQ_SYS3_PLL1_REF_DIV	55
#define IMX8MQ_SYS3_PLL1		56
#define IMX8MQ_SYS3_PLL1_OUT		57
#define IMX8MQ_SYS3_PLL1_OUT_DIV	58
#define IMX8MQ_SYS3_PLL2		59
#define IMX8MQ_SYS3_PLL2_DIV		60
#define IMX8MQ_SYS3_PLL2_OUT		61

/* DRAM PLL */
#define IMX8MQ_DRAM_PLL1_REF_SEL	62
#define IMX8MQ_DRAM_PLL1_REF_DIV	63
#define IMX8MQ_DRAM_PLL1		64
#define IMX8MQ_DRAM_PLL1_OUT		65
#define IMX8MQ_DRAM_PLL1_OUT_DIV	66
#define IMX8MQ_DRAM_PLL2		67
#define IMX8MQ_DRAM_PLL2_DIV		68
#define IMX8MQ_DRAM_PLL2_OUT		69

/* SYS PLL DIV */
#define IMX8MQ_SYS1_PLL_40M		70
#define IMX8MQ_SYS1_PLL_80M		71
#define IMX8MQ_SYS1_PLL_100M		72
#define IMX8MQ_SYS1_PLL_133M		73
#define IMX8MQ_SYS1_PLL_160M		74
#define IMX8MQ_SYS1_PLL_200M		75
#define IMX8MQ_SYS1_PLL_266M		76
#define IMX8MQ_SYS1_PLL_400M		77
#define IMX8MQ_SYS1_PLL_800M		78

#define IMX8MQ_SYS2_PLL_50M		79
#define IMX8MQ_SYS2_PLL_100M		80
#define IMX8MQ_SYS2_PLL_125M		81
#define IMX8MQ_SYS2_PLL_166M		82
#define IMX8MQ_SYS2_PLL_200M		83
#define IMX8MQ_SYS2_PLL_250M		84
#define IMX8MQ_SYS2_PLL_333M		85
#define IMX8MQ_SYS2_PLL_500M		86
#define IMX8MQ_SYS2_PLL_1000M		87

/* CCM ROOT clocks */
/* A53 */
#define IMX8MQ_CLK_A53_SRC		88
#define IMX8MQ_CLK_A53_CG		89
#define IMX8MQ_CLK_A53_DIV		90
/* M4 */
#define IMX8MQ_CLK_M4_SRC		91
#define IMX8MQ_CLK_M4_CG		92
#define IMX8MQ_CLK_M4_DIV		93
/* VPU */
#define IMX8MQ_CLK_VPU_SRC		94
#define IMX8MQ_CLK_VPU_CG		95
#define IMX8MQ_CLK_VPU_DIV		96
/* GPU CORE */
#define IMX8MQ_CLK_GPU_CORE_SRC		97
#define IMX8MQ_CLK_GPU_CORE_CG		98
#define IMX8MQ_CLK_GPU_CORE_DIV		99
/* GPU SHADER */
#define IMX8MQ_CLK_GPU_SHADER_SRC	100
#define IMX8MQ_CLK_GPU_SHADER_CG	101
#define IMX8MQ_CLK_GPU_SHADER_DIV	102

/* BUS TYPE */
/* MAIN AXI */
#define IMX8MQ_CLK_MAIN_AXI		103
/* ENET AXI */
#define IMX8MQ_CLK_ENET_AXI		104
/* NAND_USDHC_BUS */
#define IMX8MQ_CLK_NAND_USDHC_BUS	105
/* VPU BUS */
#define IMX8MQ_CLK_VPU_BUS		106
/* DISP_AXI */
#define IMX8MQ_CLK_DISP_AXI		107
/* DISP APB */
#define IMX8MQ_CLK_DISP_APB		108
/* DISP RTRM */
#define IMX8MQ_CLK_DISP_RTRM		109
/* USB_BUS */
#define IMX8MQ_CLK_USB_BUS		110
/* GPU_AXI */
#define IMX8MQ_CLK_GPU_AXI		111
/* GPU_AHB */
#define IMX8MQ_CLK_GPU_AHB		112
/* NOC */
#define IMX8MQ_CLK_NOC			113
/* NOC_APB */
#define IMX8MQ_CLK_NOC_APB		115

/* AHB */
#define IMX8MQ_CLK_AHB			116
/* AUDIO AHB */
#define IMX8MQ_CLK_AUDIO_AHB		117

/* DRAM_ALT */
#define IMX8MQ_CLK_DRAM_ALT		118
/* DRAM APB */
#define IMX8MQ_CLK_DRAM_APB		119
/* VPU_G1 */
#define IMX8MQ_CLK_VPU_G1		120
/* VPU_G2 */
#define IMX8MQ_CLK_VPU_G2		121
/* DISP_DTRC */
#define IMX8MQ_CLK_DISP_DTRC		122
/* DISP_DC8000 */
#define IMX8MQ_CLK_DISP_DC8000		123
/* PCIE_CTRL */
#define IMX8MQ_CLK_PCIE1_CTRL		124
/* PCIE_PHY */
#define IMX8MQ_CLK_PCIE1_PHY		125
/* PCIE_AUX */
#define IMX8MQ_CLK_PCIE1_AUX		126
/* DC_PIXEL */
#define IMX8MQ_CLK_DC_PIXEL		127
/* LCDIF_PIXEL */
#define IMX8MQ_CLK_LCDIF_PIXEL		128
/* SAI1~6 */
#define IMX8MQ_CLK_SAI1			129

#define IMX8MQ_CLK_SAI2			130

#define IMX8MQ_CLK_SAI3			131

#define IMX8MQ_CLK_SAI4			132

#define IMX8MQ_CLK_SAI5			133

#define IMX8MQ_CLK_SAI6			134
/* SPDIF1 */
#define IMX8MQ_CLK_SPDIF1		135
/* SPDIF2 */
#define IMX8MQ_CLK_SPDIF2		136
/* ENET_REF */
#define IMX8MQ_CLK_ENET_REF		137
/* ENET_TIMER */
#define IMX8MQ_CLK_ENET_TIMER		138
/* ENET_PHY */
#define IMX8MQ_CLK_ENET_PHY_REF		139
/* NAND */
#define IMX8MQ_CLK_NAND			140
/* QSPI */
#define IMX8MQ_CLK_QSPI			141
/* USDHC1 */
#define IMX8MQ_CLK_USDHC1		142
/* USDHC2 */
#define IMX8MQ_CLK_USDHC2		143
/* I2C1 */
#define IMX8MQ_CLK_I2C1			144
/* I2C2 */
#define IMX8MQ_CLK_I2C2			145
/* I2C3 */
#define IMX8MQ_CLK_I2C3			146
/* I2C4 */
#define IMX8MQ_CLK_I2C4			147
/* UART1 */
#define IMX8MQ_CLK_UART1		148
/* UART2 */
#define IMX8MQ_CLK_UART2		149
/* UART3 */
#define IMX8MQ_CLK_UART3		150
/* UART4 */
#define IMX8MQ_CLK_UART4		151
/* USB_CORE_REF */
#define IMX8MQ_CLK_USB_CORE_REF		152
/* USB_PHY_REF */
#define IMX8MQ_CLK_USB_PHY_REF		153
/* ECSPI1 */
#define IMX8MQ_CLK_ECSPI1		154
/* ECSPI2 */
#define IMX8MQ_CLK_ECSPI2		155
/* PWM1 */
#define IMX8MQ_CLK_PWM1			156
/* PWM2 */
#define IMX8MQ_CLK_PWM2			157
/* PWM3 */
#define IMX8MQ_CLK_PWM3			158
/* PWM4 */
#define IMX8MQ_CLK_PWM4			159
/* GPT1 */
#define IMX8MQ_CLK_GPT1			160
/* WDOG */
#define IMX8MQ_CLK_WDOG			161
/* WRCLK */
#define IMX8MQ_CLK_WRCLK		162
/* DSI_CORE */
#define IMX8MQ_CLK_DSI_CORE		163
/* DSI_PHY */
#define IMX8MQ_CLK_DSI_PHY_REF		164
/* DSI_DBI */
#define IMX8MQ_CLK_DSI_DBI		165
/*DSI_ESC */
#define IMX8MQ_CLK_DSI_ESC		166
/* CSI1_CORE */
#define IMX8MQ_CLK_CSI1_CORE		167
/* CSI1_PHY */
#define IMX8MQ_CLK_CSI1_PHY_REF		168
/* CSI_ESC */
#define IMX8MQ_CLK_CSI1_ESC		169
/* CSI2_CORE */
#define IMX8MQ_CLK_CSI2_CORE		170
/* CSI2_PHY */
#define IMX8MQ_CLK_CSI2_PHY_REF		171
/* CSI2_ESC */
#define IMX8MQ_CLK_CSI2_ESC		172
/* PCIE2_CTRL */
#define IMX8MQ_CLK_PCIE2_CTRL		173
/* PCIE2_PHY */
#define IMX8MQ_CLK_PCIE2_PHY		174
/* PCIE2_AUX */
#define IMX8MQ_CLK_PCIE2_AUX		175
/* ECSPI3 */
#define IMX8MQ_CLK_ECSPI3		176

/* CCGR clocks */
#define IMX8MQ_CLK_A53_ROOT			177
#define IMX8MQ_CLK_DRAM_ROOT			178
#define IMX8MQ_CLK_ECSPI1_ROOT			179
#define IMX8MQ_CLK_ECSPI2_ROOT			180
#define IMX8MQ_CLK_ECSPI3_ROOT			181
#define IMX8MQ_CLK_ENET1_ROOT			182
#define IMX8MQ_CLK_GPT1_ROOT			183
#define IMX8MQ_CLK_I2C1_ROOT			184
#define IMX8MQ_CLK_I2C2_ROOT			185
#define IMX8MQ_CLK_I2C3_ROOT			186
#define IMX8MQ_CLK_I2C4_ROOT			187
#define IMX8MQ_CLK_M4_ROOT			188
#define IMX8MQ_CLK_PCIE1_ROOT			189
#define IMX8MQ_CLK_PCIE2_ROOT			190
#define IMX8MQ_CLK_PWM1_ROOT			191
#define IMX8MQ_CLK_PWM2_ROOT			192
#define IMX8MQ_CLK_PWM3_ROOT			193
#define IMX8MQ_CLK_PWM4_ROOT			194
#define IMX8MQ_CLK_QSPI_ROOT			195
#define IMX8MQ_CLK_SAI1_ROOT			196
#define IMX8MQ_CLK_SAI2_ROOT			197
#define IMX8MQ_CLK_SAI3_ROOT			198
#define IMX8MQ_CLK_SAI4_ROOT			199
#define IMX8MQ_CLK_SAI5_ROOT			200
#define IMX8MQ_CLK_SAI6_ROOT			201
#define IMX8MQ_CLK_UART1_ROOT			202
#define IMX8MQ_CLK_UART2_ROOT			203
#define IMX8MQ_CLK_UART3_ROOT			204
#define IMX8MQ_CLK_UART4_ROOT			205
#define IMX8MQ_CLK_USB1_CTRL_ROOT		206
#define IMX8MQ_CLK_USB2_CTRL_ROOT		207
#define IMX8MQ_CLK_USB1_PHY_ROOT		208
#define IMX8MQ_CLK_USB2_PHY_ROOT		209
#define IMX8MQ_CLK_USDHC1_ROOT			210
#define IMX8MQ_CLK_USDHC2_ROOT			211
#define IMX8MQ_CLK_WDOG1_ROOT			212
#define IMX8MQ_CLK_WDOG2_ROOT			213
#define IMX8MQ_CLK_WDOG3_ROOT			214
#define IMX8MQ_CLK_GPU_ROOT			215
#define IMX8MQ_CLK_HEVC_ROOT			216
#define IMX8MQ_CLK_AVC_ROOT			217
#define IMX8MQ_CLK_VP9_ROOT			218
#define IMX8MQ_CLK_HEVC_INTER_ROOT		219
#define IMX8MQ_CLK_DISP_ROOT			220
#define IMX8MQ_CLK_HDMI_ROOT			221
#define IMX8MQ_CLK_HDMI_PHY_ROOT		222
#define IMX8MQ_CLK_VPU_DEC_ROOT			223
#define IMX8MQ_CLK_CSI1_ROOT			224
#define IMX8MQ_CLK_CSI2_ROOT			225
#define IMX8MQ_CLK_RAWNAND_ROOT			226
#define IMX8MQ_CLK_SDMA1_ROOT			227
#define IMX8MQ_CLK_SDMA2_ROOT			228
#define IMX8MQ_CLK_VPU_G1_ROOT			229
#define IMX8MQ_CLK_VPU_G2_ROOT			230

/* SCCG PLL GATE */
#define IMX8MQ_SYS1_PLL_OUT			231
#define IMX8MQ_SYS2_PLL_OUT			232
#define IMX8MQ_SYS3_PLL_OUT			233
#define IMX8MQ_DRAM_PLL_OUT			234

#define IMX8MQ_GPT_3M_CLK			235

#define IMX8MQ_CLK_IPG_ROOT			236
#define IMX8MQ_CLK_IPG_AUDIO_ROOT		237
#define IMX8MQ_CLK_SAI1_IPG			238
#define IMX8MQ_CLK_SAI2_IPG			239
#define IMX8MQ_CLK_SAI3_IPG			240
#define IMX8MQ_CLK_SAI4_IPG			241
#define IMX8MQ_CLK_SAI5_IPG			242
#define IMX8MQ_CLK_SAI6_IPG			243

/* DSI AHB/IPG clocks */
/* rxesc clock */
#define IMX8MQ_CLK_DSI_AHB			244
/* txesc clock */
#define IMX8MQ_CLK_DSI_IPG_DIV                  245

#define IMX8MQ_CLK_TMU_ROOT			246

/* Display root clocks */
#define IMX8MQ_CLK_DISP_AXI_ROOT		247
#define IMX8MQ_CLK_DISP_APB_ROOT		248
#define IMX8MQ_CLK_DISP_RTRM_ROOT		249

#define IMX8MQ_CLK_OCOTP_ROOT			250

#define IMX8MQ_CLK_DRAM_ALT_ROOT		251
#define IMX8MQ_CLK_DRAM_CORE			252

#define IMX8MQ_CLK_MU_ROOT			253
#define IMX8MQ_VIDEO2_PLL_OUT			254

#define IMX8MQ_CLK_CLKO2			255

#define IMX8MQ_CLK_NAND_USDHC_BUS_RAWNAND_CLK	256

#define IMX8MQ_CLK_CLKO1			257
#define IMX8MQ_CLK_ARM				258

#define IMX8MQ_CLK_GPIO1_ROOT			259
#define IMX8MQ_CLK_GPIO2_ROOT			260
#define IMX8MQ_CLK_GPIO3_ROOT			261
#define IMX8MQ_CLK_GPIO4_ROOT			262
#define IMX8MQ_CLK_GPIO5_ROOT			263

#define IMX8MQ_CLK_SNVS_ROOT			264
#define IMX8MQ_CLK_GIC				265

#define IMX8MQ_VIDEO2_PLL1_REF_SEL		266

#define IMX8MQ_SYS1_PLL_40M_CG			267
#define IMX8MQ_SYS1_PLL_80M_CG			268
#define IMX8MQ_SYS1_PLL_100M_CG			269
#define IMX8MQ_SYS1_PLL_133M_CG			270
#define IMX8MQ_SYS1_PLL_160M_CG			271
#define IMX8MQ_SYS1_PLL_200M_CG			272
#define IMX8MQ_SYS1_PLL_266M_CG			273
#define IMX8MQ_SYS1_PLL_400M_CG			274
#define IMX8MQ_SYS1_PLL_800M_CG			275
#define IMX8MQ_SYS2_PLL_50M_CG			276
#define IMX8MQ_SYS2_PLL_100M_CG			277
#define IMX8MQ_SYS2_PLL_125M_CG			278
#define IMX8MQ_SYS2_PLL_166M_CG			279
#define IMX8MQ_SYS2_PLL_200M_CG			280
#define IMX8MQ_SYS2_PLL_250M_CG			281
#define IMX8MQ_SYS2_PLL_333M_CG			282
#define IMX8MQ_SYS2_PLL_500M_CG			283
#define IMX8MQ_SYS2_PLL_1000M_CG		284

#define IMX8MQ_CLK_GPU_CORE			285
#define IMX8MQ_CLK_GPU_SHADER			286
#define IMX8MQ_CLK_M4_CORE			287
#define IMX8MQ_CLK_VPU_CORE			288

#define IMX8MQ_CLK_A53_CORE			289

#define IMX8MQ_CLK_PHY_27MHZ			290

#define IMX8MQ_CLK_END				291
#endif /* __DT_BINDINGS_CLOCK_IMX8MQ_H */
