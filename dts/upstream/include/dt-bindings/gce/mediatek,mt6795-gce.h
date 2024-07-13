/* SPDX-License-Identifier: (GPL-2.0-only OR BSD-2-Clause) */
/*
 * Copyright (c) 2023 Collabora Ltd.
 * Author: AngeloGioacchino Del Regno <angelogioacchino.delregno@collabora.com>
 */
#ifndef _DT_BINDINGS_GCE_MT6795_H
#define _DT_BINDINGS_GCE_MT6795_H

/* GCE HW thread priority */
#define CMDQ_THR_PRIO_LOWEST			0
#define CMDQ_THR_PRIO_NORMAL			1
#define CMDQ_THR_PRIO_NORMAL_2			2
#define CMDQ_THR_PRIO_MEDIUM			3
#define CMDQ_THR_PRIO_MEDIUM_2			4
#define CMDQ_THR_PRIO_HIGH			5
#define CMDQ_THR_PRIO_HIGHER			6
#define CMDQ_THR_PRIO_HIGHEST			7

/* GCE SUBSYS */
#define SUBSYS_1300XXXX				0
#define SUBSYS_1400XXXX				1
#define SUBSYS_1401XXXX				2
#define SUBSYS_1402XXXX				3
#define SUBSYS_1500XXXX				4
#define SUBSYS_1600XXXX				5
#define SUBSYS_1700XXXX				6
#define SUBSYS_1800XXXX				7
#define SUBSYS_1000XXXX				8
#define SUBSYS_1001XXXX				9
#define SUBSYS_1002XXXX				10
#define SUBSYS_1003XXXX				11
#define SUBSYS_1004XXXX				12
#define SUBSYS_1005XXXX				13
#define SUBSYS_1020XXXX				14
#define SUBSYS_1021XXXX				15
#define SUBSYS_1120XXXX				16
#define SUBSYS_1121XXXX				17
#define SUBSYS_1122XXXX				18
#define SUBSYS_1123XXXX				19
#define SUBSYS_1124XXXX				20
#define SUBSYS_1125XXXX				21
#define SUBSYS_1126XXXX				22

/* GCE HW EVENT */
#define CMDQ_EVENT_MDP_RDMA0_SOF		0
#define CMDQ_EVENT_MDP_RDMA1_SOF		1
#define CMDQ_EVENT_MDP_DSI0_TE_SOF		2
#define CMDQ_EVENT_MDP_DSI1_TE_SOF		3
#define CMDQ_EVENT_MDP_MVW_SOF			4
#define CMDQ_EVENT_MDP_TDSHP0_SOF		5
#define CMDQ_EVENT_MDP_TDSHP1_SOF		6
#define CMDQ_EVENT_MDP_WDMA_SOF			7
#define CMDQ_EVENT_MDP_WROT0_SOF		8
#define CMDQ_EVENT_MDP_WROT1_SOF		9
#define CMDQ_EVENT_MDP_CROP_SOF			10
#define CMDQ_EVENT_DISP_OVL0_SOF		11
#define CMDQ_EVENT_DISP_OVL1_SOF		12
#define CMDQ_EVENT_DISP_RDMA0_SOF		13
#define CMDQ_EVENT_DISP_RDMA1_SOF		14
#define CMDQ_EVENT_DISP_RDMA2_SOF		15
#define CMDQ_EVENT_DISP_WDMA0_SOF		16
#define CMDQ_EVENT_DISP_WDMA1_SOF		17
#define CMDQ_EVENT_DISP_COLOR0_SOF		18
#define CMDQ_EVENT_DISP_COLOR1_SOF		19
#define CMDQ_EVENT_DISP_AAL_SOF			20
#define CMDQ_EVENT_DISP_GAMMA_SOF		21
#define CMDQ_EVENT_DISP_UFOE_SOF		22
#define CMDQ_EVENT_DISP_PWM0_SOF		23
#define CMDQ_EVENT_DISP_PWM1_SOF		24
#define CMDQ_EVENT_DISP_OD_SOF			25
#define CMDQ_EVENT_MDP_RDMA0_EOF		26
#define CMDQ_EVENT_MDP_RDMA1_EOF		27
#define CMDQ_EVENT_MDP_RSZ0_EOF			28
#define CMDQ_EVENT_MDP_RSZ1_EOF			29
#define CMDQ_EVENT_MDP_RSZ2_EOF			30
#define CMDQ_EVENT_MDP_TDSHP0_EOF		31
#define CMDQ_EVENT_MDP_TDSHP1_EOF		32
#define CMDQ_EVENT_MDP_WDMA_EOF			33
#define CMDQ_EVENT_MDP_WROT0_WRITE_EOF		34
#define CMDQ_EVENT_MDP_WROT0_READ_EOF		35
#define CMDQ_EVENT_MDP_WROT1_WRITE_EOF		36
#define CMDQ_EVENT_MDP_WROT1_READ_EOF		37
#define CMDQ_EVENT_MDP_CROP_EOF			38
#define CMDQ_EVENT_DISP_OVL0_EOF		39
#define CMDQ_EVENT_DISP_OVL1_EOF		40
#define CMDQ_EVENT_DISP_RDMA0_EOF		41
#define CMDQ_EVENT_DISP_RDMA1_EOF		42
#define CMDQ_EVENT_DISP_RDMA2_EOF		43
#define CMDQ_EVENT_DISP_WDMA0_EOF		44
#define CMDQ_EVENT_DISP_WDMA1_EOF		45
#define CMDQ_EVENT_DISP_COLOR0_EOF		46
#define CMDQ_EVENT_DISP_COLOR1_EOF		47
#define CMDQ_EVENT_DISP_AAL_EOF			48
#define CMDQ_EVENT_DISP_GAMMA_EOF		49
#define CMDQ_EVENT_DISP_UFOE_EOF		50
#define CMDQ_EVENT_DISP_DPI0_EOF		51
#define CMDQ_EVENT_MUTEX0_STREAM_EOF		52
#define CMDQ_EVENT_MUTEX1_STREAM_EOF		53
#define CMDQ_EVENT_MUTEX2_STREAM_EOF		54
#define CMDQ_EVENT_MUTEX3_STREAM_EOF		55
#define CMDQ_EVENT_MUTEX4_STREAM_EOF		56
#define CMDQ_EVENT_MUTEX5_STREAM_EOF		57
#define CMDQ_EVENT_MUTEX6_STREAM_EOF		58
#define CMDQ_EVENT_MUTEX7_STREAM_EOF		59
#define CMDQ_EVENT_MUTEX8_STREAM_EOF		60
#define CMDQ_EVENT_MUTEX9_STREAM_EOF		61
#define CMDQ_EVENT_DISP_RDMA0_UNDERRUN		62
#define CMDQ_EVENT_DISP_RDMA1_UNDERRUN		63
#define CMDQ_EVENT_DISP_RDMA2_UNDERRUN		64
#define CMDQ_EVENT_ISP_PASS2_2_EOF		129
#define CMDQ_EVENT_ISP_PASS2_1_EOF		130
#define CMDQ_EVENT_ISP_PASS2_0_EOF		131
#define CMDQ_EVENT_ISP_PASS1_1_EOF		132
#define CMDQ_EVENT_ISP_PASS1_0_EOF		133
#define CMDQ_EVENT_CAMSV_2_PASS1_EOF		134
#define CMDQ_EVENT_CAMSV_1_PASS1_EOF		135
#define CMDQ_EVENT_SENINF_CAM1_2_3_FIFO_FULL	136
#define CMDQ_EVENT_SENINF_CAM0_FIFO_FULL	137
#define CMDQ_EVENT_JPGENC_PASS2_EOF		257
#define CMDQ_EVENT_JPGENC_PASS1_EOF		258
#define CMDQ_EVENT_JPGDEC_EOF			259

#endif
