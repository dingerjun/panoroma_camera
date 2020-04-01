/* Copyright Statement:
*
* This software/firmware and related documentation ("MediaTek Software") are
* protected under relevant copyright laws. The information contained herein
* is confidential and proprietary to MediaTek Inc. and/or its licensors.
* Without the prior written permission of MediaTek inc. and/or its licensors,
* any reproduction, modification, use or disclosure of MediaTek Software,
* and information contained herein, in whole or in part, shall be strictly prohibited.
*/
/* MediaTek Inc. (C) 2010. All rights reserved.
*
* BY OPENING THIS FILE, RECEIVER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
* THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
* RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO RECEIVER ON
* AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
* EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
* MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
* NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
* SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
* SUPPLIED WITH THE MEDIATEK SOFTWARE, AND RECEIVER AGREES TO LOOK ONLY TO SUCH
* THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. RECEIVER EXPRESSLY ACKNOWLEDGES
* THAT IT IS RECEIVER'S SOLE RESPONSIBILITY TO OBTAIN FROM ANY THIRD PARTY ALL PROPER LICENSES
* CONTAINED IN MEDIATEK SOFTWARE. MEDIATEK SHALL ALSO NOT BE RESPONSIBLE FOR ANY MEDIATEK
* SOFTWARE RELEASES MADE TO RECEIVER'S SPECIFICATION OR TO CONFORM TO A PARTICULAR
* STANDARD OR OPEN FORUM. RECEIVER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND
* CUMULATIVE LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
* AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
* OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY RECEIVER TO
* MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
*
* The following software/firmware and/or related documentation ("MediaTek Software")
* have been modified by MediaTek Inc. All revisions are subject to any receiver's
 * applicable license agreements with MediaTek Inc.
*/

#ifndef _CAMERA_AE_PLINETABLE_OV2710MIPIRAW_H
#define _CAMERA_AE_PLINETABLE_OV2710MIPIRAW_H

#include "camera_custom_AEPlinetable.h"
static strEvPline sPreviewPLineTable_60Hz =
{
{
    {73,1600,1048, 0, 0, 0},  //TV = 13.74(2 lines)  AV=2.53  SV=4.12  BV=12.15
    {73,1664,1040, 0, 0, 0},  //TV = 13.74(2 lines)  AV=2.53  SV=4.17  BV=12.10
    {109,1216,1032, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.70  BV=11.99
    {109,1280,1048, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.80  BV=11.89
    {109,1344,1064, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.89  BV=11.80
    {109,1472,1032, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.98  BV=11.71
    {145,1216,1024, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.69  BV=11.59
    {145,1280,1056, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.81  BV=11.47
    {145,1344,1048, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.87  BV=11.41
    {145,1472,1024, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.97  BV=11.31
    {182,1216,1064, 0, 0, 0},  //TV = 12.42(5 lines)  AV=2.53  SV=3.75  BV=11.20
    {182,1344,1024, 0, 0, 0},  //TV = 12.42(5 lines)  AV=2.53  SV=3.84  BV=11.11
    {218,1152,1072, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.68  BV=11.01
    {218,1280,1032, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.78  BV=10.91
    {218,1344,1056, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.88  BV=10.81
    {254,1216,1072, 0, 0, 0},  //TV = 11.94(7 lines)  AV=2.53  SV=3.76  BV=10.71
    {290,1152,1064, 0, 0, 0},  //TV = 11.75(8 lines)  AV=2.53  SV=3.67  BV=10.61
    {290,1280,1024, 0, 0, 0},  //TV = 11.75(8 lines)  AV=2.53  SV=3.77  BV=10.51
    {327,1216,1024, 0, 0, 0},  //TV = 11.58(9 lines)  AV=2.53  SV=3.69  BV=10.41
    {327,1280,1048, 0, 0, 0},  //TV = 11.58(9 lines)  AV=2.53  SV=3.80  BV=10.31
    {363,1216,1064, 0, 0, 0},  //TV = 11.43(10 lines)  AV=2.53  SV=3.75  BV=10.21
    {399,1216,1032, 0, 0, 0},  //TV = 11.29(11 lines)  AV=2.53  SV=3.70  BV=10.11
    {435,1152,1080, 0, 0, 0},  //TV = 11.17(12 lines)  AV=2.53  SV=3.69  BV=10.00
    {471,1152,1064, 0, 0, 0},  //TV = 11.05(13 lines)  AV=2.53  SV=3.67  BV=9.91
    {471,1280,1024, 0, 0, 0},  //TV = 11.05(13 lines)  AV=2.53  SV=3.77  BV=9.81
    {508,1216,1072, 0, 0, 0},  //TV = 10.94(14 lines)  AV=2.53  SV=3.76  BV=9.71
    {580,1152,1064, 0, 0, 0},  //TV = 10.75(16 lines)  AV=2.53  SV=3.67  BV=9.61
    {616,1152,1072, 0, 0, 0},  //TV = 10.66(17 lines)  AV=2.53  SV=3.68  BV=9.51
    {653,1216,1024, 0, 0, 0},  //TV = 10.58(18 lines)  AV=2.53  SV=3.69  BV=9.42
    {689,1216,1040, 0, 0, 0},  //TV = 10.50(19 lines)  AV=2.53  SV=3.71  BV=9.32
    {761,1152,1072, 0, 0, 0},  //TV = 10.36(21 lines)  AV=2.53  SV=3.68  BV=9.21
    {797,1216,1032, 0, 0, 0},  //TV = 10.29(22 lines)  AV=2.53  SV=3.70  BV=9.12
    {870,1152,1080, 0, 0, 0},  //TV = 10.17(24 lines)  AV=2.53  SV=3.69  BV=9.00
    {942,1152,1064, 0, 0, 0},  //TV = 10.05(26 lines)  AV=2.53  SV=3.67  BV=8.91
    {979,1216,1040, 0, 0, 0},  //TV = 10.00(27 lines)  AV=2.53  SV=3.71  BV=8.81
    {1051,1216,1032, 0, 0, 0},  //TV = 9.89(29 lines)  AV=2.53  SV=3.70  BV=8.72
    {1160,1152,1072, 0, 0, 0},  //TV = 9.75(32 lines)  AV=2.53  SV=3.68  BV=8.60
    {1232,1152,1072, 0, 0, 0},  //TV = 9.66(34 lines)  AV=2.53  SV=3.68  BV=8.51
    {1305,1216,1024, 0, 0, 0},  //TV = 9.58(36 lines)  AV=2.53  SV=3.69  BV=8.42
    {1413,1152,1080, 0, 0, 0},  //TV = 9.47(39 lines)  AV=2.53  SV=3.69  BV=8.30
    {1522,1152,1072, 0, 0, 0},  //TV = 9.36(42 lines)  AV=2.53  SV=3.68  BV=8.21
    {1631,1152,1072, 0, 0, 0},  //TV = 9.26(45 lines)  AV=2.53  SV=3.68  BV=8.11
    {1739,1152,1080, 0, 0, 0},  //TV = 9.17(48 lines)  AV=2.53  SV=3.69  BV=8.00
    {1884,1152,1064, 0, 0, 0},  //TV = 9.05(52 lines)  AV=2.53  SV=3.67  BV=7.91
    {1993,1152,1080, 0, 0, 0},  //TV = 8.97(55 lines)  AV=2.53  SV=3.69  BV=7.81
    {2138,1152,1080, 0, 0, 0},  //TV = 8.87(59 lines)  AV=2.53  SV=3.69  BV=7.71
    {2319,1152,1064, 0, 0, 0},  //TV = 8.75(64 lines)  AV=2.53  SV=3.67  BV=7.61
    {2464,1152,1072, 0, 0, 0},  //TV = 8.66(68 lines)  AV=2.53  SV=3.68  BV=7.51
    {2645,1152,1072, 0, 0, 0},  //TV = 8.56(73 lines)  AV=2.53  SV=3.68  BV=7.41
    {2826,1152,1080, 0, 0, 0},  //TV = 8.47(78 lines)  AV=2.53  SV=3.69  BV=7.30
    {3043,1152,1072, 0, 0, 0},  //TV = 8.36(84 lines)  AV=2.53  SV=3.68  BV=7.21
    {3261,1152,1072, 0, 0, 0},  //TV = 8.26(90 lines)  AV=2.53  SV=3.68  BV=7.11
    {3514,1152,1072, 0, 0, 0},  //TV = 8.15(97 lines)  AV=2.53  SV=3.68  BV=7.00
    {3732,1152,1072, 0, 0, 0},  //TV = 8.07(103 lines)  AV=2.53  SV=3.68  BV=6.91
    {4021,1152,1072, 0, 0, 0},  //TV = 7.96(111 lines)  AV=2.53  SV=3.68  BV=6.80
    {4347,1152,1064, 0, 0, 0},  //TV = 7.85(120 lines)  AV=2.53  SV=3.67  BV=6.70
    {4601,1152,1072, 0, 0, 0},  //TV = 7.76(127 lines)  AV=2.53  SV=3.68  BV=6.61
    {4927,1152,1072, 0, 0, 0},  //TV = 7.67(136 lines)  AV=2.53  SV=3.68  BV=6.51
    {5289,1152,1072, 0, 0, 0},  //TV = 7.56(146 lines)  AV=2.53  SV=3.68  BV=6.41
    {5688,1152,1072, 0, 0, 0},  //TV = 7.46(157 lines)  AV=2.53  SV=3.68  BV=6.30
    {6123,1152,1064, 0, 0, 0},  //TV = 7.35(169 lines)  AV=2.53  SV=3.67  BV=6.21
    {6557,1152,1064, 0, 0, 0},  //TV = 7.25(181 lines)  AV=2.53  SV=3.67  BV=6.11
    {7028,1152,1064, 0, 0, 0},  //TV = 7.15(194 lines)  AV=2.53  SV=3.67  BV=6.01
    {7499,1152,1072, 0, 0, 0},  //TV = 7.06(207 lines)  AV=2.53  SV=3.68  BV=5.91
    {8115,1152,1064, 0, 0, 0},  //TV = 6.95(224 lines)  AV=2.53  SV=3.67  BV=5.80
    {8332,1216,1048, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=3.72  BV=5.71
    {8332,1280,1064, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=3.82  BV=5.61
    {8332,1408,1040, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=3.93  BV=5.51
    {8332,1472,1064, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.02  BV=5.41
    {8332,1600,1048, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.12  BV=5.31
    {8332,1728,1040, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.22  BV=5.21
    {8332,1856,1040, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.32  BV=5.11
    {8332,1984,1040, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.42  BV=5.01
    {8332,2048,1088, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.53  BV=4.90
    {8332,2304,1024, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.61  BV=4.82
    {8332,2432,1048, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.72  BV=4.71
    {8332,2560,1072, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.83  BV=4.60
    {8332,2816,1040, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.93  BV=4.51
    {8332,2944,1064, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=5.02  BV=4.41
    {8332,3200,1048, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=5.12  BV=4.31
    {8332,3456,1040, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=5.22  BV=4.21
    {8332,3712,1040, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=5.32  BV=4.11
    {8332,3968,1040, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=5.42  BV=4.01
    {16664,2048,1088, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=4.53  BV=3.90
    {16664,2304,1032, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=4.62  BV=3.81
    {16664,2432,1040, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=4.71  BV=3.72
    {16664,2560,1072, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=4.83  BV=3.60
    {16664,2816,1040, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=4.93  BV=3.51
    {16664,2944,1064, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=5.02  BV=3.41
    {16664,3200,1048, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=5.12  BV=3.31
    {16664,3456,1040, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=5.22  BV=3.21
    {16664,3712,1040, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=5.32  BV=3.11
    {16664,3968,1040, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=5.42  BV=3.01
    {16664,4096,1080, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=5.52  BV=2.91
    {24996,3072,1032, 0, 0, 0},  //TV = 5.32(690 lines)  AV=2.53  SV=5.04  BV=2.81
    {24996,3200,1056, 0, 0, 0},  //TV = 5.32(690 lines)  AV=2.53  SV=5.13  BV=2.72
    {24996,3456,1048, 0, 0, 0},  //TV = 5.32(690 lines)  AV=2.53  SV=5.23  BV=2.62
    {24996,3712,1048, 0, 0, 0},  //TV = 5.32(690 lines)  AV=2.53  SV=5.34  BV=2.51
    {24996,3968,1048, 0, 0, 0},  //TV = 5.32(690 lines)  AV=2.53  SV=5.43  BV=2.42
    {33327,3200,1048, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=5.12  BV=2.31
    {33327,3456,1040, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=5.22  BV=2.21
    {33327,3712,1040, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=5.32  BV=2.11
    {33327,3968,1040, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=5.42  BV=2.01
    {33327,4096,1080, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=5.52  BV=1.91
    {33327,4608,1032, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=5.62  BV=1.81
    {33327,4864,1048, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=5.72  BV=1.71
    {33327,5120,1064, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=5.82  BV=1.61
    {33327,5632,1032, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=5.91  BV=1.52
    {33327,6144,1024, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=6.03  BV=1.40
    {33327,6144,1096, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=6.13  BV=1.31
    {33327,6144,1176, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=6.23  BV=1.20
    {33327,6144,1256, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=6.32  BV=1.11
    {33327,6144,1344, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=6.42  BV=1.01
    {33327,6144,1440, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=6.52  BV=0.91
    {33327,6144,1544, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=6.62  BV=0.81
    {33327,6144,1656, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=6.72  BV=0.71
    {33327,6144,1776, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=6.82  BV=0.61
    {33327,6144,1904, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=6.92  BV=0.51
    {33327,6144,2040, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=7.02  BV=0.41
    {33327,6144,2200, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=7.13  BV=0.30
    {33327,6144,2352, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=7.23  BV=0.20
    {33327,6144,2520, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=7.33  BV=0.11
    {33327,6144,2720, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=7.44  BV=-0.00
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sPreviewPLineTable_50Hz =
{
{
    {73,1600,1048, 0, 0, 0},  //TV = 13.74(2 lines)  AV=2.53  SV=4.12  BV=12.15
    {73,1664,1040, 0, 0, 0},  //TV = 13.74(2 lines)  AV=2.53  SV=4.17  BV=12.10
    {109,1216,1032, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.70  BV=11.99
    {109,1280,1048, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.80  BV=11.89
    {109,1344,1064, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.89  BV=11.80
    {109,1472,1032, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.98  BV=11.71
    {145,1216,1024, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.69  BV=11.59
    {145,1280,1056, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.81  BV=11.47
    {145,1344,1048, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.87  BV=11.41
    {145,1472,1024, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.97  BV=11.31
    {182,1216,1064, 0, 0, 0},  //TV = 12.42(5 lines)  AV=2.53  SV=3.75  BV=11.20
    {182,1344,1024, 0, 0, 0},  //TV = 12.42(5 lines)  AV=2.53  SV=3.84  BV=11.11
    {218,1152,1072, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.68  BV=11.01
    {218,1280,1032, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.78  BV=10.91
    {218,1344,1056, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.88  BV=10.81
    {254,1216,1072, 0, 0, 0},  //TV = 11.94(7 lines)  AV=2.53  SV=3.76  BV=10.71
    {290,1152,1064, 0, 0, 0},  //TV = 11.75(8 lines)  AV=2.53  SV=3.67  BV=10.61
    {290,1280,1024, 0, 0, 0},  //TV = 11.75(8 lines)  AV=2.53  SV=3.77  BV=10.51
    {327,1216,1024, 0, 0, 0},  //TV = 11.58(9 lines)  AV=2.53  SV=3.69  BV=10.41
    {327,1280,1048, 0, 0, 0},  //TV = 11.58(9 lines)  AV=2.53  SV=3.80  BV=10.31
    {363,1216,1064, 0, 0, 0},  //TV = 11.43(10 lines)  AV=2.53  SV=3.75  BV=10.21
    {399,1216,1032, 0, 0, 0},  //TV = 11.29(11 lines)  AV=2.53  SV=3.70  BV=10.11
    {435,1152,1080, 0, 0, 0},  //TV = 11.17(12 lines)  AV=2.53  SV=3.69  BV=10.00
    {471,1152,1064, 0, 0, 0},  //TV = 11.05(13 lines)  AV=2.53  SV=3.67  BV=9.91
    {471,1280,1024, 0, 0, 0},  //TV = 11.05(13 lines)  AV=2.53  SV=3.77  BV=9.81
    {508,1216,1072, 0, 0, 0},  //TV = 10.94(14 lines)  AV=2.53  SV=3.76  BV=9.71
    {580,1152,1064, 0, 0, 0},  //TV = 10.75(16 lines)  AV=2.53  SV=3.67  BV=9.61
    {616,1152,1072, 0, 0, 0},  //TV = 10.66(17 lines)  AV=2.53  SV=3.68  BV=9.51
    {653,1216,1024, 0, 0, 0},  //TV = 10.58(18 lines)  AV=2.53  SV=3.69  BV=9.42
    {689,1216,1040, 0, 0, 0},  //TV = 10.50(19 lines)  AV=2.53  SV=3.71  BV=9.32
    {761,1152,1072, 0, 0, 0},  //TV = 10.36(21 lines)  AV=2.53  SV=3.68  BV=9.21
    {797,1216,1032, 0, 0, 0},  //TV = 10.29(22 lines)  AV=2.53  SV=3.70  BV=9.12
    {870,1152,1080, 0, 0, 0},  //TV = 10.17(24 lines)  AV=2.53  SV=3.69  BV=9.00
    {942,1152,1064, 0, 0, 0},  //TV = 10.05(26 lines)  AV=2.53  SV=3.67  BV=8.91
    {979,1216,1040, 0, 0, 0},  //TV = 10.00(27 lines)  AV=2.53  SV=3.71  BV=8.81
    {1051,1216,1032, 0, 0, 0},  //TV = 9.89(29 lines)  AV=2.53  SV=3.70  BV=8.72
    {1160,1152,1072, 0, 0, 0},  //TV = 9.75(32 lines)  AV=2.53  SV=3.68  BV=8.60
    {1232,1152,1072, 0, 0, 0},  //TV = 9.66(34 lines)  AV=2.53  SV=3.68  BV=8.51
    {1305,1216,1024, 0, 0, 0},  //TV = 9.58(36 lines)  AV=2.53  SV=3.69  BV=8.42
    {1413,1152,1080, 0, 0, 0},  //TV = 9.47(39 lines)  AV=2.53  SV=3.69  BV=8.30
    {1522,1152,1072, 0, 0, 0},  //TV = 9.36(42 lines)  AV=2.53  SV=3.68  BV=8.21
    {1631,1152,1072, 0, 0, 0},  //TV = 9.26(45 lines)  AV=2.53  SV=3.68  BV=8.11
    {1739,1152,1080, 0, 0, 0},  //TV = 9.17(48 lines)  AV=2.53  SV=3.69  BV=8.00
    {1884,1152,1064, 0, 0, 0},  //TV = 9.05(52 lines)  AV=2.53  SV=3.67  BV=7.91
    {1993,1152,1080, 0, 0, 0},  //TV = 8.97(55 lines)  AV=2.53  SV=3.69  BV=7.81
    {2138,1152,1080, 0, 0, 0},  //TV = 8.87(59 lines)  AV=2.53  SV=3.69  BV=7.71
    {2319,1152,1064, 0, 0, 0},  //TV = 8.75(64 lines)  AV=2.53  SV=3.67  BV=7.61
    {2464,1152,1072, 0, 0, 0},  //TV = 8.66(68 lines)  AV=2.53  SV=3.68  BV=7.51
    {2645,1152,1072, 0, 0, 0},  //TV = 8.56(73 lines)  AV=2.53  SV=3.68  BV=7.41
    {2826,1152,1080, 0, 0, 0},  //TV = 8.47(78 lines)  AV=2.53  SV=3.69  BV=7.30
    {3043,1152,1072, 0, 0, 0},  //TV = 8.36(84 lines)  AV=2.53  SV=3.68  BV=7.21
    {3261,1152,1072, 0, 0, 0},  //TV = 8.26(90 lines)  AV=2.53  SV=3.68  BV=7.11
    {3514,1152,1072, 0, 0, 0},  //TV = 8.15(97 lines)  AV=2.53  SV=3.68  BV=7.00
    {3732,1152,1072, 0, 0, 0},  //TV = 8.07(103 lines)  AV=2.53  SV=3.68  BV=6.91
    {4021,1152,1072, 0, 0, 0},  //TV = 7.96(111 lines)  AV=2.53  SV=3.68  BV=6.80
    {4347,1152,1064, 0, 0, 0},  //TV = 7.85(120 lines)  AV=2.53  SV=3.67  BV=6.70
    {4601,1152,1072, 0, 0, 0},  //TV = 7.76(127 lines)  AV=2.53  SV=3.68  BV=6.61
    {4927,1152,1072, 0, 0, 0},  //TV = 7.67(136 lines)  AV=2.53  SV=3.68  BV=6.51
    {5289,1152,1072, 0, 0, 0},  //TV = 7.56(146 lines)  AV=2.53  SV=3.68  BV=6.41
    {5688,1152,1072, 0, 0, 0},  //TV = 7.46(157 lines)  AV=2.53  SV=3.68  BV=6.30
    {6123,1152,1064, 0, 0, 0},  //TV = 7.35(169 lines)  AV=2.53  SV=3.67  BV=6.21
    {6557,1152,1064, 0, 0, 0},  //TV = 7.25(181 lines)  AV=2.53  SV=3.67  BV=6.11
    {7028,1152,1064, 0, 0, 0},  //TV = 7.15(194 lines)  AV=2.53  SV=3.67  BV=6.01
    {7499,1152,1072, 0, 0, 0},  //TV = 7.06(207 lines)  AV=2.53  SV=3.68  BV=5.91
    {8115,1152,1064, 0, 0, 0},  //TV = 6.95(224 lines)  AV=2.53  SV=3.67  BV=5.80
    {8331,1216,1048, 0, 0, 0},  //TV = 6.91(229 lines)  AV=2.53  SV=3.72  BV=5.71
    {8331,1280,1064, 0, 0, 0},  //TV = 6.91(229 lines)  AV=2.53  SV=3.82  BV=5.61
    {8331,1408,1040, 0, 0, 0},  //TV = 6.91(229 lines)  AV=2.53  SV=3.93  BV=5.51
    {8331,1472,1064, 0, 0, 0},  //TV = 6.91(229 lines)  AV=2.53  SV=4.02  BV=5.41
    {8331,1600,1048, 0, 0, 0},  //TV = 6.91(229 lines)  AV=2.53  SV=4.12  BV=5.31
    {8331,1728,1040, 0, 0, 0},  //TV = 6.91(229 lines)  AV=2.53  SV=4.22  BV=5.21
    {8331,1856,1040, 0, 0, 0},  //TV = 6.91(229 lines)  AV=2.53  SV=4.32  BV=5.11
    {8331,1984,1040, 0, 0, 0},  //TV = 6.91(229 lines)  AV=2.53  SV=4.42  BV=5.01
    {8839,2048,1024, 0, 0, 0},  //TV = 6.82(244 lines)  AV=2.53  SV=4.44  BV=4.90
    {9491,1984,1056, 0, 0, 0},  //TV = 6.72(262 lines)  AV=2.53  SV=4.44  BV=4.80
    {9999,2048,1032, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.45  BV=4.72
    {9999,2176,1048, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.56  BV=4.61
    {9999,2304,1056, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.66  BV=4.51
    {9999,2432,1072, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.76  BV=4.41
    {9999,2688,1040, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.86  BV=4.31
    {9999,2816,1064, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.96  BV=4.21
    {9999,3072,1048, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.06  BV=4.11
    {9999,3328,1032, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.16  BV=4.01
    {9999,3584,1032, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.26  BV=3.91
    {9999,3840,1032, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.36  BV=3.81
    {9999,4096,1032, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.45  BV=3.72
    {9999,4352,1048, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.56  BV=3.61
    {9999,4608,1056, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.66  BV=3.51
    {9999,4864,1072, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.76  BV=3.41
    {9999,5376,1040, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.86  BV=3.31
    {9999,5632,1064, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.96  BV=3.21
    {19997,3072,1048, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=5.06  BV=3.11
    {19997,3328,1032, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=5.16  BV=3.01
    {19997,3584,1032, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=5.26  BV=2.91
    {19997,3840,1032, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=5.36  BV=2.81
    {19997,4096,1032, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=5.45  BV=2.72
    {19997,4352,1040, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=5.55  BV=2.62
    {29995,3072,1056, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.07  BV=2.51
    {29995,3328,1048, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.18  BV=2.41
    {29995,3584,1040, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.27  BV=2.31
    {29995,3840,1040, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.37  BV=2.21
    {29995,4096,1048, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.48  BV=2.11
    {29995,4352,1056, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.58  BV=2.01
    {29995,4608,1072, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.68  BV=1.91
    {29995,5120,1032, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.78  BV=1.81
    {29995,5376,1048, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.87  BV=1.72
    {29995,5888,1024, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.97  BV=1.62
    {29995,6144,1064, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.08  BV=1.50
    {29995,6144,1136, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.18  BV=1.41
    {29995,6144,1216, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.28  BV=1.31
    {29995,6144,1304, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.38  BV=1.21
    {29995,6144,1400, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.48  BV=1.11
    {29995,6144,1496, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.58  BV=1.01
    {29995,6144,1600, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.67  BV=0.91
    {29995,6144,1720, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.78  BV=0.81
    {29995,6144,1840, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.87  BV=0.71
    {29995,6144,1976, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.98  BV=0.61
    {29995,6144,2112, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=7.07  BV=0.51
    {29995,6144,2264, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=7.17  BV=0.41
    {29995,6144,2440, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=7.28  BV=0.30
    {29995,6144,2616, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=7.38  BV=0.20
    {29995,6144,2808, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=7.48  BV=0.10
    {29995,6144,3024, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=7.59  BV=-0.01
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_PreviewAutoTable =
{
    AETABLE_RPEVIEW_AUTO,    //eAETableID
    123,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    122,    //i4MaxBV
    0,    //i4MinBV
    90,    //i4EffectiveMaxBV
    -10,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO SPEED
    sPreviewPLineTable_60Hz,
    sPreviewPLineTable_50Hz,
    NULL,
};

static strEvPline sCapturePLineTable_60Hz =
{
{
    {73,1600,1048, 0, 0, 0},  //TV = 13.74(2 lines)  AV=2.53  SV=4.12  BV=12.15
    {73,1664,1040, 0, 0, 0},  //TV = 13.74(2 lines)  AV=2.53  SV=4.17  BV=12.10
    {109,1216,1032, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.70  BV=11.99
    {109,1280,1048, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.80  BV=11.89
    {109,1344,1064, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.89  BV=11.80
    {109,1472,1032, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.98  BV=11.71
    {145,1216,1024, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.69  BV=11.59
    {145,1280,1056, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.81  BV=11.47
    {145,1344,1048, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.87  BV=11.41
    {145,1472,1024, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.97  BV=11.31
    {182,1216,1064, 0, 0, 0},  //TV = 12.42(5 lines)  AV=2.53  SV=3.75  BV=11.20
    {182,1344,1024, 0, 0, 0},  //TV = 12.42(5 lines)  AV=2.53  SV=3.84  BV=11.11
    {218,1152,1072, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.68  BV=11.01
    {218,1280,1032, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.78  BV=10.91
    {218,1344,1056, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.88  BV=10.81
    {254,1216,1072, 0, 0, 0},  //TV = 11.94(7 lines)  AV=2.53  SV=3.76  BV=10.71
    {290,1152,1064, 0, 0, 0},  //TV = 11.75(8 lines)  AV=2.53  SV=3.67  BV=10.61
    {290,1280,1024, 0, 0, 0},  //TV = 11.75(8 lines)  AV=2.53  SV=3.77  BV=10.51
    {327,1216,1024, 0, 0, 0},  //TV = 11.58(9 lines)  AV=2.53  SV=3.69  BV=10.41
    {327,1280,1048, 0, 0, 0},  //TV = 11.58(9 lines)  AV=2.53  SV=3.80  BV=10.31
    {363,1216,1064, 0, 0, 0},  //TV = 11.43(10 lines)  AV=2.53  SV=3.75  BV=10.21
    {399,1216,1032, 0, 0, 0},  //TV = 11.29(11 lines)  AV=2.53  SV=3.70  BV=10.11
    {435,1152,1080, 0, 0, 0},  //TV = 11.17(12 lines)  AV=2.53  SV=3.69  BV=10.00
    {471,1152,1064, 0, 0, 0},  //TV = 11.05(13 lines)  AV=2.53  SV=3.67  BV=9.91
    {471,1280,1024, 0, 0, 0},  //TV = 11.05(13 lines)  AV=2.53  SV=3.77  BV=9.81
    {508,1216,1072, 0, 0, 0},  //TV = 10.94(14 lines)  AV=2.53  SV=3.76  BV=9.71
    {580,1152,1064, 0, 0, 0},  //TV = 10.75(16 lines)  AV=2.53  SV=3.67  BV=9.61
    {616,1152,1072, 0, 0, 0},  //TV = 10.66(17 lines)  AV=2.53  SV=3.68  BV=9.51
    {653,1216,1024, 0, 0, 0},  //TV = 10.58(18 lines)  AV=2.53  SV=3.69  BV=9.42
    {689,1216,1040, 0, 0, 0},  //TV = 10.50(19 lines)  AV=2.53  SV=3.71  BV=9.32
    {761,1152,1072, 0, 0, 0},  //TV = 10.36(21 lines)  AV=2.53  SV=3.68  BV=9.21
    {797,1216,1032, 0, 0, 0},  //TV = 10.29(22 lines)  AV=2.53  SV=3.70  BV=9.12
    {870,1152,1080, 0, 0, 0},  //TV = 10.17(24 lines)  AV=2.53  SV=3.69  BV=9.00
    {942,1152,1064, 0, 0, 0},  //TV = 10.05(26 lines)  AV=2.53  SV=3.67  BV=8.91
    {979,1216,1040, 0, 0, 0},  //TV = 10.00(27 lines)  AV=2.53  SV=3.71  BV=8.81
    {1051,1216,1032, 0, 0, 0},  //TV = 9.89(29 lines)  AV=2.53  SV=3.70  BV=8.72
    {1160,1152,1072, 0, 0, 0},  //TV = 9.75(32 lines)  AV=2.53  SV=3.68  BV=8.60
    {1232,1152,1072, 0, 0, 0},  //TV = 9.66(34 lines)  AV=2.53  SV=3.68  BV=8.51
    {1305,1216,1024, 0, 0, 0},  //TV = 9.58(36 lines)  AV=2.53  SV=3.69  BV=8.42
    {1413,1152,1080, 0, 0, 0},  //TV = 9.47(39 lines)  AV=2.53  SV=3.69  BV=8.30
    {1522,1152,1072, 0, 0, 0},  //TV = 9.36(42 lines)  AV=2.53  SV=3.68  BV=8.21
    {1631,1152,1072, 0, 0, 0},  //TV = 9.26(45 lines)  AV=2.53  SV=3.68  BV=8.11
    {1739,1152,1080, 0, 0, 0},  //TV = 9.17(48 lines)  AV=2.53  SV=3.69  BV=8.00
    {1884,1152,1064, 0, 0, 0},  //TV = 9.05(52 lines)  AV=2.53  SV=3.67  BV=7.91
    {1993,1152,1080, 0, 0, 0},  //TV = 8.97(55 lines)  AV=2.53  SV=3.69  BV=7.81
    {2138,1152,1080, 0, 0, 0},  //TV = 8.87(59 lines)  AV=2.53  SV=3.69  BV=7.71
    {2319,1152,1064, 0, 0, 0},  //TV = 8.75(64 lines)  AV=2.53  SV=3.67  BV=7.61
    {2464,1152,1072, 0, 0, 0},  //TV = 8.66(68 lines)  AV=2.53  SV=3.68  BV=7.51
    {2645,1152,1072, 0, 0, 0},  //TV = 8.56(73 lines)  AV=2.53  SV=3.68  BV=7.41
    {2826,1152,1080, 0, 0, 0},  //TV = 8.47(78 lines)  AV=2.53  SV=3.69  BV=7.30
    {3043,1152,1072, 0, 0, 0},  //TV = 8.36(84 lines)  AV=2.53  SV=3.68  BV=7.21
    {3261,1152,1072, 0, 0, 0},  //TV = 8.26(90 lines)  AV=2.53  SV=3.68  BV=7.11
    {3514,1152,1072, 0, 0, 0},  //TV = 8.15(97 lines)  AV=2.53  SV=3.68  BV=7.00
    {3732,1152,1072, 0, 0, 0},  //TV = 8.07(103 lines)  AV=2.53  SV=3.68  BV=6.91
    {4021,1152,1072, 0, 0, 0},  //TV = 7.96(111 lines)  AV=2.53  SV=3.68  BV=6.80
    {4347,1152,1064, 0, 0, 0},  //TV = 7.85(120 lines)  AV=2.53  SV=3.67  BV=6.70
    {4601,1152,1072, 0, 0, 0},  //TV = 7.76(127 lines)  AV=2.53  SV=3.68  BV=6.61
    {4927,1152,1072, 0, 0, 0},  //TV = 7.67(136 lines)  AV=2.53  SV=3.68  BV=6.51
    {5289,1152,1072, 0, 0, 0},  //TV = 7.56(146 lines)  AV=2.53  SV=3.68  BV=6.41
    {5688,1152,1072, 0, 0, 0},  //TV = 7.46(157 lines)  AV=2.53  SV=3.68  BV=6.30
    {6123,1152,1064, 0, 0, 0},  //TV = 7.35(169 lines)  AV=2.53  SV=3.67  BV=6.21
    {6557,1152,1064, 0, 0, 0},  //TV = 7.25(181 lines)  AV=2.53  SV=3.67  BV=6.11
    {7028,1152,1064, 0, 0, 0},  //TV = 7.15(194 lines)  AV=2.53  SV=3.67  BV=6.01
    {7499,1152,1072, 0, 0, 0},  //TV = 7.06(207 lines)  AV=2.53  SV=3.68  BV=5.91
    {8115,1152,1064, 0, 0, 0},  //TV = 6.95(224 lines)  AV=2.53  SV=3.67  BV=5.80
    {8332,1216,1048, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=3.72  BV=5.71
    {8332,1280,1064, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=3.82  BV=5.61
    {8332,1408,1040, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=3.93  BV=5.51
    {8332,1472,1064, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.02  BV=5.41
    {8332,1600,1048, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.12  BV=5.31
    {8332,1728,1040, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.22  BV=5.21
    {8332,1856,1040, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.32  BV=5.11
    {8332,1984,1040, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.42  BV=5.01
    {8332,2048,1088, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.53  BV=4.90
    {8332,2304,1024, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.61  BV=4.82
    {8332,2432,1048, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.72  BV=4.71
    {8332,2560,1072, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.83  BV=4.60
    {8332,2816,1040, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.93  BV=4.51
    {8332,2944,1064, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=5.02  BV=4.41
    {8332,3200,1048, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=5.12  BV=4.31
    {8332,3456,1040, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=5.22  BV=4.21
    {8332,3712,1040, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=5.32  BV=4.11
    {8332,3968,1040, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=5.42  BV=4.01
    {16664,2048,1088, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=4.53  BV=3.90
    {16664,2304,1032, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=4.62  BV=3.81
    {16664,2432,1040, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=4.71  BV=3.72
    {16664,2560,1072, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=4.83  BV=3.60
    {16664,2816,1040, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=4.93  BV=3.51
    {16664,2944,1064, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=5.02  BV=3.41
    {16664,3200,1048, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=5.12  BV=3.31
    {16664,3456,1040, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=5.22  BV=3.21
    {16664,3712,1040, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=5.32  BV=3.11
    {16664,3968,1040, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=5.42  BV=3.01
    {16664,4096,1080, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=5.52  BV=2.91
    {24996,3072,1032, 0, 0, 0},  //TV = 5.32(690 lines)  AV=2.53  SV=5.04  BV=2.81
    {24996,3200,1056, 0, 0, 0},  //TV = 5.32(690 lines)  AV=2.53  SV=5.13  BV=2.72
    {24996,3456,1048, 0, 0, 0},  //TV = 5.32(690 lines)  AV=2.53  SV=5.23  BV=2.62
    {24996,3712,1048, 0, 0, 0},  //TV = 5.32(690 lines)  AV=2.53  SV=5.34  BV=2.51
    {24996,3968,1048, 0, 0, 0},  //TV = 5.32(690 lines)  AV=2.53  SV=5.43  BV=2.42
    {33327,3200,1048, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=5.12  BV=2.31
    {33327,3456,1040, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=5.22  BV=2.21
    {33327,3712,1040, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=5.32  BV=2.11
    {33327,3968,1040, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=5.42  BV=2.01
    {33327,4096,1080, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=5.52  BV=1.91
    {33327,4608,1032, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=5.62  BV=1.81
    {33327,4864,1048, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=5.72  BV=1.71
    {33327,5120,1064, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=5.82  BV=1.61
    {33327,5632,1032, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=5.91  BV=1.52
    {33327,6144,1024, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=6.03  BV=1.40
    {33327,6144,1096, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=6.13  BV=1.31
    {33327,6144,1176, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=6.23  BV=1.20
    {33327,6144,1256, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=6.32  BV=1.11
    {33327,6144,1344, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=6.42  BV=1.01
    {33327,6144,1440, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=6.52  BV=0.91
    {33327,6144,1544, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=6.62  BV=0.81
    {33327,6144,1656, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=6.72  BV=0.71
    {33327,6144,1776, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=6.82  BV=0.61
    {33327,6144,1904, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=6.92  BV=0.51
    {33327,6144,2040, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=7.02  BV=0.41
    {33327,6144,2200, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=7.13  BV=0.30
    {33327,6144,2352, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=7.23  BV=0.20
    {33327,6144,2520, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=7.33  BV=0.11
    {33327,6144,2720, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=7.44  BV=-0.00
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sCapturePLineTable_50Hz =
{
{
    {73,1600,1048, 0, 0, 0},  //TV = 13.74(2 lines)  AV=2.53  SV=4.12  BV=12.15
    {73,1664,1040, 0, 0, 0},  //TV = 13.74(2 lines)  AV=2.53  SV=4.17  BV=12.10
    {109,1216,1032, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.70  BV=11.99
    {109,1280,1048, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.80  BV=11.89
    {109,1344,1064, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.89  BV=11.80
    {109,1472,1032, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.98  BV=11.71
    {145,1216,1024, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.69  BV=11.59
    {145,1280,1056, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.81  BV=11.47
    {145,1344,1048, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.87  BV=11.41
    {145,1472,1024, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.97  BV=11.31
    {182,1216,1064, 0, 0, 0},  //TV = 12.42(5 lines)  AV=2.53  SV=3.75  BV=11.20
    {182,1344,1024, 0, 0, 0},  //TV = 12.42(5 lines)  AV=2.53  SV=3.84  BV=11.11
    {218,1152,1072, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.68  BV=11.01
    {218,1280,1032, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.78  BV=10.91
    {218,1344,1056, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.88  BV=10.81
    {254,1216,1072, 0, 0, 0},  //TV = 11.94(7 lines)  AV=2.53  SV=3.76  BV=10.71
    {290,1152,1064, 0, 0, 0},  //TV = 11.75(8 lines)  AV=2.53  SV=3.67  BV=10.61
    {290,1280,1024, 0, 0, 0},  //TV = 11.75(8 lines)  AV=2.53  SV=3.77  BV=10.51
    {327,1216,1024, 0, 0, 0},  //TV = 11.58(9 lines)  AV=2.53  SV=3.69  BV=10.41
    {327,1280,1048, 0, 0, 0},  //TV = 11.58(9 lines)  AV=2.53  SV=3.80  BV=10.31
    {363,1216,1064, 0, 0, 0},  //TV = 11.43(10 lines)  AV=2.53  SV=3.75  BV=10.21
    {399,1216,1032, 0, 0, 0},  //TV = 11.29(11 lines)  AV=2.53  SV=3.70  BV=10.11
    {435,1152,1080, 0, 0, 0},  //TV = 11.17(12 lines)  AV=2.53  SV=3.69  BV=10.00
    {471,1152,1064, 0, 0, 0},  //TV = 11.05(13 lines)  AV=2.53  SV=3.67  BV=9.91
    {471,1280,1024, 0, 0, 0},  //TV = 11.05(13 lines)  AV=2.53  SV=3.77  BV=9.81
    {508,1216,1072, 0, 0, 0},  //TV = 10.94(14 lines)  AV=2.53  SV=3.76  BV=9.71
    {580,1152,1064, 0, 0, 0},  //TV = 10.75(16 lines)  AV=2.53  SV=3.67  BV=9.61
    {616,1152,1072, 0, 0, 0},  //TV = 10.66(17 lines)  AV=2.53  SV=3.68  BV=9.51
    {653,1216,1024, 0, 0, 0},  //TV = 10.58(18 lines)  AV=2.53  SV=3.69  BV=9.42
    {689,1216,1040, 0, 0, 0},  //TV = 10.50(19 lines)  AV=2.53  SV=3.71  BV=9.32
    {761,1152,1072, 0, 0, 0},  //TV = 10.36(21 lines)  AV=2.53  SV=3.68  BV=9.21
    {797,1216,1032, 0, 0, 0},  //TV = 10.29(22 lines)  AV=2.53  SV=3.70  BV=9.12
    {870,1152,1080, 0, 0, 0},  //TV = 10.17(24 lines)  AV=2.53  SV=3.69  BV=9.00
    {942,1152,1064, 0, 0, 0},  //TV = 10.05(26 lines)  AV=2.53  SV=3.67  BV=8.91
    {979,1216,1040, 0, 0, 0},  //TV = 10.00(27 lines)  AV=2.53  SV=3.71  BV=8.81
    {1051,1216,1032, 0, 0, 0},  //TV = 9.89(29 lines)  AV=2.53  SV=3.70  BV=8.72
    {1160,1152,1072, 0, 0, 0},  //TV = 9.75(32 lines)  AV=2.53  SV=3.68  BV=8.60
    {1232,1152,1072, 0, 0, 0},  //TV = 9.66(34 lines)  AV=2.53  SV=3.68  BV=8.51
    {1305,1216,1024, 0, 0, 0},  //TV = 9.58(36 lines)  AV=2.53  SV=3.69  BV=8.42
    {1413,1152,1080, 0, 0, 0},  //TV = 9.47(39 lines)  AV=2.53  SV=3.69  BV=8.30
    {1522,1152,1072, 0, 0, 0},  //TV = 9.36(42 lines)  AV=2.53  SV=3.68  BV=8.21
    {1631,1152,1072, 0, 0, 0},  //TV = 9.26(45 lines)  AV=2.53  SV=3.68  BV=8.11
    {1739,1152,1080, 0, 0, 0},  //TV = 9.17(48 lines)  AV=2.53  SV=3.69  BV=8.00
    {1884,1152,1064, 0, 0, 0},  //TV = 9.05(52 lines)  AV=2.53  SV=3.67  BV=7.91
    {1993,1152,1080, 0, 0, 0},  //TV = 8.97(55 lines)  AV=2.53  SV=3.69  BV=7.81
    {2138,1152,1080, 0, 0, 0},  //TV = 8.87(59 lines)  AV=2.53  SV=3.69  BV=7.71
    {2319,1152,1064, 0, 0, 0},  //TV = 8.75(64 lines)  AV=2.53  SV=3.67  BV=7.61
    {2464,1152,1072, 0, 0, 0},  //TV = 8.66(68 lines)  AV=2.53  SV=3.68  BV=7.51
    {2645,1152,1072, 0, 0, 0},  //TV = 8.56(73 lines)  AV=2.53  SV=3.68  BV=7.41
    {2826,1152,1080, 0, 0, 0},  //TV = 8.47(78 lines)  AV=2.53  SV=3.69  BV=7.30
    {3043,1152,1072, 0, 0, 0},  //TV = 8.36(84 lines)  AV=2.53  SV=3.68  BV=7.21
    {3261,1152,1072, 0, 0, 0},  //TV = 8.26(90 lines)  AV=2.53  SV=3.68  BV=7.11
    {3514,1152,1072, 0, 0, 0},  //TV = 8.15(97 lines)  AV=2.53  SV=3.68  BV=7.00
    {3732,1152,1072, 0, 0, 0},  //TV = 8.07(103 lines)  AV=2.53  SV=3.68  BV=6.91
    {4021,1152,1072, 0, 0, 0},  //TV = 7.96(111 lines)  AV=2.53  SV=3.68  BV=6.80
    {4347,1152,1064, 0, 0, 0},  //TV = 7.85(120 lines)  AV=2.53  SV=3.67  BV=6.70
    {4601,1152,1072, 0, 0, 0},  //TV = 7.76(127 lines)  AV=2.53  SV=3.68  BV=6.61
    {4927,1152,1072, 0, 0, 0},  //TV = 7.67(136 lines)  AV=2.53  SV=3.68  BV=6.51
    {5289,1152,1072, 0, 0, 0},  //TV = 7.56(146 lines)  AV=2.53  SV=3.68  BV=6.41
    {5688,1152,1072, 0, 0, 0},  //TV = 7.46(157 lines)  AV=2.53  SV=3.68  BV=6.30
    {6123,1152,1064, 0, 0, 0},  //TV = 7.35(169 lines)  AV=2.53  SV=3.67  BV=6.21
    {6557,1152,1064, 0, 0, 0},  //TV = 7.25(181 lines)  AV=2.53  SV=3.67  BV=6.11
    {7028,1152,1064, 0, 0, 0},  //TV = 7.15(194 lines)  AV=2.53  SV=3.67  BV=6.01
    {7499,1152,1072, 0, 0, 0},  //TV = 7.06(207 lines)  AV=2.53  SV=3.68  BV=5.91
    {8115,1152,1064, 0, 0, 0},  //TV = 6.95(224 lines)  AV=2.53  SV=3.67  BV=5.80
    {8331,1216,1048, 0, 0, 0},  //TV = 6.91(229 lines)  AV=2.53  SV=3.72  BV=5.71
    {8331,1280,1064, 0, 0, 0},  //TV = 6.91(229 lines)  AV=2.53  SV=3.82  BV=5.61
    {8331,1408,1040, 0, 0, 0},  //TV = 6.91(229 lines)  AV=2.53  SV=3.93  BV=5.51
    {8331,1472,1064, 0, 0, 0},  //TV = 6.91(229 lines)  AV=2.53  SV=4.02  BV=5.41
    {8331,1600,1048, 0, 0, 0},  //TV = 6.91(229 lines)  AV=2.53  SV=4.12  BV=5.31
    {8331,1728,1040, 0, 0, 0},  //TV = 6.91(229 lines)  AV=2.53  SV=4.22  BV=5.21
    {8331,1856,1040, 0, 0, 0},  //TV = 6.91(229 lines)  AV=2.53  SV=4.32  BV=5.11
    {8331,1984,1040, 0, 0, 0},  //TV = 6.91(229 lines)  AV=2.53  SV=4.42  BV=5.01
    {8839,2048,1024, 0, 0, 0},  //TV = 6.82(244 lines)  AV=2.53  SV=4.44  BV=4.90
    {9491,1984,1056, 0, 0, 0},  //TV = 6.72(262 lines)  AV=2.53  SV=4.44  BV=4.80
    {9999,2048,1032, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.45  BV=4.72
    {9999,2176,1048, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.56  BV=4.61
    {9999,2304,1056, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.66  BV=4.51
    {9999,2432,1072, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.76  BV=4.41
    {9999,2688,1040, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.86  BV=4.31
    {9999,2816,1064, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.96  BV=4.21
    {9999,3072,1048, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.06  BV=4.11
    {9999,3328,1032, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.16  BV=4.01
    {9999,3584,1032, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.26  BV=3.91
    {9999,3840,1032, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.36  BV=3.81
    {9999,4096,1032, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.45  BV=3.72
    {9999,4352,1048, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.56  BV=3.61
    {9999,4608,1056, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.66  BV=3.51
    {9999,4864,1072, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.76  BV=3.41
    {9999,5376,1040, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.86  BV=3.31
    {9999,5632,1064, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.96  BV=3.21
    {19997,3072,1048, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=5.06  BV=3.11
    {19997,3328,1032, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=5.16  BV=3.01
    {19997,3584,1032, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=5.26  BV=2.91
    {19997,3840,1032, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=5.36  BV=2.81
    {19997,4096,1032, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=5.45  BV=2.72
    {19997,4352,1040, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=5.55  BV=2.62
    {29995,3072,1056, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.07  BV=2.51
    {29995,3328,1048, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.18  BV=2.41
    {29995,3584,1040, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.27  BV=2.31
    {29995,3840,1040, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.37  BV=2.21
    {29995,4096,1048, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.48  BV=2.11
    {29995,4352,1056, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.58  BV=2.01
    {29995,4608,1072, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.68  BV=1.91
    {29995,5120,1032, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.78  BV=1.81
    {29995,5376,1048, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.87  BV=1.72
    {29995,5888,1024, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.97  BV=1.62
    {29995,6144,1064, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.08  BV=1.50
    {29995,6144,1136, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.18  BV=1.41
    {29995,6144,1216, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.28  BV=1.31
    {29995,6144,1304, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.38  BV=1.21
    {29995,6144,1400, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.48  BV=1.11
    {29995,6144,1496, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.58  BV=1.01
    {29995,6144,1600, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.67  BV=0.91
    {29995,6144,1720, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.78  BV=0.81
    {29995,6144,1840, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.87  BV=0.71
    {29995,6144,1976, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.98  BV=0.61
    {29995,6144,2112, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=7.07  BV=0.51
    {29995,6144,2264, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=7.17  BV=0.41
    {29995,6144,2440, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=7.28  BV=0.30
    {29995,6144,2616, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=7.38  BV=0.20
    {29995,6144,2808, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=7.48  BV=0.10
    {29995,6144,3024, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=7.59  BV=-0.01
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_CaptureAutoTable =
{
    AETABLE_CAPTURE_AUTO,    //eAETableID
    123,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    122,    //i4MaxBV
    0,    //i4MinBV
    90,    //i4EffectiveMaxBV
    -10,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO SPEED
    sCapturePLineTable_60Hz,
    sCapturePLineTable_50Hz,
    NULL,
};

static strEvPline sVideoPLineTable_60Hz =
{
{
    {73,1600,1048, 0, 0, 0},  //TV = 13.74(2 lines)  AV=2.53  SV=4.12  BV=12.15
    {73,1664,1040, 0, 0, 0},  //TV = 13.74(2 lines)  AV=2.53  SV=4.17  BV=12.10
    {109,1216,1032, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.70  BV=11.99
    {109,1280,1048, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.80  BV=11.89
    {109,1344,1064, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.89  BV=11.80
    {109,1472,1032, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.98  BV=11.71
    {145,1216,1024, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.69  BV=11.59
    {145,1280,1056, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.81  BV=11.47
    {145,1344,1048, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.87  BV=11.41
    {145,1472,1024, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.97  BV=11.31
    {182,1216,1064, 0, 0, 0},  //TV = 12.42(5 lines)  AV=2.53  SV=3.75  BV=11.20
    {182,1344,1024, 0, 0, 0},  //TV = 12.42(5 lines)  AV=2.53  SV=3.84  BV=11.11
    {218,1152,1072, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.68  BV=11.01
    {218,1280,1032, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.78  BV=10.91
    {218,1344,1056, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.88  BV=10.81
    {254,1216,1072, 0, 0, 0},  //TV = 11.94(7 lines)  AV=2.53  SV=3.76  BV=10.71
    {290,1152,1064, 0, 0, 0},  //TV = 11.75(8 lines)  AV=2.53  SV=3.67  BV=10.61
    {290,1280,1024, 0, 0, 0},  //TV = 11.75(8 lines)  AV=2.53  SV=3.77  BV=10.51
    {327,1216,1024, 0, 0, 0},  //TV = 11.58(9 lines)  AV=2.53  SV=3.69  BV=10.41
    {327,1280,1048, 0, 0, 0},  //TV = 11.58(9 lines)  AV=2.53  SV=3.80  BV=10.31
    {363,1216,1064, 0, 0, 0},  //TV = 11.43(10 lines)  AV=2.53  SV=3.75  BV=10.21
    {399,1216,1032, 0, 0, 0},  //TV = 11.29(11 lines)  AV=2.53  SV=3.70  BV=10.11
    {435,1152,1080, 0, 0, 0},  //TV = 11.17(12 lines)  AV=2.53  SV=3.69  BV=10.00
    {471,1152,1064, 0, 0, 0},  //TV = 11.05(13 lines)  AV=2.53  SV=3.67  BV=9.91
    {471,1280,1024, 0, 0, 0},  //TV = 11.05(13 lines)  AV=2.53  SV=3.77  BV=9.81
    {508,1216,1072, 0, 0, 0},  //TV = 10.94(14 lines)  AV=2.53  SV=3.76  BV=9.71
    {580,1152,1064, 0, 0, 0},  //TV = 10.75(16 lines)  AV=2.53  SV=3.67  BV=9.61
    {616,1152,1072, 0, 0, 0},  //TV = 10.66(17 lines)  AV=2.53  SV=3.68  BV=9.51
    {653,1216,1024, 0, 0, 0},  //TV = 10.58(18 lines)  AV=2.53  SV=3.69  BV=9.42
    {689,1216,1040, 0, 0, 0},  //TV = 10.50(19 lines)  AV=2.53  SV=3.71  BV=9.32
    {761,1152,1072, 0, 0, 0},  //TV = 10.36(21 lines)  AV=2.53  SV=3.68  BV=9.21
    {797,1216,1032, 0, 0, 0},  //TV = 10.29(22 lines)  AV=2.53  SV=3.70  BV=9.12
    {870,1152,1080, 0, 0, 0},  //TV = 10.17(24 lines)  AV=2.53  SV=3.69  BV=9.00
    {942,1152,1064, 0, 0, 0},  //TV = 10.05(26 lines)  AV=2.53  SV=3.67  BV=8.91
    {979,1216,1040, 0, 0, 0},  //TV = 10.00(27 lines)  AV=2.53  SV=3.71  BV=8.81
    {1051,1216,1032, 0, 0, 0},  //TV = 9.89(29 lines)  AV=2.53  SV=3.70  BV=8.72
    {1160,1152,1072, 0, 0, 0},  //TV = 9.75(32 lines)  AV=2.53  SV=3.68  BV=8.60
    {1232,1152,1072, 0, 0, 0},  //TV = 9.66(34 lines)  AV=2.53  SV=3.68  BV=8.51
    {1305,1216,1024, 0, 0, 0},  //TV = 9.58(36 lines)  AV=2.53  SV=3.69  BV=8.42
    {1413,1152,1080, 0, 0, 0},  //TV = 9.47(39 lines)  AV=2.53  SV=3.69  BV=8.30
    {1522,1152,1072, 0, 0, 0},  //TV = 9.36(42 lines)  AV=2.53  SV=3.68  BV=8.21
    {1631,1152,1072, 0, 0, 0},  //TV = 9.26(45 lines)  AV=2.53  SV=3.68  BV=8.11
    {1739,1152,1080, 0, 0, 0},  //TV = 9.17(48 lines)  AV=2.53  SV=3.69  BV=8.00
    {1884,1152,1064, 0, 0, 0},  //TV = 9.05(52 lines)  AV=2.53  SV=3.67  BV=7.91
    {1993,1152,1080, 0, 0, 0},  //TV = 8.97(55 lines)  AV=2.53  SV=3.69  BV=7.81
    {2138,1152,1080, 0, 0, 0},  //TV = 8.87(59 lines)  AV=2.53  SV=3.69  BV=7.71
    {2319,1152,1064, 0, 0, 0},  //TV = 8.75(64 lines)  AV=2.53  SV=3.67  BV=7.61
    {2464,1152,1072, 0, 0, 0},  //TV = 8.66(68 lines)  AV=2.53  SV=3.68  BV=7.51
    {2645,1152,1072, 0, 0, 0},  //TV = 8.56(73 lines)  AV=2.53  SV=3.68  BV=7.41
    {2826,1152,1080, 0, 0, 0},  //TV = 8.47(78 lines)  AV=2.53  SV=3.69  BV=7.30
    {3043,1152,1072, 0, 0, 0},  //TV = 8.36(84 lines)  AV=2.53  SV=3.68  BV=7.21
    {3261,1152,1072, 0, 0, 0},  //TV = 8.26(90 lines)  AV=2.53  SV=3.68  BV=7.11
    {3514,1152,1072, 0, 0, 0},  //TV = 8.15(97 lines)  AV=2.53  SV=3.68  BV=7.00
    {3732,1152,1072, 0, 0, 0},  //TV = 8.07(103 lines)  AV=2.53  SV=3.68  BV=6.91
    {4021,1152,1072, 0, 0, 0},  //TV = 7.96(111 lines)  AV=2.53  SV=3.68  BV=6.80
    {4347,1152,1064, 0, 0, 0},  //TV = 7.85(120 lines)  AV=2.53  SV=3.67  BV=6.70
    {4601,1152,1072, 0, 0, 0},  //TV = 7.76(127 lines)  AV=2.53  SV=3.68  BV=6.61
    {4927,1152,1072, 0, 0, 0},  //TV = 7.67(136 lines)  AV=2.53  SV=3.68  BV=6.51
    {5289,1152,1072, 0, 0, 0},  //TV = 7.56(146 lines)  AV=2.53  SV=3.68  BV=6.41
    {5688,1152,1072, 0, 0, 0},  //TV = 7.46(157 lines)  AV=2.53  SV=3.68  BV=6.30
    {6123,1152,1064, 0, 0, 0},  //TV = 7.35(169 lines)  AV=2.53  SV=3.67  BV=6.21
    {6557,1152,1064, 0, 0, 0},  //TV = 7.25(181 lines)  AV=2.53  SV=3.67  BV=6.11
    {7028,1152,1064, 0, 0, 0},  //TV = 7.15(194 lines)  AV=2.53  SV=3.67  BV=6.01
    {7499,1152,1072, 0, 0, 0},  //TV = 7.06(207 lines)  AV=2.53  SV=3.68  BV=5.91
    {8115,1152,1064, 0, 0, 0},  //TV = 6.95(224 lines)  AV=2.53  SV=3.67  BV=5.80
    {8332,1216,1048, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=3.72  BV=5.71
    {8332,1280,1064, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=3.82  BV=5.61
    {8332,1408,1040, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=3.93  BV=5.51
    {8332,1472,1064, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.02  BV=5.41
    {8332,1600,1048, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.12  BV=5.31
    {8332,1728,1040, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.22  BV=5.21
    {8332,1856,1040, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.32  BV=5.11
    {8332,1984,1040, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.42  BV=5.01
    {8332,2048,1088, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.53  BV=4.90
    {8332,2304,1024, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.61  BV=4.82
    {8332,2432,1048, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.72  BV=4.71
    {8332,2560,1072, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.83  BV=4.60
    {8332,2816,1040, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.93  BV=4.51
    {8332,2944,1064, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=5.02  BV=4.41
    {8332,3200,1048, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=5.12  BV=4.31
    {8332,3456,1040, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=5.22  BV=4.21
    {8332,3712,1040, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=5.32  BV=4.11
    {8332,3968,1040, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=5.42  BV=4.01
    {16664,2048,1088, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=4.53  BV=3.90
    {16664,2304,1032, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=4.62  BV=3.81
    {16664,2432,1040, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=4.71  BV=3.72
    {16664,2560,1072, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=4.83  BV=3.60
    {16664,2816,1040, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=4.93  BV=3.51
    {16664,2944,1064, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=5.02  BV=3.41
    {16664,3200,1048, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=5.12  BV=3.31
    {16664,3456,1040, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=5.22  BV=3.21
    {16664,3712,1040, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=5.32  BV=3.11
    {16664,3968,1040, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=5.42  BV=3.01
    {16664,4096,1080, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=5.52  BV=2.91
    {24996,3072,1032, 0, 0, 0},  //TV = 5.32(690 lines)  AV=2.53  SV=5.04  BV=2.81
    {24996,3200,1056, 0, 0, 0},  //TV = 5.32(690 lines)  AV=2.53  SV=5.13  BV=2.72
    {24996,3456,1048, 0, 0, 0},  //TV = 5.32(690 lines)  AV=2.53  SV=5.23  BV=2.62
    {24996,3712,1048, 0, 0, 0},  //TV = 5.32(690 lines)  AV=2.53  SV=5.34  BV=2.51
    {24996,3968,1048, 0, 0, 0},  //TV = 5.32(690 lines)  AV=2.53  SV=5.43  BV=2.42
    {33219,3200,1048, 0, 0, 0},  //TV = 4.91(917 lines)  AV=2.53  SV=5.12  BV=2.32
    {33219,3456,1040, 0, 0, 0},  //TV = 4.91(917 lines)  AV=2.53  SV=5.22  BV=2.22
    {33219,3712,1048, 0, 0, 0},  //TV = 4.91(917 lines)  AV=2.53  SV=5.34  BV=2.10
    {33219,3968,1048, 0, 0, 0},  //TV = 4.91(917 lines)  AV=2.53  SV=5.43  BV=2.01
    {33219,4352,1024, 0, 0, 0},  //TV = 4.91(917 lines)  AV=2.53  SV=5.53  BV=1.91
    {33219,4608,1032, 0, 0, 0},  //TV = 4.91(917 lines)  AV=2.53  SV=5.62  BV=1.81
    {33219,4864,1048, 0, 0, 0},  //TV = 4.91(917 lines)  AV=2.53  SV=5.72  BV=1.71
    {33219,5120,1064, 0, 0, 0},  //TV = 4.91(917 lines)  AV=2.53  SV=5.82  BV=1.62
    {33219,5632,1048, 0, 0, 0},  //TV = 4.91(917 lines)  AV=2.53  SV=5.94  BV=1.50
    {33219,6144,1024, 0, 0, 0},  //TV = 4.91(917 lines)  AV=2.53  SV=6.03  BV=1.41
    {33219,6144,1096, 0, 0, 0},  //TV = 4.91(917 lines)  AV=2.53  SV=6.13  BV=1.31
    {33219,6144,1176, 0, 0, 0},  //TV = 4.91(917 lines)  AV=2.53  SV=6.23  BV=1.21
    {33219,6144,1264, 0, 0, 0},  //TV = 4.91(917 lines)  AV=2.53  SV=6.33  BV=1.11
    {33219,6144,1352, 0, 0, 0},  //TV = 4.91(917 lines)  AV=2.53  SV=6.43  BV=1.01
    {33219,6144,1448, 0, 0, 0},  //TV = 4.91(917 lines)  AV=2.53  SV=6.53  BV=0.91
    {33219,6144,1552, 0, 0, 0},  //TV = 4.91(917 lines)  AV=2.53  SV=6.63  BV=0.81
    {33219,6144,1664, 0, 0, 0},  //TV = 4.91(917 lines)  AV=2.53  SV=6.73  BV=0.71
    {33219,6144,1784, 0, 0, 0},  //TV = 4.91(917 lines)  AV=2.53  SV=6.83  BV=0.61
    {33219,6144,1904, 0, 0, 0},  //TV = 4.91(917 lines)  AV=2.53  SV=6.92  BV=0.51
    {33219,6144,2048, 0, 0, 0},  //TV = 4.91(917 lines)  AV=2.53  SV=7.03  BV=0.41
    {33219,6144,2208, 0, 0, 0},  //TV = 4.91(917 lines)  AV=2.53  SV=7.14  BV=0.30
    {33219,6144,2360, 0, 0, 0},  //TV = 4.91(917 lines)  AV=2.53  SV=7.23  BV=0.20
    {33219,6144,2528, 0, 0, 0},  //TV = 4.91(917 lines)  AV=2.53  SV=7.33  BV=0.11
    {33219,6144,2728, 0, 0, 0},  //TV = 4.91(917 lines)  AV=2.53  SV=7.44  BV=-0.00
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sVideoPLineTable_50Hz =
{
{
    {73,1600,1048, 0, 0, 0},  //TV = 13.74(2 lines)  AV=2.53  SV=4.12  BV=12.15
    {73,1664,1040, 0, 0, 0},  //TV = 13.74(2 lines)  AV=2.53  SV=4.17  BV=12.10
    {109,1216,1032, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.70  BV=11.99
    {109,1280,1048, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.80  BV=11.89
    {109,1344,1064, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.89  BV=11.80
    {109,1472,1032, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.98  BV=11.71
    {145,1216,1024, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.69  BV=11.59
    {145,1280,1056, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.81  BV=11.47
    {145,1344,1048, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.87  BV=11.41
    {145,1472,1024, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.97  BV=11.31
    {182,1216,1064, 0, 0, 0},  //TV = 12.42(5 lines)  AV=2.53  SV=3.75  BV=11.20
    {182,1344,1024, 0, 0, 0},  //TV = 12.42(5 lines)  AV=2.53  SV=3.84  BV=11.11
    {218,1152,1072, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.68  BV=11.01
    {218,1280,1032, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.78  BV=10.91
    {218,1344,1056, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.88  BV=10.81
    {254,1216,1072, 0, 0, 0},  //TV = 11.94(7 lines)  AV=2.53  SV=3.76  BV=10.71
    {290,1152,1064, 0, 0, 0},  //TV = 11.75(8 lines)  AV=2.53  SV=3.67  BV=10.61
    {290,1280,1024, 0, 0, 0},  //TV = 11.75(8 lines)  AV=2.53  SV=3.77  BV=10.51
    {327,1216,1024, 0, 0, 0},  //TV = 11.58(9 lines)  AV=2.53  SV=3.69  BV=10.41
    {327,1280,1048, 0, 0, 0},  //TV = 11.58(9 lines)  AV=2.53  SV=3.80  BV=10.31
    {363,1216,1064, 0, 0, 0},  //TV = 11.43(10 lines)  AV=2.53  SV=3.75  BV=10.21
    {399,1216,1032, 0, 0, 0},  //TV = 11.29(11 lines)  AV=2.53  SV=3.70  BV=10.11
    {435,1152,1080, 0, 0, 0},  //TV = 11.17(12 lines)  AV=2.53  SV=3.69  BV=10.00
    {471,1152,1064, 0, 0, 0},  //TV = 11.05(13 lines)  AV=2.53  SV=3.67  BV=9.91
    {471,1280,1024, 0, 0, 0},  //TV = 11.05(13 lines)  AV=2.53  SV=3.77  BV=9.81
    {508,1216,1072, 0, 0, 0},  //TV = 10.94(14 lines)  AV=2.53  SV=3.76  BV=9.71
    {580,1152,1064, 0, 0, 0},  //TV = 10.75(16 lines)  AV=2.53  SV=3.67  BV=9.61
    {616,1152,1072, 0, 0, 0},  //TV = 10.66(17 lines)  AV=2.53  SV=3.68  BV=9.51
    {653,1216,1024, 0, 0, 0},  //TV = 10.58(18 lines)  AV=2.53  SV=3.69  BV=9.42
    {689,1216,1040, 0, 0, 0},  //TV = 10.50(19 lines)  AV=2.53  SV=3.71  BV=9.32
    {761,1152,1072, 0, 0, 0},  //TV = 10.36(21 lines)  AV=2.53  SV=3.68  BV=9.21
    {797,1216,1032, 0, 0, 0},  //TV = 10.29(22 lines)  AV=2.53  SV=3.70  BV=9.12
    {870,1152,1080, 0, 0, 0},  //TV = 10.17(24 lines)  AV=2.53  SV=3.69  BV=9.00
    {942,1152,1064, 0, 0, 0},  //TV = 10.05(26 lines)  AV=2.53  SV=3.67  BV=8.91
    {979,1216,1040, 0, 0, 0},  //TV = 10.00(27 lines)  AV=2.53  SV=3.71  BV=8.81
    {1051,1216,1032, 0, 0, 0},  //TV = 9.89(29 lines)  AV=2.53  SV=3.70  BV=8.72
    {1160,1152,1072, 0, 0, 0},  //TV = 9.75(32 lines)  AV=2.53  SV=3.68  BV=8.60
    {1232,1152,1072, 0, 0, 0},  //TV = 9.66(34 lines)  AV=2.53  SV=3.68  BV=8.51
    {1305,1216,1024, 0, 0, 0},  //TV = 9.58(36 lines)  AV=2.53  SV=3.69  BV=8.42
    {1413,1152,1080, 0, 0, 0},  //TV = 9.47(39 lines)  AV=2.53  SV=3.69  BV=8.30
    {1522,1152,1072, 0, 0, 0},  //TV = 9.36(42 lines)  AV=2.53  SV=3.68  BV=8.21
    {1631,1152,1072, 0, 0, 0},  //TV = 9.26(45 lines)  AV=2.53  SV=3.68  BV=8.11
    {1739,1152,1080, 0, 0, 0},  //TV = 9.17(48 lines)  AV=2.53  SV=3.69  BV=8.00
    {1884,1152,1064, 0, 0, 0},  //TV = 9.05(52 lines)  AV=2.53  SV=3.67  BV=7.91
    {1993,1152,1080, 0, 0, 0},  //TV = 8.97(55 lines)  AV=2.53  SV=3.69  BV=7.81
    {2138,1152,1080, 0, 0, 0},  //TV = 8.87(59 lines)  AV=2.53  SV=3.69  BV=7.71
    {2319,1152,1064, 0, 0, 0},  //TV = 8.75(64 lines)  AV=2.53  SV=3.67  BV=7.61
    {2464,1152,1072, 0, 0, 0},  //TV = 8.66(68 lines)  AV=2.53  SV=3.68  BV=7.51
    {2645,1152,1072, 0, 0, 0},  //TV = 8.56(73 lines)  AV=2.53  SV=3.68  BV=7.41
    {2826,1152,1080, 0, 0, 0},  //TV = 8.47(78 lines)  AV=2.53  SV=3.69  BV=7.30
    {3043,1152,1072, 0, 0, 0},  //TV = 8.36(84 lines)  AV=2.53  SV=3.68  BV=7.21
    {3261,1152,1072, 0, 0, 0},  //TV = 8.26(90 lines)  AV=2.53  SV=3.68  BV=7.11
    {3514,1152,1072, 0, 0, 0},  //TV = 8.15(97 lines)  AV=2.53  SV=3.68  BV=7.00
    {3732,1152,1072, 0, 0, 0},  //TV = 8.07(103 lines)  AV=2.53  SV=3.68  BV=6.91
    {4021,1152,1072, 0, 0, 0},  //TV = 7.96(111 lines)  AV=2.53  SV=3.68  BV=6.80
    {4347,1152,1064, 0, 0, 0},  //TV = 7.85(120 lines)  AV=2.53  SV=3.67  BV=6.70
    {4601,1152,1072, 0, 0, 0},  //TV = 7.76(127 lines)  AV=2.53  SV=3.68  BV=6.61
    {4927,1152,1072, 0, 0, 0},  //TV = 7.67(136 lines)  AV=2.53  SV=3.68  BV=6.51
    {5289,1152,1072, 0, 0, 0},  //TV = 7.56(146 lines)  AV=2.53  SV=3.68  BV=6.41
    {5688,1152,1072, 0, 0, 0},  //TV = 7.46(157 lines)  AV=2.53  SV=3.68  BV=6.30
    {6123,1152,1064, 0, 0, 0},  //TV = 7.35(169 lines)  AV=2.53  SV=3.67  BV=6.21
    {6557,1152,1064, 0, 0, 0},  //TV = 7.25(181 lines)  AV=2.53  SV=3.67  BV=6.11
    {7028,1152,1064, 0, 0, 0},  //TV = 7.15(194 lines)  AV=2.53  SV=3.67  BV=6.01
    {7499,1152,1072, 0, 0, 0},  //TV = 7.06(207 lines)  AV=2.53  SV=3.68  BV=5.91
    {8115,1152,1064, 0, 0, 0},  //TV = 6.95(224 lines)  AV=2.53  SV=3.67  BV=5.80
    {8331,1216,1048, 0, 0, 0},  //TV = 6.91(229 lines)  AV=2.53  SV=3.72  BV=5.71
    {8331,1280,1064, 0, 0, 0},  //TV = 6.91(229 lines)  AV=2.53  SV=3.82  BV=5.61
    {8331,1408,1040, 0, 0, 0},  //TV = 6.91(229 lines)  AV=2.53  SV=3.93  BV=5.51
    {8331,1472,1064, 0, 0, 0},  //TV = 6.91(229 lines)  AV=2.53  SV=4.02  BV=5.41
    {8331,1600,1048, 0, 0, 0},  //TV = 6.91(229 lines)  AV=2.53  SV=4.12  BV=5.31
    {8331,1728,1040, 0, 0, 0},  //TV = 6.91(229 lines)  AV=2.53  SV=4.22  BV=5.21
    {8331,1856,1040, 0, 0, 0},  //TV = 6.91(229 lines)  AV=2.53  SV=4.32  BV=5.11
    {8331,1984,1040, 0, 0, 0},  //TV = 6.91(229 lines)  AV=2.53  SV=4.42  BV=5.01
    {8839,2048,1024, 0, 0, 0},  //TV = 6.82(244 lines)  AV=2.53  SV=4.44  BV=4.90
    {9491,1984,1056, 0, 0, 0},  //TV = 6.72(262 lines)  AV=2.53  SV=4.44  BV=4.80
    {9999,2048,1032, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.45  BV=4.72
    {9999,2176,1048, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.56  BV=4.61
    {9999,2304,1056, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.66  BV=4.51
    {9999,2432,1072, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.76  BV=4.41
    {9999,2688,1040, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.86  BV=4.31
    {9999,2816,1064, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.96  BV=4.21
    {9999,3072,1048, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.06  BV=4.11
    {9999,3328,1032, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.16  BV=4.01
    {9999,3584,1032, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.26  BV=3.91
    {9999,3840,1032, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.36  BV=3.81
    {9999,4096,1032, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.45  BV=3.72
    {9999,4352,1048, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.56  BV=3.61
    {9999,4608,1056, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.66  BV=3.51
    {9999,4864,1072, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.76  BV=3.41
    {9999,5376,1040, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.86  BV=3.31
    {9999,5632,1064, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.96  BV=3.21
    {19997,3072,1048, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=5.06  BV=3.11
    {19997,3328,1032, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=5.16  BV=3.01
    {19997,3584,1032, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=5.26  BV=2.91
    {19997,3840,1032, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=5.36  BV=2.81
    {19997,4096,1032, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=5.45  BV=2.72
    {19997,4352,1040, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=5.55  BV=2.62
    {29995,3072,1056, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.07  BV=2.51
    {29995,3328,1048, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.18  BV=2.41
    {29995,3584,1040, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.27  BV=2.31
    {29995,3840,1040, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.37  BV=2.21
    {29995,4096,1048, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.48  BV=2.11
    {29995,4352,1056, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.58  BV=2.01
    {29995,4608,1072, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.68  BV=1.91
    {29995,5120,1032, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.78  BV=1.81
    {29995,5376,1048, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.87  BV=1.72
    {29995,5888,1024, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.97  BV=1.62
    {29995,6144,1064, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.08  BV=1.50
    {29995,6144,1136, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.18  BV=1.41
    {29995,6144,1216, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.28  BV=1.31
    {29995,6144,1304, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.38  BV=1.21
    {29995,6144,1400, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.48  BV=1.11
    {29995,6144,1496, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.58  BV=1.01
    {29995,6144,1600, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.67  BV=0.91
    {29995,6144,1720, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.78  BV=0.81
    {29995,6144,1840, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.87  BV=0.71
    {29995,6144,1976, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.98  BV=0.61
    {29995,6144,2112, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=7.07  BV=0.51
    {29995,6144,2264, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=7.17  BV=0.41
    {29995,6144,2440, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=7.28  BV=0.30
    {29995,6144,2616, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=7.38  BV=0.20
    {29995,6144,2808, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=7.48  BV=0.10
    {29995,6144,3024, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=7.59  BV=-0.01
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_VideoAutoTable =
{
    AETABLE_VIDEO_AUTO,    //eAETableID
    123,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    122,    //i4MaxBV
    0,    //i4MinBV
    90,    //i4EffectiveMaxBV
    -10,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO SPEED
    sVideoPLineTable_60Hz,
    sVideoPLineTable_50Hz,
    NULL,
};

static strEvPline sVideo1PLineTable_60Hz =
{
{
    {73,1600,1048, 0, 0, 0},  //TV = 13.74(2 lines)  AV=2.53  SV=4.12  BV=12.15
    {73,1664,1040, 0, 0, 0},  //TV = 13.74(2 lines)  AV=2.53  SV=4.17  BV=12.10
    {109,1216,1032, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.70  BV=11.99
    {109,1280,1048, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.80  BV=11.89
    {109,1344,1064, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.89  BV=11.80
    {109,1472,1032, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.98  BV=11.71
    {145,1216,1024, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.69  BV=11.59
    {145,1280,1056, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.81  BV=11.47
    {145,1344,1048, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.87  BV=11.41
    {145,1472,1024, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.97  BV=11.31
    {182,1216,1064, 0, 0, 0},  //TV = 12.42(5 lines)  AV=2.53  SV=3.75  BV=11.20
    {182,1344,1024, 0, 0, 0},  //TV = 12.42(5 lines)  AV=2.53  SV=3.84  BV=11.11
    {218,1152,1072, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.68  BV=11.01
    {218,1280,1032, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.78  BV=10.91
    {218,1344,1056, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.88  BV=10.81
    {254,1216,1072, 0, 0, 0},  //TV = 11.94(7 lines)  AV=2.53  SV=3.76  BV=10.71
    {290,1152,1064, 0, 0, 0},  //TV = 11.75(8 lines)  AV=2.53  SV=3.67  BV=10.61
    {290,1280,1024, 0, 0, 0},  //TV = 11.75(8 lines)  AV=2.53  SV=3.77  BV=10.51
    {327,1216,1024, 0, 0, 0},  //TV = 11.58(9 lines)  AV=2.53  SV=3.69  BV=10.41
    {327,1280,1048, 0, 0, 0},  //TV = 11.58(9 lines)  AV=2.53  SV=3.80  BV=10.31
    {363,1216,1064, 0, 0, 0},  //TV = 11.43(10 lines)  AV=2.53  SV=3.75  BV=10.21
    {399,1216,1032, 0, 0, 0},  //TV = 11.29(11 lines)  AV=2.53  SV=3.70  BV=10.11
    {435,1152,1080, 0, 0, 0},  //TV = 11.17(12 lines)  AV=2.53  SV=3.69  BV=10.00
    {471,1152,1064, 0, 0, 0},  //TV = 11.05(13 lines)  AV=2.53  SV=3.67  BV=9.91
    {471,1280,1024, 0, 0, 0},  //TV = 11.05(13 lines)  AV=2.53  SV=3.77  BV=9.81
    {508,1216,1072, 0, 0, 0},  //TV = 10.94(14 lines)  AV=2.53  SV=3.76  BV=9.71
    {580,1152,1064, 0, 0, 0},  //TV = 10.75(16 lines)  AV=2.53  SV=3.67  BV=9.61
    {616,1152,1072, 0, 0, 0},  //TV = 10.66(17 lines)  AV=2.53  SV=3.68  BV=9.51
    {653,1216,1024, 0, 0, 0},  //TV = 10.58(18 lines)  AV=2.53  SV=3.69  BV=9.42
    {689,1216,1040, 0, 0, 0},  //TV = 10.50(19 lines)  AV=2.53  SV=3.71  BV=9.32
    {761,1152,1072, 0, 0, 0},  //TV = 10.36(21 lines)  AV=2.53  SV=3.68  BV=9.21
    {797,1216,1032, 0, 0, 0},  //TV = 10.29(22 lines)  AV=2.53  SV=3.70  BV=9.12
    {870,1152,1080, 0, 0, 0},  //TV = 10.17(24 lines)  AV=2.53  SV=3.69  BV=9.00
    {942,1152,1064, 0, 0, 0},  //TV = 10.05(26 lines)  AV=2.53  SV=3.67  BV=8.91
    {979,1216,1040, 0, 0, 0},  //TV = 10.00(27 lines)  AV=2.53  SV=3.71  BV=8.81
    {1051,1216,1032, 0, 0, 0},  //TV = 9.89(29 lines)  AV=2.53  SV=3.70  BV=8.72
    {1160,1152,1072, 0, 0, 0},  //TV = 9.75(32 lines)  AV=2.53  SV=3.68  BV=8.60
    {1232,1152,1072, 0, 0, 0},  //TV = 9.66(34 lines)  AV=2.53  SV=3.68  BV=8.51
    {1305,1216,1024, 0, 0, 0},  //TV = 9.58(36 lines)  AV=2.53  SV=3.69  BV=8.42
    {1413,1152,1080, 0, 0, 0},  //TV = 9.47(39 lines)  AV=2.53  SV=3.69  BV=8.30
    {1522,1152,1072, 0, 0, 0},  //TV = 9.36(42 lines)  AV=2.53  SV=3.68  BV=8.21
    {1631,1152,1072, 0, 0, 0},  //TV = 9.26(45 lines)  AV=2.53  SV=3.68  BV=8.11
    {1739,1152,1080, 0, 0, 0},  //TV = 9.17(48 lines)  AV=2.53  SV=3.69  BV=8.00
    {1884,1152,1064, 0, 0, 0},  //TV = 9.05(52 lines)  AV=2.53  SV=3.67  BV=7.91
    {1993,1152,1080, 0, 0, 0},  //TV = 8.97(55 lines)  AV=2.53  SV=3.69  BV=7.81
    {2138,1152,1080, 0, 0, 0},  //TV = 8.87(59 lines)  AV=2.53  SV=3.69  BV=7.71
    {2319,1152,1064, 0, 0, 0},  //TV = 8.75(64 lines)  AV=2.53  SV=3.67  BV=7.61
    {2464,1152,1072, 0, 0, 0},  //TV = 8.66(68 lines)  AV=2.53  SV=3.68  BV=7.51
    {2645,1152,1072, 0, 0, 0},  //TV = 8.56(73 lines)  AV=2.53  SV=3.68  BV=7.41
    {2826,1152,1080, 0, 0, 0},  //TV = 8.47(78 lines)  AV=2.53  SV=3.69  BV=7.30
    {3043,1152,1072, 0, 0, 0},  //TV = 8.36(84 lines)  AV=2.53  SV=3.68  BV=7.21
    {3261,1152,1072, 0, 0, 0},  //TV = 8.26(90 lines)  AV=2.53  SV=3.68  BV=7.11
    {3514,1152,1072, 0, 0, 0},  //TV = 8.15(97 lines)  AV=2.53  SV=3.68  BV=7.00
    {3732,1152,1072, 0, 0, 0},  //TV = 8.07(103 lines)  AV=2.53  SV=3.68  BV=6.91
    {4021,1152,1072, 0, 0, 0},  //TV = 7.96(111 lines)  AV=2.53  SV=3.68  BV=6.80
    {4347,1152,1064, 0, 0, 0},  //TV = 7.85(120 lines)  AV=2.53  SV=3.67  BV=6.70
    {4601,1152,1072, 0, 0, 0},  //TV = 7.76(127 lines)  AV=2.53  SV=3.68  BV=6.61
    {4927,1152,1072, 0, 0, 0},  //TV = 7.67(136 lines)  AV=2.53  SV=3.68  BV=6.51
    {5289,1152,1072, 0, 0, 0},  //TV = 7.56(146 lines)  AV=2.53  SV=3.68  BV=6.41
    {5688,1152,1072, 0, 0, 0},  //TV = 7.46(157 lines)  AV=2.53  SV=3.68  BV=6.30
    {6123,1152,1064, 0, 0, 0},  //TV = 7.35(169 lines)  AV=2.53  SV=3.67  BV=6.21
    {6557,1152,1064, 0, 0, 0},  //TV = 7.25(181 lines)  AV=2.53  SV=3.67  BV=6.11
    {7028,1152,1064, 0, 0, 0},  //TV = 7.15(194 lines)  AV=2.53  SV=3.67  BV=6.01
    {7499,1152,1072, 0, 0, 0},  //TV = 7.06(207 lines)  AV=2.53  SV=3.68  BV=5.91
    {8115,1152,1064, 0, 0, 0},  //TV = 6.95(224 lines)  AV=2.53  SV=3.67  BV=5.80
    {8332,1216,1048, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=3.72  BV=5.71
    {8332,1280,1064, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=3.82  BV=5.61
    {8332,1408,1040, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=3.93  BV=5.51
    {8332,1472,1064, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.02  BV=5.41
    {8332,1600,1048, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.12  BV=5.31
    {8332,1728,1040, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.22  BV=5.21
    {8332,1856,1040, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.32  BV=5.11
    {8332,1984,1040, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.42  BV=5.01
    {8332,2048,1088, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.53  BV=4.90
    {8332,2304,1024, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.61  BV=4.82
    {8332,2432,1048, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.72  BV=4.71
    {8332,2560,1072, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.83  BV=4.60
    {8332,2816,1040, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.93  BV=4.51
    {8332,2944,1064, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=5.02  BV=4.41
    {8332,3200,1048, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=5.12  BV=4.31
    {8332,3456,1040, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=5.22  BV=4.21
    {8332,3712,1040, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=5.32  BV=4.11
    {8332,3968,1040, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=5.42  BV=4.01
    {16664,2048,1088, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=4.53  BV=3.90
    {16664,2304,1032, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=4.62  BV=3.81
    {16664,2432,1040, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=4.71  BV=3.72
    {16664,2560,1072, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=4.83  BV=3.60
    {16664,2816,1040, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=4.93  BV=3.51
    {16664,2944,1064, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=5.02  BV=3.41
    {16664,3200,1048, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=5.12  BV=3.31
    {16664,3456,1040, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=5.22  BV=3.21
    {16664,3712,1040, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=5.32  BV=3.11
    {16664,3968,1040, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=5.42  BV=3.01
    {16664,4096,1080, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=5.52  BV=2.91
    {24996,3072,1032, 0, 0, 0},  //TV = 5.32(690 lines)  AV=2.53  SV=5.04  BV=2.81
    {24996,3200,1056, 0, 0, 0},  //TV = 5.32(690 lines)  AV=2.53  SV=5.13  BV=2.72
    {24996,3456,1048, 0, 0, 0},  //TV = 5.32(690 lines)  AV=2.53  SV=5.23  BV=2.62
    {24996,3712,1048, 0, 0, 0},  //TV = 5.32(690 lines)  AV=2.53  SV=5.34  BV=2.51
    {24996,3968,1048, 0, 0, 0},  //TV = 5.32(690 lines)  AV=2.53  SV=5.43  BV=2.42
    {33219,3200,1048, 0, 0, 0},  //TV = 4.91(917 lines)  AV=2.53  SV=5.12  BV=2.32
    {33219,3456,1040, 0, 0, 0},  //TV = 4.91(917 lines)  AV=2.53  SV=5.22  BV=2.22
    {33219,3712,1048, 0, 0, 0},  //TV = 4.91(917 lines)  AV=2.53  SV=5.34  BV=2.10
    {33219,3968,1048, 0, 0, 0},  //TV = 4.91(917 lines)  AV=2.53  SV=5.43  BV=2.01
    {33219,4352,1024, 0, 0, 0},  //TV = 4.91(917 lines)  AV=2.53  SV=5.53  BV=1.91
    {33219,4608,1032, 0, 0, 0},  //TV = 4.91(917 lines)  AV=2.53  SV=5.62  BV=1.81
    {33219,4864,1048, 0, 0, 0},  //TV = 4.91(917 lines)  AV=2.53  SV=5.72  BV=1.71
    {33219,5120,1064, 0, 0, 0},  //TV = 4.91(917 lines)  AV=2.53  SV=5.82  BV=1.62
    {33219,5632,1048, 0, 0, 0},  //TV = 4.91(917 lines)  AV=2.53  SV=5.94  BV=1.50
    {33219,6144,1024, 0, 0, 0},  //TV = 4.91(917 lines)  AV=2.53  SV=6.03  BV=1.41
    {33219,6144,1096, 0, 0, 0},  //TV = 4.91(917 lines)  AV=2.53  SV=6.13  BV=1.31
    {33219,6144,1176, 0, 0, 0},  //TV = 4.91(917 lines)  AV=2.53  SV=6.23  BV=1.21
    {33219,6144,1264, 0, 0, 0},  //TV = 4.91(917 lines)  AV=2.53  SV=6.33  BV=1.11
    {33219,6144,1352, 0, 0, 0},  //TV = 4.91(917 lines)  AV=2.53  SV=6.43  BV=1.01
    {33219,6144,1448, 0, 0, 0},  //TV = 4.91(917 lines)  AV=2.53  SV=6.53  BV=0.91
    {33219,6144,1552, 0, 0, 0},  //TV = 4.91(917 lines)  AV=2.53  SV=6.63  BV=0.81
    {33219,6144,1664, 0, 0, 0},  //TV = 4.91(917 lines)  AV=2.53  SV=6.73  BV=0.71
    {33219,6144,1784, 0, 0, 0},  //TV = 4.91(917 lines)  AV=2.53  SV=6.83  BV=0.61
    {33219,6144,1904, 0, 0, 0},  //TV = 4.91(917 lines)  AV=2.53  SV=6.92  BV=0.51
    {33219,6144,2048, 0, 0, 0},  //TV = 4.91(917 lines)  AV=2.53  SV=7.03  BV=0.41
    {33219,6144,2208, 0, 0, 0},  //TV = 4.91(917 lines)  AV=2.53  SV=7.14  BV=0.30
    {33219,6144,2360, 0, 0, 0},  //TV = 4.91(917 lines)  AV=2.53  SV=7.23  BV=0.20
    {33219,6144,2528, 0, 0, 0},  //TV = 4.91(917 lines)  AV=2.53  SV=7.33  BV=0.11
    {33219,6144,2728, 0, 0, 0},  //TV = 4.91(917 lines)  AV=2.53  SV=7.44  BV=-0.00
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sVideo1PLineTable_50Hz =
{
{
    {73,1600,1048, 0, 0, 0},  //TV = 13.74(2 lines)  AV=2.53  SV=4.12  BV=12.15
    {73,1664,1040, 0, 0, 0},  //TV = 13.74(2 lines)  AV=2.53  SV=4.17  BV=12.10
    {109,1216,1032, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.70  BV=11.99
    {109,1280,1048, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.80  BV=11.89
    {109,1344,1064, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.89  BV=11.80
    {109,1472,1032, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.98  BV=11.71
    {145,1216,1024, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.69  BV=11.59
    {145,1280,1056, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.81  BV=11.47
    {145,1344,1048, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.87  BV=11.41
    {145,1472,1024, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.97  BV=11.31
    {182,1216,1064, 0, 0, 0},  //TV = 12.42(5 lines)  AV=2.53  SV=3.75  BV=11.20
    {182,1344,1024, 0, 0, 0},  //TV = 12.42(5 lines)  AV=2.53  SV=3.84  BV=11.11
    {218,1152,1072, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.68  BV=11.01
    {218,1280,1032, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.78  BV=10.91
    {218,1344,1056, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.88  BV=10.81
    {254,1216,1072, 0, 0, 0},  //TV = 11.94(7 lines)  AV=2.53  SV=3.76  BV=10.71
    {290,1152,1064, 0, 0, 0},  //TV = 11.75(8 lines)  AV=2.53  SV=3.67  BV=10.61
    {290,1280,1024, 0, 0, 0},  //TV = 11.75(8 lines)  AV=2.53  SV=3.77  BV=10.51
    {327,1216,1024, 0, 0, 0},  //TV = 11.58(9 lines)  AV=2.53  SV=3.69  BV=10.41
    {327,1280,1048, 0, 0, 0},  //TV = 11.58(9 lines)  AV=2.53  SV=3.80  BV=10.31
    {363,1216,1064, 0, 0, 0},  //TV = 11.43(10 lines)  AV=2.53  SV=3.75  BV=10.21
    {399,1216,1032, 0, 0, 0},  //TV = 11.29(11 lines)  AV=2.53  SV=3.70  BV=10.11
    {435,1152,1080, 0, 0, 0},  //TV = 11.17(12 lines)  AV=2.53  SV=3.69  BV=10.00
    {471,1152,1064, 0, 0, 0},  //TV = 11.05(13 lines)  AV=2.53  SV=3.67  BV=9.91
    {471,1280,1024, 0, 0, 0},  //TV = 11.05(13 lines)  AV=2.53  SV=3.77  BV=9.81
    {508,1216,1072, 0, 0, 0},  //TV = 10.94(14 lines)  AV=2.53  SV=3.76  BV=9.71
    {580,1152,1064, 0, 0, 0},  //TV = 10.75(16 lines)  AV=2.53  SV=3.67  BV=9.61
    {616,1152,1072, 0, 0, 0},  //TV = 10.66(17 lines)  AV=2.53  SV=3.68  BV=9.51
    {653,1216,1024, 0, 0, 0},  //TV = 10.58(18 lines)  AV=2.53  SV=3.69  BV=9.42
    {689,1216,1040, 0, 0, 0},  //TV = 10.50(19 lines)  AV=2.53  SV=3.71  BV=9.32
    {761,1152,1072, 0, 0, 0},  //TV = 10.36(21 lines)  AV=2.53  SV=3.68  BV=9.21
    {797,1216,1032, 0, 0, 0},  //TV = 10.29(22 lines)  AV=2.53  SV=3.70  BV=9.12
    {870,1152,1080, 0, 0, 0},  //TV = 10.17(24 lines)  AV=2.53  SV=3.69  BV=9.00
    {942,1152,1064, 0, 0, 0},  //TV = 10.05(26 lines)  AV=2.53  SV=3.67  BV=8.91
    {979,1216,1040, 0, 0, 0},  //TV = 10.00(27 lines)  AV=2.53  SV=3.71  BV=8.81
    {1051,1216,1032, 0, 0, 0},  //TV = 9.89(29 lines)  AV=2.53  SV=3.70  BV=8.72
    {1160,1152,1072, 0, 0, 0},  //TV = 9.75(32 lines)  AV=2.53  SV=3.68  BV=8.60
    {1232,1152,1072, 0, 0, 0},  //TV = 9.66(34 lines)  AV=2.53  SV=3.68  BV=8.51
    {1305,1216,1024, 0, 0, 0},  //TV = 9.58(36 lines)  AV=2.53  SV=3.69  BV=8.42
    {1413,1152,1080, 0, 0, 0},  //TV = 9.47(39 lines)  AV=2.53  SV=3.69  BV=8.30
    {1522,1152,1072, 0, 0, 0},  //TV = 9.36(42 lines)  AV=2.53  SV=3.68  BV=8.21
    {1631,1152,1072, 0, 0, 0},  //TV = 9.26(45 lines)  AV=2.53  SV=3.68  BV=8.11
    {1739,1152,1080, 0, 0, 0},  //TV = 9.17(48 lines)  AV=2.53  SV=3.69  BV=8.00
    {1884,1152,1064, 0, 0, 0},  //TV = 9.05(52 lines)  AV=2.53  SV=3.67  BV=7.91
    {1993,1152,1080, 0, 0, 0},  //TV = 8.97(55 lines)  AV=2.53  SV=3.69  BV=7.81
    {2138,1152,1080, 0, 0, 0},  //TV = 8.87(59 lines)  AV=2.53  SV=3.69  BV=7.71
    {2319,1152,1064, 0, 0, 0},  //TV = 8.75(64 lines)  AV=2.53  SV=3.67  BV=7.61
    {2464,1152,1072, 0, 0, 0},  //TV = 8.66(68 lines)  AV=2.53  SV=3.68  BV=7.51
    {2645,1152,1072, 0, 0, 0},  //TV = 8.56(73 lines)  AV=2.53  SV=3.68  BV=7.41
    {2826,1152,1080, 0, 0, 0},  //TV = 8.47(78 lines)  AV=2.53  SV=3.69  BV=7.30
    {3043,1152,1072, 0, 0, 0},  //TV = 8.36(84 lines)  AV=2.53  SV=3.68  BV=7.21
    {3261,1152,1072, 0, 0, 0},  //TV = 8.26(90 lines)  AV=2.53  SV=3.68  BV=7.11
    {3514,1152,1072, 0, 0, 0},  //TV = 8.15(97 lines)  AV=2.53  SV=3.68  BV=7.00
    {3732,1152,1072, 0, 0, 0},  //TV = 8.07(103 lines)  AV=2.53  SV=3.68  BV=6.91
    {4021,1152,1072, 0, 0, 0},  //TV = 7.96(111 lines)  AV=2.53  SV=3.68  BV=6.80
    {4347,1152,1064, 0, 0, 0},  //TV = 7.85(120 lines)  AV=2.53  SV=3.67  BV=6.70
    {4601,1152,1072, 0, 0, 0},  //TV = 7.76(127 lines)  AV=2.53  SV=3.68  BV=6.61
    {4927,1152,1072, 0, 0, 0},  //TV = 7.67(136 lines)  AV=2.53  SV=3.68  BV=6.51
    {5289,1152,1072, 0, 0, 0},  //TV = 7.56(146 lines)  AV=2.53  SV=3.68  BV=6.41
    {5688,1152,1072, 0, 0, 0},  //TV = 7.46(157 lines)  AV=2.53  SV=3.68  BV=6.30
    {6123,1152,1064, 0, 0, 0},  //TV = 7.35(169 lines)  AV=2.53  SV=3.67  BV=6.21
    {6557,1152,1064, 0, 0, 0},  //TV = 7.25(181 lines)  AV=2.53  SV=3.67  BV=6.11
    {7028,1152,1064, 0, 0, 0},  //TV = 7.15(194 lines)  AV=2.53  SV=3.67  BV=6.01
    {7499,1152,1072, 0, 0, 0},  //TV = 7.06(207 lines)  AV=2.53  SV=3.68  BV=5.91
    {8115,1152,1064, 0, 0, 0},  //TV = 6.95(224 lines)  AV=2.53  SV=3.67  BV=5.80
    {8331,1216,1048, 0, 0, 0},  //TV = 6.91(229 lines)  AV=2.53  SV=3.72  BV=5.71
    {8331,1280,1064, 0, 0, 0},  //TV = 6.91(229 lines)  AV=2.53  SV=3.82  BV=5.61
    {8331,1408,1040, 0, 0, 0},  //TV = 6.91(229 lines)  AV=2.53  SV=3.93  BV=5.51
    {8331,1472,1064, 0, 0, 0},  //TV = 6.91(229 lines)  AV=2.53  SV=4.02  BV=5.41
    {8331,1600,1048, 0, 0, 0},  //TV = 6.91(229 lines)  AV=2.53  SV=4.12  BV=5.31
    {8331,1728,1040, 0, 0, 0},  //TV = 6.91(229 lines)  AV=2.53  SV=4.22  BV=5.21
    {8331,1856,1040, 0, 0, 0},  //TV = 6.91(229 lines)  AV=2.53  SV=4.32  BV=5.11
    {8331,1984,1040, 0, 0, 0},  //TV = 6.91(229 lines)  AV=2.53  SV=4.42  BV=5.01
    {8839,2048,1024, 0, 0, 0},  //TV = 6.82(244 lines)  AV=2.53  SV=4.44  BV=4.90
    {9491,1984,1056, 0, 0, 0},  //TV = 6.72(262 lines)  AV=2.53  SV=4.44  BV=4.80
    {9999,2048,1032, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.45  BV=4.72
    {9999,2176,1048, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.56  BV=4.61
    {9999,2304,1056, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.66  BV=4.51
    {9999,2432,1072, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.76  BV=4.41
    {9999,2688,1040, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.86  BV=4.31
    {9999,2816,1064, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.96  BV=4.21
    {9999,3072,1048, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.06  BV=4.11
    {9999,3328,1032, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.16  BV=4.01
    {9999,3584,1032, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.26  BV=3.91
    {9999,3840,1032, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.36  BV=3.81
    {9999,4096,1032, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.45  BV=3.72
    {9999,4352,1048, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.56  BV=3.61
    {9999,4608,1056, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.66  BV=3.51
    {9999,4864,1072, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.76  BV=3.41
    {9999,5376,1040, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.86  BV=3.31
    {9999,5632,1064, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.96  BV=3.21
    {19997,3072,1048, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=5.06  BV=3.11
    {19997,3328,1032, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=5.16  BV=3.01
    {19997,3584,1032, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=5.26  BV=2.91
    {19997,3840,1032, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=5.36  BV=2.81
    {19997,4096,1032, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=5.45  BV=2.72
    {19997,4352,1040, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=5.55  BV=2.62
    {29995,3072,1056, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.07  BV=2.51
    {29995,3328,1048, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.18  BV=2.41
    {29995,3584,1040, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.27  BV=2.31
    {29995,3840,1040, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.37  BV=2.21
    {29995,4096,1048, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.48  BV=2.11
    {29995,4352,1056, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.58  BV=2.01
    {29995,4608,1072, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.68  BV=1.91
    {29995,5120,1032, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.78  BV=1.81
    {29995,5376,1048, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.87  BV=1.72
    {29995,5888,1024, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.97  BV=1.62
    {29995,6144,1064, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.08  BV=1.50
    {29995,6144,1136, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.18  BV=1.41
    {29995,6144,1216, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.28  BV=1.31
    {29995,6144,1304, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.38  BV=1.21
    {29995,6144,1400, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.48  BV=1.11
    {29995,6144,1496, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.58  BV=1.01
    {29995,6144,1600, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.67  BV=0.91
    {29995,6144,1720, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.78  BV=0.81
    {29995,6144,1840, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.87  BV=0.71
    {29995,6144,1976, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.98  BV=0.61
    {29995,6144,2112, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=7.07  BV=0.51
    {29995,6144,2264, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=7.17  BV=0.41
    {29995,6144,2440, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=7.28  BV=0.30
    {29995,6144,2616, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=7.38  BV=0.20
    {29995,6144,2808, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=7.48  BV=0.10
    {29995,6144,3024, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=7.59  BV=-0.01
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_Video1AutoTable =
{
    AETABLE_VIDEO1_AUTO,    //eAETableID
    123,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    122,    //i4MaxBV
    0,    //i4MinBV
    90,    //i4EffectiveMaxBV
    -10,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO SPEED
    sVideo1PLineTable_60Hz,
    sVideo1PLineTable_50Hz,
    NULL,
};

static strEvPline sVideo2PLineTable_60Hz =
{
{
    {73,1600,1048, 0, 0, 0},  //TV = 13.74(2 lines)  AV=2.53  SV=4.12  BV=12.15
    {73,1664,1040, 0, 0, 0},  //TV = 13.74(2 lines)  AV=2.53  SV=4.17  BV=12.10
    {109,1216,1032, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.70  BV=11.99
    {109,1280,1048, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.80  BV=11.89
    {109,1344,1064, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.89  BV=11.80
    {109,1472,1032, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.98  BV=11.71
    {145,1216,1024, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.69  BV=11.59
    {145,1280,1056, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.81  BV=11.47
    {145,1344,1048, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.87  BV=11.41
    {145,1472,1024, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.97  BV=11.31
    {182,1216,1064, 0, 0, 0},  //TV = 12.42(5 lines)  AV=2.53  SV=3.75  BV=11.20
    {182,1344,1024, 0, 0, 0},  //TV = 12.42(5 lines)  AV=2.53  SV=3.84  BV=11.11
    {218,1152,1072, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.68  BV=11.01
    {218,1280,1032, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.78  BV=10.91
    {218,1344,1056, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.88  BV=10.81
    {254,1216,1072, 0, 0, 0},  //TV = 11.94(7 lines)  AV=2.53  SV=3.76  BV=10.71
    {290,1152,1064, 0, 0, 0},  //TV = 11.75(8 lines)  AV=2.53  SV=3.67  BV=10.61
    {290,1280,1024, 0, 0, 0},  //TV = 11.75(8 lines)  AV=2.53  SV=3.77  BV=10.51
    {327,1216,1024, 0, 0, 0},  //TV = 11.58(9 lines)  AV=2.53  SV=3.69  BV=10.41
    {327,1280,1048, 0, 0, 0},  //TV = 11.58(9 lines)  AV=2.53  SV=3.80  BV=10.31
    {363,1216,1064, 0, 0, 0},  //TV = 11.43(10 lines)  AV=2.53  SV=3.75  BV=10.21
    {399,1216,1032, 0, 0, 0},  //TV = 11.29(11 lines)  AV=2.53  SV=3.70  BV=10.11
    {435,1152,1080, 0, 0, 0},  //TV = 11.17(12 lines)  AV=2.53  SV=3.69  BV=10.00
    {471,1152,1064, 0, 0, 0},  //TV = 11.05(13 lines)  AV=2.53  SV=3.67  BV=9.91
    {471,1280,1024, 0, 0, 0},  //TV = 11.05(13 lines)  AV=2.53  SV=3.77  BV=9.81
    {508,1216,1072, 0, 0, 0},  //TV = 10.94(14 lines)  AV=2.53  SV=3.76  BV=9.71
    {580,1152,1064, 0, 0, 0},  //TV = 10.75(16 lines)  AV=2.53  SV=3.67  BV=9.61
    {616,1152,1072, 0, 0, 0},  //TV = 10.66(17 lines)  AV=2.53  SV=3.68  BV=9.51
    {653,1216,1024, 0, 0, 0},  //TV = 10.58(18 lines)  AV=2.53  SV=3.69  BV=9.42
    {689,1216,1040, 0, 0, 0},  //TV = 10.50(19 lines)  AV=2.53  SV=3.71  BV=9.32
    {761,1152,1072, 0, 0, 0},  //TV = 10.36(21 lines)  AV=2.53  SV=3.68  BV=9.21
    {797,1216,1032, 0, 0, 0},  //TV = 10.29(22 lines)  AV=2.53  SV=3.70  BV=9.12
    {870,1152,1080, 0, 0, 0},  //TV = 10.17(24 lines)  AV=2.53  SV=3.69  BV=9.00
    {942,1152,1064, 0, 0, 0},  //TV = 10.05(26 lines)  AV=2.53  SV=3.67  BV=8.91
    {979,1216,1040, 0, 0, 0},  //TV = 10.00(27 lines)  AV=2.53  SV=3.71  BV=8.81
    {1051,1216,1032, 0, 0, 0},  //TV = 9.89(29 lines)  AV=2.53  SV=3.70  BV=8.72
    {1160,1152,1072, 0, 0, 0},  //TV = 9.75(32 lines)  AV=2.53  SV=3.68  BV=8.60
    {1232,1152,1072, 0, 0, 0},  //TV = 9.66(34 lines)  AV=2.53  SV=3.68  BV=8.51
    {1305,1216,1024, 0, 0, 0},  //TV = 9.58(36 lines)  AV=2.53  SV=3.69  BV=8.42
    {1413,1152,1080, 0, 0, 0},  //TV = 9.47(39 lines)  AV=2.53  SV=3.69  BV=8.30
    {1522,1152,1072, 0, 0, 0},  //TV = 9.36(42 lines)  AV=2.53  SV=3.68  BV=8.21
    {1631,1152,1072, 0, 0, 0},  //TV = 9.26(45 lines)  AV=2.53  SV=3.68  BV=8.11
    {1739,1152,1080, 0, 0, 0},  //TV = 9.17(48 lines)  AV=2.53  SV=3.69  BV=8.00
    {1884,1152,1064, 0, 0, 0},  //TV = 9.05(52 lines)  AV=2.53  SV=3.67  BV=7.91
    {1993,1152,1080, 0, 0, 0},  //TV = 8.97(55 lines)  AV=2.53  SV=3.69  BV=7.81
    {2138,1152,1080, 0, 0, 0},  //TV = 8.87(59 lines)  AV=2.53  SV=3.69  BV=7.71
    {2319,1152,1064, 0, 0, 0},  //TV = 8.75(64 lines)  AV=2.53  SV=3.67  BV=7.61
    {2464,1152,1072, 0, 0, 0},  //TV = 8.66(68 lines)  AV=2.53  SV=3.68  BV=7.51
    {2645,1152,1072, 0, 0, 0},  //TV = 8.56(73 lines)  AV=2.53  SV=3.68  BV=7.41
    {2826,1152,1080, 0, 0, 0},  //TV = 8.47(78 lines)  AV=2.53  SV=3.69  BV=7.30
    {3043,1152,1072, 0, 0, 0},  //TV = 8.36(84 lines)  AV=2.53  SV=3.68  BV=7.21
    {3261,1152,1072, 0, 0, 0},  //TV = 8.26(90 lines)  AV=2.53  SV=3.68  BV=7.11
    {3514,1152,1072, 0, 0, 0},  //TV = 8.15(97 lines)  AV=2.53  SV=3.68  BV=7.00
    {3732,1152,1072, 0, 0, 0},  //TV = 8.07(103 lines)  AV=2.53  SV=3.68  BV=6.91
    {4021,1152,1072, 0, 0, 0},  //TV = 7.96(111 lines)  AV=2.53  SV=3.68  BV=6.80
    {4347,1152,1064, 0, 0, 0},  //TV = 7.85(120 lines)  AV=2.53  SV=3.67  BV=6.70
    {4601,1152,1072, 0, 0, 0},  //TV = 7.76(127 lines)  AV=2.53  SV=3.68  BV=6.61
    {4927,1152,1072, 0, 0, 0},  //TV = 7.67(136 lines)  AV=2.53  SV=3.68  BV=6.51
    {5289,1152,1072, 0, 0, 0},  //TV = 7.56(146 lines)  AV=2.53  SV=3.68  BV=6.41
    {5688,1152,1072, 0, 0, 0},  //TV = 7.46(157 lines)  AV=2.53  SV=3.68  BV=6.30
    {6123,1152,1064, 0, 0, 0},  //TV = 7.35(169 lines)  AV=2.53  SV=3.67  BV=6.21
    {6557,1152,1064, 0, 0, 0},  //TV = 7.25(181 lines)  AV=2.53  SV=3.67  BV=6.11
    {7028,1152,1064, 0, 0, 0},  //TV = 7.15(194 lines)  AV=2.53  SV=3.67  BV=6.01
    {7499,1152,1072, 0, 0, 0},  //TV = 7.06(207 lines)  AV=2.53  SV=3.68  BV=5.91
    {8115,1152,1064, 0, 0, 0},  //TV = 6.95(224 lines)  AV=2.53  SV=3.67  BV=5.80
    {8332,1216,1048, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=3.72  BV=5.71
    {8332,1280,1064, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=3.82  BV=5.61
    {8332,1408,1040, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=3.93  BV=5.51
    {8332,1472,1064, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.02  BV=5.41
    {8332,1600,1048, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.12  BV=5.31
    {8332,1728,1040, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.22  BV=5.21
    {8332,1856,1040, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.32  BV=5.11
    {8332,1984,1040, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.42  BV=5.01
    {8332,2048,1088, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.53  BV=4.90
    {8332,2304,1024, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.61  BV=4.82
    {8332,2432,1048, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.72  BV=4.71
    {8332,2560,1072, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.83  BV=4.60
    {8332,2816,1040, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.93  BV=4.51
    {8332,2944,1064, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=5.02  BV=4.41
    {8332,3200,1048, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=5.12  BV=4.31
    {8332,3456,1040, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=5.22  BV=4.21
    {8332,3712,1040, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=5.32  BV=4.11
    {8332,3968,1040, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=5.42  BV=4.01
    {16664,2048,1088, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=4.53  BV=3.90
    {16664,2304,1032, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=4.62  BV=3.81
    {16664,2432,1040, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=4.71  BV=3.72
    {16664,2560,1072, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=4.83  BV=3.60
    {16664,2816,1040, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=4.93  BV=3.51
    {16664,2944,1064, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=5.02  BV=3.41
    {16664,3200,1048, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=5.12  BV=3.31
    {16664,3456,1040, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=5.22  BV=3.21
    {16664,3712,1040, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=5.32  BV=3.11
    {16664,3968,1040, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=5.42  BV=3.01
    {16664,4096,1080, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=5.52  BV=2.91
    {24996,3072,1032, 0, 0, 0},  //TV = 5.32(690 lines)  AV=2.53  SV=5.04  BV=2.81
    {24996,3200,1056, 0, 0, 0},  //TV = 5.32(690 lines)  AV=2.53  SV=5.13  BV=2.72
    {24996,3456,1048, 0, 0, 0},  //TV = 5.32(690 lines)  AV=2.53  SV=5.23  BV=2.62
    {24996,3712,1048, 0, 0, 0},  //TV = 5.32(690 lines)  AV=2.53  SV=5.34  BV=2.51
    {24996,3968,1048, 0, 0, 0},  //TV = 5.32(690 lines)  AV=2.53  SV=5.43  BV=2.42
    {33219,3200,1048, 0, 0, 0},  //TV = 4.91(917 lines)  AV=2.53  SV=5.12  BV=2.32
    {33219,3456,1040, 0, 0, 0},  //TV = 4.91(917 lines)  AV=2.53  SV=5.22  BV=2.22
    {33219,3712,1048, 0, 0, 0},  //TV = 4.91(917 lines)  AV=2.53  SV=5.34  BV=2.10
    {33219,3968,1048, 0, 0, 0},  //TV = 4.91(917 lines)  AV=2.53  SV=5.43  BV=2.01
    {33219,4352,1024, 0, 0, 0},  //TV = 4.91(917 lines)  AV=2.53  SV=5.53  BV=1.91
    {33219,4608,1032, 0, 0, 0},  //TV = 4.91(917 lines)  AV=2.53  SV=5.62  BV=1.81
    {33219,4864,1048, 0, 0, 0},  //TV = 4.91(917 lines)  AV=2.53  SV=5.72  BV=1.71
    {33219,5120,1064, 0, 0, 0},  //TV = 4.91(917 lines)  AV=2.53  SV=5.82  BV=1.62
    {33219,5632,1048, 0, 0, 0},  //TV = 4.91(917 lines)  AV=2.53  SV=5.94  BV=1.50
    {33219,6144,1024, 0, 0, 0},  //TV = 4.91(917 lines)  AV=2.53  SV=6.03  BV=1.41
    {33219,6144,1096, 0, 0, 0},  //TV = 4.91(917 lines)  AV=2.53  SV=6.13  BV=1.31
    {33219,6144,1176, 0, 0, 0},  //TV = 4.91(917 lines)  AV=2.53  SV=6.23  BV=1.21
    {33219,6144,1264, 0, 0, 0},  //TV = 4.91(917 lines)  AV=2.53  SV=6.33  BV=1.11
    {33219,6144,1352, 0, 0, 0},  //TV = 4.91(917 lines)  AV=2.53  SV=6.43  BV=1.01
    {33219,6144,1448, 0, 0, 0},  //TV = 4.91(917 lines)  AV=2.53  SV=6.53  BV=0.91
    {33219,6144,1552, 0, 0, 0},  //TV = 4.91(917 lines)  AV=2.53  SV=6.63  BV=0.81
    {33219,6144,1664, 0, 0, 0},  //TV = 4.91(917 lines)  AV=2.53  SV=6.73  BV=0.71
    {33219,6144,1784, 0, 0, 0},  //TV = 4.91(917 lines)  AV=2.53  SV=6.83  BV=0.61
    {33219,6144,1904, 0, 0, 0},  //TV = 4.91(917 lines)  AV=2.53  SV=6.92  BV=0.51
    {33219,6144,2048, 0, 0, 0},  //TV = 4.91(917 lines)  AV=2.53  SV=7.03  BV=0.41
    {33219,6144,2208, 0, 0, 0},  //TV = 4.91(917 lines)  AV=2.53  SV=7.14  BV=0.30
    {33219,6144,2360, 0, 0, 0},  //TV = 4.91(917 lines)  AV=2.53  SV=7.23  BV=0.20
    {33219,6144,2528, 0, 0, 0},  //TV = 4.91(917 lines)  AV=2.53  SV=7.33  BV=0.11
    {33219,6144,2728, 0, 0, 0},  //TV = 4.91(917 lines)  AV=2.53  SV=7.44  BV=-0.00
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sVideo2PLineTable_50Hz =
{
{
    {73,1600,1048, 0, 0, 0},  //TV = 13.74(2 lines)  AV=2.53  SV=4.12  BV=12.15
    {73,1664,1040, 0, 0, 0},  //TV = 13.74(2 lines)  AV=2.53  SV=4.17  BV=12.10
    {109,1216,1032, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.70  BV=11.99
    {109,1280,1048, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.80  BV=11.89
    {109,1344,1064, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.89  BV=11.80
    {109,1472,1032, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.98  BV=11.71
    {145,1216,1024, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.69  BV=11.59
    {145,1280,1056, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.81  BV=11.47
    {145,1344,1048, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.87  BV=11.41
    {145,1472,1024, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.97  BV=11.31
    {182,1216,1064, 0, 0, 0},  //TV = 12.42(5 lines)  AV=2.53  SV=3.75  BV=11.20
    {182,1344,1024, 0, 0, 0},  //TV = 12.42(5 lines)  AV=2.53  SV=3.84  BV=11.11
    {218,1152,1072, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.68  BV=11.01
    {218,1280,1032, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.78  BV=10.91
    {218,1344,1056, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.88  BV=10.81
    {254,1216,1072, 0, 0, 0},  //TV = 11.94(7 lines)  AV=2.53  SV=3.76  BV=10.71
    {290,1152,1064, 0, 0, 0},  //TV = 11.75(8 lines)  AV=2.53  SV=3.67  BV=10.61
    {290,1280,1024, 0, 0, 0},  //TV = 11.75(8 lines)  AV=2.53  SV=3.77  BV=10.51
    {327,1216,1024, 0, 0, 0},  //TV = 11.58(9 lines)  AV=2.53  SV=3.69  BV=10.41
    {327,1280,1048, 0, 0, 0},  //TV = 11.58(9 lines)  AV=2.53  SV=3.80  BV=10.31
    {363,1216,1064, 0, 0, 0},  //TV = 11.43(10 lines)  AV=2.53  SV=3.75  BV=10.21
    {399,1216,1032, 0, 0, 0},  //TV = 11.29(11 lines)  AV=2.53  SV=3.70  BV=10.11
    {435,1152,1080, 0, 0, 0},  //TV = 11.17(12 lines)  AV=2.53  SV=3.69  BV=10.00
    {471,1152,1064, 0, 0, 0},  //TV = 11.05(13 lines)  AV=2.53  SV=3.67  BV=9.91
    {471,1280,1024, 0, 0, 0},  //TV = 11.05(13 lines)  AV=2.53  SV=3.77  BV=9.81
    {508,1216,1072, 0, 0, 0},  //TV = 10.94(14 lines)  AV=2.53  SV=3.76  BV=9.71
    {580,1152,1064, 0, 0, 0},  //TV = 10.75(16 lines)  AV=2.53  SV=3.67  BV=9.61
    {616,1152,1072, 0, 0, 0},  //TV = 10.66(17 lines)  AV=2.53  SV=3.68  BV=9.51
    {653,1216,1024, 0, 0, 0},  //TV = 10.58(18 lines)  AV=2.53  SV=3.69  BV=9.42
    {689,1216,1040, 0, 0, 0},  //TV = 10.50(19 lines)  AV=2.53  SV=3.71  BV=9.32
    {761,1152,1072, 0, 0, 0},  //TV = 10.36(21 lines)  AV=2.53  SV=3.68  BV=9.21
    {797,1216,1032, 0, 0, 0},  //TV = 10.29(22 lines)  AV=2.53  SV=3.70  BV=9.12
    {870,1152,1080, 0, 0, 0},  //TV = 10.17(24 lines)  AV=2.53  SV=3.69  BV=9.00
    {942,1152,1064, 0, 0, 0},  //TV = 10.05(26 lines)  AV=2.53  SV=3.67  BV=8.91
    {979,1216,1040, 0, 0, 0},  //TV = 10.00(27 lines)  AV=2.53  SV=3.71  BV=8.81
    {1051,1216,1032, 0, 0, 0},  //TV = 9.89(29 lines)  AV=2.53  SV=3.70  BV=8.72
    {1160,1152,1072, 0, 0, 0},  //TV = 9.75(32 lines)  AV=2.53  SV=3.68  BV=8.60
    {1232,1152,1072, 0, 0, 0},  //TV = 9.66(34 lines)  AV=2.53  SV=3.68  BV=8.51
    {1305,1216,1024, 0, 0, 0},  //TV = 9.58(36 lines)  AV=2.53  SV=3.69  BV=8.42
    {1413,1152,1080, 0, 0, 0},  //TV = 9.47(39 lines)  AV=2.53  SV=3.69  BV=8.30
    {1522,1152,1072, 0, 0, 0},  //TV = 9.36(42 lines)  AV=2.53  SV=3.68  BV=8.21
    {1631,1152,1072, 0, 0, 0},  //TV = 9.26(45 lines)  AV=2.53  SV=3.68  BV=8.11
    {1739,1152,1080, 0, 0, 0},  //TV = 9.17(48 lines)  AV=2.53  SV=3.69  BV=8.00
    {1884,1152,1064, 0, 0, 0},  //TV = 9.05(52 lines)  AV=2.53  SV=3.67  BV=7.91
    {1993,1152,1080, 0, 0, 0},  //TV = 8.97(55 lines)  AV=2.53  SV=3.69  BV=7.81
    {2138,1152,1080, 0, 0, 0},  //TV = 8.87(59 lines)  AV=2.53  SV=3.69  BV=7.71
    {2319,1152,1064, 0, 0, 0},  //TV = 8.75(64 lines)  AV=2.53  SV=3.67  BV=7.61
    {2464,1152,1072, 0, 0, 0},  //TV = 8.66(68 lines)  AV=2.53  SV=3.68  BV=7.51
    {2645,1152,1072, 0, 0, 0},  //TV = 8.56(73 lines)  AV=2.53  SV=3.68  BV=7.41
    {2826,1152,1080, 0, 0, 0},  //TV = 8.47(78 lines)  AV=2.53  SV=3.69  BV=7.30
    {3043,1152,1072, 0, 0, 0},  //TV = 8.36(84 lines)  AV=2.53  SV=3.68  BV=7.21
    {3261,1152,1072, 0, 0, 0},  //TV = 8.26(90 lines)  AV=2.53  SV=3.68  BV=7.11
    {3514,1152,1072, 0, 0, 0},  //TV = 8.15(97 lines)  AV=2.53  SV=3.68  BV=7.00
    {3732,1152,1072, 0, 0, 0},  //TV = 8.07(103 lines)  AV=2.53  SV=3.68  BV=6.91
    {4021,1152,1072, 0, 0, 0},  //TV = 7.96(111 lines)  AV=2.53  SV=3.68  BV=6.80
    {4347,1152,1064, 0, 0, 0},  //TV = 7.85(120 lines)  AV=2.53  SV=3.67  BV=6.70
    {4601,1152,1072, 0, 0, 0},  //TV = 7.76(127 lines)  AV=2.53  SV=3.68  BV=6.61
    {4927,1152,1072, 0, 0, 0},  //TV = 7.67(136 lines)  AV=2.53  SV=3.68  BV=6.51
    {5289,1152,1072, 0, 0, 0},  //TV = 7.56(146 lines)  AV=2.53  SV=3.68  BV=6.41
    {5688,1152,1072, 0, 0, 0},  //TV = 7.46(157 lines)  AV=2.53  SV=3.68  BV=6.30
    {6123,1152,1064, 0, 0, 0},  //TV = 7.35(169 lines)  AV=2.53  SV=3.67  BV=6.21
    {6557,1152,1064, 0, 0, 0},  //TV = 7.25(181 lines)  AV=2.53  SV=3.67  BV=6.11
    {7028,1152,1064, 0, 0, 0},  //TV = 7.15(194 lines)  AV=2.53  SV=3.67  BV=6.01
    {7499,1152,1072, 0, 0, 0},  //TV = 7.06(207 lines)  AV=2.53  SV=3.68  BV=5.91
    {8115,1152,1064, 0, 0, 0},  //TV = 6.95(224 lines)  AV=2.53  SV=3.67  BV=5.80
    {8331,1216,1048, 0, 0, 0},  //TV = 6.91(229 lines)  AV=2.53  SV=3.72  BV=5.71
    {8331,1280,1064, 0, 0, 0},  //TV = 6.91(229 lines)  AV=2.53  SV=3.82  BV=5.61
    {8331,1408,1040, 0, 0, 0},  //TV = 6.91(229 lines)  AV=2.53  SV=3.93  BV=5.51
    {8331,1472,1064, 0, 0, 0},  //TV = 6.91(229 lines)  AV=2.53  SV=4.02  BV=5.41
    {8331,1600,1048, 0, 0, 0},  //TV = 6.91(229 lines)  AV=2.53  SV=4.12  BV=5.31
    {8331,1728,1040, 0, 0, 0},  //TV = 6.91(229 lines)  AV=2.53  SV=4.22  BV=5.21
    {8331,1856,1040, 0, 0, 0},  //TV = 6.91(229 lines)  AV=2.53  SV=4.32  BV=5.11
    {8331,1984,1040, 0, 0, 0},  //TV = 6.91(229 lines)  AV=2.53  SV=4.42  BV=5.01
    {8839,2048,1024, 0, 0, 0},  //TV = 6.82(244 lines)  AV=2.53  SV=4.44  BV=4.90
    {9491,1984,1056, 0, 0, 0},  //TV = 6.72(262 lines)  AV=2.53  SV=4.44  BV=4.80
    {9999,2048,1032, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.45  BV=4.72
    {9999,2176,1048, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.56  BV=4.61
    {9999,2304,1056, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.66  BV=4.51
    {9999,2432,1072, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.76  BV=4.41
    {9999,2688,1040, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.86  BV=4.31
    {9999,2816,1064, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.96  BV=4.21
    {9999,3072,1048, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.06  BV=4.11
    {9999,3328,1032, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.16  BV=4.01
    {9999,3584,1032, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.26  BV=3.91
    {9999,3840,1032, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.36  BV=3.81
    {9999,4096,1032, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.45  BV=3.72
    {9999,4352,1048, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.56  BV=3.61
    {9999,4608,1056, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.66  BV=3.51
    {9999,4864,1072, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.76  BV=3.41
    {9999,5376,1040, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.86  BV=3.31
    {9999,5632,1064, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.96  BV=3.21
    {19997,3072,1048, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=5.06  BV=3.11
    {19997,3328,1032, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=5.16  BV=3.01
    {19997,3584,1032, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=5.26  BV=2.91
    {19997,3840,1032, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=5.36  BV=2.81
    {19997,4096,1032, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=5.45  BV=2.72
    {19997,4352,1040, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=5.55  BV=2.62
    {29995,3072,1056, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.07  BV=2.51
    {29995,3328,1048, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.18  BV=2.41
    {29995,3584,1040, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.27  BV=2.31
    {29995,3840,1040, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.37  BV=2.21
    {29995,4096,1048, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.48  BV=2.11
    {29995,4352,1056, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.58  BV=2.01
    {29995,4608,1072, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.68  BV=1.91
    {29995,5120,1032, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.78  BV=1.81
    {29995,5376,1048, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.87  BV=1.72
    {29995,5888,1024, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.97  BV=1.62
    {29995,6144,1064, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.08  BV=1.50
    {29995,6144,1136, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.18  BV=1.41
    {29995,6144,1216, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.28  BV=1.31
    {29995,6144,1304, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.38  BV=1.21
    {29995,6144,1400, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.48  BV=1.11
    {29995,6144,1496, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.58  BV=1.01
    {29995,6144,1600, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.67  BV=0.91
    {29995,6144,1720, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.78  BV=0.81
    {29995,6144,1840, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.87  BV=0.71
    {29995,6144,1976, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.98  BV=0.61
    {29995,6144,2112, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=7.07  BV=0.51
    {29995,6144,2264, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=7.17  BV=0.41
    {29995,6144,2440, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=7.28  BV=0.30
    {29995,6144,2616, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=7.38  BV=0.20
    {29995,6144,2808, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=7.48  BV=0.10
    {29995,6144,3024, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=7.59  BV=-0.01
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_Video2AutoTable =
{
    AETABLE_VIDEO2_AUTO,    //eAETableID
    123,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    122,    //i4MaxBV
    0,    //i4MinBV
    90,    //i4EffectiveMaxBV
    -10,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO SPEED
    sVideo2PLineTable_60Hz,
    sVideo2PLineTable_50Hz,
    NULL,
};

static strEvPline sCustom1PLineTable_60Hz =
{
{
    {73,1600,1048, 0, 0, 0},  //TV = 13.74(2 lines)  AV=2.53  SV=4.12  BV=12.15
    {73,1664,1040, 0, 0, 0},  //TV = 13.74(2 lines)  AV=2.53  SV=4.17  BV=12.10
    {109,1216,1032, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.70  BV=11.99
    {109,1280,1048, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.80  BV=11.89
    {109,1344,1064, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.89  BV=11.80
    {109,1472,1032, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.98  BV=11.71
    {145,1216,1024, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.69  BV=11.59
    {145,1280,1056, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.81  BV=11.47
    {145,1344,1048, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.87  BV=11.41
    {145,1472,1024, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.97  BV=11.31
    {182,1216,1064, 0, 0, 0},  //TV = 12.42(5 lines)  AV=2.53  SV=3.75  BV=11.20
    {182,1344,1024, 0, 0, 0},  //TV = 12.42(5 lines)  AV=2.53  SV=3.84  BV=11.11
    {218,1152,1072, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.68  BV=11.01
    {218,1280,1032, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.78  BV=10.91
    {218,1344,1056, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.88  BV=10.81
    {254,1216,1072, 0, 0, 0},  //TV = 11.94(7 lines)  AV=2.53  SV=3.76  BV=10.71
    {290,1152,1064, 0, 0, 0},  //TV = 11.75(8 lines)  AV=2.53  SV=3.67  BV=10.61
    {290,1280,1024, 0, 0, 0},  //TV = 11.75(8 lines)  AV=2.53  SV=3.77  BV=10.51
    {327,1216,1024, 0, 0, 0},  //TV = 11.58(9 lines)  AV=2.53  SV=3.69  BV=10.41
    {327,1280,1048, 0, 0, 0},  //TV = 11.58(9 lines)  AV=2.53  SV=3.80  BV=10.31
    {363,1216,1064, 0, 0, 0},  //TV = 11.43(10 lines)  AV=2.53  SV=3.75  BV=10.21
    {399,1216,1032, 0, 0, 0},  //TV = 11.29(11 lines)  AV=2.53  SV=3.70  BV=10.11
    {435,1152,1080, 0, 0, 0},  //TV = 11.17(12 lines)  AV=2.53  SV=3.69  BV=10.00
    {471,1152,1064, 0, 0, 0},  //TV = 11.05(13 lines)  AV=2.53  SV=3.67  BV=9.91
    {471,1280,1024, 0, 0, 0},  //TV = 11.05(13 lines)  AV=2.53  SV=3.77  BV=9.81
    {508,1216,1072, 0, 0, 0},  //TV = 10.94(14 lines)  AV=2.53  SV=3.76  BV=9.71
    {580,1152,1064, 0, 0, 0},  //TV = 10.75(16 lines)  AV=2.53  SV=3.67  BV=9.61
    {616,1152,1072, 0, 0, 0},  //TV = 10.66(17 lines)  AV=2.53  SV=3.68  BV=9.51
    {653,1216,1024, 0, 0, 0},  //TV = 10.58(18 lines)  AV=2.53  SV=3.69  BV=9.42
    {689,1216,1040, 0, 0, 0},  //TV = 10.50(19 lines)  AV=2.53  SV=3.71  BV=9.32
    {761,1152,1072, 0, 0, 0},  //TV = 10.36(21 lines)  AV=2.53  SV=3.68  BV=9.21
    {797,1216,1032, 0, 0, 0},  //TV = 10.29(22 lines)  AV=2.53  SV=3.70  BV=9.12
    {870,1152,1080, 0, 0, 0},  //TV = 10.17(24 lines)  AV=2.53  SV=3.69  BV=9.00
    {942,1152,1064, 0, 0, 0},  //TV = 10.05(26 lines)  AV=2.53  SV=3.67  BV=8.91
    {979,1216,1040, 0, 0, 0},  //TV = 10.00(27 lines)  AV=2.53  SV=3.71  BV=8.81
    {1051,1216,1032, 0, 0, 0},  //TV = 9.89(29 lines)  AV=2.53  SV=3.70  BV=8.72
    {1160,1152,1072, 0, 0, 0},  //TV = 9.75(32 lines)  AV=2.53  SV=3.68  BV=8.60
    {1232,1152,1072, 0, 0, 0},  //TV = 9.66(34 lines)  AV=2.53  SV=3.68  BV=8.51
    {1305,1216,1024, 0, 0, 0},  //TV = 9.58(36 lines)  AV=2.53  SV=3.69  BV=8.42
    {1413,1152,1080, 0, 0, 0},  //TV = 9.47(39 lines)  AV=2.53  SV=3.69  BV=8.30
    {1522,1152,1072, 0, 0, 0},  //TV = 9.36(42 lines)  AV=2.53  SV=3.68  BV=8.21
    {1631,1152,1072, 0, 0, 0},  //TV = 9.26(45 lines)  AV=2.53  SV=3.68  BV=8.11
    {1739,1152,1080, 0, 0, 0},  //TV = 9.17(48 lines)  AV=2.53  SV=3.69  BV=8.00
    {1884,1152,1064, 0, 0, 0},  //TV = 9.05(52 lines)  AV=2.53  SV=3.67  BV=7.91
    {1993,1152,1080, 0, 0, 0},  //TV = 8.97(55 lines)  AV=2.53  SV=3.69  BV=7.81
    {2138,1152,1080, 0, 0, 0},  //TV = 8.87(59 lines)  AV=2.53  SV=3.69  BV=7.71
    {2319,1152,1064, 0, 0, 0},  //TV = 8.75(64 lines)  AV=2.53  SV=3.67  BV=7.61
    {2464,1152,1072, 0, 0, 0},  //TV = 8.66(68 lines)  AV=2.53  SV=3.68  BV=7.51
    {2645,1152,1072, 0, 0, 0},  //TV = 8.56(73 lines)  AV=2.53  SV=3.68  BV=7.41
    {2826,1152,1080, 0, 0, 0},  //TV = 8.47(78 lines)  AV=2.53  SV=3.69  BV=7.30
    {3043,1152,1072, 0, 0, 0},  //TV = 8.36(84 lines)  AV=2.53  SV=3.68  BV=7.21
    {3261,1152,1072, 0, 0, 0},  //TV = 8.26(90 lines)  AV=2.53  SV=3.68  BV=7.11
    {3514,1152,1072, 0, 0, 0},  //TV = 8.15(97 lines)  AV=2.53  SV=3.68  BV=7.00
    {3732,1152,1072, 0, 0, 0},  //TV = 8.07(103 lines)  AV=2.53  SV=3.68  BV=6.91
    {4021,1152,1072, 0, 0, 0},  //TV = 7.96(111 lines)  AV=2.53  SV=3.68  BV=6.80
    {4347,1152,1064, 0, 0, 0},  //TV = 7.85(120 lines)  AV=2.53  SV=3.67  BV=6.70
    {4601,1152,1072, 0, 0, 0},  //TV = 7.76(127 lines)  AV=2.53  SV=3.68  BV=6.61
    {4927,1152,1072, 0, 0, 0},  //TV = 7.67(136 lines)  AV=2.53  SV=3.68  BV=6.51
    {5289,1152,1072, 0, 0, 0},  //TV = 7.56(146 lines)  AV=2.53  SV=3.68  BV=6.41
    {5688,1152,1072, 0, 0, 0},  //TV = 7.46(157 lines)  AV=2.53  SV=3.68  BV=6.30
    {6123,1152,1064, 0, 0, 0},  //TV = 7.35(169 lines)  AV=2.53  SV=3.67  BV=6.21
    {6557,1152,1064, 0, 0, 0},  //TV = 7.25(181 lines)  AV=2.53  SV=3.67  BV=6.11
    {7028,1152,1064, 0, 0, 0},  //TV = 7.15(194 lines)  AV=2.53  SV=3.67  BV=6.01
    {7499,1152,1072, 0, 0, 0},  //TV = 7.06(207 lines)  AV=2.53  SV=3.68  BV=5.91
    {8115,1152,1064, 0, 0, 0},  //TV = 6.95(224 lines)  AV=2.53  SV=3.67  BV=5.80
    {8332,1216,1048, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=3.72  BV=5.71
    {8332,1280,1064, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=3.82  BV=5.61
    {8332,1408,1040, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=3.93  BV=5.51
    {8332,1472,1064, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.02  BV=5.41
    {8332,1600,1048, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.12  BV=5.31
    {8332,1728,1040, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.22  BV=5.21
    {8332,1856,1040, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.32  BV=5.11
    {8332,1984,1040, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.42  BV=5.01
    {8332,2048,1088, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.53  BV=4.90
    {8332,2304,1024, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.61  BV=4.82
    {8332,2432,1048, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.72  BV=4.71
    {8332,2560,1072, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.83  BV=4.60
    {8332,2816,1040, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.93  BV=4.51
    {8332,2944,1064, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=5.02  BV=4.41
    {8332,3200,1048, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=5.12  BV=4.31
    {8332,3456,1040, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=5.22  BV=4.21
    {8332,3712,1040, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=5.32  BV=4.11
    {8332,3968,1040, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=5.42  BV=4.01
    {16664,2048,1088, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=4.53  BV=3.90
    {16664,2304,1032, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=4.62  BV=3.81
    {16664,2432,1040, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=4.71  BV=3.72
    {16664,2560,1072, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=4.83  BV=3.60
    {16664,2816,1040, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=4.93  BV=3.51
    {16664,2944,1064, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=5.02  BV=3.41
    {16664,3200,1048, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=5.12  BV=3.31
    {16664,3456,1040, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=5.22  BV=3.21
    {16664,3712,1040, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=5.32  BV=3.11
    {16664,3968,1040, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=5.42  BV=3.01
    {16664,4096,1080, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=5.52  BV=2.91
    {24996,3072,1032, 0, 0, 0},  //TV = 5.32(690 lines)  AV=2.53  SV=5.04  BV=2.81
    {24996,3200,1056, 0, 0, 0},  //TV = 5.32(690 lines)  AV=2.53  SV=5.13  BV=2.72
    {24996,3456,1048, 0, 0, 0},  //TV = 5.32(690 lines)  AV=2.53  SV=5.23  BV=2.62
    {24996,3712,1048, 0, 0, 0},  //TV = 5.32(690 lines)  AV=2.53  SV=5.34  BV=2.51
    {24996,3968,1048, 0, 0, 0},  //TV = 5.32(690 lines)  AV=2.53  SV=5.43  BV=2.42
    {33327,3200,1048, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=5.12  BV=2.31
    {33327,3456,1040, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=5.22  BV=2.21
    {33327,3712,1040, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=5.32  BV=2.11
    {33327,3968,1040, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=5.42  BV=2.01
    {33327,4096,1080, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=5.52  BV=1.91
    {33327,4608,1032, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=5.62  BV=1.81
    {33327,4864,1048, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=5.72  BV=1.71
    {33327,5120,1064, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=5.82  BV=1.61
    {33327,5632,1032, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=5.91  BV=1.52
    {33327,6144,1024, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=6.03  BV=1.40
    {33327,6144,1096, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=6.13  BV=1.31
    {33327,6144,1176, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=6.23  BV=1.20
    {33327,6144,1256, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=6.32  BV=1.11
    {33327,6144,1344, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=6.42  BV=1.01
    {33327,6144,1440, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=6.52  BV=0.91
    {33327,6144,1544, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=6.62  BV=0.81
    {33327,6144,1656, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=6.72  BV=0.71
    {33327,6144,1776, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=6.82  BV=0.61
    {33327,6144,1904, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=6.92  BV=0.51
    {33327,6144,2040, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=7.02  BV=0.41
    {33327,6144,2200, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=7.13  BV=0.30
    {33327,6144,2352, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=7.23  BV=0.20
    {33327,6144,2520, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=7.33  BV=0.11
    {33327,6144,2720, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=7.44  BV=-0.00
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sCustom1PLineTable_50Hz =
{
{
    {73,1600,1048, 0, 0, 0},  //TV = 13.74(2 lines)  AV=2.53  SV=4.12  BV=12.15
    {73,1664,1040, 0, 0, 0},  //TV = 13.74(2 lines)  AV=2.53  SV=4.17  BV=12.10
    {109,1216,1032, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.70  BV=11.99
    {109,1280,1048, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.80  BV=11.89
    {109,1344,1064, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.89  BV=11.80
    {109,1472,1032, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.98  BV=11.71
    {145,1216,1024, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.69  BV=11.59
    {145,1280,1056, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.81  BV=11.47
    {145,1344,1048, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.87  BV=11.41
    {145,1472,1024, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.97  BV=11.31
    {182,1216,1064, 0, 0, 0},  //TV = 12.42(5 lines)  AV=2.53  SV=3.75  BV=11.20
    {182,1344,1024, 0, 0, 0},  //TV = 12.42(5 lines)  AV=2.53  SV=3.84  BV=11.11
    {218,1152,1072, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.68  BV=11.01
    {218,1280,1032, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.78  BV=10.91
    {218,1344,1056, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.88  BV=10.81
    {254,1216,1072, 0, 0, 0},  //TV = 11.94(7 lines)  AV=2.53  SV=3.76  BV=10.71
    {290,1152,1064, 0, 0, 0},  //TV = 11.75(8 lines)  AV=2.53  SV=3.67  BV=10.61
    {290,1280,1024, 0, 0, 0},  //TV = 11.75(8 lines)  AV=2.53  SV=3.77  BV=10.51
    {327,1216,1024, 0, 0, 0},  //TV = 11.58(9 lines)  AV=2.53  SV=3.69  BV=10.41
    {327,1280,1048, 0, 0, 0},  //TV = 11.58(9 lines)  AV=2.53  SV=3.80  BV=10.31
    {363,1216,1064, 0, 0, 0},  //TV = 11.43(10 lines)  AV=2.53  SV=3.75  BV=10.21
    {399,1216,1032, 0, 0, 0},  //TV = 11.29(11 lines)  AV=2.53  SV=3.70  BV=10.11
    {435,1152,1080, 0, 0, 0},  //TV = 11.17(12 lines)  AV=2.53  SV=3.69  BV=10.00
    {471,1152,1064, 0, 0, 0},  //TV = 11.05(13 lines)  AV=2.53  SV=3.67  BV=9.91
    {471,1280,1024, 0, 0, 0},  //TV = 11.05(13 lines)  AV=2.53  SV=3.77  BV=9.81
    {508,1216,1072, 0, 0, 0},  //TV = 10.94(14 lines)  AV=2.53  SV=3.76  BV=9.71
    {580,1152,1064, 0, 0, 0},  //TV = 10.75(16 lines)  AV=2.53  SV=3.67  BV=9.61
    {616,1152,1072, 0, 0, 0},  //TV = 10.66(17 lines)  AV=2.53  SV=3.68  BV=9.51
    {653,1216,1024, 0, 0, 0},  //TV = 10.58(18 lines)  AV=2.53  SV=3.69  BV=9.42
    {689,1216,1040, 0, 0, 0},  //TV = 10.50(19 lines)  AV=2.53  SV=3.71  BV=9.32
    {761,1152,1072, 0, 0, 0},  //TV = 10.36(21 lines)  AV=2.53  SV=3.68  BV=9.21
    {797,1216,1032, 0, 0, 0},  //TV = 10.29(22 lines)  AV=2.53  SV=3.70  BV=9.12
    {870,1152,1080, 0, 0, 0},  //TV = 10.17(24 lines)  AV=2.53  SV=3.69  BV=9.00
    {942,1152,1064, 0, 0, 0},  //TV = 10.05(26 lines)  AV=2.53  SV=3.67  BV=8.91
    {979,1216,1040, 0, 0, 0},  //TV = 10.00(27 lines)  AV=2.53  SV=3.71  BV=8.81
    {1051,1216,1032, 0, 0, 0},  //TV = 9.89(29 lines)  AV=2.53  SV=3.70  BV=8.72
    {1160,1152,1072, 0, 0, 0},  //TV = 9.75(32 lines)  AV=2.53  SV=3.68  BV=8.60
    {1232,1152,1072, 0, 0, 0},  //TV = 9.66(34 lines)  AV=2.53  SV=3.68  BV=8.51
    {1305,1216,1024, 0, 0, 0},  //TV = 9.58(36 lines)  AV=2.53  SV=3.69  BV=8.42
    {1413,1152,1080, 0, 0, 0},  //TV = 9.47(39 lines)  AV=2.53  SV=3.69  BV=8.30
    {1522,1152,1072, 0, 0, 0},  //TV = 9.36(42 lines)  AV=2.53  SV=3.68  BV=8.21
    {1631,1152,1072, 0, 0, 0},  //TV = 9.26(45 lines)  AV=2.53  SV=3.68  BV=8.11
    {1739,1152,1080, 0, 0, 0},  //TV = 9.17(48 lines)  AV=2.53  SV=3.69  BV=8.00
    {1884,1152,1064, 0, 0, 0},  //TV = 9.05(52 lines)  AV=2.53  SV=3.67  BV=7.91
    {1993,1152,1080, 0, 0, 0},  //TV = 8.97(55 lines)  AV=2.53  SV=3.69  BV=7.81
    {2138,1152,1080, 0, 0, 0},  //TV = 8.87(59 lines)  AV=2.53  SV=3.69  BV=7.71
    {2319,1152,1064, 0, 0, 0},  //TV = 8.75(64 lines)  AV=2.53  SV=3.67  BV=7.61
    {2464,1152,1072, 0, 0, 0},  //TV = 8.66(68 lines)  AV=2.53  SV=3.68  BV=7.51
    {2645,1152,1072, 0, 0, 0},  //TV = 8.56(73 lines)  AV=2.53  SV=3.68  BV=7.41
    {2826,1152,1080, 0, 0, 0},  //TV = 8.47(78 lines)  AV=2.53  SV=3.69  BV=7.30
    {3043,1152,1072, 0, 0, 0},  //TV = 8.36(84 lines)  AV=2.53  SV=3.68  BV=7.21
    {3261,1152,1072, 0, 0, 0},  //TV = 8.26(90 lines)  AV=2.53  SV=3.68  BV=7.11
    {3514,1152,1072, 0, 0, 0},  //TV = 8.15(97 lines)  AV=2.53  SV=3.68  BV=7.00
    {3732,1152,1072, 0, 0, 0},  //TV = 8.07(103 lines)  AV=2.53  SV=3.68  BV=6.91
    {4021,1152,1072, 0, 0, 0},  //TV = 7.96(111 lines)  AV=2.53  SV=3.68  BV=6.80
    {4347,1152,1064, 0, 0, 0},  //TV = 7.85(120 lines)  AV=2.53  SV=3.67  BV=6.70
    {4601,1152,1072, 0, 0, 0},  //TV = 7.76(127 lines)  AV=2.53  SV=3.68  BV=6.61
    {4927,1152,1072, 0, 0, 0},  //TV = 7.67(136 lines)  AV=2.53  SV=3.68  BV=6.51
    {5289,1152,1072, 0, 0, 0},  //TV = 7.56(146 lines)  AV=2.53  SV=3.68  BV=6.41
    {5688,1152,1072, 0, 0, 0},  //TV = 7.46(157 lines)  AV=2.53  SV=3.68  BV=6.30
    {6123,1152,1064, 0, 0, 0},  //TV = 7.35(169 lines)  AV=2.53  SV=3.67  BV=6.21
    {6557,1152,1064, 0, 0, 0},  //TV = 7.25(181 lines)  AV=2.53  SV=3.67  BV=6.11
    {7028,1152,1064, 0, 0, 0},  //TV = 7.15(194 lines)  AV=2.53  SV=3.67  BV=6.01
    {7499,1152,1072, 0, 0, 0},  //TV = 7.06(207 lines)  AV=2.53  SV=3.68  BV=5.91
    {8115,1152,1064, 0, 0, 0},  //TV = 6.95(224 lines)  AV=2.53  SV=3.67  BV=5.80
    {8331,1216,1048, 0, 0, 0},  //TV = 6.91(229 lines)  AV=2.53  SV=3.72  BV=5.71
    {8331,1280,1064, 0, 0, 0},  //TV = 6.91(229 lines)  AV=2.53  SV=3.82  BV=5.61
    {8331,1408,1040, 0, 0, 0},  //TV = 6.91(229 lines)  AV=2.53  SV=3.93  BV=5.51
    {8331,1472,1064, 0, 0, 0},  //TV = 6.91(229 lines)  AV=2.53  SV=4.02  BV=5.41
    {8331,1600,1048, 0, 0, 0},  //TV = 6.91(229 lines)  AV=2.53  SV=4.12  BV=5.31
    {8331,1728,1040, 0, 0, 0},  //TV = 6.91(229 lines)  AV=2.53  SV=4.22  BV=5.21
    {8331,1856,1040, 0, 0, 0},  //TV = 6.91(229 lines)  AV=2.53  SV=4.32  BV=5.11
    {8331,1984,1040, 0, 0, 0},  //TV = 6.91(229 lines)  AV=2.53  SV=4.42  BV=5.01
    {8839,2048,1024, 0, 0, 0},  //TV = 6.82(244 lines)  AV=2.53  SV=4.44  BV=4.90
    {9491,1984,1056, 0, 0, 0},  //TV = 6.72(262 lines)  AV=2.53  SV=4.44  BV=4.80
    {9999,2048,1032, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.45  BV=4.72
    {9999,2176,1048, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.56  BV=4.61
    {9999,2304,1056, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.66  BV=4.51
    {9999,2432,1072, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.76  BV=4.41
    {9999,2688,1040, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.86  BV=4.31
    {9999,2816,1064, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.96  BV=4.21
    {9999,3072,1048, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.06  BV=4.11
    {9999,3328,1032, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.16  BV=4.01
    {9999,3584,1032, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.26  BV=3.91
    {9999,3840,1032, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.36  BV=3.81
    {9999,4096,1032, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.45  BV=3.72
    {9999,4352,1048, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.56  BV=3.61
    {9999,4608,1056, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.66  BV=3.51
    {9999,4864,1072, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.76  BV=3.41
    {9999,5376,1040, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.86  BV=3.31
    {9999,5632,1064, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.96  BV=3.21
    {19997,3072,1048, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=5.06  BV=3.11
    {19997,3328,1032, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=5.16  BV=3.01
    {19997,3584,1032, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=5.26  BV=2.91
    {19997,3840,1032, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=5.36  BV=2.81
    {19997,4096,1032, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=5.45  BV=2.72
    {19997,4352,1040, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=5.55  BV=2.62
    {29995,3072,1056, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.07  BV=2.51
    {29995,3328,1048, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.18  BV=2.41
    {29995,3584,1040, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.27  BV=2.31
    {29995,3840,1040, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.37  BV=2.21
    {29995,4096,1048, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.48  BV=2.11
    {29995,4352,1056, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.58  BV=2.01
    {29995,4608,1072, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.68  BV=1.91
    {29995,5120,1032, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.78  BV=1.81
    {29995,5376,1048, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.87  BV=1.72
    {29995,5888,1024, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.97  BV=1.62
    {29995,6144,1064, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.08  BV=1.50
    {29995,6144,1136, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.18  BV=1.41
    {29995,6144,1216, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.28  BV=1.31
    {29995,6144,1304, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.38  BV=1.21
    {29995,6144,1400, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.48  BV=1.11
    {29995,6144,1496, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.58  BV=1.01
    {29995,6144,1600, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.67  BV=0.91
    {29995,6144,1720, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.78  BV=0.81
    {29995,6144,1840, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.87  BV=0.71
    {29995,6144,1976, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.98  BV=0.61
    {29995,6144,2112, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=7.07  BV=0.51
    {29995,6144,2264, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=7.17  BV=0.41
    {29995,6144,2440, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=7.28  BV=0.30
    {29995,6144,2616, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=7.38  BV=0.20
    {29995,6144,2808, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=7.48  BV=0.10
    {29995,6144,3024, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=7.59  BV=-0.01
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_Custom1AutoTable =
{
    AETABLE_CUSTOM1_AUTO,    //eAETableID
    123,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    122,    //i4MaxBV
    0,    //i4MinBV
    90,    //i4EffectiveMaxBV
    -10,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO SPEED
    sCustom1PLineTable_60Hz,
    sCustom1PLineTable_50Hz,
    NULL,
};

static strEvPline sCustom2PLineTable_60Hz =
{
{
    {73,1600,1048, 0, 0, 0},  //TV = 13.74(2 lines)  AV=2.53  SV=4.12  BV=12.15
    {73,1664,1040, 0, 0, 0},  //TV = 13.74(2 lines)  AV=2.53  SV=4.17  BV=12.10
    {109,1216,1032, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.70  BV=11.99
    {109,1280,1048, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.80  BV=11.89
    {109,1344,1064, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.89  BV=11.80
    {109,1472,1032, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.98  BV=11.71
    {145,1216,1024, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.69  BV=11.59
    {145,1280,1056, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.81  BV=11.47
    {145,1344,1048, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.87  BV=11.41
    {145,1472,1024, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.97  BV=11.31
    {182,1216,1064, 0, 0, 0},  //TV = 12.42(5 lines)  AV=2.53  SV=3.75  BV=11.20
    {182,1344,1024, 0, 0, 0},  //TV = 12.42(5 lines)  AV=2.53  SV=3.84  BV=11.11
    {218,1152,1072, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.68  BV=11.01
    {218,1280,1032, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.78  BV=10.91
    {218,1344,1056, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.88  BV=10.81
    {254,1216,1072, 0, 0, 0},  //TV = 11.94(7 lines)  AV=2.53  SV=3.76  BV=10.71
    {290,1152,1064, 0, 0, 0},  //TV = 11.75(8 lines)  AV=2.53  SV=3.67  BV=10.61
    {290,1280,1024, 0, 0, 0},  //TV = 11.75(8 lines)  AV=2.53  SV=3.77  BV=10.51
    {327,1216,1024, 0, 0, 0},  //TV = 11.58(9 lines)  AV=2.53  SV=3.69  BV=10.41
    {327,1280,1048, 0, 0, 0},  //TV = 11.58(9 lines)  AV=2.53  SV=3.80  BV=10.31
    {363,1216,1064, 0, 0, 0},  //TV = 11.43(10 lines)  AV=2.53  SV=3.75  BV=10.21
    {399,1216,1032, 0, 0, 0},  //TV = 11.29(11 lines)  AV=2.53  SV=3.70  BV=10.11
    {435,1152,1080, 0, 0, 0},  //TV = 11.17(12 lines)  AV=2.53  SV=3.69  BV=10.00
    {471,1152,1064, 0, 0, 0},  //TV = 11.05(13 lines)  AV=2.53  SV=3.67  BV=9.91
    {471,1280,1024, 0, 0, 0},  //TV = 11.05(13 lines)  AV=2.53  SV=3.77  BV=9.81
    {508,1216,1072, 0, 0, 0},  //TV = 10.94(14 lines)  AV=2.53  SV=3.76  BV=9.71
    {580,1152,1064, 0, 0, 0},  //TV = 10.75(16 lines)  AV=2.53  SV=3.67  BV=9.61
    {616,1152,1072, 0, 0, 0},  //TV = 10.66(17 lines)  AV=2.53  SV=3.68  BV=9.51
    {653,1216,1024, 0, 0, 0},  //TV = 10.58(18 lines)  AV=2.53  SV=3.69  BV=9.42
    {689,1216,1040, 0, 0, 0},  //TV = 10.50(19 lines)  AV=2.53  SV=3.71  BV=9.32
    {761,1152,1072, 0, 0, 0},  //TV = 10.36(21 lines)  AV=2.53  SV=3.68  BV=9.21
    {797,1216,1032, 0, 0, 0},  //TV = 10.29(22 lines)  AV=2.53  SV=3.70  BV=9.12
    {870,1152,1080, 0, 0, 0},  //TV = 10.17(24 lines)  AV=2.53  SV=3.69  BV=9.00
    {942,1152,1064, 0, 0, 0},  //TV = 10.05(26 lines)  AV=2.53  SV=3.67  BV=8.91
    {979,1216,1040, 0, 0, 0},  //TV = 10.00(27 lines)  AV=2.53  SV=3.71  BV=8.81
    {1051,1216,1032, 0, 0, 0},  //TV = 9.89(29 lines)  AV=2.53  SV=3.70  BV=8.72
    {1160,1152,1072, 0, 0, 0},  //TV = 9.75(32 lines)  AV=2.53  SV=3.68  BV=8.60
    {1232,1152,1072, 0, 0, 0},  //TV = 9.66(34 lines)  AV=2.53  SV=3.68  BV=8.51
    {1305,1216,1024, 0, 0, 0},  //TV = 9.58(36 lines)  AV=2.53  SV=3.69  BV=8.42
    {1413,1152,1080, 0, 0, 0},  //TV = 9.47(39 lines)  AV=2.53  SV=3.69  BV=8.30
    {1522,1152,1072, 0, 0, 0},  //TV = 9.36(42 lines)  AV=2.53  SV=3.68  BV=8.21
    {1631,1152,1072, 0, 0, 0},  //TV = 9.26(45 lines)  AV=2.53  SV=3.68  BV=8.11
    {1739,1152,1080, 0, 0, 0},  //TV = 9.17(48 lines)  AV=2.53  SV=3.69  BV=8.00
    {1884,1152,1064, 0, 0, 0},  //TV = 9.05(52 lines)  AV=2.53  SV=3.67  BV=7.91
    {1993,1152,1080, 0, 0, 0},  //TV = 8.97(55 lines)  AV=2.53  SV=3.69  BV=7.81
    {2138,1152,1080, 0, 0, 0},  //TV = 8.87(59 lines)  AV=2.53  SV=3.69  BV=7.71
    {2319,1152,1064, 0, 0, 0},  //TV = 8.75(64 lines)  AV=2.53  SV=3.67  BV=7.61
    {2464,1152,1072, 0, 0, 0},  //TV = 8.66(68 lines)  AV=2.53  SV=3.68  BV=7.51
    {2645,1152,1072, 0, 0, 0},  //TV = 8.56(73 lines)  AV=2.53  SV=3.68  BV=7.41
    {2826,1152,1080, 0, 0, 0},  //TV = 8.47(78 lines)  AV=2.53  SV=3.69  BV=7.30
    {3043,1152,1072, 0, 0, 0},  //TV = 8.36(84 lines)  AV=2.53  SV=3.68  BV=7.21
    {3261,1152,1072, 0, 0, 0},  //TV = 8.26(90 lines)  AV=2.53  SV=3.68  BV=7.11
    {3514,1152,1072, 0, 0, 0},  //TV = 8.15(97 lines)  AV=2.53  SV=3.68  BV=7.00
    {3732,1152,1072, 0, 0, 0},  //TV = 8.07(103 lines)  AV=2.53  SV=3.68  BV=6.91
    {4021,1152,1072, 0, 0, 0},  //TV = 7.96(111 lines)  AV=2.53  SV=3.68  BV=6.80
    {4347,1152,1064, 0, 0, 0},  //TV = 7.85(120 lines)  AV=2.53  SV=3.67  BV=6.70
    {4601,1152,1072, 0, 0, 0},  //TV = 7.76(127 lines)  AV=2.53  SV=3.68  BV=6.61
    {4927,1152,1072, 0, 0, 0},  //TV = 7.67(136 lines)  AV=2.53  SV=3.68  BV=6.51
    {5289,1152,1072, 0, 0, 0},  //TV = 7.56(146 lines)  AV=2.53  SV=3.68  BV=6.41
    {5688,1152,1072, 0, 0, 0},  //TV = 7.46(157 lines)  AV=2.53  SV=3.68  BV=6.30
    {6123,1152,1064, 0, 0, 0},  //TV = 7.35(169 lines)  AV=2.53  SV=3.67  BV=6.21
    {6557,1152,1064, 0, 0, 0},  //TV = 7.25(181 lines)  AV=2.53  SV=3.67  BV=6.11
    {7028,1152,1064, 0, 0, 0},  //TV = 7.15(194 lines)  AV=2.53  SV=3.67  BV=6.01
    {7499,1152,1072, 0, 0, 0},  //TV = 7.06(207 lines)  AV=2.53  SV=3.68  BV=5.91
    {8115,1152,1064, 0, 0, 0},  //TV = 6.95(224 lines)  AV=2.53  SV=3.67  BV=5.80
    {8332,1216,1056, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=3.74  BV=5.70
    {8332,1280,1064, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=3.82  BV=5.61
    {8332,1408,1040, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=3.93  BV=5.51
    {8332,1472,1064, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.02  BV=5.41
    {8332,1600,1048, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.12  BV=5.31
    {8332,1728,1040, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.22  BV=5.21
    {8332,1856,1040, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.32  BV=5.11
    {8332,1984,1040, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.42  BV=5.01
    {8332,2048,1088, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.53  BV=4.90
    {8332,2304,1032, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.62  BV=4.81
    {16664,1216,1048, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=3.72  BV=4.71
    {16664,1280,1064, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=3.82  BV=4.61
    {16664,1408,1040, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=3.93  BV=4.51
    {16664,1472,1064, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=4.02  BV=4.41
    {16664,1600,1048, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=4.12  BV=4.31
    {16664,1728,1040, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=4.22  BV=4.21
    {16664,1856,1040, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=4.32  BV=4.11
    {16664,1984,1040, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=4.42  BV=4.01
    {16664,2048,1080, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=4.52  BV=3.91
    {16664,2304,1024, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=4.61  BV=3.82
    {16664,2432,1048, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=4.72  BV=3.71
    {16664,2560,1064, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=4.82  BV=3.61
    {16664,2816,1032, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=4.91  BV=3.52
    {16664,2944,1064, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=5.02  BV=3.41
    {16664,3200,1048, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=5.12  BV=3.31
    {16664,3456,1040, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=5.22  BV=3.21
    {16664,3712,1040, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=5.32  BV=3.11
    {16664,3968,1040, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=5.42  BV=3.01
    {16664,4096,1080, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=5.52  BV=2.91
    {24996,3072,1032, 0, 0, 0},  //TV = 5.32(690 lines)  AV=2.53  SV=5.04  BV=2.81
    {24996,3200,1056, 0, 0, 0},  //TV = 5.32(690 lines)  AV=2.53  SV=5.13  BV=2.72
    {24996,3456,1048, 0, 0, 0},  //TV = 5.32(690 lines)  AV=2.53  SV=5.23  BV=2.62
    {24996,3712,1048, 0, 0, 0},  //TV = 5.32(690 lines)  AV=2.53  SV=5.34  BV=2.51
    {24996,3968,1048, 0, 0, 0},  //TV = 5.32(690 lines)  AV=2.53  SV=5.43  BV=2.42
    {33327,3200,1048, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=5.12  BV=2.31
    {33327,3456,1040, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=5.22  BV=2.21
    {33327,3712,1040, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=5.32  BV=2.11
    {33327,3968,1040, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=5.42  BV=2.01
    {33327,4096,1080, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=5.52  BV=1.91
    {33327,4608,1032, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=5.62  BV=1.81
    {33327,4864,1048, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=5.72  BV=1.71
    {33327,5120,1064, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=5.82  BV=1.61
    {33327,5632,1032, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=5.91  BV=1.52
    {33327,6144,1024, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=6.03  BV=1.40
    {33327,6144,1096, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=6.13  BV=1.31
    {33327,6144,1176, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=6.23  BV=1.20
    {33327,6144,1256, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=6.32  BV=1.11
    {33327,6144,1344, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=6.42  BV=1.01
    {33327,6144,1440, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=6.52  BV=0.91
    {33327,6144,1544, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=6.62  BV=0.81
    {33327,6144,1656, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=6.72  BV=0.71
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sCustom2PLineTable_50Hz =
{
{
    {73,1600,1048, 0, 0, 0},  //TV = 13.74(2 lines)  AV=2.53  SV=4.12  BV=12.15
    {73,1664,1040, 0, 0, 0},  //TV = 13.74(2 lines)  AV=2.53  SV=4.17  BV=12.10
    {109,1216,1032, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.70  BV=11.99
    {109,1280,1048, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.80  BV=11.89
    {109,1344,1064, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.89  BV=11.80
    {109,1472,1032, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.98  BV=11.71
    {145,1216,1024, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.69  BV=11.59
    {145,1280,1056, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.81  BV=11.47
    {145,1344,1048, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.87  BV=11.41
    {145,1472,1024, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.97  BV=11.31
    {182,1216,1064, 0, 0, 0},  //TV = 12.42(5 lines)  AV=2.53  SV=3.75  BV=11.20
    {182,1344,1024, 0, 0, 0},  //TV = 12.42(5 lines)  AV=2.53  SV=3.84  BV=11.11
    {218,1152,1072, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.68  BV=11.01
    {218,1280,1032, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.78  BV=10.91
    {218,1344,1056, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.88  BV=10.81
    {254,1216,1072, 0, 0, 0},  //TV = 11.94(7 lines)  AV=2.53  SV=3.76  BV=10.71
    {290,1152,1064, 0, 0, 0},  //TV = 11.75(8 lines)  AV=2.53  SV=3.67  BV=10.61
    {290,1280,1024, 0, 0, 0},  //TV = 11.75(8 lines)  AV=2.53  SV=3.77  BV=10.51
    {327,1216,1024, 0, 0, 0},  //TV = 11.58(9 lines)  AV=2.53  SV=3.69  BV=10.41
    {327,1280,1048, 0, 0, 0},  //TV = 11.58(9 lines)  AV=2.53  SV=3.80  BV=10.31
    {363,1216,1064, 0, 0, 0},  //TV = 11.43(10 lines)  AV=2.53  SV=3.75  BV=10.21
    {399,1216,1032, 0, 0, 0},  //TV = 11.29(11 lines)  AV=2.53  SV=3.70  BV=10.11
    {435,1152,1080, 0, 0, 0},  //TV = 11.17(12 lines)  AV=2.53  SV=3.69  BV=10.00
    {471,1152,1064, 0, 0, 0},  //TV = 11.05(13 lines)  AV=2.53  SV=3.67  BV=9.91
    {471,1280,1024, 0, 0, 0},  //TV = 11.05(13 lines)  AV=2.53  SV=3.77  BV=9.81
    {508,1216,1072, 0, 0, 0},  //TV = 10.94(14 lines)  AV=2.53  SV=3.76  BV=9.71
    {580,1152,1064, 0, 0, 0},  //TV = 10.75(16 lines)  AV=2.53  SV=3.67  BV=9.61
    {616,1152,1072, 0, 0, 0},  //TV = 10.66(17 lines)  AV=2.53  SV=3.68  BV=9.51
    {653,1216,1024, 0, 0, 0},  //TV = 10.58(18 lines)  AV=2.53  SV=3.69  BV=9.42
    {689,1216,1040, 0, 0, 0},  //TV = 10.50(19 lines)  AV=2.53  SV=3.71  BV=9.32
    {761,1152,1072, 0, 0, 0},  //TV = 10.36(21 lines)  AV=2.53  SV=3.68  BV=9.21
    {797,1216,1032, 0, 0, 0},  //TV = 10.29(22 lines)  AV=2.53  SV=3.70  BV=9.12
    {870,1152,1080, 0, 0, 0},  //TV = 10.17(24 lines)  AV=2.53  SV=3.69  BV=9.00
    {942,1152,1064, 0, 0, 0},  //TV = 10.05(26 lines)  AV=2.53  SV=3.67  BV=8.91
    {979,1216,1040, 0, 0, 0},  //TV = 10.00(27 lines)  AV=2.53  SV=3.71  BV=8.81
    {1051,1216,1032, 0, 0, 0},  //TV = 9.89(29 lines)  AV=2.53  SV=3.70  BV=8.72
    {1160,1152,1072, 0, 0, 0},  //TV = 9.75(32 lines)  AV=2.53  SV=3.68  BV=8.60
    {1232,1152,1072, 0, 0, 0},  //TV = 9.66(34 lines)  AV=2.53  SV=3.68  BV=8.51
    {1305,1216,1024, 0, 0, 0},  //TV = 9.58(36 lines)  AV=2.53  SV=3.69  BV=8.42
    {1413,1152,1080, 0, 0, 0},  //TV = 9.47(39 lines)  AV=2.53  SV=3.69  BV=8.30
    {1522,1152,1072, 0, 0, 0},  //TV = 9.36(42 lines)  AV=2.53  SV=3.68  BV=8.21
    {1631,1152,1072, 0, 0, 0},  //TV = 9.26(45 lines)  AV=2.53  SV=3.68  BV=8.11
    {1739,1152,1080, 0, 0, 0},  //TV = 9.17(48 lines)  AV=2.53  SV=3.69  BV=8.00
    {1884,1152,1064, 0, 0, 0},  //TV = 9.05(52 lines)  AV=2.53  SV=3.67  BV=7.91
    {1993,1152,1080, 0, 0, 0},  //TV = 8.97(55 lines)  AV=2.53  SV=3.69  BV=7.81
    {2138,1152,1080, 0, 0, 0},  //TV = 8.87(59 lines)  AV=2.53  SV=3.69  BV=7.71
    {2319,1152,1064, 0, 0, 0},  //TV = 8.75(64 lines)  AV=2.53  SV=3.67  BV=7.61
    {2464,1152,1072, 0, 0, 0},  //TV = 8.66(68 lines)  AV=2.53  SV=3.68  BV=7.51
    {2645,1152,1072, 0, 0, 0},  //TV = 8.56(73 lines)  AV=2.53  SV=3.68  BV=7.41
    {2826,1152,1080, 0, 0, 0},  //TV = 8.47(78 lines)  AV=2.53  SV=3.69  BV=7.30
    {3043,1152,1072, 0, 0, 0},  //TV = 8.36(84 lines)  AV=2.53  SV=3.68  BV=7.21
    {3261,1152,1072, 0, 0, 0},  //TV = 8.26(90 lines)  AV=2.53  SV=3.68  BV=7.11
    {3514,1152,1072, 0, 0, 0},  //TV = 8.15(97 lines)  AV=2.53  SV=3.68  BV=7.00
    {3732,1152,1072, 0, 0, 0},  //TV = 8.07(103 lines)  AV=2.53  SV=3.68  BV=6.91
    {4021,1152,1072, 0, 0, 0},  //TV = 7.96(111 lines)  AV=2.53  SV=3.68  BV=6.80
    {4347,1152,1064, 0, 0, 0},  //TV = 7.85(120 lines)  AV=2.53  SV=3.67  BV=6.70
    {4601,1152,1072, 0, 0, 0},  //TV = 7.76(127 lines)  AV=2.53  SV=3.68  BV=6.61
    {4927,1152,1072, 0, 0, 0},  //TV = 7.67(136 lines)  AV=2.53  SV=3.68  BV=6.51
    {5289,1152,1072, 0, 0, 0},  //TV = 7.56(146 lines)  AV=2.53  SV=3.68  BV=6.41
    {5688,1152,1072, 0, 0, 0},  //TV = 7.46(157 lines)  AV=2.53  SV=3.68  BV=6.30
    {6123,1152,1064, 0, 0, 0},  //TV = 7.35(169 lines)  AV=2.53  SV=3.67  BV=6.21
    {6557,1152,1064, 0, 0, 0},  //TV = 7.25(181 lines)  AV=2.53  SV=3.67  BV=6.11
    {7028,1152,1064, 0, 0, 0},  //TV = 7.15(194 lines)  AV=2.53  SV=3.67  BV=6.01
    {7499,1152,1072, 0, 0, 0},  //TV = 7.06(207 lines)  AV=2.53  SV=3.68  BV=5.91
    {8115,1152,1064, 0, 0, 0},  //TV = 6.95(224 lines)  AV=2.53  SV=3.67  BV=5.80
    {8694,1152,1064, 0, 0, 0},  //TV = 6.85(240 lines)  AV=2.53  SV=3.67  BV=5.70
    {9310,1152,1064, 0, 0, 0},  //TV = 6.75(257 lines)  AV=2.53  SV=3.67  BV=5.60
    {9962,1152,1064, 0, 0, 0},  //TV = 6.65(275 lines)  AV=2.53  SV=3.67  BV=5.51
    {9999,1216,1072, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=3.76  BV=5.41
    {9999,1344,1040, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=3.86  BV=5.31
    {9999,1408,1064, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=3.96  BV=5.21
    {9999,1536,1048, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.06  BV=5.11
    {9999,1664,1032, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.16  BV=5.01
    {9999,1792,1032, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.26  BV=4.91
    {9999,1920,1032, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.36  BV=4.81
    {9999,2048,1032, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.45  BV=4.72
    {9999,2176,1040, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.55  BV=4.62
    {9999,2304,1056, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.66  BV=4.51
    {9999,2432,1072, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.76  BV=4.41
    {9999,2688,1048, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.87  BV=4.30
    {9999,2816,1064, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.96  BV=4.21
    {9999,3072,1048, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.06  BV=4.11
    {9999,3328,1032, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.16  BV=4.01
    {9999,3584,1024, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.25  BV=3.92
    {9999,3840,1032, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.36  BV=3.81
    {9999,4096,1040, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.47  BV=3.70
    {9999,4352,1040, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.55  BV=3.62
    {9999,4608,1056, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.66  BV=3.51
    {9999,4864,1072, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.76  BV=3.41
    {9999,5376,1040, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.86  BV=3.31
    {9999,5632,1064, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.96  BV=3.21
    {19997,3072,1048, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=5.06  BV=3.11
    {19997,3328,1032, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=5.16  BV=3.01
    {19997,3584,1032, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=5.26  BV=2.91
    {19997,3840,1032, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=5.36  BV=2.81
    {19997,4096,1032, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=5.45  BV=2.72
    {19997,4352,1040, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=5.55  BV=2.62
    {29995,3072,1056, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.07  BV=2.51
    {29995,3328,1048, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.18  BV=2.41
    {29995,3584,1040, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.27  BV=2.31
    {29995,3840,1040, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.37  BV=2.21
    {29995,4096,1048, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.48  BV=2.11
    {29995,4352,1056, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.58  BV=2.01
    {29995,4608,1072, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.68  BV=1.91
    {29995,5120,1032, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.78  BV=1.81
    {29995,5376,1048, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.87  BV=1.72
    {29995,5888,1024, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.97  BV=1.62
    {29995,6144,1064, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.08  BV=1.50
    {29995,6144,1136, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.18  BV=1.41
    {29995,6144,1216, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.28  BV=1.31
    {29995,6144,1304, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.38  BV=1.21
    {29995,6144,1400, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.48  BV=1.11
    {29995,6144,1496, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.58  BV=1.01
    {29995,6144,1600, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.67  BV=0.91
    {29995,6144,1720, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.78  BV=0.81
    {29995,6144,1840, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.87  BV=0.71
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_Custom2AutoTable =
{
    AETABLE_CUSTOM2_AUTO,    //eAETableID
    116,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    122,    //i4MaxBV
    7,    //i4MinBV
    90,    //i4EffectiveMaxBV
    -30,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO SPEED
    sCustom2PLineTable_60Hz,
    sCustom2PLineTable_50Hz,
    NULL,
};

static strEvPline sCustom3PLineTable_60Hz =
{
{
    {73,1600,1048, 0, 0, 0},  //TV = 13.74(2 lines)  AV=2.53  SV=4.12  BV=12.15
    {73,1664,1040, 0, 0, 0},  //TV = 13.74(2 lines)  AV=2.53  SV=4.17  BV=12.10
    {109,1216,1032, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.70  BV=11.99
    {109,1280,1048, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.80  BV=11.89
    {109,1344,1064, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.89  BV=11.80
    {109,1472,1032, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.98  BV=11.71
    {145,1216,1024, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.69  BV=11.59
    {145,1280,1056, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.81  BV=11.47
    {145,1344,1048, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.87  BV=11.41
    {145,1472,1024, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.97  BV=11.31
    {182,1216,1064, 0, 0, 0},  //TV = 12.42(5 lines)  AV=2.53  SV=3.75  BV=11.20
    {182,1344,1024, 0, 0, 0},  //TV = 12.42(5 lines)  AV=2.53  SV=3.84  BV=11.11
    {218,1152,1072, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.68  BV=11.01
    {218,1280,1032, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.78  BV=10.91
    {218,1344,1056, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.88  BV=10.81
    {254,1216,1072, 0, 0, 0},  //TV = 11.94(7 lines)  AV=2.53  SV=3.76  BV=10.71
    {290,1152,1064, 0, 0, 0},  //TV = 11.75(8 lines)  AV=2.53  SV=3.67  BV=10.61
    {290,1280,1024, 0, 0, 0},  //TV = 11.75(8 lines)  AV=2.53  SV=3.77  BV=10.51
    {327,1216,1024, 0, 0, 0},  //TV = 11.58(9 lines)  AV=2.53  SV=3.69  BV=10.41
    {327,1280,1048, 0, 0, 0},  //TV = 11.58(9 lines)  AV=2.53  SV=3.80  BV=10.31
    {363,1216,1064, 0, 0, 0},  //TV = 11.43(10 lines)  AV=2.53  SV=3.75  BV=10.21
    {399,1216,1032, 0, 0, 0},  //TV = 11.29(11 lines)  AV=2.53  SV=3.70  BV=10.11
    {435,1152,1080, 0, 0, 0},  //TV = 11.17(12 lines)  AV=2.53  SV=3.69  BV=10.00
    {471,1152,1064, 0, 0, 0},  //TV = 11.05(13 lines)  AV=2.53  SV=3.67  BV=9.91
    {471,1280,1024, 0, 0, 0},  //TV = 11.05(13 lines)  AV=2.53  SV=3.77  BV=9.81
    {508,1216,1072, 0, 0, 0},  //TV = 10.94(14 lines)  AV=2.53  SV=3.76  BV=9.71
    {580,1152,1064, 0, 0, 0},  //TV = 10.75(16 lines)  AV=2.53  SV=3.67  BV=9.61
    {616,1152,1072, 0, 0, 0},  //TV = 10.66(17 lines)  AV=2.53  SV=3.68  BV=9.51
    {653,1216,1024, 0, 0, 0},  //TV = 10.58(18 lines)  AV=2.53  SV=3.69  BV=9.42
    {689,1216,1040, 0, 0, 0},  //TV = 10.50(19 lines)  AV=2.53  SV=3.71  BV=9.32
    {761,1152,1072, 0, 0, 0},  //TV = 10.36(21 lines)  AV=2.53  SV=3.68  BV=9.21
    {797,1216,1032, 0, 0, 0},  //TV = 10.29(22 lines)  AV=2.53  SV=3.70  BV=9.12
    {870,1152,1080, 0, 0, 0},  //TV = 10.17(24 lines)  AV=2.53  SV=3.69  BV=9.00
    {942,1152,1064, 0, 0, 0},  //TV = 10.05(26 lines)  AV=2.53  SV=3.67  BV=8.91
    {979,1216,1040, 0, 0, 0},  //TV = 10.00(27 lines)  AV=2.53  SV=3.71  BV=8.81
    {1051,1216,1032, 0, 0, 0},  //TV = 9.89(29 lines)  AV=2.53  SV=3.70  BV=8.72
    {1160,1152,1072, 0, 0, 0},  //TV = 9.75(32 lines)  AV=2.53  SV=3.68  BV=8.60
    {1232,1152,1072, 0, 0, 0},  //TV = 9.66(34 lines)  AV=2.53  SV=3.68  BV=8.51
    {1305,1216,1024, 0, 0, 0},  //TV = 9.58(36 lines)  AV=2.53  SV=3.69  BV=8.42
    {1413,1152,1080, 0, 0, 0},  //TV = 9.47(39 lines)  AV=2.53  SV=3.69  BV=8.30
    {1522,1152,1072, 0, 0, 0},  //TV = 9.36(42 lines)  AV=2.53  SV=3.68  BV=8.21
    {1631,1152,1072, 0, 0, 0},  //TV = 9.26(45 lines)  AV=2.53  SV=3.68  BV=8.11
    {1739,1152,1080, 0, 0, 0},  //TV = 9.17(48 lines)  AV=2.53  SV=3.69  BV=8.00
    {1884,1152,1064, 0, 0, 0},  //TV = 9.05(52 lines)  AV=2.53  SV=3.67  BV=7.91
    {1993,1152,1080, 0, 0, 0},  //TV = 8.97(55 lines)  AV=2.53  SV=3.69  BV=7.81
    {2138,1152,1080, 0, 0, 0},  //TV = 8.87(59 lines)  AV=2.53  SV=3.69  BV=7.71
    {2319,1152,1064, 0, 0, 0},  //TV = 8.75(64 lines)  AV=2.53  SV=3.67  BV=7.61
    {2464,1152,1072, 0, 0, 0},  //TV = 8.66(68 lines)  AV=2.53  SV=3.68  BV=7.51
    {2645,1152,1072, 0, 0, 0},  //TV = 8.56(73 lines)  AV=2.53  SV=3.68  BV=7.41
    {2826,1152,1080, 0, 0, 0},  //TV = 8.47(78 lines)  AV=2.53  SV=3.69  BV=7.30
    {3043,1152,1072, 0, 0, 0},  //TV = 8.36(84 lines)  AV=2.53  SV=3.68  BV=7.21
    {3261,1152,1072, 0, 0, 0},  //TV = 8.26(90 lines)  AV=2.53  SV=3.68  BV=7.11
    {3514,1152,1072, 0, 0, 0},  //TV = 8.15(97 lines)  AV=2.53  SV=3.68  BV=7.00
    {3732,1152,1072, 0, 0, 0},  //TV = 8.07(103 lines)  AV=2.53  SV=3.68  BV=6.91
    {4021,1152,1072, 0, 0, 0},  //TV = 7.96(111 lines)  AV=2.53  SV=3.68  BV=6.80
    {4347,1152,1064, 0, 0, 0},  //TV = 7.85(120 lines)  AV=2.53  SV=3.67  BV=6.70
    {4601,1152,1072, 0, 0, 0},  //TV = 7.76(127 lines)  AV=2.53  SV=3.68  BV=6.61
    {4927,1152,1072, 0, 0, 0},  //TV = 7.67(136 lines)  AV=2.53  SV=3.68  BV=6.51
    {5289,1152,1072, 0, 0, 0},  //TV = 7.56(146 lines)  AV=2.53  SV=3.68  BV=6.41
    {5688,1152,1072, 0, 0, 0},  //TV = 7.46(157 lines)  AV=2.53  SV=3.68  BV=6.30
    {6123,1152,1064, 0, 0, 0},  //TV = 7.35(169 lines)  AV=2.53  SV=3.67  BV=6.21
    {6557,1152,1064, 0, 0, 0},  //TV = 7.25(181 lines)  AV=2.53  SV=3.67  BV=6.11
    {7028,1152,1064, 0, 0, 0},  //TV = 7.15(194 lines)  AV=2.53  SV=3.67  BV=6.01
    {7499,1152,1072, 0, 0, 0},  //TV = 7.06(207 lines)  AV=2.53  SV=3.68  BV=5.91
    {8115,1152,1064, 0, 0, 0},  //TV = 6.95(224 lines)  AV=2.53  SV=3.67  BV=5.80
    {8332,1216,1056, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=3.74  BV=5.70
    {8332,1280,1064, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=3.82  BV=5.61
    {8332,1408,1040, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=3.93  BV=5.51
    {8332,1472,1064, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.02  BV=5.41
    {8332,1600,1048, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.12  BV=5.31
    {8332,1728,1040, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.22  BV=5.21
    {8332,1856,1040, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.32  BV=5.11
    {8332,1984,1040, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.42  BV=5.01
    {8332,2048,1088, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.53  BV=4.90
    {8332,2304,1032, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.62  BV=4.81
    {16664,1216,1048, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=3.72  BV=4.71
    {16664,1280,1064, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=3.82  BV=4.61
    {16664,1408,1040, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=3.93  BV=4.51
    {16664,1472,1064, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=4.02  BV=4.41
    {16664,1600,1048, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=4.12  BV=4.31
    {16664,1728,1040, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=4.22  BV=4.21
    {16664,1856,1040, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=4.32  BV=4.11
    {16664,1984,1040, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=4.42  BV=4.01
    {16664,2048,1080, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=4.52  BV=3.91
    {16664,2304,1024, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=4.61  BV=3.82
    {16664,2432,1048, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=4.72  BV=3.71
    {16664,2560,1064, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=4.82  BV=3.61
    {16664,2816,1032, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=4.91  BV=3.52
    {16664,2944,1064, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=5.02  BV=3.41
    {16664,3200,1048, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=5.12  BV=3.31
    {16664,3456,1040, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=5.22  BV=3.21
    {16664,3712,1040, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=5.32  BV=3.11
    {16664,3968,1040, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=5.42  BV=3.01
    {16664,4096,1080, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=5.52  BV=2.91
    {24996,3072,1032, 0, 0, 0},  //TV = 5.32(690 lines)  AV=2.53  SV=5.04  BV=2.81
    {24996,3200,1056, 0, 0, 0},  //TV = 5.32(690 lines)  AV=2.53  SV=5.13  BV=2.72
    {24996,3456,1048, 0, 0, 0},  //TV = 5.32(690 lines)  AV=2.53  SV=5.23  BV=2.62
    {24996,3712,1048, 0, 0, 0},  //TV = 5.32(690 lines)  AV=2.53  SV=5.34  BV=2.51
    {24996,3968,1048, 0, 0, 0},  //TV = 5.32(690 lines)  AV=2.53  SV=5.43  BV=2.42
    {33327,3200,1048, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=5.12  BV=2.31
    {33327,3456,1040, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=5.22  BV=2.21
    {33327,3712,1040, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=5.32  BV=2.11
    {33327,3968,1040, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=5.42  BV=2.01
    {33327,4096,1080, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=5.52  BV=1.91
    {33327,4608,1032, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=5.62  BV=1.81
    {33327,4864,1048, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=5.72  BV=1.71
    {33327,5120,1064, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=5.82  BV=1.61
    {33327,5632,1032, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=5.91  BV=1.52
    {33327,6144,1024, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=6.03  BV=1.40
    {33327,6144,1096, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=6.13  BV=1.31
    {33327,6144,1176, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=6.23  BV=1.20
    {33327,6144,1256, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=6.32  BV=1.11
    {33327,6144,1344, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=6.42  BV=1.01
    {33327,6144,1440, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=6.52  BV=0.91
    {33327,6144,1544, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=6.62  BV=0.81
    {33327,6144,1656, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=6.72  BV=0.71
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sCustom3PLineTable_50Hz =
{
{
    {73,1600,1048, 0, 0, 0},  //TV = 13.74(2 lines)  AV=2.53  SV=4.12  BV=12.15
    {73,1664,1040, 0, 0, 0},  //TV = 13.74(2 lines)  AV=2.53  SV=4.17  BV=12.10
    {109,1216,1032, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.70  BV=11.99
    {109,1280,1048, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.80  BV=11.89
    {109,1344,1064, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.89  BV=11.80
    {109,1472,1032, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.98  BV=11.71
    {145,1216,1024, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.69  BV=11.59
    {145,1280,1056, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.81  BV=11.47
    {145,1344,1048, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.87  BV=11.41
    {145,1472,1024, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.97  BV=11.31
    {182,1216,1064, 0, 0, 0},  //TV = 12.42(5 lines)  AV=2.53  SV=3.75  BV=11.20
    {182,1344,1024, 0, 0, 0},  //TV = 12.42(5 lines)  AV=2.53  SV=3.84  BV=11.11
    {218,1152,1072, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.68  BV=11.01
    {218,1280,1032, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.78  BV=10.91
    {218,1344,1056, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.88  BV=10.81
    {254,1216,1072, 0, 0, 0},  //TV = 11.94(7 lines)  AV=2.53  SV=3.76  BV=10.71
    {290,1152,1064, 0, 0, 0},  //TV = 11.75(8 lines)  AV=2.53  SV=3.67  BV=10.61
    {290,1280,1024, 0, 0, 0},  //TV = 11.75(8 lines)  AV=2.53  SV=3.77  BV=10.51
    {327,1216,1024, 0, 0, 0},  //TV = 11.58(9 lines)  AV=2.53  SV=3.69  BV=10.41
    {327,1280,1048, 0, 0, 0},  //TV = 11.58(9 lines)  AV=2.53  SV=3.80  BV=10.31
    {363,1216,1064, 0, 0, 0},  //TV = 11.43(10 lines)  AV=2.53  SV=3.75  BV=10.21
    {399,1216,1032, 0, 0, 0},  //TV = 11.29(11 lines)  AV=2.53  SV=3.70  BV=10.11
    {435,1152,1080, 0, 0, 0},  //TV = 11.17(12 lines)  AV=2.53  SV=3.69  BV=10.00
    {471,1152,1064, 0, 0, 0},  //TV = 11.05(13 lines)  AV=2.53  SV=3.67  BV=9.91
    {471,1280,1024, 0, 0, 0},  //TV = 11.05(13 lines)  AV=2.53  SV=3.77  BV=9.81
    {508,1216,1072, 0, 0, 0},  //TV = 10.94(14 lines)  AV=2.53  SV=3.76  BV=9.71
    {580,1152,1064, 0, 0, 0},  //TV = 10.75(16 lines)  AV=2.53  SV=3.67  BV=9.61
    {616,1152,1072, 0, 0, 0},  //TV = 10.66(17 lines)  AV=2.53  SV=3.68  BV=9.51
    {653,1216,1024, 0, 0, 0},  //TV = 10.58(18 lines)  AV=2.53  SV=3.69  BV=9.42
    {689,1216,1040, 0, 0, 0},  //TV = 10.50(19 lines)  AV=2.53  SV=3.71  BV=9.32
    {761,1152,1072, 0, 0, 0},  //TV = 10.36(21 lines)  AV=2.53  SV=3.68  BV=9.21
    {797,1216,1032, 0, 0, 0},  //TV = 10.29(22 lines)  AV=2.53  SV=3.70  BV=9.12
    {870,1152,1080, 0, 0, 0},  //TV = 10.17(24 lines)  AV=2.53  SV=3.69  BV=9.00
    {942,1152,1064, 0, 0, 0},  //TV = 10.05(26 lines)  AV=2.53  SV=3.67  BV=8.91
    {979,1216,1040, 0, 0, 0},  //TV = 10.00(27 lines)  AV=2.53  SV=3.71  BV=8.81
    {1051,1216,1032, 0, 0, 0},  //TV = 9.89(29 lines)  AV=2.53  SV=3.70  BV=8.72
    {1160,1152,1072, 0, 0, 0},  //TV = 9.75(32 lines)  AV=2.53  SV=3.68  BV=8.60
    {1232,1152,1072, 0, 0, 0},  //TV = 9.66(34 lines)  AV=2.53  SV=3.68  BV=8.51
    {1305,1216,1024, 0, 0, 0},  //TV = 9.58(36 lines)  AV=2.53  SV=3.69  BV=8.42
    {1413,1152,1080, 0, 0, 0},  //TV = 9.47(39 lines)  AV=2.53  SV=3.69  BV=8.30
    {1522,1152,1072, 0, 0, 0},  //TV = 9.36(42 lines)  AV=2.53  SV=3.68  BV=8.21
    {1631,1152,1072, 0, 0, 0},  //TV = 9.26(45 lines)  AV=2.53  SV=3.68  BV=8.11
    {1739,1152,1080, 0, 0, 0},  //TV = 9.17(48 lines)  AV=2.53  SV=3.69  BV=8.00
    {1884,1152,1064, 0, 0, 0},  //TV = 9.05(52 lines)  AV=2.53  SV=3.67  BV=7.91
    {1993,1152,1080, 0, 0, 0},  //TV = 8.97(55 lines)  AV=2.53  SV=3.69  BV=7.81
    {2138,1152,1080, 0, 0, 0},  //TV = 8.87(59 lines)  AV=2.53  SV=3.69  BV=7.71
    {2319,1152,1064, 0, 0, 0},  //TV = 8.75(64 lines)  AV=2.53  SV=3.67  BV=7.61
    {2464,1152,1072, 0, 0, 0},  //TV = 8.66(68 lines)  AV=2.53  SV=3.68  BV=7.51
    {2645,1152,1072, 0, 0, 0},  //TV = 8.56(73 lines)  AV=2.53  SV=3.68  BV=7.41
    {2826,1152,1080, 0, 0, 0},  //TV = 8.47(78 lines)  AV=2.53  SV=3.69  BV=7.30
    {3043,1152,1072, 0, 0, 0},  //TV = 8.36(84 lines)  AV=2.53  SV=3.68  BV=7.21
    {3261,1152,1072, 0, 0, 0},  //TV = 8.26(90 lines)  AV=2.53  SV=3.68  BV=7.11
    {3514,1152,1072, 0, 0, 0},  //TV = 8.15(97 lines)  AV=2.53  SV=3.68  BV=7.00
    {3732,1152,1072, 0, 0, 0},  //TV = 8.07(103 lines)  AV=2.53  SV=3.68  BV=6.91
    {4021,1152,1072, 0, 0, 0},  //TV = 7.96(111 lines)  AV=2.53  SV=3.68  BV=6.80
    {4347,1152,1064, 0, 0, 0},  //TV = 7.85(120 lines)  AV=2.53  SV=3.67  BV=6.70
    {4601,1152,1072, 0, 0, 0},  //TV = 7.76(127 lines)  AV=2.53  SV=3.68  BV=6.61
    {4927,1152,1072, 0, 0, 0},  //TV = 7.67(136 lines)  AV=2.53  SV=3.68  BV=6.51
    {5289,1152,1072, 0, 0, 0},  //TV = 7.56(146 lines)  AV=2.53  SV=3.68  BV=6.41
    {5688,1152,1072, 0, 0, 0},  //TV = 7.46(157 lines)  AV=2.53  SV=3.68  BV=6.30
    {6123,1152,1064, 0, 0, 0},  //TV = 7.35(169 lines)  AV=2.53  SV=3.67  BV=6.21
    {6557,1152,1064, 0, 0, 0},  //TV = 7.25(181 lines)  AV=2.53  SV=3.67  BV=6.11
    {7028,1152,1064, 0, 0, 0},  //TV = 7.15(194 lines)  AV=2.53  SV=3.67  BV=6.01
    {7499,1152,1072, 0, 0, 0},  //TV = 7.06(207 lines)  AV=2.53  SV=3.68  BV=5.91
    {8115,1152,1064, 0, 0, 0},  //TV = 6.95(224 lines)  AV=2.53  SV=3.67  BV=5.80
    {8694,1152,1064, 0, 0, 0},  //TV = 6.85(240 lines)  AV=2.53  SV=3.67  BV=5.70
    {9310,1152,1064, 0, 0, 0},  //TV = 6.75(257 lines)  AV=2.53  SV=3.67  BV=5.60
    {9962,1152,1064, 0, 0, 0},  //TV = 6.65(275 lines)  AV=2.53  SV=3.67  BV=5.51
    {9999,1216,1072, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=3.76  BV=5.41
    {9999,1344,1040, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=3.86  BV=5.31
    {9999,1408,1064, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=3.96  BV=5.21
    {9999,1536,1048, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.06  BV=5.11
    {9999,1664,1032, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.16  BV=5.01
    {9999,1792,1032, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.26  BV=4.91
    {9999,1920,1032, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.36  BV=4.81
    {9999,2048,1032, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.45  BV=4.72
    {9999,2176,1040, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.55  BV=4.62
    {9999,2304,1056, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.66  BV=4.51
    {9999,2432,1072, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.76  BV=4.41
    {9999,2688,1048, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.87  BV=4.30
    {9999,2816,1064, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.96  BV=4.21
    {9999,3072,1048, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.06  BV=4.11
    {9999,3328,1032, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.16  BV=4.01
    {9999,3584,1024, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.25  BV=3.92
    {9999,3840,1032, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.36  BV=3.81
    {9999,4096,1040, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.47  BV=3.70
    {9999,4352,1040, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.55  BV=3.62
    {9999,4608,1056, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.66  BV=3.51
    {9999,4864,1072, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.76  BV=3.41
    {9999,5376,1040, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.86  BV=3.31
    {9999,5632,1064, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.96  BV=3.21
    {19997,3072,1048, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=5.06  BV=3.11
    {19997,3328,1032, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=5.16  BV=3.01
    {19997,3584,1032, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=5.26  BV=2.91
    {19997,3840,1032, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=5.36  BV=2.81
    {19997,4096,1032, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=5.45  BV=2.72
    {19997,4352,1040, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=5.55  BV=2.62
    {29995,3072,1056, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.07  BV=2.51
    {29995,3328,1048, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.18  BV=2.41
    {29995,3584,1040, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.27  BV=2.31
    {29995,3840,1040, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.37  BV=2.21
    {29995,4096,1048, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.48  BV=2.11
    {29995,4352,1056, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.58  BV=2.01
    {29995,4608,1072, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.68  BV=1.91
    {29995,5120,1032, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.78  BV=1.81
    {29995,5376,1048, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.87  BV=1.72
    {29995,5888,1024, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.97  BV=1.62
    {29995,6144,1064, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.08  BV=1.50
    {29995,6144,1136, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.18  BV=1.41
    {29995,6144,1216, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.28  BV=1.31
    {29995,6144,1304, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.38  BV=1.21
    {29995,6144,1400, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.48  BV=1.11
    {29995,6144,1496, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.58  BV=1.01
    {29995,6144,1600, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.67  BV=0.91
    {29995,6144,1720, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.78  BV=0.81
    {29995,6144,1840, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.87  BV=0.71
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_Custom3AutoTable =
{
    AETABLE_CUSTOM3_AUTO,    //eAETableID
    116,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    122,    //i4MaxBV
    7,    //i4MinBV
    90,    //i4EffectiveMaxBV
    -30,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO SPEED
    sCustom3PLineTable_60Hz,
    sCustom3PLineTable_50Hz,
    NULL,
};

static strEvPline sCustom4PLineTable_60Hz =
{
{
    {73,1600,1048, 0, 0, 0},  //TV = 13.74(2 lines)  AV=2.53  SV=4.12  BV=12.15
    {73,1664,1040, 0, 0, 0},  //TV = 13.74(2 lines)  AV=2.53  SV=4.17  BV=12.10
    {109,1216,1032, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.70  BV=11.99
    {109,1280,1048, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.80  BV=11.89
    {109,1344,1064, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.89  BV=11.80
    {109,1472,1032, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.98  BV=11.71
    {145,1216,1024, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.69  BV=11.59
    {145,1280,1056, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.81  BV=11.47
    {145,1344,1048, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.87  BV=11.41
    {145,1472,1024, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.97  BV=11.31
    {182,1216,1064, 0, 0, 0},  //TV = 12.42(5 lines)  AV=2.53  SV=3.75  BV=11.20
    {182,1344,1024, 0, 0, 0},  //TV = 12.42(5 lines)  AV=2.53  SV=3.84  BV=11.11
    {218,1152,1072, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.68  BV=11.01
    {218,1280,1032, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.78  BV=10.91
    {218,1344,1056, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.88  BV=10.81
    {254,1216,1072, 0, 0, 0},  //TV = 11.94(7 lines)  AV=2.53  SV=3.76  BV=10.71
    {290,1152,1064, 0, 0, 0},  //TV = 11.75(8 lines)  AV=2.53  SV=3.67  BV=10.61
    {290,1280,1024, 0, 0, 0},  //TV = 11.75(8 lines)  AV=2.53  SV=3.77  BV=10.51
    {327,1216,1024, 0, 0, 0},  //TV = 11.58(9 lines)  AV=2.53  SV=3.69  BV=10.41
    {327,1280,1048, 0, 0, 0},  //TV = 11.58(9 lines)  AV=2.53  SV=3.80  BV=10.31
    {363,1216,1064, 0, 0, 0},  //TV = 11.43(10 lines)  AV=2.53  SV=3.75  BV=10.21
    {399,1216,1032, 0, 0, 0},  //TV = 11.29(11 lines)  AV=2.53  SV=3.70  BV=10.11
    {435,1152,1080, 0, 0, 0},  //TV = 11.17(12 lines)  AV=2.53  SV=3.69  BV=10.00
    {471,1152,1064, 0, 0, 0},  //TV = 11.05(13 lines)  AV=2.53  SV=3.67  BV=9.91
    {471,1280,1024, 0, 0, 0},  //TV = 11.05(13 lines)  AV=2.53  SV=3.77  BV=9.81
    {508,1216,1072, 0, 0, 0},  //TV = 10.94(14 lines)  AV=2.53  SV=3.76  BV=9.71
    {580,1152,1064, 0, 0, 0},  //TV = 10.75(16 lines)  AV=2.53  SV=3.67  BV=9.61
    {616,1152,1072, 0, 0, 0},  //TV = 10.66(17 lines)  AV=2.53  SV=3.68  BV=9.51
    {653,1216,1024, 0, 0, 0},  //TV = 10.58(18 lines)  AV=2.53  SV=3.69  BV=9.42
    {689,1216,1040, 0, 0, 0},  //TV = 10.50(19 lines)  AV=2.53  SV=3.71  BV=9.32
    {761,1152,1072, 0, 0, 0},  //TV = 10.36(21 lines)  AV=2.53  SV=3.68  BV=9.21
    {797,1216,1032, 0, 0, 0},  //TV = 10.29(22 lines)  AV=2.53  SV=3.70  BV=9.12
    {870,1152,1080, 0, 0, 0},  //TV = 10.17(24 lines)  AV=2.53  SV=3.69  BV=9.00
    {942,1152,1064, 0, 0, 0},  //TV = 10.05(26 lines)  AV=2.53  SV=3.67  BV=8.91
    {979,1216,1040, 0, 0, 0},  //TV = 10.00(27 lines)  AV=2.53  SV=3.71  BV=8.81
    {1051,1216,1032, 0, 0, 0},  //TV = 9.89(29 lines)  AV=2.53  SV=3.70  BV=8.72
    {1160,1152,1072, 0, 0, 0},  //TV = 9.75(32 lines)  AV=2.53  SV=3.68  BV=8.60
    {1232,1152,1072, 0, 0, 0},  //TV = 9.66(34 lines)  AV=2.53  SV=3.68  BV=8.51
    {1305,1216,1024, 0, 0, 0},  //TV = 9.58(36 lines)  AV=2.53  SV=3.69  BV=8.42
    {1413,1152,1080, 0, 0, 0},  //TV = 9.47(39 lines)  AV=2.53  SV=3.69  BV=8.30
    {1522,1152,1072, 0, 0, 0},  //TV = 9.36(42 lines)  AV=2.53  SV=3.68  BV=8.21
    {1631,1152,1072, 0, 0, 0},  //TV = 9.26(45 lines)  AV=2.53  SV=3.68  BV=8.11
    {1739,1152,1080, 0, 0, 0},  //TV = 9.17(48 lines)  AV=2.53  SV=3.69  BV=8.00
    {1884,1152,1064, 0, 0, 0},  //TV = 9.05(52 lines)  AV=2.53  SV=3.67  BV=7.91
    {1993,1152,1080, 0, 0, 0},  //TV = 8.97(55 lines)  AV=2.53  SV=3.69  BV=7.81
    {2138,1152,1080, 0, 0, 0},  //TV = 8.87(59 lines)  AV=2.53  SV=3.69  BV=7.71
    {2319,1152,1064, 0, 0, 0},  //TV = 8.75(64 lines)  AV=2.53  SV=3.67  BV=7.61
    {2464,1152,1072, 0, 0, 0},  //TV = 8.66(68 lines)  AV=2.53  SV=3.68  BV=7.51
    {2645,1152,1072, 0, 0, 0},  //TV = 8.56(73 lines)  AV=2.53  SV=3.68  BV=7.41
    {2826,1152,1080, 0, 0, 0},  //TV = 8.47(78 lines)  AV=2.53  SV=3.69  BV=7.30
    {3043,1152,1072, 0, 0, 0},  //TV = 8.36(84 lines)  AV=2.53  SV=3.68  BV=7.21
    {3261,1152,1072, 0, 0, 0},  //TV = 8.26(90 lines)  AV=2.53  SV=3.68  BV=7.11
    {3514,1152,1072, 0, 0, 0},  //TV = 8.15(97 lines)  AV=2.53  SV=3.68  BV=7.00
    {3732,1152,1072, 0, 0, 0},  //TV = 8.07(103 lines)  AV=2.53  SV=3.68  BV=6.91
    {4021,1152,1072, 0, 0, 0},  //TV = 7.96(111 lines)  AV=2.53  SV=3.68  BV=6.80
    {4347,1152,1064, 0, 0, 0},  //TV = 7.85(120 lines)  AV=2.53  SV=3.67  BV=6.70
    {4601,1152,1072, 0, 0, 0},  //TV = 7.76(127 lines)  AV=2.53  SV=3.68  BV=6.61
    {4927,1152,1072, 0, 0, 0},  //TV = 7.67(136 lines)  AV=2.53  SV=3.68  BV=6.51
    {5289,1152,1072, 0, 0, 0},  //TV = 7.56(146 lines)  AV=2.53  SV=3.68  BV=6.41
    {5688,1152,1072, 0, 0, 0},  //TV = 7.46(157 lines)  AV=2.53  SV=3.68  BV=6.30
    {6123,1152,1064, 0, 0, 0},  //TV = 7.35(169 lines)  AV=2.53  SV=3.67  BV=6.21
    {6557,1152,1064, 0, 0, 0},  //TV = 7.25(181 lines)  AV=2.53  SV=3.67  BV=6.11
    {7028,1152,1064, 0, 0, 0},  //TV = 7.15(194 lines)  AV=2.53  SV=3.67  BV=6.01
    {7499,1152,1072, 0, 0, 0},  //TV = 7.06(207 lines)  AV=2.53  SV=3.68  BV=5.91
    {8115,1152,1064, 0, 0, 0},  //TV = 6.95(224 lines)  AV=2.53  SV=3.67  BV=5.80
    {8332,1216,1056, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=3.74  BV=5.70
    {8332,1280,1064, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=3.82  BV=5.61
    {8332,1408,1040, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=3.93  BV=5.51
    {8332,1472,1064, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.02  BV=5.41
    {8332,1600,1048, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.12  BV=5.31
    {8332,1728,1040, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.22  BV=5.21
    {8332,1856,1040, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.32  BV=5.11
    {8332,1984,1040, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.42  BV=5.01
    {8332,2048,1088, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.53  BV=4.90
    {8332,2304,1032, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.62  BV=4.81
    {16664,1216,1048, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=3.72  BV=4.71
    {16664,1280,1064, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=3.82  BV=4.61
    {16664,1408,1040, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=3.93  BV=4.51
    {16664,1472,1064, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=4.02  BV=4.41
    {16664,1600,1048, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=4.12  BV=4.31
    {16664,1728,1040, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=4.22  BV=4.21
    {16664,1856,1040, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=4.32  BV=4.11
    {16664,1984,1040, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=4.42  BV=4.01
    {16664,2048,1080, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=4.52  BV=3.91
    {16664,2304,1024, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=4.61  BV=3.82
    {16664,2432,1048, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=4.72  BV=3.71
    {16664,2560,1064, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=4.82  BV=3.61
    {16664,2816,1032, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=4.91  BV=3.52
    {16664,2944,1064, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=5.02  BV=3.41
    {16664,3200,1048, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=5.12  BV=3.31
    {16664,3456,1040, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=5.22  BV=3.21
    {16664,3712,1040, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=5.32  BV=3.11
    {16664,3968,1040, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=5.42  BV=3.01
    {16664,4096,1080, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=5.52  BV=2.91
    {24996,3072,1032, 0, 0, 0},  //TV = 5.32(690 lines)  AV=2.53  SV=5.04  BV=2.81
    {24996,3200,1056, 0, 0, 0},  //TV = 5.32(690 lines)  AV=2.53  SV=5.13  BV=2.72
    {24996,3456,1048, 0, 0, 0},  //TV = 5.32(690 lines)  AV=2.53  SV=5.23  BV=2.62
    {24996,3712,1048, 0, 0, 0},  //TV = 5.32(690 lines)  AV=2.53  SV=5.34  BV=2.51
    {24996,3968,1048, 0, 0, 0},  //TV = 5.32(690 lines)  AV=2.53  SV=5.43  BV=2.42
    {33327,3200,1048, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=5.12  BV=2.31
    {33327,3456,1040, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=5.22  BV=2.21
    {33327,3712,1040, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=5.32  BV=2.11
    {33327,3968,1040, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=5.42  BV=2.01
    {33327,4096,1080, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=5.52  BV=1.91
    {33327,4608,1032, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=5.62  BV=1.81
    {33327,4864,1048, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=5.72  BV=1.71
    {33327,5120,1064, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=5.82  BV=1.61
    {33327,5632,1032, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=5.91  BV=1.52
    {33327,6144,1024, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=6.03  BV=1.40
    {33327,6144,1096, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=6.13  BV=1.31
    {33327,6144,1176, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=6.23  BV=1.20
    {33327,6144,1256, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=6.32  BV=1.11
    {33327,6144,1344, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=6.42  BV=1.01
    {33327,6144,1440, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=6.52  BV=0.91
    {33327,6144,1544, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=6.62  BV=0.81
    {33327,6144,1656, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=6.72  BV=0.71
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sCustom4PLineTable_50Hz =
{
{
    {73,1600,1048, 0, 0, 0},  //TV = 13.74(2 lines)  AV=2.53  SV=4.12  BV=12.15
    {73,1664,1040, 0, 0, 0},  //TV = 13.74(2 lines)  AV=2.53  SV=4.17  BV=12.10
    {109,1216,1032, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.70  BV=11.99
    {109,1280,1048, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.80  BV=11.89
    {109,1344,1064, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.89  BV=11.80
    {109,1472,1032, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.98  BV=11.71
    {145,1216,1024, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.69  BV=11.59
    {145,1280,1056, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.81  BV=11.47
    {145,1344,1048, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.87  BV=11.41
    {145,1472,1024, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.97  BV=11.31
    {182,1216,1064, 0, 0, 0},  //TV = 12.42(5 lines)  AV=2.53  SV=3.75  BV=11.20
    {182,1344,1024, 0, 0, 0},  //TV = 12.42(5 lines)  AV=2.53  SV=3.84  BV=11.11
    {218,1152,1072, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.68  BV=11.01
    {218,1280,1032, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.78  BV=10.91
    {218,1344,1056, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.88  BV=10.81
    {254,1216,1072, 0, 0, 0},  //TV = 11.94(7 lines)  AV=2.53  SV=3.76  BV=10.71
    {290,1152,1064, 0, 0, 0},  //TV = 11.75(8 lines)  AV=2.53  SV=3.67  BV=10.61
    {290,1280,1024, 0, 0, 0},  //TV = 11.75(8 lines)  AV=2.53  SV=3.77  BV=10.51
    {327,1216,1024, 0, 0, 0},  //TV = 11.58(9 lines)  AV=2.53  SV=3.69  BV=10.41
    {327,1280,1048, 0, 0, 0},  //TV = 11.58(9 lines)  AV=2.53  SV=3.80  BV=10.31
    {363,1216,1064, 0, 0, 0},  //TV = 11.43(10 lines)  AV=2.53  SV=3.75  BV=10.21
    {399,1216,1032, 0, 0, 0},  //TV = 11.29(11 lines)  AV=2.53  SV=3.70  BV=10.11
    {435,1152,1080, 0, 0, 0},  //TV = 11.17(12 lines)  AV=2.53  SV=3.69  BV=10.00
    {471,1152,1064, 0, 0, 0},  //TV = 11.05(13 lines)  AV=2.53  SV=3.67  BV=9.91
    {471,1280,1024, 0, 0, 0},  //TV = 11.05(13 lines)  AV=2.53  SV=3.77  BV=9.81
    {508,1216,1072, 0, 0, 0},  //TV = 10.94(14 lines)  AV=2.53  SV=3.76  BV=9.71
    {580,1152,1064, 0, 0, 0},  //TV = 10.75(16 lines)  AV=2.53  SV=3.67  BV=9.61
    {616,1152,1072, 0, 0, 0},  //TV = 10.66(17 lines)  AV=2.53  SV=3.68  BV=9.51
    {653,1216,1024, 0, 0, 0},  //TV = 10.58(18 lines)  AV=2.53  SV=3.69  BV=9.42
    {689,1216,1040, 0, 0, 0},  //TV = 10.50(19 lines)  AV=2.53  SV=3.71  BV=9.32
    {761,1152,1072, 0, 0, 0},  //TV = 10.36(21 lines)  AV=2.53  SV=3.68  BV=9.21
    {797,1216,1032, 0, 0, 0},  //TV = 10.29(22 lines)  AV=2.53  SV=3.70  BV=9.12
    {870,1152,1080, 0, 0, 0},  //TV = 10.17(24 lines)  AV=2.53  SV=3.69  BV=9.00
    {942,1152,1064, 0, 0, 0},  //TV = 10.05(26 lines)  AV=2.53  SV=3.67  BV=8.91
    {979,1216,1040, 0, 0, 0},  //TV = 10.00(27 lines)  AV=2.53  SV=3.71  BV=8.81
    {1051,1216,1032, 0, 0, 0},  //TV = 9.89(29 lines)  AV=2.53  SV=3.70  BV=8.72
    {1160,1152,1072, 0, 0, 0},  //TV = 9.75(32 lines)  AV=2.53  SV=3.68  BV=8.60
    {1232,1152,1072, 0, 0, 0},  //TV = 9.66(34 lines)  AV=2.53  SV=3.68  BV=8.51
    {1305,1216,1024, 0, 0, 0},  //TV = 9.58(36 lines)  AV=2.53  SV=3.69  BV=8.42
    {1413,1152,1080, 0, 0, 0},  //TV = 9.47(39 lines)  AV=2.53  SV=3.69  BV=8.30
    {1522,1152,1072, 0, 0, 0},  //TV = 9.36(42 lines)  AV=2.53  SV=3.68  BV=8.21
    {1631,1152,1072, 0, 0, 0},  //TV = 9.26(45 lines)  AV=2.53  SV=3.68  BV=8.11
    {1739,1152,1080, 0, 0, 0},  //TV = 9.17(48 lines)  AV=2.53  SV=3.69  BV=8.00
    {1884,1152,1064, 0, 0, 0},  //TV = 9.05(52 lines)  AV=2.53  SV=3.67  BV=7.91
    {1993,1152,1080, 0, 0, 0},  //TV = 8.97(55 lines)  AV=2.53  SV=3.69  BV=7.81
    {2138,1152,1080, 0, 0, 0},  //TV = 8.87(59 lines)  AV=2.53  SV=3.69  BV=7.71
    {2319,1152,1064, 0, 0, 0},  //TV = 8.75(64 lines)  AV=2.53  SV=3.67  BV=7.61
    {2464,1152,1072, 0, 0, 0},  //TV = 8.66(68 lines)  AV=2.53  SV=3.68  BV=7.51
    {2645,1152,1072, 0, 0, 0},  //TV = 8.56(73 lines)  AV=2.53  SV=3.68  BV=7.41
    {2826,1152,1080, 0, 0, 0},  //TV = 8.47(78 lines)  AV=2.53  SV=3.69  BV=7.30
    {3043,1152,1072, 0, 0, 0},  //TV = 8.36(84 lines)  AV=2.53  SV=3.68  BV=7.21
    {3261,1152,1072, 0, 0, 0},  //TV = 8.26(90 lines)  AV=2.53  SV=3.68  BV=7.11
    {3514,1152,1072, 0, 0, 0},  //TV = 8.15(97 lines)  AV=2.53  SV=3.68  BV=7.00
    {3732,1152,1072, 0, 0, 0},  //TV = 8.07(103 lines)  AV=2.53  SV=3.68  BV=6.91
    {4021,1152,1072, 0, 0, 0},  //TV = 7.96(111 lines)  AV=2.53  SV=3.68  BV=6.80
    {4347,1152,1064, 0, 0, 0},  //TV = 7.85(120 lines)  AV=2.53  SV=3.67  BV=6.70
    {4601,1152,1072, 0, 0, 0},  //TV = 7.76(127 lines)  AV=2.53  SV=3.68  BV=6.61
    {4927,1152,1072, 0, 0, 0},  //TV = 7.67(136 lines)  AV=2.53  SV=3.68  BV=6.51
    {5289,1152,1072, 0, 0, 0},  //TV = 7.56(146 lines)  AV=2.53  SV=3.68  BV=6.41
    {5688,1152,1072, 0, 0, 0},  //TV = 7.46(157 lines)  AV=2.53  SV=3.68  BV=6.30
    {6123,1152,1064, 0, 0, 0},  //TV = 7.35(169 lines)  AV=2.53  SV=3.67  BV=6.21
    {6557,1152,1064, 0, 0, 0},  //TV = 7.25(181 lines)  AV=2.53  SV=3.67  BV=6.11
    {7028,1152,1064, 0, 0, 0},  //TV = 7.15(194 lines)  AV=2.53  SV=3.67  BV=6.01
    {7499,1152,1072, 0, 0, 0},  //TV = 7.06(207 lines)  AV=2.53  SV=3.68  BV=5.91
    {8115,1152,1064, 0, 0, 0},  //TV = 6.95(224 lines)  AV=2.53  SV=3.67  BV=5.80
    {8694,1152,1064, 0, 0, 0},  //TV = 6.85(240 lines)  AV=2.53  SV=3.67  BV=5.70
    {9310,1152,1064, 0, 0, 0},  //TV = 6.75(257 lines)  AV=2.53  SV=3.67  BV=5.60
    {9962,1152,1064, 0, 0, 0},  //TV = 6.65(275 lines)  AV=2.53  SV=3.67  BV=5.51
    {9999,1216,1072, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=3.76  BV=5.41
    {9999,1344,1040, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=3.86  BV=5.31
    {9999,1408,1064, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=3.96  BV=5.21
    {9999,1536,1048, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.06  BV=5.11
    {9999,1664,1032, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.16  BV=5.01
    {9999,1792,1032, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.26  BV=4.91
    {9999,1920,1032, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.36  BV=4.81
    {9999,2048,1032, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.45  BV=4.72
    {9999,2176,1040, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.55  BV=4.62
    {9999,2304,1056, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.66  BV=4.51
    {9999,2432,1072, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.76  BV=4.41
    {9999,2688,1048, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.87  BV=4.30
    {9999,2816,1064, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.96  BV=4.21
    {9999,3072,1048, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.06  BV=4.11
    {9999,3328,1032, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.16  BV=4.01
    {9999,3584,1024, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.25  BV=3.92
    {9999,3840,1032, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.36  BV=3.81
    {9999,4096,1040, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.47  BV=3.70
    {9999,4352,1040, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.55  BV=3.62
    {9999,4608,1056, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.66  BV=3.51
    {9999,4864,1072, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.76  BV=3.41
    {9999,5376,1040, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.86  BV=3.31
    {9999,5632,1064, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.96  BV=3.21
    {19997,3072,1048, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=5.06  BV=3.11
    {19997,3328,1032, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=5.16  BV=3.01
    {19997,3584,1032, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=5.26  BV=2.91
    {19997,3840,1032, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=5.36  BV=2.81
    {19997,4096,1032, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=5.45  BV=2.72
    {19997,4352,1040, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=5.55  BV=2.62
    {29995,3072,1056, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.07  BV=2.51
    {29995,3328,1048, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.18  BV=2.41
    {29995,3584,1040, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.27  BV=2.31
    {29995,3840,1040, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.37  BV=2.21
    {29995,4096,1048, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.48  BV=2.11
    {29995,4352,1056, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.58  BV=2.01
    {29995,4608,1072, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.68  BV=1.91
    {29995,5120,1032, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.78  BV=1.81
    {29995,5376,1048, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.87  BV=1.72
    {29995,5888,1024, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.97  BV=1.62
    {29995,6144,1064, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.08  BV=1.50
    {29995,6144,1136, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.18  BV=1.41
    {29995,6144,1216, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.28  BV=1.31
    {29995,6144,1304, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.38  BV=1.21
    {29995,6144,1400, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.48  BV=1.11
    {29995,6144,1496, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.58  BV=1.01
    {29995,6144,1600, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.67  BV=0.91
    {29995,6144,1720, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.78  BV=0.81
    {29995,6144,1840, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.87  BV=0.71
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_Custom4AutoTable =
{
    AETABLE_CUSTOM4_AUTO,    //eAETableID
    116,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    122,    //i4MaxBV
    7,    //i4MinBV
    90,    //i4EffectiveMaxBV
    -30,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO SPEED
    sCustom4PLineTable_60Hz,
    sCustom4PLineTable_50Hz,
    NULL,
};

static strEvPline sCustom5PLineTable_60Hz =
{
{
    {73,1600,1048, 0, 0, 0},  //TV = 13.74(2 lines)  AV=2.53  SV=4.12  BV=12.15
    {73,1664,1040, 0, 0, 0},  //TV = 13.74(2 lines)  AV=2.53  SV=4.17  BV=12.10
    {109,1216,1032, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.70  BV=11.99
    {109,1280,1048, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.80  BV=11.89
    {109,1344,1064, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.89  BV=11.80
    {109,1472,1032, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.98  BV=11.71
    {145,1216,1024, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.69  BV=11.59
    {145,1280,1056, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.81  BV=11.47
    {145,1344,1048, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.87  BV=11.41
    {145,1472,1024, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.97  BV=11.31
    {182,1216,1064, 0, 0, 0},  //TV = 12.42(5 lines)  AV=2.53  SV=3.75  BV=11.20
    {182,1344,1024, 0, 0, 0},  //TV = 12.42(5 lines)  AV=2.53  SV=3.84  BV=11.11
    {218,1152,1072, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.68  BV=11.01
    {218,1280,1032, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.78  BV=10.91
    {218,1344,1056, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.88  BV=10.81
    {254,1216,1072, 0, 0, 0},  //TV = 11.94(7 lines)  AV=2.53  SV=3.76  BV=10.71
    {290,1152,1064, 0, 0, 0},  //TV = 11.75(8 lines)  AV=2.53  SV=3.67  BV=10.61
    {290,1280,1024, 0, 0, 0},  //TV = 11.75(8 lines)  AV=2.53  SV=3.77  BV=10.51
    {327,1216,1024, 0, 0, 0},  //TV = 11.58(9 lines)  AV=2.53  SV=3.69  BV=10.41
    {327,1280,1048, 0, 0, 0},  //TV = 11.58(9 lines)  AV=2.53  SV=3.80  BV=10.31
    {363,1216,1064, 0, 0, 0},  //TV = 11.43(10 lines)  AV=2.53  SV=3.75  BV=10.21
    {399,1216,1032, 0, 0, 0},  //TV = 11.29(11 lines)  AV=2.53  SV=3.70  BV=10.11
    {435,1152,1080, 0, 0, 0},  //TV = 11.17(12 lines)  AV=2.53  SV=3.69  BV=10.00
    {471,1152,1064, 0, 0, 0},  //TV = 11.05(13 lines)  AV=2.53  SV=3.67  BV=9.91
    {471,1280,1024, 0, 0, 0},  //TV = 11.05(13 lines)  AV=2.53  SV=3.77  BV=9.81
    {508,1216,1072, 0, 0, 0},  //TV = 10.94(14 lines)  AV=2.53  SV=3.76  BV=9.71
    {580,1152,1064, 0, 0, 0},  //TV = 10.75(16 lines)  AV=2.53  SV=3.67  BV=9.61
    {616,1152,1072, 0, 0, 0},  //TV = 10.66(17 lines)  AV=2.53  SV=3.68  BV=9.51
    {653,1216,1024, 0, 0, 0},  //TV = 10.58(18 lines)  AV=2.53  SV=3.69  BV=9.42
    {689,1216,1040, 0, 0, 0},  //TV = 10.50(19 lines)  AV=2.53  SV=3.71  BV=9.32
    {761,1152,1072, 0, 0, 0},  //TV = 10.36(21 lines)  AV=2.53  SV=3.68  BV=9.21
    {797,1216,1032, 0, 0, 0},  //TV = 10.29(22 lines)  AV=2.53  SV=3.70  BV=9.12
    {870,1152,1080, 0, 0, 0},  //TV = 10.17(24 lines)  AV=2.53  SV=3.69  BV=9.00
    {942,1152,1064, 0, 0, 0},  //TV = 10.05(26 lines)  AV=2.53  SV=3.67  BV=8.91
    {979,1216,1040, 0, 0, 0},  //TV = 10.00(27 lines)  AV=2.53  SV=3.71  BV=8.81
    {1051,1216,1032, 0, 0, 0},  //TV = 9.89(29 lines)  AV=2.53  SV=3.70  BV=8.72
    {1160,1152,1072, 0, 0, 0},  //TV = 9.75(32 lines)  AV=2.53  SV=3.68  BV=8.60
    {1232,1152,1072, 0, 0, 0},  //TV = 9.66(34 lines)  AV=2.53  SV=3.68  BV=8.51
    {1305,1216,1024, 0, 0, 0},  //TV = 9.58(36 lines)  AV=2.53  SV=3.69  BV=8.42
    {1413,1152,1080, 0, 0, 0},  //TV = 9.47(39 lines)  AV=2.53  SV=3.69  BV=8.30
    {1522,1152,1072, 0, 0, 0},  //TV = 9.36(42 lines)  AV=2.53  SV=3.68  BV=8.21
    {1631,1152,1072, 0, 0, 0},  //TV = 9.26(45 lines)  AV=2.53  SV=3.68  BV=8.11
    {1739,1152,1080, 0, 0, 0},  //TV = 9.17(48 lines)  AV=2.53  SV=3.69  BV=8.00
    {1884,1152,1064, 0, 0, 0},  //TV = 9.05(52 lines)  AV=2.53  SV=3.67  BV=7.91
    {1993,1152,1080, 0, 0, 0},  //TV = 8.97(55 lines)  AV=2.53  SV=3.69  BV=7.81
    {2138,1152,1080, 0, 0, 0},  //TV = 8.87(59 lines)  AV=2.53  SV=3.69  BV=7.71
    {2319,1152,1064, 0, 0, 0},  //TV = 8.75(64 lines)  AV=2.53  SV=3.67  BV=7.61
    {2464,1152,1072, 0, 0, 0},  //TV = 8.66(68 lines)  AV=2.53  SV=3.68  BV=7.51
    {2645,1152,1072, 0, 0, 0},  //TV = 8.56(73 lines)  AV=2.53  SV=3.68  BV=7.41
    {2826,1152,1080, 0, 0, 0},  //TV = 8.47(78 lines)  AV=2.53  SV=3.69  BV=7.30
    {3043,1152,1072, 0, 0, 0},  //TV = 8.36(84 lines)  AV=2.53  SV=3.68  BV=7.21
    {3261,1152,1072, 0, 0, 0},  //TV = 8.26(90 lines)  AV=2.53  SV=3.68  BV=7.11
    {3514,1152,1072, 0, 0, 0},  //TV = 8.15(97 lines)  AV=2.53  SV=3.68  BV=7.00
    {3732,1152,1072, 0, 0, 0},  //TV = 8.07(103 lines)  AV=2.53  SV=3.68  BV=6.91
    {4021,1152,1072, 0, 0, 0},  //TV = 7.96(111 lines)  AV=2.53  SV=3.68  BV=6.80
    {4347,1152,1064, 0, 0, 0},  //TV = 7.85(120 lines)  AV=2.53  SV=3.67  BV=6.70
    {4601,1152,1072, 0, 0, 0},  //TV = 7.76(127 lines)  AV=2.53  SV=3.68  BV=6.61
    {4927,1152,1072, 0, 0, 0},  //TV = 7.67(136 lines)  AV=2.53  SV=3.68  BV=6.51
    {5289,1152,1072, 0, 0, 0},  //TV = 7.56(146 lines)  AV=2.53  SV=3.68  BV=6.41
    {5688,1152,1072, 0, 0, 0},  //TV = 7.46(157 lines)  AV=2.53  SV=3.68  BV=6.30
    {6123,1152,1064, 0, 0, 0},  //TV = 7.35(169 lines)  AV=2.53  SV=3.67  BV=6.21
    {6557,1152,1064, 0, 0, 0},  //TV = 7.25(181 lines)  AV=2.53  SV=3.67  BV=6.11
    {7028,1152,1064, 0, 0, 0},  //TV = 7.15(194 lines)  AV=2.53  SV=3.67  BV=6.01
    {7499,1152,1072, 0, 0, 0},  //TV = 7.06(207 lines)  AV=2.53  SV=3.68  BV=5.91
    {8115,1152,1064, 0, 0, 0},  //TV = 6.95(224 lines)  AV=2.53  SV=3.67  BV=5.80
    {8332,1216,1056, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=3.74  BV=5.70
    {8332,1280,1064, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=3.82  BV=5.61
    {8332,1408,1040, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=3.93  BV=5.51
    {8332,1472,1064, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.02  BV=5.41
    {8332,1600,1048, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.12  BV=5.31
    {8332,1728,1040, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.22  BV=5.21
    {8332,1856,1040, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.32  BV=5.11
    {8332,1984,1040, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.42  BV=5.01
    {8332,2048,1088, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.53  BV=4.90
    {8332,2304,1032, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.62  BV=4.81
    {16664,1216,1048, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=3.72  BV=4.71
    {16664,1280,1064, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=3.82  BV=4.61
    {16664,1408,1040, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=3.93  BV=4.51
    {16664,1472,1064, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=4.02  BV=4.41
    {16664,1600,1048, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=4.12  BV=4.31
    {16664,1728,1040, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=4.22  BV=4.21
    {16664,1856,1040, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=4.32  BV=4.11
    {16664,1984,1040, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=4.42  BV=4.01
    {16664,2048,1080, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=4.52  BV=3.91
    {16664,2304,1024, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=4.61  BV=3.82
    {16664,2432,1048, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=4.72  BV=3.71
    {16664,2560,1064, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=4.82  BV=3.61
    {16664,2816,1032, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=4.91  BV=3.52
    {16664,2944,1064, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=5.02  BV=3.41
    {16664,3200,1048, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=5.12  BV=3.31
    {16664,3456,1040, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=5.22  BV=3.21
    {16664,3712,1040, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=5.32  BV=3.11
    {16664,3968,1040, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=5.42  BV=3.01
    {16664,4096,1080, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=5.52  BV=2.91
    {24996,3072,1032, 0, 0, 0},  //TV = 5.32(690 lines)  AV=2.53  SV=5.04  BV=2.81
    {24996,3200,1056, 0, 0, 0},  //TV = 5.32(690 lines)  AV=2.53  SV=5.13  BV=2.72
    {24996,3456,1048, 0, 0, 0},  //TV = 5.32(690 lines)  AV=2.53  SV=5.23  BV=2.62
    {24996,3712,1048, 0, 0, 0},  //TV = 5.32(690 lines)  AV=2.53  SV=5.34  BV=2.51
    {24996,3968,1048, 0, 0, 0},  //TV = 5.32(690 lines)  AV=2.53  SV=5.43  BV=2.42
    {33327,3200,1048, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=5.12  BV=2.31
    {33327,3456,1040, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=5.22  BV=2.21
    {33327,3712,1040, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=5.32  BV=2.11
    {33327,3968,1040, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=5.42  BV=2.01
    {33327,4096,1080, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=5.52  BV=1.91
    {33327,4608,1032, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=5.62  BV=1.81
    {33327,4864,1048, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=5.72  BV=1.71
    {33327,5120,1064, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=5.82  BV=1.61
    {33327,5632,1032, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=5.91  BV=1.52
    {33327,6144,1024, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=6.03  BV=1.40
    {33327,6144,1096, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=6.13  BV=1.31
    {33327,6144,1176, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=6.23  BV=1.20
    {33327,6144,1256, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=6.32  BV=1.11
    {33327,6144,1344, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=6.42  BV=1.01
    {33327,6144,1440, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=6.52  BV=0.91
    {33327,6144,1544, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=6.62  BV=0.81
    {33327,6144,1656, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=6.72  BV=0.71
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sCustom5PLineTable_50Hz =
{
{
    {73,1600,1048, 0, 0, 0},  //TV = 13.74(2 lines)  AV=2.53  SV=4.12  BV=12.15
    {73,1664,1040, 0, 0, 0},  //TV = 13.74(2 lines)  AV=2.53  SV=4.17  BV=12.10
    {109,1216,1032, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.70  BV=11.99
    {109,1280,1048, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.80  BV=11.89
    {109,1344,1064, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.89  BV=11.80
    {109,1472,1032, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.98  BV=11.71
    {145,1216,1024, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.69  BV=11.59
    {145,1280,1056, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.81  BV=11.47
    {145,1344,1048, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.87  BV=11.41
    {145,1472,1024, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.97  BV=11.31
    {182,1216,1064, 0, 0, 0},  //TV = 12.42(5 lines)  AV=2.53  SV=3.75  BV=11.20
    {182,1344,1024, 0, 0, 0},  //TV = 12.42(5 lines)  AV=2.53  SV=3.84  BV=11.11
    {218,1152,1072, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.68  BV=11.01
    {218,1280,1032, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.78  BV=10.91
    {218,1344,1056, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.88  BV=10.81
    {254,1216,1072, 0, 0, 0},  //TV = 11.94(7 lines)  AV=2.53  SV=3.76  BV=10.71
    {290,1152,1064, 0, 0, 0},  //TV = 11.75(8 lines)  AV=2.53  SV=3.67  BV=10.61
    {290,1280,1024, 0, 0, 0},  //TV = 11.75(8 lines)  AV=2.53  SV=3.77  BV=10.51
    {327,1216,1024, 0, 0, 0},  //TV = 11.58(9 lines)  AV=2.53  SV=3.69  BV=10.41
    {327,1280,1048, 0, 0, 0},  //TV = 11.58(9 lines)  AV=2.53  SV=3.80  BV=10.31
    {363,1216,1064, 0, 0, 0},  //TV = 11.43(10 lines)  AV=2.53  SV=3.75  BV=10.21
    {399,1216,1032, 0, 0, 0},  //TV = 11.29(11 lines)  AV=2.53  SV=3.70  BV=10.11
    {435,1152,1080, 0, 0, 0},  //TV = 11.17(12 lines)  AV=2.53  SV=3.69  BV=10.00
    {471,1152,1064, 0, 0, 0},  //TV = 11.05(13 lines)  AV=2.53  SV=3.67  BV=9.91
    {471,1280,1024, 0, 0, 0},  //TV = 11.05(13 lines)  AV=2.53  SV=3.77  BV=9.81
    {508,1216,1072, 0, 0, 0},  //TV = 10.94(14 lines)  AV=2.53  SV=3.76  BV=9.71
    {580,1152,1064, 0, 0, 0},  //TV = 10.75(16 lines)  AV=2.53  SV=3.67  BV=9.61
    {616,1152,1072, 0, 0, 0},  //TV = 10.66(17 lines)  AV=2.53  SV=3.68  BV=9.51
    {653,1216,1024, 0, 0, 0},  //TV = 10.58(18 lines)  AV=2.53  SV=3.69  BV=9.42
    {689,1216,1040, 0, 0, 0},  //TV = 10.50(19 lines)  AV=2.53  SV=3.71  BV=9.32
    {761,1152,1072, 0, 0, 0},  //TV = 10.36(21 lines)  AV=2.53  SV=3.68  BV=9.21
    {797,1216,1032, 0, 0, 0},  //TV = 10.29(22 lines)  AV=2.53  SV=3.70  BV=9.12
    {870,1152,1080, 0, 0, 0},  //TV = 10.17(24 lines)  AV=2.53  SV=3.69  BV=9.00
    {942,1152,1064, 0, 0, 0},  //TV = 10.05(26 lines)  AV=2.53  SV=3.67  BV=8.91
    {979,1216,1040, 0, 0, 0},  //TV = 10.00(27 lines)  AV=2.53  SV=3.71  BV=8.81
    {1051,1216,1032, 0, 0, 0},  //TV = 9.89(29 lines)  AV=2.53  SV=3.70  BV=8.72
    {1160,1152,1072, 0, 0, 0},  //TV = 9.75(32 lines)  AV=2.53  SV=3.68  BV=8.60
    {1232,1152,1072, 0, 0, 0},  //TV = 9.66(34 lines)  AV=2.53  SV=3.68  BV=8.51
    {1305,1216,1024, 0, 0, 0},  //TV = 9.58(36 lines)  AV=2.53  SV=3.69  BV=8.42
    {1413,1152,1080, 0, 0, 0},  //TV = 9.47(39 lines)  AV=2.53  SV=3.69  BV=8.30
    {1522,1152,1072, 0, 0, 0},  //TV = 9.36(42 lines)  AV=2.53  SV=3.68  BV=8.21
    {1631,1152,1072, 0, 0, 0},  //TV = 9.26(45 lines)  AV=2.53  SV=3.68  BV=8.11
    {1739,1152,1080, 0, 0, 0},  //TV = 9.17(48 lines)  AV=2.53  SV=3.69  BV=8.00
    {1884,1152,1064, 0, 0, 0},  //TV = 9.05(52 lines)  AV=2.53  SV=3.67  BV=7.91
    {1993,1152,1080, 0, 0, 0},  //TV = 8.97(55 lines)  AV=2.53  SV=3.69  BV=7.81
    {2138,1152,1080, 0, 0, 0},  //TV = 8.87(59 lines)  AV=2.53  SV=3.69  BV=7.71
    {2319,1152,1064, 0, 0, 0},  //TV = 8.75(64 lines)  AV=2.53  SV=3.67  BV=7.61
    {2464,1152,1072, 0, 0, 0},  //TV = 8.66(68 lines)  AV=2.53  SV=3.68  BV=7.51
    {2645,1152,1072, 0, 0, 0},  //TV = 8.56(73 lines)  AV=2.53  SV=3.68  BV=7.41
    {2826,1152,1080, 0, 0, 0},  //TV = 8.47(78 lines)  AV=2.53  SV=3.69  BV=7.30
    {3043,1152,1072, 0, 0, 0},  //TV = 8.36(84 lines)  AV=2.53  SV=3.68  BV=7.21
    {3261,1152,1072, 0, 0, 0},  //TV = 8.26(90 lines)  AV=2.53  SV=3.68  BV=7.11
    {3514,1152,1072, 0, 0, 0},  //TV = 8.15(97 lines)  AV=2.53  SV=3.68  BV=7.00
    {3732,1152,1072, 0, 0, 0},  //TV = 8.07(103 lines)  AV=2.53  SV=3.68  BV=6.91
    {4021,1152,1072, 0, 0, 0},  //TV = 7.96(111 lines)  AV=2.53  SV=3.68  BV=6.80
    {4347,1152,1064, 0, 0, 0},  //TV = 7.85(120 lines)  AV=2.53  SV=3.67  BV=6.70
    {4601,1152,1072, 0, 0, 0},  //TV = 7.76(127 lines)  AV=2.53  SV=3.68  BV=6.61
    {4927,1152,1072, 0, 0, 0},  //TV = 7.67(136 lines)  AV=2.53  SV=3.68  BV=6.51
    {5289,1152,1072, 0, 0, 0},  //TV = 7.56(146 lines)  AV=2.53  SV=3.68  BV=6.41
    {5688,1152,1072, 0, 0, 0},  //TV = 7.46(157 lines)  AV=2.53  SV=3.68  BV=6.30
    {6123,1152,1064, 0, 0, 0},  //TV = 7.35(169 lines)  AV=2.53  SV=3.67  BV=6.21
    {6557,1152,1064, 0, 0, 0},  //TV = 7.25(181 lines)  AV=2.53  SV=3.67  BV=6.11
    {7028,1152,1064, 0, 0, 0},  //TV = 7.15(194 lines)  AV=2.53  SV=3.67  BV=6.01
    {7499,1152,1072, 0, 0, 0},  //TV = 7.06(207 lines)  AV=2.53  SV=3.68  BV=5.91
    {8115,1152,1064, 0, 0, 0},  //TV = 6.95(224 lines)  AV=2.53  SV=3.67  BV=5.80
    {8694,1152,1064, 0, 0, 0},  //TV = 6.85(240 lines)  AV=2.53  SV=3.67  BV=5.70
    {9310,1152,1064, 0, 0, 0},  //TV = 6.75(257 lines)  AV=2.53  SV=3.67  BV=5.60
    {9962,1152,1064, 0, 0, 0},  //TV = 6.65(275 lines)  AV=2.53  SV=3.67  BV=5.51
    {9999,1216,1072, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=3.76  BV=5.41
    {9999,1344,1040, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=3.86  BV=5.31
    {9999,1408,1064, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=3.96  BV=5.21
    {9999,1536,1048, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.06  BV=5.11
    {9999,1664,1032, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.16  BV=5.01
    {9999,1792,1032, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.26  BV=4.91
    {9999,1920,1032, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.36  BV=4.81
    {9999,2048,1032, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.45  BV=4.72
    {9999,2176,1040, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.55  BV=4.62
    {9999,2304,1056, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.66  BV=4.51
    {9999,2432,1072, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.76  BV=4.41
    {9999,2688,1048, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.87  BV=4.30
    {9999,2816,1064, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.96  BV=4.21
    {9999,3072,1048, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.06  BV=4.11
    {9999,3328,1032, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.16  BV=4.01
    {9999,3584,1024, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.25  BV=3.92
    {9999,3840,1032, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.36  BV=3.81
    {9999,4096,1040, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.47  BV=3.70
    {9999,4352,1040, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.55  BV=3.62
    {9999,4608,1056, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.66  BV=3.51
    {9999,4864,1072, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.76  BV=3.41
    {9999,5376,1040, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.86  BV=3.31
    {9999,5632,1064, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.96  BV=3.21
    {19997,3072,1048, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=5.06  BV=3.11
    {19997,3328,1032, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=5.16  BV=3.01
    {19997,3584,1032, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=5.26  BV=2.91
    {19997,3840,1032, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=5.36  BV=2.81
    {19997,4096,1032, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=5.45  BV=2.72
    {19997,4352,1040, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=5.55  BV=2.62
    {29995,3072,1056, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.07  BV=2.51
    {29995,3328,1048, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.18  BV=2.41
    {29995,3584,1040, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.27  BV=2.31
    {29995,3840,1040, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.37  BV=2.21
    {29995,4096,1048, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.48  BV=2.11
    {29995,4352,1056, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.58  BV=2.01
    {29995,4608,1072, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.68  BV=1.91
    {29995,5120,1032, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.78  BV=1.81
    {29995,5376,1048, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.87  BV=1.72
    {29995,5888,1024, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.97  BV=1.62
    {29995,6144,1064, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.08  BV=1.50
    {29995,6144,1136, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.18  BV=1.41
    {29995,6144,1216, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.28  BV=1.31
    {29995,6144,1304, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.38  BV=1.21
    {29995,6144,1400, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.48  BV=1.11
    {29995,6144,1496, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.58  BV=1.01
    {29995,6144,1600, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.67  BV=0.91
    {29995,6144,1720, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.78  BV=0.81
    {29995,6144,1840, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.87  BV=0.71
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_Custom5AutoTable =
{
    AETABLE_CUSTOM5_AUTO,    //eAETableID
    116,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    122,    //i4MaxBV
    7,    //i4MinBV
    90,    //i4EffectiveMaxBV
    -30,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO SPEED
    sCustom5PLineTable_60Hz,
    sCustom5PLineTable_50Hz,
    NULL,
};

static strEvPline sVideoNightPLineTable_60Hz =
{
{
    {73,1600,1048, 0, 0, 0},  //TV = 13.74(2 lines)  AV=2.53  SV=4.12  BV=12.15
    {73,1664,1040, 0, 0, 0},  //TV = 13.74(2 lines)  AV=2.53  SV=4.17  BV=12.10
    {109,1216,1032, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.70  BV=11.99
    {109,1280,1048, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.80  BV=11.89
    {109,1344,1064, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.89  BV=11.80
    {109,1472,1032, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.98  BV=11.71
    {145,1216,1024, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.69  BV=11.59
    {145,1280,1056, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.81  BV=11.47
    {145,1344,1048, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.87  BV=11.41
    {145,1472,1024, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.97  BV=11.31
    {182,1216,1064, 0, 0, 0},  //TV = 12.42(5 lines)  AV=2.53  SV=3.75  BV=11.20
    {182,1344,1024, 0, 0, 0},  //TV = 12.42(5 lines)  AV=2.53  SV=3.84  BV=11.11
    {218,1152,1072, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.68  BV=11.01
    {218,1280,1032, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.78  BV=10.91
    {218,1344,1056, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.88  BV=10.81
    {254,1216,1072, 0, 0, 0},  //TV = 11.94(7 lines)  AV=2.53  SV=3.76  BV=10.71
    {290,1152,1064, 0, 0, 0},  //TV = 11.75(8 lines)  AV=2.53  SV=3.67  BV=10.61
    {290,1280,1024, 0, 0, 0},  //TV = 11.75(8 lines)  AV=2.53  SV=3.77  BV=10.51
    {327,1216,1024, 0, 0, 0},  //TV = 11.58(9 lines)  AV=2.53  SV=3.69  BV=10.41
    {327,1280,1048, 0, 0, 0},  //TV = 11.58(9 lines)  AV=2.53  SV=3.80  BV=10.31
    {363,1216,1064, 0, 0, 0},  //TV = 11.43(10 lines)  AV=2.53  SV=3.75  BV=10.21
    {399,1216,1032, 0, 0, 0},  //TV = 11.29(11 lines)  AV=2.53  SV=3.70  BV=10.11
    {435,1152,1080, 0, 0, 0},  //TV = 11.17(12 lines)  AV=2.53  SV=3.69  BV=10.00
    {471,1152,1064, 0, 0, 0},  //TV = 11.05(13 lines)  AV=2.53  SV=3.67  BV=9.91
    {471,1280,1024, 0, 0, 0},  //TV = 11.05(13 lines)  AV=2.53  SV=3.77  BV=9.81
    {508,1216,1072, 0, 0, 0},  //TV = 10.94(14 lines)  AV=2.53  SV=3.76  BV=9.71
    {580,1152,1064, 0, 0, 0},  //TV = 10.75(16 lines)  AV=2.53  SV=3.67  BV=9.61
    {616,1152,1072, 0, 0, 0},  //TV = 10.66(17 lines)  AV=2.53  SV=3.68  BV=9.51
    {653,1216,1024, 0, 0, 0},  //TV = 10.58(18 lines)  AV=2.53  SV=3.69  BV=9.42
    {689,1216,1040, 0, 0, 0},  //TV = 10.50(19 lines)  AV=2.53  SV=3.71  BV=9.32
    {761,1152,1072, 0, 0, 0},  //TV = 10.36(21 lines)  AV=2.53  SV=3.68  BV=9.21
    {797,1216,1032, 0, 0, 0},  //TV = 10.29(22 lines)  AV=2.53  SV=3.70  BV=9.12
    {870,1152,1080, 0, 0, 0},  //TV = 10.17(24 lines)  AV=2.53  SV=3.69  BV=9.00
    {942,1152,1064, 0, 0, 0},  //TV = 10.05(26 lines)  AV=2.53  SV=3.67  BV=8.91
    {979,1216,1040, 0, 0, 0},  //TV = 10.00(27 lines)  AV=2.53  SV=3.71  BV=8.81
    {1051,1216,1032, 0, 0, 0},  //TV = 9.89(29 lines)  AV=2.53  SV=3.70  BV=8.72
    {1160,1152,1072, 0, 0, 0},  //TV = 9.75(32 lines)  AV=2.53  SV=3.68  BV=8.60
    {1232,1152,1072, 0, 0, 0},  //TV = 9.66(34 lines)  AV=2.53  SV=3.68  BV=8.51
    {1305,1216,1024, 0, 0, 0},  //TV = 9.58(36 lines)  AV=2.53  SV=3.69  BV=8.42
    {1413,1152,1080, 0, 0, 0},  //TV = 9.47(39 lines)  AV=2.53  SV=3.69  BV=8.30
    {1522,1152,1072, 0, 0, 0},  //TV = 9.36(42 lines)  AV=2.53  SV=3.68  BV=8.21
    {1631,1152,1072, 0, 0, 0},  //TV = 9.26(45 lines)  AV=2.53  SV=3.68  BV=8.11
    {1739,1152,1080, 0, 0, 0},  //TV = 9.17(48 lines)  AV=2.53  SV=3.69  BV=8.00
    {1884,1152,1064, 0, 0, 0},  //TV = 9.05(52 lines)  AV=2.53  SV=3.67  BV=7.91
    {1993,1152,1080, 0, 0, 0},  //TV = 8.97(55 lines)  AV=2.53  SV=3.69  BV=7.81
    {2138,1152,1080, 0, 0, 0},  //TV = 8.87(59 lines)  AV=2.53  SV=3.69  BV=7.71
    {2319,1152,1064, 0, 0, 0},  //TV = 8.75(64 lines)  AV=2.53  SV=3.67  BV=7.61
    {2464,1152,1072, 0, 0, 0},  //TV = 8.66(68 lines)  AV=2.53  SV=3.68  BV=7.51
    {2645,1152,1072, 0, 0, 0},  //TV = 8.56(73 lines)  AV=2.53  SV=3.68  BV=7.41
    {2826,1152,1080, 0, 0, 0},  //TV = 8.47(78 lines)  AV=2.53  SV=3.69  BV=7.30
    {3043,1152,1072, 0, 0, 0},  //TV = 8.36(84 lines)  AV=2.53  SV=3.68  BV=7.21
    {3261,1152,1072, 0, 0, 0},  //TV = 8.26(90 lines)  AV=2.53  SV=3.68  BV=7.11
    {3514,1152,1072, 0, 0, 0},  //TV = 8.15(97 lines)  AV=2.53  SV=3.68  BV=7.00
    {3732,1152,1072, 0, 0, 0},  //TV = 8.07(103 lines)  AV=2.53  SV=3.68  BV=6.91
    {4021,1152,1072, 0, 0, 0},  //TV = 7.96(111 lines)  AV=2.53  SV=3.68  BV=6.80
    {4347,1152,1064, 0, 0, 0},  //TV = 7.85(120 lines)  AV=2.53  SV=3.67  BV=6.70
    {4601,1152,1072, 0, 0, 0},  //TV = 7.76(127 lines)  AV=2.53  SV=3.68  BV=6.61
    {4927,1152,1072, 0, 0, 0},  //TV = 7.67(136 lines)  AV=2.53  SV=3.68  BV=6.51
    {5289,1152,1072, 0, 0, 0},  //TV = 7.56(146 lines)  AV=2.53  SV=3.68  BV=6.41
    {5688,1152,1072, 0, 0, 0},  //TV = 7.46(157 lines)  AV=2.53  SV=3.68  BV=6.30
    {6123,1152,1064, 0, 0, 0},  //TV = 7.35(169 lines)  AV=2.53  SV=3.67  BV=6.21
    {6557,1152,1064, 0, 0, 0},  //TV = 7.25(181 lines)  AV=2.53  SV=3.67  BV=6.11
    {7028,1152,1064, 0, 0, 0},  //TV = 7.15(194 lines)  AV=2.53  SV=3.67  BV=6.01
    {7499,1152,1072, 0, 0, 0},  //TV = 7.06(207 lines)  AV=2.53  SV=3.68  BV=5.91
    {8115,1152,1064, 0, 0, 0},  //TV = 6.95(224 lines)  AV=2.53  SV=3.67  BV=5.80
    {8332,1216,1056, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=3.74  BV=5.70
    {8332,1280,1064, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=3.82  BV=5.61
    {8332,1408,1040, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=3.93  BV=5.51
    {8332,1472,1064, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.02  BV=5.41
    {8332,1600,1048, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.12  BV=5.31
    {8332,1728,1040, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.22  BV=5.21
    {8332,1856,1040, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.32  BV=5.11
    {8332,1984,1040, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.42  BV=5.01
    {8332,2048,1088, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.53  BV=4.90
    {8332,2304,1032, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.62  BV=4.81
    {16664,1216,1048, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=3.72  BV=4.71
    {16664,1280,1064, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=3.82  BV=4.61
    {16664,1408,1040, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=3.93  BV=4.51
    {16664,1472,1064, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=4.02  BV=4.41
    {16664,1600,1056, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=4.13  BV=4.30
    {16664,1728,1040, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=4.22  BV=4.21
    {24996,1216,1064, 0, 0, 0},  //TV = 5.32(690 lines)  AV=2.53  SV=3.75  BV=4.10
    {24996,1344,1024, 0, 0, 0},  //TV = 5.32(690 lines)  AV=2.53  SV=3.84  BV=4.01
    {24996,1408,1048, 0, 0, 0},  //TV = 5.32(690 lines)  AV=2.53  SV=3.94  BV=3.91
    {24996,1536,1032, 0, 0, 0},  //TV = 5.32(690 lines)  AV=2.53  SV=4.04  BV=3.81
    {33219,1216,1048, 0, 0, 0},  //TV = 4.91(917 lines)  AV=2.53  SV=3.72  BV=3.71
    {33219,1344,1024, 0, 0, 0},  //TV = 4.91(917 lines)  AV=2.53  SV=3.84  BV=3.60
    {33219,1408,1040, 0, 0, 0},  //TV = 4.91(917 lines)  AV=2.53  SV=3.93  BV=3.51
    {33219,1472,1064, 0, 0, 0},  //TV = 4.91(917 lines)  AV=2.53  SV=4.02  BV=3.42
    {33219,1600,1056, 0, 0, 0},  //TV = 4.91(917 lines)  AV=2.53  SV=4.13  BV=3.31
    {33219,1728,1040, 0, 0, 0},  //TV = 4.91(917 lines)  AV=2.53  SV=4.22  BV=3.22
    {33219,1856,1048, 0, 0, 0},  //TV = 4.91(917 lines)  AV=2.53  SV=4.34  BV=3.10
    {33219,1984,1048, 0, 0, 0},  //TV = 4.91(917 lines)  AV=2.53  SV=4.43  BV=3.01
    {33219,2048,1088, 0, 0, 0},  //TV = 4.91(917 lines)  AV=2.53  SV=4.53  BV=2.91
    {33219,2304,1032, 0, 0, 0},  //TV = 4.91(917 lines)  AV=2.53  SV=4.62  BV=2.81
    {33219,2432,1048, 0, 0, 0},  //TV = 4.91(917 lines)  AV=2.53  SV=4.72  BV=2.71
    {33219,2560,1072, 0, 0, 0},  //TV = 4.91(917 lines)  AV=2.53  SV=4.83  BV=2.61
    {33219,2816,1048, 0, 0, 0},  //TV = 4.91(917 lines)  AV=2.53  SV=4.94  BV=2.50
    {33219,3072,1024, 0, 0, 0},  //TV = 4.91(917 lines)  AV=2.53  SV=5.03  BV=2.41
    {33219,3200,1056, 0, 0, 0},  //TV = 4.91(917 lines)  AV=2.53  SV=5.13  BV=2.31
    {33219,3456,1040, 0, 0, 0},  //TV = 4.91(917 lines)  AV=2.53  SV=5.22  BV=2.22
    {33219,3712,1040, 0, 0, 0},  //TV = 4.91(917 lines)  AV=2.53  SV=5.32  BV=2.11
    {33219,3968,1048, 0, 0, 0},  //TV = 4.91(917 lines)  AV=2.53  SV=5.43  BV=2.01
    {33219,4352,1024, 0, 0, 0},  //TV = 4.91(917 lines)  AV=2.53  SV=5.53  BV=1.91
    {33219,4608,1032, 0, 0, 0},  //TV = 4.91(917 lines)  AV=2.53  SV=5.62  BV=1.81
    {33219,4864,1048, 0, 0, 0},  //TV = 4.91(917 lines)  AV=2.53  SV=5.72  BV=1.71
    {33219,5120,1072, 0, 0, 0},  //TV = 4.91(917 lines)  AV=2.53  SV=5.83  BV=1.61
    {33219,5632,1040, 0, 0, 0},  //TV = 4.91(917 lines)  AV=2.53  SV=5.93  BV=1.51
    {33219,5888,1064, 0, 0, 0},  //TV = 4.91(917 lines)  AV=2.53  SV=6.02  BV=1.42
    {33219,6144,1096, 0, 0, 0},  //TV = 4.91(917 lines)  AV=2.53  SV=6.13  BV=1.31
    {33219,6144,1176, 0, 0, 0},  //TV = 4.91(917 lines)  AV=2.53  SV=6.23  BV=1.21
    {33219,6144,1264, 0, 0, 0},  //TV = 4.91(917 lines)  AV=2.53  SV=6.33  BV=1.11
    {33219,6144,1352, 0, 0, 0},  //TV = 4.91(917 lines)  AV=2.53  SV=6.43  BV=1.01
    {33219,6144,1448, 0, 0, 0},  //TV = 4.91(917 lines)  AV=2.53  SV=6.53  BV=0.91
    {33219,6144,1552, 0, 0, 0},  //TV = 4.91(917 lines)  AV=2.53  SV=6.63  BV=0.81
    {33219,6144,1664, 0, 0, 0},  //TV = 4.91(917 lines)  AV=2.53  SV=6.73  BV=0.71
    {33219,6144,1784, 0, 0, 0},  //TV = 4.91(917 lines)  AV=2.53  SV=6.83  BV=0.61
    {33219,6144,1912, 0, 0, 0},  //TV = 4.91(917 lines)  AV=2.53  SV=6.93  BV=0.51
    {33219,6144,2048, 0, 0, 0},  //TV = 4.91(917 lines)  AV=2.53  SV=7.03  BV=0.41
    {41659,6144,1752, 0, 0, 0},  //TV = 4.59(1150 lines)  AV=2.53  SV=6.80  BV=0.31
    {41659,6144,1872, 0, 0, 0},  //TV = 4.59(1150 lines)  AV=2.53  SV=6.90  BV=0.21
    {41659,6144,2008, 0, 0, 0},  //TV = 4.59(1150 lines)  AV=2.53  SV=7.00  BV=0.11
    {49991,6144,1808, 0, 0, 0},  //TV = 4.32(1380 lines)  AV=2.53  SV=6.85  BV=-0.00
    {49991,6144,1936, 0, 0, 0},  //TV = 4.32(1380 lines)  AV=2.53  SV=6.95  BV=-0.10
    {58323,6144,1776, 0, 0, 0},  //TV = 4.10(1610 lines)  AV=2.53  SV=6.82  BV=-0.20
    {58323,6144,1904, 0, 0, 0},  //TV = 4.10(1610 lines)  AV=2.53  SV=6.92  BV=-0.30
    {66546,6144,1792, 0, 0, 0},  //TV = 3.91(1837 lines)  AV=2.53  SV=6.84  BV=-0.40
    {66546,6144,1920, 0, 0, 0},  //TV = 3.91(1837 lines)  AV=2.53  SV=6.94  BV=-0.50
    {66546,6144,2056, 0, 0, 0},  //TV = 3.91(1837 lines)  AV=2.53  SV=7.03  BV=-0.60
    {66546,6144,2200, 0, 0, 0},  //TV = 3.91(1837 lines)  AV=2.53  SV=7.13  BV=-0.70
    {66546,6144,2360, 0, 0, 0},  //TV = 3.91(1837 lines)  AV=2.53  SV=7.23  BV=-0.80
    {66546,6144,2544, 0, 0, 0},  //TV = 3.91(1837 lines)  AV=2.53  SV=7.34  BV=-0.91
    {66546,6144,2728, 0, 0, 0},  //TV = 3.91(1837 lines)  AV=2.53  SV=7.44  BV=-1.01
    {66546,6144,2920, 0, 0, 0},  //TV = 3.91(1837 lines)  AV=2.53  SV=7.54  BV=-1.10
    {66546,6144,3136, 0, 0, 0},  //TV = 3.91(1837 lines)  AV=2.53  SV=7.64  BV=-1.21
    {66546,6144,3360, 0, 0, 0},  //TV = 3.91(1837 lines)  AV=2.53  SV=7.74  BV=-1.31
    {66546,6144,3600, 0, 0, 0},  //TV = 3.91(1837 lines)  AV=2.53  SV=7.84  BV=-1.41
    {66546,6144,3856, 0, 0, 0},  //TV = 3.91(1837 lines)  AV=2.53  SV=7.94  BV=-1.51
    {66546,6144,4128, 0, 0, 0},  //TV = 3.91(1837 lines)  AV=2.53  SV=8.04  BV=-1.60
    {66546,6144,4424, 0, 0, 0},  //TV = 3.91(1837 lines)  AV=2.53  SV=8.14  BV=-1.70
    {66546,6144,4744, 0, 0, 0},  //TV = 3.91(1837 lines)  AV=2.53  SV=8.24  BV=-1.80
    {66546,6144,5088, 0, 0, 0},  //TV = 3.91(1837 lines)  AV=2.53  SV=8.34  BV=-1.91
    {66546,6144,5448, 0, 0, 0},  //TV = 3.91(1837 lines)  AV=2.53  SV=8.44  BV=-2.00
    {66546,6144,5840, 0, 0, 0},  //TV = 3.91(1837 lines)  AV=2.53  SV=8.54  BV=-2.10
    {66546,6144,6248, 0, 0, 0},  //TV = 3.91(1837 lines)  AV=2.53  SV=8.64  BV=-2.20
    {74986,6144,5944, 0, 0, 0},  //TV = 3.74(2070 lines)  AV=2.53  SV=8.57  BV=-2.30
    {74986,6144,6376, 0, 0, 0},  //TV = 3.74(2070 lines)  AV=2.53  SV=8.67  BV=-2.40
    {83318,6144,6144, 0, 0, 0},  //TV = 3.59(2300 lines)  AV=2.53  SV=8.61  BV=-2.50
    {91650,6144,5992, 0, 0, 0},  //TV = 3.45(2530 lines)  AV=2.53  SV=8.58  BV=-2.60
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sVideoNightPLineTable_50Hz =
{
{
    {73,1600,1048, 0, 0, 0},  //TV = 13.74(2 lines)  AV=2.53  SV=4.12  BV=12.15
    {73,1664,1040, 0, 0, 0},  //TV = 13.74(2 lines)  AV=2.53  SV=4.17  BV=12.10
    {109,1216,1032, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.70  BV=11.99
    {109,1280,1048, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.80  BV=11.89
    {109,1344,1064, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.89  BV=11.80
    {109,1472,1032, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.98  BV=11.71
    {145,1216,1024, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.69  BV=11.59
    {145,1280,1056, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.81  BV=11.47
    {145,1344,1048, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.87  BV=11.41
    {145,1472,1024, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.97  BV=11.31
    {182,1216,1064, 0, 0, 0},  //TV = 12.42(5 lines)  AV=2.53  SV=3.75  BV=11.20
    {182,1344,1024, 0, 0, 0},  //TV = 12.42(5 lines)  AV=2.53  SV=3.84  BV=11.11
    {218,1152,1072, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.68  BV=11.01
    {218,1280,1032, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.78  BV=10.91
    {218,1344,1056, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.88  BV=10.81
    {254,1216,1072, 0, 0, 0},  //TV = 11.94(7 lines)  AV=2.53  SV=3.76  BV=10.71
    {290,1152,1064, 0, 0, 0},  //TV = 11.75(8 lines)  AV=2.53  SV=3.67  BV=10.61
    {290,1280,1024, 0, 0, 0},  //TV = 11.75(8 lines)  AV=2.53  SV=3.77  BV=10.51
    {327,1216,1024, 0, 0, 0},  //TV = 11.58(9 lines)  AV=2.53  SV=3.69  BV=10.41
    {327,1280,1048, 0, 0, 0},  //TV = 11.58(9 lines)  AV=2.53  SV=3.80  BV=10.31
    {363,1216,1064, 0, 0, 0},  //TV = 11.43(10 lines)  AV=2.53  SV=3.75  BV=10.21
    {399,1216,1032, 0, 0, 0},  //TV = 11.29(11 lines)  AV=2.53  SV=3.70  BV=10.11
    {435,1152,1080, 0, 0, 0},  //TV = 11.17(12 lines)  AV=2.53  SV=3.69  BV=10.00
    {471,1152,1064, 0, 0, 0},  //TV = 11.05(13 lines)  AV=2.53  SV=3.67  BV=9.91
    {471,1280,1024, 0, 0, 0},  //TV = 11.05(13 lines)  AV=2.53  SV=3.77  BV=9.81
    {508,1216,1072, 0, 0, 0},  //TV = 10.94(14 lines)  AV=2.53  SV=3.76  BV=9.71
    {580,1152,1064, 0, 0, 0},  //TV = 10.75(16 lines)  AV=2.53  SV=3.67  BV=9.61
    {616,1152,1072, 0, 0, 0},  //TV = 10.66(17 lines)  AV=2.53  SV=3.68  BV=9.51
    {653,1216,1024, 0, 0, 0},  //TV = 10.58(18 lines)  AV=2.53  SV=3.69  BV=9.42
    {689,1216,1040, 0, 0, 0},  //TV = 10.50(19 lines)  AV=2.53  SV=3.71  BV=9.32
    {761,1152,1072, 0, 0, 0},  //TV = 10.36(21 lines)  AV=2.53  SV=3.68  BV=9.21
    {797,1216,1032, 0, 0, 0},  //TV = 10.29(22 lines)  AV=2.53  SV=3.70  BV=9.12
    {870,1152,1080, 0, 0, 0},  //TV = 10.17(24 lines)  AV=2.53  SV=3.69  BV=9.00
    {942,1152,1064, 0, 0, 0},  //TV = 10.05(26 lines)  AV=2.53  SV=3.67  BV=8.91
    {979,1216,1040, 0, 0, 0},  //TV = 10.00(27 lines)  AV=2.53  SV=3.71  BV=8.81
    {1051,1216,1032, 0, 0, 0},  //TV = 9.89(29 lines)  AV=2.53  SV=3.70  BV=8.72
    {1160,1152,1072, 0, 0, 0},  //TV = 9.75(32 lines)  AV=2.53  SV=3.68  BV=8.60
    {1232,1152,1072, 0, 0, 0},  //TV = 9.66(34 lines)  AV=2.53  SV=3.68  BV=8.51
    {1305,1216,1024, 0, 0, 0},  //TV = 9.58(36 lines)  AV=2.53  SV=3.69  BV=8.42
    {1413,1152,1080, 0, 0, 0},  //TV = 9.47(39 lines)  AV=2.53  SV=3.69  BV=8.30
    {1522,1152,1072, 0, 0, 0},  //TV = 9.36(42 lines)  AV=2.53  SV=3.68  BV=8.21
    {1631,1152,1072, 0, 0, 0},  //TV = 9.26(45 lines)  AV=2.53  SV=3.68  BV=8.11
    {1739,1152,1080, 0, 0, 0},  //TV = 9.17(48 lines)  AV=2.53  SV=3.69  BV=8.00
    {1884,1152,1064, 0, 0, 0},  //TV = 9.05(52 lines)  AV=2.53  SV=3.67  BV=7.91
    {1993,1152,1080, 0, 0, 0},  //TV = 8.97(55 lines)  AV=2.53  SV=3.69  BV=7.81
    {2138,1152,1080, 0, 0, 0},  //TV = 8.87(59 lines)  AV=2.53  SV=3.69  BV=7.71
    {2319,1152,1064, 0, 0, 0},  //TV = 8.75(64 lines)  AV=2.53  SV=3.67  BV=7.61
    {2464,1152,1072, 0, 0, 0},  //TV = 8.66(68 lines)  AV=2.53  SV=3.68  BV=7.51
    {2645,1152,1072, 0, 0, 0},  //TV = 8.56(73 lines)  AV=2.53  SV=3.68  BV=7.41
    {2826,1152,1080, 0, 0, 0},  //TV = 8.47(78 lines)  AV=2.53  SV=3.69  BV=7.30
    {3043,1152,1072, 0, 0, 0},  //TV = 8.36(84 lines)  AV=2.53  SV=3.68  BV=7.21
    {3261,1152,1072, 0, 0, 0},  //TV = 8.26(90 lines)  AV=2.53  SV=3.68  BV=7.11
    {3514,1152,1072, 0, 0, 0},  //TV = 8.15(97 lines)  AV=2.53  SV=3.68  BV=7.00
    {3732,1152,1072, 0, 0, 0},  //TV = 8.07(103 lines)  AV=2.53  SV=3.68  BV=6.91
    {4021,1152,1072, 0, 0, 0},  //TV = 7.96(111 lines)  AV=2.53  SV=3.68  BV=6.80
    {4347,1152,1064, 0, 0, 0},  //TV = 7.85(120 lines)  AV=2.53  SV=3.67  BV=6.70
    {4601,1152,1072, 0, 0, 0},  //TV = 7.76(127 lines)  AV=2.53  SV=3.68  BV=6.61
    {4927,1152,1072, 0, 0, 0},  //TV = 7.67(136 lines)  AV=2.53  SV=3.68  BV=6.51
    {5289,1152,1072, 0, 0, 0},  //TV = 7.56(146 lines)  AV=2.53  SV=3.68  BV=6.41
    {5688,1152,1072, 0, 0, 0},  //TV = 7.46(157 lines)  AV=2.53  SV=3.68  BV=6.30
    {6123,1152,1064, 0, 0, 0},  //TV = 7.35(169 lines)  AV=2.53  SV=3.67  BV=6.21
    {6557,1152,1064, 0, 0, 0},  //TV = 7.25(181 lines)  AV=2.53  SV=3.67  BV=6.11
    {7028,1152,1064, 0, 0, 0},  //TV = 7.15(194 lines)  AV=2.53  SV=3.67  BV=6.01
    {7499,1152,1072, 0, 0, 0},  //TV = 7.06(207 lines)  AV=2.53  SV=3.68  BV=5.91
    {8115,1152,1064, 0, 0, 0},  //TV = 6.95(224 lines)  AV=2.53  SV=3.67  BV=5.80
    {8694,1152,1064, 0, 0, 0},  //TV = 6.85(240 lines)  AV=2.53  SV=3.67  BV=5.70
    {9310,1152,1064, 0, 0, 0},  //TV = 6.75(257 lines)  AV=2.53  SV=3.67  BV=5.60
    {9962,1152,1064, 0, 0, 0},  //TV = 6.65(275 lines)  AV=2.53  SV=3.67  BV=5.51
    {9999,1216,1072, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=3.76  BV=5.41
    {9999,1344,1040, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=3.86  BV=5.31
    {9999,1408,1064, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=3.96  BV=5.21
    {9999,1536,1048, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.06  BV=5.11
    {9999,1664,1032, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.16  BV=5.01
    {9999,1792,1032, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.26  BV=4.91
    {9999,1920,1032, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.36  BV=4.81
    {9999,2048,1040, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.47  BV=4.70
    {9999,2176,1040, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.55  BV=4.62
    {9999,2304,1056, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.66  BV=4.51
    {19997,1216,1072, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=3.76  BV=4.41
    {19997,1344,1040, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=3.86  BV=4.31
    {19997,1472,1024, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=3.97  BV=4.20
    {19997,1536,1048, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=4.06  BV=4.11
    {19997,1664,1032, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=4.16  BV=4.01
    {29995,1152,1072, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=3.68  BV=3.91
    {29995,1280,1032, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=3.78  BV=3.81
    {29995,1344,1048, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=3.87  BV=3.72
    {29995,1472,1040, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=3.99  BV=3.60
    {29995,1536,1056, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=4.07  BV=3.51
    {29995,1664,1048, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=4.18  BV=3.41
    {29995,1792,1040, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=4.27  BV=3.31
    {29995,1920,1040, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=4.37  BV=3.21
    {29995,2048,1048, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=4.48  BV=3.11
    {29995,2176,1056, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=4.58  BV=3.01
    {29995,2304,1064, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=4.67  BV=2.92
    {29995,2560,1032, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=4.78  BV=2.81
    {29995,2688,1056, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=4.88  BV=2.70
    {29995,2944,1032, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=4.98  BV=2.61
    {29995,3072,1056, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.07  BV=2.51
    {29995,3328,1048, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.18  BV=2.41
    {29995,3584,1040, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.27  BV=2.31
    {29995,3840,1040, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.37  BV=2.21
    {29995,4096,1048, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.48  BV=2.11
    {29995,4352,1056, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.58  BV=2.01
    {29995,4608,1072, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.68  BV=1.91
    {29995,5120,1032, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.78  BV=1.81
    {29995,5376,1056, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.88  BV=1.70
    {29995,5888,1032, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.98  BV=1.61
    {29995,6144,1056, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.07  BV=1.51
    {29995,6144,1128, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.17  BV=1.42
    {29995,6144,1224, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.29  BV=1.30
    {29995,6144,1304, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.38  BV=1.21
    {29995,6144,1400, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.48  BV=1.11
    {29995,6144,1496, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.58  BV=1.01
    {29995,6144,1608, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.68  BV=0.91
    {29995,6144,1720, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.78  BV=0.81
    {29995,6144,1840, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.87  BV=0.71
    {29995,6144,1976, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.98  BV=0.61
    {29995,6144,2112, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=7.07  BV=0.51
    {29995,6144,2264, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=7.17  BV=0.41
    {39993,6144,1824, 0, 0, 0},  //TV = 4.64(1104 lines)  AV=2.53  SV=6.86  BV=0.31
    {39993,6144,1952, 0, 0, 0},  //TV = 4.64(1104 lines)  AV=2.53  SV=6.96  BV=0.21
    {39993,6144,2096, 0, 0, 0},  //TV = 4.64(1104 lines)  AV=2.53  SV=7.06  BV=0.11
    {49991,6144,1808, 0, 0, 0},  //TV = 4.32(1380 lines)  AV=2.53  SV=6.85  BV=-0.00
    {49991,6144,1936, 0, 0, 0},  //TV = 4.32(1380 lines)  AV=2.53  SV=6.95  BV=-0.10
    {59989,6144,1728, 0, 0, 0},  //TV = 4.06(1656 lines)  AV=2.53  SV=6.78  BV=-0.20
    {59989,6144,1856, 0, 0, 0},  //TV = 4.06(1656 lines)  AV=2.53  SV=6.89  BV=-0.30
    {59989,6144,1984, 0, 0, 0},  //TV = 4.06(1656 lines)  AV=2.53  SV=6.98  BV=-0.40
    {59989,6144,2128, 0, 0, 0},  //TV = 4.06(1656 lines)  AV=2.53  SV=7.08  BV=-0.50
    {59989,6144,2280, 0, 0, 0},  //TV = 4.06(1656 lines)  AV=2.53  SV=7.18  BV=-0.60
    {59989,6144,2464, 0, 0, 0},  //TV = 4.06(1656 lines)  AV=2.53  SV=7.30  BV=-0.71
    {59989,6144,2640, 0, 0, 0},  //TV = 4.06(1656 lines)  AV=2.53  SV=7.39  BV=-0.81
    {59989,6144,2824, 0, 0, 0},  //TV = 4.06(1656 lines)  AV=2.53  SV=7.49  BV=-0.91
    {59989,6144,3024, 0, 0, 0},  //TV = 4.06(1656 lines)  AV=2.53  SV=7.59  BV=-1.01
    {59989,6144,3240, 0, 0, 0},  //TV = 4.06(1656 lines)  AV=2.53  SV=7.69  BV=-1.11
    {59989,6144,3472, 0, 0, 0},  //TV = 4.06(1656 lines)  AV=2.53  SV=7.79  BV=-1.20
    {59989,6144,3728, 0, 0, 0},  //TV = 4.06(1656 lines)  AV=2.53  SV=7.89  BV=-1.31
    {59989,6144,3992, 0, 0, 0},  //TV = 4.06(1656 lines)  AV=2.53  SV=7.99  BV=-1.41
    {59989,6144,4280, 0, 0, 0},  //TV = 4.06(1656 lines)  AV=2.53  SV=8.09  BV=-1.51
    {59989,6144,4584, 0, 0, 0},  //TV = 4.06(1656 lines)  AV=2.53  SV=8.19  BV=-1.61
    {59989,6144,4912, 0, 0, 0},  //TV = 4.06(1656 lines)  AV=2.53  SV=8.29  BV=-1.71
    {59989,6144,5264, 0, 0, 0},  //TV = 4.06(1656 lines)  AV=2.53  SV=8.39  BV=-1.81
    {59989,6144,5640, 0, 0, 0},  //TV = 4.06(1656 lines)  AV=2.53  SV=8.49  BV=-1.90
    {59989,6144,6048, 0, 0, 0},  //TV = 4.06(1656 lines)  AV=2.53  SV=8.59  BV=-2.01
    {59989,6144,6480, 0, 0, 0},  //TV = 4.06(1656 lines)  AV=2.53  SV=8.69  BV=-2.11
    {69987,6144,5944, 0, 0, 0},  //TV = 3.84(1932 lines)  AV=2.53  SV=8.57  BV=-2.20
    {69987,6144,6368, 0, 0, 0},  //TV = 3.84(1932 lines)  AV=2.53  SV=8.67  BV=-2.30
    {79985,6144,5976, 0, 0, 0},  //TV = 3.64(2208 lines)  AV=2.53  SV=8.57  BV=-2.40
    {79985,6144,6400, 0, 0, 0},  //TV = 3.64(2208 lines)  AV=2.53  SV=8.67  BV=-2.50
    {89983,6144,6096, 0, 0, 0},  //TV = 3.47(2484 lines)  AV=2.53  SV=8.60  BV=-2.60
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_VideoNightTable =
{
    AETABLE_VIDEO_NIGHT,    //eAETableID
    149,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    122,    //i4MaxBV
    -26,    //i4MinBV
    90,    //i4EffectiveMaxBV
    -30,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO SPEED
    sVideoNightPLineTable_60Hz,
    sVideoNightPLineTable_50Hz,
    NULL,
};

static strEvPline sCaptureISO100PLineTable_60Hz =
{
{
    {73,1664,1032, 0, 0, 0},  //TV = 13.74(2 lines)  AV=2.53  SV=4.16  BV=12.11
    {109,1216,1032, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.70  BV=11.99
    {109,1280,1032, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.78  BV=11.91
    {109,1344,1056, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.88  BV=11.81
    {109,1472,1056, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=4.01  BV=11.68
    {109,1600,1032, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=4.10  BV=11.59
    {145,1280,1048, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.80  BV=11.48
    {145,1344,1072, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.90  BV=11.38
    {145,1472,1056, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=4.01  BV=11.27
    {182,1280,1040, 0, 0, 0},  //TV = 12.42(5 lines)  AV=2.53  SV=3.79  BV=11.16
    {182,1344,1024, 0, 0, 0},  //TV = 12.42(5 lines)  AV=2.53  SV=3.84  BV=11.11
    {182,1408,1048, 0, 0, 0},  //TV = 12.42(5 lines)  AV=2.53  SV=3.94  BV=11.01
    {218,1280,1032, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.78  BV=10.91
    {218,1344,1056, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.88  BV=10.81
    {254,1216,1072, 0, 0, 0},  //TV = 11.94(7 lines)  AV=2.53  SV=3.76  BV=10.71
    {254,1344,1040, 0, 0, 0},  //TV = 11.94(7 lines)  AV=2.53  SV=3.86  BV=10.61
    {290,1280,1024, 0, 0, 0},  //TV = 11.75(8 lines)  AV=2.53  SV=3.77  BV=10.51
    {290,1344,1048, 0, 0, 0},  //TV = 11.75(8 lines)  AV=2.53  SV=3.87  BV=10.41
    {327,1280,1048, 0, 0, 0},  //TV = 11.58(9 lines)  AV=2.53  SV=3.80  BV=10.31
    {363,1216,1064, 0, 0, 0},  //TV = 11.43(10 lines)  AV=2.53  SV=3.75  BV=10.21
    {363,1344,1024, 0, 0, 0},  //TV = 11.43(10 lines)  AV=2.53  SV=3.84  BV=10.12
    {399,1280,1056, 0, 0, 0},  //TV = 11.29(11 lines)  AV=2.53  SV=3.81  BV=10.01
    {435,1280,1032, 0, 0, 0},  //TV = 11.17(12 lines)  AV=2.53  SV=3.78  BV=9.92
    {471,1280,1024, 0, 0, 0},  //TV = 11.05(13 lines)  AV=2.53  SV=3.77  BV=9.81
    {508,1216,1072, 0, 0, 0},  //TV = 10.94(14 lines)  AV=2.53  SV=3.76  BV=9.71
    {544,1216,1072, 0, 0, 0},  //TV = 10.84(15 lines)  AV=2.53  SV=3.76  BV=9.61
    {580,1280,1024, 0, 0, 0},  //TV = 10.75(16 lines)  AV=2.53  SV=3.77  BV=9.51
    {616,1280,1032, 0, 0, 0},  //TV = 10.66(17 lines)  AV=2.53  SV=3.78  BV=9.41
    {689,1216,1040, 0, 0, 0},  //TV = 10.50(19 lines)  AV=2.53  SV=3.71  BV=9.32
    {725,1216,1064, 0, 0, 0},  //TV = 10.43(20 lines)  AV=2.53  SV=3.75  BV=9.21
    {797,1216,1040, 0, 0, 0},  //TV = 10.29(22 lines)  AV=2.53  SV=3.71  BV=9.11
    {834,1216,1064, 0, 0, 0},  //TV = 10.23(23 lines)  AV=2.53  SV=3.75  BV=9.01
    {906,1216,1048, 0, 0, 0},  //TV = 10.11(25 lines)  AV=2.53  SV=3.72  BV=8.91
    {979,1216,1040, 0, 0, 0},  //TV = 10.00(27 lines)  AV=2.53  SV=3.71  BV=8.81
    {1051,1216,1032, 0, 0, 0},  //TV = 9.89(29 lines)  AV=2.53  SV=3.70  BV=8.72
    {1123,1216,1040, 0, 0, 0},  //TV = 9.80(31 lines)  AV=2.53  SV=3.71  BV=8.61
    {1196,1216,1048, 0, 0, 0},  //TV = 9.71(33 lines)  AV=2.53  SV=3.72  BV=8.51
    {1268,1216,1064, 0, 0, 0},  //TV = 9.62(35 lines)  AV=2.53  SV=3.75  BV=8.40
    {1377,1216,1048, 0, 0, 0},  //TV = 9.50(38 lines)  AV=2.53  SV=3.72  BV=8.31
    {1449,1216,1064, 0, 0, 0},  //TV = 9.43(40 lines)  AV=2.53  SV=3.75  BV=8.21
    {1594,1216,1032, 0, 0, 0},  //TV = 9.29(44 lines)  AV=2.53  SV=3.70  BV=8.12
    {1703,1216,1040, 0, 0, 0},  //TV = 9.20(47 lines)  AV=2.53  SV=3.71  BV=8.01
    {1812,1216,1048, 0, 0, 0},  //TV = 9.11(50 lines)  AV=2.53  SV=3.72  BV=7.91
    {1957,1216,1040, 0, 0, 0},  //TV = 9.00(54 lines)  AV=2.53  SV=3.71  BV=7.81
    {2102,1216,1040, 0, 0, 0},  //TV = 8.89(58 lines)  AV=2.53  SV=3.71  BV=7.71
    {2246,1216,1040, 0, 0, 0},  //TV = 8.80(62 lines)  AV=2.53  SV=3.71  BV=7.61
    {2391,1216,1048, 0, 0, 0},  //TV = 8.71(66 lines)  AV=2.53  SV=3.72  BV=7.51
    {2572,1216,1040, 0, 0, 0},  //TV = 8.60(71 lines)  AV=2.53  SV=3.71  BV=7.42
    {2754,1216,1048, 0, 0, 0},  //TV = 8.50(76 lines)  AV=2.53  SV=3.72  BV=7.31
    {2971,1216,1040, 0, 0, 0},  //TV = 8.39(82 lines)  AV=2.53  SV=3.71  BV=7.21
    {3152,1216,1048, 0, 0, 0},  //TV = 8.31(87 lines)  AV=2.53  SV=3.72  BV=7.11
    {3406,1216,1040, 0, 0, 0},  //TV = 8.20(94 lines)  AV=2.53  SV=3.71  BV=7.01
    {3659,1216,1040, 0, 0, 0},  //TV = 8.09(101 lines)  AV=2.53  SV=3.71  BV=6.91
    {3913,1216,1040, 0, 0, 0},  //TV = 8.00(108 lines)  AV=2.53  SV=3.71  BV=6.81
    {4203,1216,1040, 0, 0, 0},  //TV = 7.89(116 lines)  AV=2.53  SV=3.71  BV=6.71
    {4529,1216,1032, 0, 0, 0},  //TV = 7.79(125 lines)  AV=2.53  SV=3.70  BV=6.61
    {4855,1216,1032, 0, 0, 0},  //TV = 7.69(134 lines)  AV=2.53  SV=3.70  BV=6.51
    {5144,1216,1040, 0, 0, 0},  //TV = 7.60(142 lines)  AV=2.53  SV=3.71  BV=6.42
    {5543,1216,1040, 0, 0, 0},  //TV = 7.50(153 lines)  AV=2.53  SV=3.71  BV=6.31
    {5941,1216,1040, 0, 0, 0},  //TV = 7.40(164 lines)  AV=2.53  SV=3.71  BV=6.21
    {6376,1216,1032, 0, 0, 0},  //TV = 7.29(176 lines)  AV=2.53  SV=3.70  BV=6.12
    {6811,1216,1040, 0, 0, 0},  //TV = 7.20(188 lines)  AV=2.53  SV=3.71  BV=6.01
    {7354,1216,1032, 0, 0, 0},  //TV = 7.09(203 lines)  AV=2.53  SV=3.70  BV=5.91
    {7861,1216,1040, 0, 0, 0},  //TV = 6.99(217 lines)  AV=2.53  SV=3.71  BV=5.80
    {8332,1216,1048, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=3.72  BV=5.71
    {8332,1280,1064, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=3.82  BV=5.61
    {8332,1408,1040, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=3.93  BV=5.51
    {8332,1472,1064, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.02  BV=5.41
    {8332,1600,1048, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.12  BV=5.31
    {8332,1728,1040, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.22  BV=5.21
    {8332,1856,1040, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.32  BV=5.11
    {8332,1984,1040, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.42  BV=5.01
    {8332,2048,1080, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.52  BV=4.91
    {8332,2304,1032, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.62  BV=4.81
    {16664,1216,1048, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=3.72  BV=4.71
    {16664,1280,1064, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=3.82  BV=4.61
    {16664,1408,1040, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=3.93  BV=4.51
    {16664,1536,1024, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=4.03  BV=4.40
    {16664,1600,1056, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=4.13  BV=4.30
    {16664,1728,1040, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=4.22  BV=4.21
    {24996,1216,1064, 0, 0, 0},  //TV = 5.32(690 lines)  AV=2.53  SV=3.75  BV=4.10
    {24996,1344,1024, 0, 0, 0},  //TV = 5.32(690 lines)  AV=2.53  SV=3.84  BV=4.01
    {24996,1408,1056, 0, 0, 0},  //TV = 5.32(690 lines)  AV=2.53  SV=3.95  BV=3.90
    {24996,1536,1040, 0, 0, 0},  //TV = 5.32(690 lines)  AV=2.53  SV=4.05  BV=3.80
    {33327,1216,1048, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=3.72  BV=3.71
    {33327,1280,1072, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=3.83  BV=3.60
    {33327,1408,1040, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=3.93  BV=3.51
    {33327,1536,1024, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=4.03  BV=3.40
    {41659,1280,1056, 0, 0, 0},  //TV = 4.59(1150 lines)  AV=2.53  SV=3.81  BV=3.30
    {41659,1344,1072, 0, 0, 0},  //TV = 4.59(1150 lines)  AV=2.53  SV=3.90  BV=3.21
    {49991,1216,1064, 0, 0, 0},  //TV = 4.32(1380 lines)  AV=2.53  SV=3.75  BV=3.10
    {49991,1344,1024, 0, 0, 0},  //TV = 4.32(1380 lines)  AV=2.53  SV=3.84  BV=3.01
    {58323,1216,1040, 0, 0, 0},  //TV = 4.10(1610 lines)  AV=2.53  SV=3.71  BV=2.91
    {58323,1280,1064, 0, 0, 0},  //TV = 4.10(1610 lines)  AV=2.53  SV=3.82  BV=2.81
    {66654,1216,1048, 0, 0, 0},  //TV = 3.91(1840 lines)  AV=2.53  SV=3.72  BV=2.71
    {66654,1280,1064, 0, 0, 0},  //TV = 3.91(1840 lines)  AV=2.53  SV=3.82  BV=2.61
    {74986,1216,1072, 0, 0, 0},  //TV = 3.74(2070 lines)  AV=2.53  SV=3.76  BV=2.51
    {74986,1344,1040, 0, 0, 0},  //TV = 3.74(2070 lines)  AV=2.53  SV=3.86  BV=2.41
    {83318,1280,1056, 0, 0, 0},  //TV = 3.59(2300 lines)  AV=2.53  SV=3.81  BV=2.30
    {91650,1216,1072, 0, 0, 0},  //TV = 3.45(2530 lines)  AV=2.53  SV=3.76  BV=2.22
    {99981,1216,1064, 0, 0, 0},  //TV = 3.32(2760 lines)  AV=2.53  SV=3.75  BV=2.10
    {108313,1216,1048, 0, 0, 0},  //TV = 3.21(2990 lines)  AV=2.53  SV=3.72  BV=2.01
    {116645,1216,1040, 0, 0, 0},  //TV = 3.10(3220 lines)  AV=2.53  SV=3.71  BV=1.91
    {124977,1216,1040, 0, 0, 0},  //TV = 3.00(3450 lines)  AV=2.53  SV=3.71  BV=1.81
    {133345,1216,1048, 0, 0, 0},  //TV = 2.91(3681 lines)  AV=2.53  SV=3.72  BV=1.71
    {141677,1216,1056, 0, 0, 0},  //TV = 2.82(3911 lines)  AV=2.53  SV=3.74  BV=1.61
    {150009,1216,1064, 0, 0, 0},  //TV = 2.74(4141 lines)  AV=2.53  SV=3.75  BV=1.52
    {158341,1280,1032, 0, 0, 0},  //TV = 2.66(4371 lines)  AV=2.53  SV=3.78  BV=1.41
    {175004,1216,1056, 0, 0, 0},  //TV = 2.51(4831 lines)  AV=2.53  SV=3.74  BV=1.30
    {183336,1280,1024, 0, 0, 0},  //TV = 2.45(5061 lines)  AV=2.53  SV=3.77  BV=1.21
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sCaptureISO100PLineTable_50Hz =
{
{
    {73,1664,1032, 0, 0, 0},  //TV = 13.74(2 lines)  AV=2.53  SV=4.16  BV=12.11
    {109,1216,1032, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.70  BV=11.99
    {109,1280,1032, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.78  BV=11.91
    {109,1344,1056, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.88  BV=11.81
    {109,1472,1056, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=4.01  BV=11.68
    {109,1600,1032, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=4.10  BV=11.59
    {145,1280,1048, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.80  BV=11.48
    {145,1344,1072, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.90  BV=11.38
    {145,1472,1056, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=4.01  BV=11.27
    {182,1280,1040, 0, 0, 0},  //TV = 12.42(5 lines)  AV=2.53  SV=3.79  BV=11.16
    {182,1344,1024, 0, 0, 0},  //TV = 12.42(5 lines)  AV=2.53  SV=3.84  BV=11.11
    {182,1408,1048, 0, 0, 0},  //TV = 12.42(5 lines)  AV=2.53  SV=3.94  BV=11.01
    {218,1280,1032, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.78  BV=10.91
    {218,1344,1056, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.88  BV=10.81
    {254,1216,1072, 0, 0, 0},  //TV = 11.94(7 lines)  AV=2.53  SV=3.76  BV=10.71
    {254,1344,1040, 0, 0, 0},  //TV = 11.94(7 lines)  AV=2.53  SV=3.86  BV=10.61
    {290,1280,1024, 0, 0, 0},  //TV = 11.75(8 lines)  AV=2.53  SV=3.77  BV=10.51
    {290,1344,1048, 0, 0, 0},  //TV = 11.75(8 lines)  AV=2.53  SV=3.87  BV=10.41
    {327,1280,1048, 0, 0, 0},  //TV = 11.58(9 lines)  AV=2.53  SV=3.80  BV=10.31
    {363,1216,1064, 0, 0, 0},  //TV = 11.43(10 lines)  AV=2.53  SV=3.75  BV=10.21
    {363,1344,1024, 0, 0, 0},  //TV = 11.43(10 lines)  AV=2.53  SV=3.84  BV=10.12
    {399,1280,1056, 0, 0, 0},  //TV = 11.29(11 lines)  AV=2.53  SV=3.81  BV=10.01
    {435,1280,1032, 0, 0, 0},  //TV = 11.17(12 lines)  AV=2.53  SV=3.78  BV=9.92
    {471,1280,1024, 0, 0, 0},  //TV = 11.05(13 lines)  AV=2.53  SV=3.77  BV=9.81
    {508,1216,1072, 0, 0, 0},  //TV = 10.94(14 lines)  AV=2.53  SV=3.76  BV=9.71
    {544,1216,1072, 0, 0, 0},  //TV = 10.84(15 lines)  AV=2.53  SV=3.76  BV=9.61
    {580,1280,1024, 0, 0, 0},  //TV = 10.75(16 lines)  AV=2.53  SV=3.77  BV=9.51
    {616,1280,1032, 0, 0, 0},  //TV = 10.66(17 lines)  AV=2.53  SV=3.78  BV=9.41
    {689,1216,1040, 0, 0, 0},  //TV = 10.50(19 lines)  AV=2.53  SV=3.71  BV=9.32
    {725,1216,1064, 0, 0, 0},  //TV = 10.43(20 lines)  AV=2.53  SV=3.75  BV=9.21
    {797,1216,1040, 0, 0, 0},  //TV = 10.29(22 lines)  AV=2.53  SV=3.71  BV=9.11
    {834,1216,1064, 0, 0, 0},  //TV = 10.23(23 lines)  AV=2.53  SV=3.75  BV=9.01
    {906,1216,1048, 0, 0, 0},  //TV = 10.11(25 lines)  AV=2.53  SV=3.72  BV=8.91
    {979,1216,1040, 0, 0, 0},  //TV = 10.00(27 lines)  AV=2.53  SV=3.71  BV=8.81
    {1051,1216,1032, 0, 0, 0},  //TV = 9.89(29 lines)  AV=2.53  SV=3.70  BV=8.72
    {1123,1216,1040, 0, 0, 0},  //TV = 9.80(31 lines)  AV=2.53  SV=3.71  BV=8.61
    {1196,1216,1048, 0, 0, 0},  //TV = 9.71(33 lines)  AV=2.53  SV=3.72  BV=8.51
    {1268,1216,1064, 0, 0, 0},  //TV = 9.62(35 lines)  AV=2.53  SV=3.75  BV=8.40
    {1377,1216,1048, 0, 0, 0},  //TV = 9.50(38 lines)  AV=2.53  SV=3.72  BV=8.31
    {1449,1216,1064, 0, 0, 0},  //TV = 9.43(40 lines)  AV=2.53  SV=3.75  BV=8.21
    {1594,1216,1032, 0, 0, 0},  //TV = 9.29(44 lines)  AV=2.53  SV=3.70  BV=8.12
    {1703,1216,1040, 0, 0, 0},  //TV = 9.20(47 lines)  AV=2.53  SV=3.71  BV=8.01
    {1812,1216,1048, 0, 0, 0},  //TV = 9.11(50 lines)  AV=2.53  SV=3.72  BV=7.91
    {1957,1216,1040, 0, 0, 0},  //TV = 9.00(54 lines)  AV=2.53  SV=3.71  BV=7.81
    {2102,1216,1040, 0, 0, 0},  //TV = 8.89(58 lines)  AV=2.53  SV=3.71  BV=7.71
    {2246,1216,1040, 0, 0, 0},  //TV = 8.80(62 lines)  AV=2.53  SV=3.71  BV=7.61
    {2391,1216,1048, 0, 0, 0},  //TV = 8.71(66 lines)  AV=2.53  SV=3.72  BV=7.51
    {2572,1216,1040, 0, 0, 0},  //TV = 8.60(71 lines)  AV=2.53  SV=3.71  BV=7.42
    {2754,1216,1048, 0, 0, 0},  //TV = 8.50(76 lines)  AV=2.53  SV=3.72  BV=7.31
    {2971,1216,1040, 0, 0, 0},  //TV = 8.39(82 lines)  AV=2.53  SV=3.71  BV=7.21
    {3152,1216,1048, 0, 0, 0},  //TV = 8.31(87 lines)  AV=2.53  SV=3.72  BV=7.11
    {3406,1216,1040, 0, 0, 0},  //TV = 8.20(94 lines)  AV=2.53  SV=3.71  BV=7.01
    {3659,1216,1040, 0, 0, 0},  //TV = 8.09(101 lines)  AV=2.53  SV=3.71  BV=6.91
    {3913,1216,1040, 0, 0, 0},  //TV = 8.00(108 lines)  AV=2.53  SV=3.71  BV=6.81
    {4203,1216,1040, 0, 0, 0},  //TV = 7.89(116 lines)  AV=2.53  SV=3.71  BV=6.71
    {4529,1216,1032, 0, 0, 0},  //TV = 7.79(125 lines)  AV=2.53  SV=3.70  BV=6.61
    {4855,1216,1032, 0, 0, 0},  //TV = 7.69(134 lines)  AV=2.53  SV=3.70  BV=6.51
    {5144,1216,1040, 0, 0, 0},  //TV = 7.60(142 lines)  AV=2.53  SV=3.71  BV=6.42
    {5543,1216,1040, 0, 0, 0},  //TV = 7.50(153 lines)  AV=2.53  SV=3.71  BV=6.31
    {5941,1216,1040, 0, 0, 0},  //TV = 7.40(164 lines)  AV=2.53  SV=3.71  BV=6.21
    {6376,1216,1032, 0, 0, 0},  //TV = 7.29(176 lines)  AV=2.53  SV=3.70  BV=6.12
    {6811,1216,1040, 0, 0, 0},  //TV = 7.20(188 lines)  AV=2.53  SV=3.71  BV=6.01
    {7354,1216,1032, 0, 0, 0},  //TV = 7.09(203 lines)  AV=2.53  SV=3.70  BV=5.91
    {7861,1216,1040, 0, 0, 0},  //TV = 6.99(217 lines)  AV=2.53  SV=3.71  BV=5.80
    {8368,1216,1040, 0, 0, 0},  //TV = 6.90(231 lines)  AV=2.53  SV=3.71  BV=5.71
    {9057,1216,1032, 0, 0, 0},  //TV = 6.79(250 lines)  AV=2.53  SV=3.70  BV=5.61
    {9673,1216,1040, 0, 0, 0},  //TV = 6.69(267 lines)  AV=2.53  SV=3.71  BV=5.50
    {9999,1216,1072, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=3.76  BV=5.41
    {9999,1344,1048, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=3.87  BV=5.30
    {9999,1408,1064, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=3.96  BV=5.21
    {9999,1536,1048, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.06  BV=5.11
    {9999,1664,1032, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.16  BV=5.01
    {9999,1792,1032, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.26  BV=4.91
    {9999,1920,1032, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.36  BV=4.81
    {9999,2048,1032, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.45  BV=4.72
    {9999,2176,1040, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.55  BV=4.62
    {9999,2304,1056, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.66  BV=4.51
    {19997,1216,1072, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=3.76  BV=4.41
    {19997,1344,1040, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=3.86  BV=4.31
    {19997,1472,1024, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=3.97  BV=4.20
    {19997,1536,1056, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=4.07  BV=4.10
    {19997,1664,1040, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=4.17  BV=4.00
    {19997,1792,1032, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=4.26  BV=3.91
    {29995,1280,1032, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=3.78  BV=3.81
    {29995,1344,1048, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=3.87  BV=3.72
    {29995,1472,1032, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=3.98  BV=3.61
    {29995,1536,1064, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=4.08  BV=3.50
    {39993,1216,1072, 0, 0, 0},  //TV = 4.64(1104 lines)  AV=2.53  SV=3.76  BV=3.41
    {39993,1344,1040, 0, 0, 0},  //TV = 4.64(1104 lines)  AV=2.53  SV=3.86  BV=3.31
    {39993,1408,1064, 0, 0, 0},  //TV = 4.64(1104 lines)  AV=2.53  SV=3.96  BV=3.21
    {49991,1216,1064, 0, 0, 0},  //TV = 4.32(1380 lines)  AV=2.53  SV=3.75  BV=3.10
    {49991,1344,1024, 0, 0, 0},  //TV = 4.32(1380 lines)  AV=2.53  SV=3.84  BV=3.01
    {49991,1408,1048, 0, 0, 0},  //TV = 4.32(1380 lines)  AV=2.53  SV=3.94  BV=2.91
    {59989,1280,1032, 0, 0, 0},  //TV = 4.06(1656 lines)  AV=2.53  SV=3.78  BV=2.81
    {59989,1344,1056, 0, 0, 0},  //TV = 4.06(1656 lines)  AV=2.53  SV=3.88  BV=2.70
    {69987,1216,1064, 0, 0, 0},  //TV = 3.84(1932 lines)  AV=2.53  SV=3.75  BV=2.62
    {69987,1344,1032, 0, 0, 0},  //TV = 3.84(1932 lines)  AV=2.53  SV=3.85  BV=2.52
    {79985,1216,1072, 0, 0, 0},  //TV = 3.64(2208 lines)  AV=2.53  SV=3.76  BV=2.41
    {79985,1344,1040, 0, 0, 0},  //TV = 3.64(2208 lines)  AV=2.53  SV=3.86  BV=2.31
    {89983,1280,1040, 0, 0, 0},  //TV = 3.47(2484 lines)  AV=2.53  SV=3.79  BV=2.21
    {100018,1216,1056, 0, 0, 0},  //TV = 3.32(2761 lines)  AV=2.53  SV=3.74  BV=2.11
    {100018,1344,1024, 0, 0, 0},  //TV = 3.32(2761 lines)  AV=2.53  SV=3.84  BV=2.01
    {110017,1280,1048, 0, 0, 0},  //TV = 3.18(3037 lines)  AV=2.53  SV=3.80  BV=1.91
    {120015,1280,1032, 0, 0, 0},  //TV = 3.06(3313 lines)  AV=2.53  SV=3.78  BV=1.81
    {130013,1216,1072, 0, 0, 0},  //TV = 2.94(3589 lines)  AV=2.53  SV=3.76  BV=1.71
    {140011,1216,1064, 0, 0, 0},  //TV = 2.84(3865 lines)  AV=2.53  SV=3.75  BV=1.62
    {150009,1216,1064, 0, 0, 0},  //TV = 2.74(4141 lines)  AV=2.53  SV=3.75  BV=1.52
    {160007,1216,1072, 0, 0, 0},  //TV = 2.64(4417 lines)  AV=2.53  SV=3.76  BV=1.41
    {170005,1280,1032, 0, 0, 0},  //TV = 2.56(4693 lines)  AV=2.53  SV=3.78  BV=1.31
    {190001,1216,1040, 0, 0, 0},  //TV = 2.40(5245 lines)  AV=2.53  SV=3.71  BV=1.21
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_CaptureISO100Table =
{
    AETABLE_CAPTURE_ISO100,    //eAETableID
    110,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    121,    //i4MaxBV
    12,    //i4MinBV
    90,    //i4EffectiveMaxBV
    -30,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_100, //ISO SPEED
    sCaptureISO100PLineTable_60Hz,
    sCaptureISO100PLineTable_50Hz,
    NULL,
};

static strEvPline sCaptureISO200PLineTable_60Hz =
{
{
    {73,1600,1048, 0, 0, 0},  //TV = 13.74(2 lines)  AV=2.53  SV=4.12  BV=12.15
    {73,1664,1040, 0, 0, 0},  //TV = 13.74(2 lines)  AV=2.53  SV=4.17  BV=12.10
    {109,1216,1032, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.70  BV=11.99
    {109,1280,1048, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.80  BV=11.89
    {109,1344,1064, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.89  BV=11.80
    {109,1472,1032, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.98  BV=11.71
    {145,1216,1024, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.69  BV=11.59
    {145,1280,1056, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.81  BV=11.47
    {145,1344,1048, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.87  BV=11.41
    {145,1472,1024, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.97  BV=11.31
    {182,1216,1064, 0, 0, 0},  //TV = 12.42(5 lines)  AV=2.53  SV=3.75  BV=11.20
    {182,1344,1024, 0, 0, 0},  //TV = 12.42(5 lines)  AV=2.53  SV=3.84  BV=11.11
    {218,1152,1072, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.68  BV=11.01
    {218,1280,1032, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.78  BV=10.91
    {218,1344,1056, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.88  BV=10.81
    {254,1216,1072, 0, 0, 0},  //TV = 11.94(7 lines)  AV=2.53  SV=3.76  BV=10.71
    {290,1152,1064, 0, 0, 0},  //TV = 11.75(8 lines)  AV=2.53  SV=3.67  BV=10.61
    {290,1280,1024, 0, 0, 0},  //TV = 11.75(8 lines)  AV=2.53  SV=3.77  BV=10.51
    {327,1216,1024, 0, 0, 0},  //TV = 11.58(9 lines)  AV=2.53  SV=3.69  BV=10.41
    {327,1280,1048, 0, 0, 0},  //TV = 11.58(9 lines)  AV=2.53  SV=3.80  BV=10.31
    {363,1216,1064, 0, 0, 0},  //TV = 11.43(10 lines)  AV=2.53  SV=3.75  BV=10.21
    {399,1216,1032, 0, 0, 0},  //TV = 11.29(11 lines)  AV=2.53  SV=3.70  BV=10.11
    {435,1152,1080, 0, 0, 0},  //TV = 11.17(12 lines)  AV=2.53  SV=3.69  BV=10.00
    {471,1152,1064, 0, 0, 0},  //TV = 11.05(13 lines)  AV=2.53  SV=3.67  BV=9.91
    {470,1280,1024, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=3.77  BV=9.82
    {470,1344,1048, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=3.87  BV=9.71
    {470,1472,1024, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=3.97  BV=9.61
    {470,1536,1056, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=4.07  BV=9.51
    {470,1664,1040, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=4.17  BV=9.41
    {470,1792,1040, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=4.27  BV=9.31
    {470,1920,1040, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=4.37  BV=9.21
    {470,2048,1040, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=4.47  BV=9.12
    {470,2176,1056, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=4.58  BV=9.01
    {470,2304,1064, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=4.67  BV=8.91
    {470,2560,1032, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=4.78  BV=8.80
    {508,2432,1072, 0, 0, 0},  //TV = 10.94(14 lines)  AV=2.53  SV=4.76  BV=8.71
    {544,2432,1072, 0, 0, 0},  //TV = 10.84(15 lines)  AV=2.53  SV=4.76  BV=8.61
    {580,2560,1024, 0, 0, 0},  //TV = 10.75(16 lines)  AV=2.53  SV=4.77  BV=8.51
    {616,2560,1040, 0, 0, 0},  //TV = 10.66(17 lines)  AV=2.53  SV=4.79  BV=8.40
    {689,2432,1040, 0, 0, 0},  //TV = 10.50(19 lines)  AV=2.53  SV=4.71  BV=8.32
    {725,2432,1064, 0, 0, 0},  //TV = 10.43(20 lines)  AV=2.53  SV=4.75  BV=8.21
    {797,2432,1032, 0, 0, 0},  //TV = 10.29(22 lines)  AV=2.53  SV=4.70  BV=8.12
    {834,2432,1064, 0, 0, 0},  //TV = 10.23(23 lines)  AV=2.53  SV=4.75  BV=8.01
    {906,2432,1040, 0, 0, 0},  //TV = 10.11(25 lines)  AV=2.53  SV=4.71  BV=7.92
    {979,2432,1040, 0, 0, 0},  //TV = 10.00(27 lines)  AV=2.53  SV=4.71  BV=7.81
    {1051,2432,1040, 0, 0, 0},  //TV = 9.89(29 lines)  AV=2.53  SV=4.71  BV=7.71
    {1123,2432,1040, 0, 0, 0},  //TV = 9.80(31 lines)  AV=2.53  SV=4.71  BV=7.61
    {1196,2432,1040, 0, 0, 0},  //TV = 9.71(33 lines)  AV=2.53  SV=4.71  BV=7.52
    {1268,2432,1056, 0, 0, 0},  //TV = 9.62(35 lines)  AV=2.53  SV=4.74  BV=7.41
    {1377,2432,1048, 0, 0, 0},  //TV = 9.50(38 lines)  AV=2.53  SV=4.72  BV=7.31
    {1486,2432,1040, 0, 0, 0},  //TV = 9.39(41 lines)  AV=2.53  SV=4.71  BV=7.21
    {1594,2432,1040, 0, 0, 0},  //TV = 9.29(44 lines)  AV=2.53  SV=4.71  BV=7.11
    {1703,2432,1040, 0, 0, 0},  //TV = 9.20(47 lines)  AV=2.53  SV=4.71  BV=7.01
    {1812,2432,1040, 0, 0, 0},  //TV = 9.11(50 lines)  AV=2.53  SV=4.71  BV=6.92
    {1957,2432,1040, 0, 0, 0},  //TV = 9.00(54 lines)  AV=2.53  SV=4.71  BV=6.81
    {2102,2432,1032, 0, 0, 0},  //TV = 8.89(58 lines)  AV=2.53  SV=4.70  BV=6.72
    {2246,2432,1040, 0, 0, 0},  //TV = 8.80(62 lines)  AV=2.53  SV=4.71  BV=6.61
    {2391,2432,1048, 0, 0, 0},  //TV = 8.71(66 lines)  AV=2.53  SV=4.72  BV=6.51
    {2572,2432,1040, 0, 0, 0},  //TV = 8.60(71 lines)  AV=2.53  SV=4.71  BV=6.42
    {2790,2432,1032, 0, 0, 0},  //TV = 8.49(77 lines)  AV=2.53  SV=4.70  BV=6.31
    {2971,2432,1040, 0, 0, 0},  //TV = 8.39(82 lines)  AV=2.53  SV=4.71  BV=6.21
    {3188,2432,1040, 0, 0, 0},  //TV = 8.29(88 lines)  AV=2.53  SV=4.71  BV=6.11
    {3406,2432,1040, 0, 0, 0},  //TV = 8.20(94 lines)  AV=2.53  SV=4.71  BV=6.01
    {3659,2432,1040, 0, 0, 0},  //TV = 8.09(101 lines)  AV=2.53  SV=4.71  BV=5.91
    {3913,2432,1040, 0, 0, 0},  //TV = 8.00(108 lines)  AV=2.53  SV=4.71  BV=5.81
    {4203,2432,1040, 0, 0, 0},  //TV = 7.89(116 lines)  AV=2.53  SV=4.71  BV=5.71
    {4492,2432,1040, 0, 0, 0},  //TV = 7.80(124 lines)  AV=2.53  SV=4.71  BV=5.61
    {4818,2432,1040, 0, 0, 0},  //TV = 7.70(133 lines)  AV=2.53  SV=4.71  BV=5.51
    {5144,2432,1040, 0, 0, 0},  //TV = 7.60(142 lines)  AV=2.53  SV=4.71  BV=5.42
    {5579,2432,1032, 0, 0, 0},  //TV = 7.49(154 lines)  AV=2.53  SV=4.70  BV=5.31
    {5978,2432,1032, 0, 0, 0},  //TV = 7.39(165 lines)  AV=2.53  SV=4.70  BV=5.21
    {6376,2432,1040, 0, 0, 0},  //TV = 7.29(176 lines)  AV=2.53  SV=4.71  BV=5.11
    {6847,2432,1032, 0, 0, 0},  //TV = 7.19(189 lines)  AV=2.53  SV=4.70  BV=5.01
    {7318,2432,1040, 0, 0, 0},  //TV = 7.09(202 lines)  AV=2.53  SV=4.71  BV=4.91
    {7861,2432,1032, 0, 0, 0},  //TV = 6.99(217 lines)  AV=2.53  SV=4.70  BV=4.81
    {8332,2432,1048, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.72  BV=4.71
    {8332,2560,1064, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.82  BV=4.61
    {8332,2816,1032, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.91  BV=4.52
    {8332,2944,1064, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=5.02  BV=4.41
    {8332,3200,1056, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=5.13  BV=4.30
    {8332,3456,1040, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=5.22  BV=4.21
    {8332,3712,1040, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=5.32  BV=4.11
    {8332,3968,1040, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=5.42  BV=4.01
    {8332,4096,1088, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=5.53  BV=3.90
    {8332,4608,1032, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=5.62  BV=3.81
    {16664,2432,1048, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=4.72  BV=3.71
    {16664,2560,1072, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=4.83  BV=3.60
    {16664,2816,1040, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=4.93  BV=3.51
    {16664,2944,1064, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=5.02  BV=3.41
    {16664,3200,1048, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=5.12  BV=3.31
    {16664,3456,1040, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=5.22  BV=3.21
    {24996,2432,1056, 0, 0, 0},  //TV = 5.32(690 lines)  AV=2.53  SV=4.74  BV=3.11
    {24996,2688,1024, 0, 0, 0},  //TV = 5.32(690 lines)  AV=2.53  SV=4.84  BV=3.01
    {24996,2816,1048, 0, 0, 0},  //TV = 5.32(690 lines)  AV=2.53  SV=4.94  BV=2.91
    {24996,3072,1032, 0, 0, 0},  //TV = 5.32(690 lines)  AV=2.53  SV=5.04  BV=2.81
    {33327,2432,1048, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=4.72  BV=2.71
    {33327,2560,1064, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=4.82  BV=2.61
    {33327,2816,1040, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=4.93  BV=2.51
    {33327,2944,1064, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=5.02  BV=2.41
    {41659,2560,1048, 0, 0, 0},  //TV = 4.59(1150 lines)  AV=2.53  SV=4.80  BV=2.31
    {41659,2688,1072, 0, 0, 0},  //TV = 4.59(1150 lines)  AV=2.53  SV=4.90  BV=2.21
    {49991,2432,1056, 0, 0, 0},  //TV = 4.32(1380 lines)  AV=2.53  SV=4.74  BV=2.11
    {49991,2688,1024, 0, 0, 0},  //TV = 4.32(1380 lines)  AV=2.53  SV=4.84  BV=2.01
    {58323,2432,1040, 0, 0, 0},  //TV = 4.10(1610 lines)  AV=2.53  SV=4.71  BV=1.91
    {58323,2560,1056, 0, 0, 0},  //TV = 4.10(1610 lines)  AV=2.53  SV=4.81  BV=1.82
    {66654,2432,1040, 0, 0, 0},  //TV = 3.91(1840 lines)  AV=2.53  SV=4.71  BV=1.72
    {66654,2560,1064, 0, 0, 0},  //TV = 3.91(1840 lines)  AV=2.53  SV=4.82  BV=1.61
    {74986,2432,1064, 0, 0, 0},  //TV = 3.74(2070 lines)  AV=2.53  SV=4.75  BV=1.52
    {74986,2688,1032, 0, 0, 0},  //TV = 3.74(2070 lines)  AV=2.53  SV=4.85  BV=1.42
    {83318,2560,1048, 0, 0, 0},  //TV = 3.59(2300 lines)  AV=2.53  SV=4.80  BV=1.31
    {91650,2432,1072, 0, 0, 0},  //TV = 3.45(2530 lines)  AV=2.53  SV=4.76  BV=1.22
    {99981,2432,1056, 0, 0, 0},  //TV = 3.32(2760 lines)  AV=2.53  SV=4.74  BV=1.11
    {108313,2432,1040, 0, 0, 0},  //TV = 3.21(2990 lines)  AV=2.53  SV=4.71  BV=1.02
    {116645,2432,1040, 0, 0, 0},  //TV = 3.10(3220 lines)  AV=2.53  SV=4.71  BV=0.91
    {124977,2432,1040, 0, 0, 0},  //TV = 3.00(3450 lines)  AV=2.53  SV=4.71  BV=0.81
    {133345,2432,1040, 0, 0, 0},  //TV = 2.91(3681 lines)  AV=2.53  SV=4.71  BV=0.72
    {141677,2432,1056, 0, 0, 0},  //TV = 2.82(3911 lines)  AV=2.53  SV=4.74  BV=0.61
    {150009,2432,1064, 0, 0, 0},  //TV = 2.74(4141 lines)  AV=2.53  SV=4.75  BV=0.52
    {158341,2560,1032, 0, 0, 0},  //TV = 2.66(4371 lines)  AV=2.53  SV=4.78  BV=0.41
    {175004,2432,1048, 0, 0, 0},  //TV = 2.51(4831 lines)  AV=2.53  SV=4.72  BV=0.32
    {183336,2432,1072, 0, 0, 0},  //TV = 2.45(5061 lines)  AV=2.53  SV=4.76  BV=0.22
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sCaptureISO200PLineTable_50Hz =
{
{
    {73,1600,1048, 0, 0, 0},  //TV = 13.74(2 lines)  AV=2.53  SV=4.12  BV=12.15
    {73,1664,1040, 0, 0, 0},  //TV = 13.74(2 lines)  AV=2.53  SV=4.17  BV=12.10
    {109,1216,1032, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.70  BV=11.99
    {109,1280,1048, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.80  BV=11.89
    {109,1344,1064, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.89  BV=11.80
    {109,1472,1032, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.98  BV=11.71
    {145,1216,1024, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.69  BV=11.59
    {145,1280,1056, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.81  BV=11.47
    {145,1344,1048, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.87  BV=11.41
    {145,1472,1024, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.97  BV=11.31
    {182,1216,1064, 0, 0, 0},  //TV = 12.42(5 lines)  AV=2.53  SV=3.75  BV=11.20
    {182,1344,1024, 0, 0, 0},  //TV = 12.42(5 lines)  AV=2.53  SV=3.84  BV=11.11
    {218,1152,1072, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.68  BV=11.01
    {218,1280,1032, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.78  BV=10.91
    {218,1344,1056, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.88  BV=10.81
    {254,1216,1072, 0, 0, 0},  //TV = 11.94(7 lines)  AV=2.53  SV=3.76  BV=10.71
    {290,1152,1064, 0, 0, 0},  //TV = 11.75(8 lines)  AV=2.53  SV=3.67  BV=10.61
    {290,1280,1024, 0, 0, 0},  //TV = 11.75(8 lines)  AV=2.53  SV=3.77  BV=10.51
    {327,1216,1024, 0, 0, 0},  //TV = 11.58(9 lines)  AV=2.53  SV=3.69  BV=10.41
    {327,1280,1048, 0, 0, 0},  //TV = 11.58(9 lines)  AV=2.53  SV=3.80  BV=10.31
    {363,1216,1064, 0, 0, 0},  //TV = 11.43(10 lines)  AV=2.53  SV=3.75  BV=10.21
    {399,1216,1032, 0, 0, 0},  //TV = 11.29(11 lines)  AV=2.53  SV=3.70  BV=10.11
    {435,1152,1080, 0, 0, 0},  //TV = 11.17(12 lines)  AV=2.53  SV=3.69  BV=10.00
    {471,1152,1064, 0, 0, 0},  //TV = 11.05(13 lines)  AV=2.53  SV=3.67  BV=9.91
    {470,1280,1024, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=3.77  BV=9.82
    {470,1344,1048, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=3.87  BV=9.71
    {470,1472,1024, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=3.97  BV=9.61
    {470,1536,1056, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=4.07  BV=9.51
    {470,1664,1040, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=4.17  BV=9.41
    {470,1792,1040, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=4.27  BV=9.31
    {470,1920,1040, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=4.37  BV=9.21
    {470,2048,1040, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=4.47  BV=9.12
    {470,2176,1056, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=4.58  BV=9.01
    {470,2304,1064, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=4.67  BV=8.91
    {470,2560,1032, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=4.78  BV=8.80
    {508,2432,1072, 0, 0, 0},  //TV = 10.94(14 lines)  AV=2.53  SV=4.76  BV=8.71
    {544,2432,1072, 0, 0, 0},  //TV = 10.84(15 lines)  AV=2.53  SV=4.76  BV=8.61
    {580,2560,1024, 0, 0, 0},  //TV = 10.75(16 lines)  AV=2.53  SV=4.77  BV=8.51
    {616,2560,1040, 0, 0, 0},  //TV = 10.66(17 lines)  AV=2.53  SV=4.79  BV=8.40
    {689,2432,1040, 0, 0, 0},  //TV = 10.50(19 lines)  AV=2.53  SV=4.71  BV=8.32
    {725,2432,1064, 0, 0, 0},  //TV = 10.43(20 lines)  AV=2.53  SV=4.75  BV=8.21
    {797,2432,1032, 0, 0, 0},  //TV = 10.29(22 lines)  AV=2.53  SV=4.70  BV=8.12
    {834,2432,1064, 0, 0, 0},  //TV = 10.23(23 lines)  AV=2.53  SV=4.75  BV=8.01
    {906,2432,1040, 0, 0, 0},  //TV = 10.11(25 lines)  AV=2.53  SV=4.71  BV=7.92
    {979,2432,1040, 0, 0, 0},  //TV = 10.00(27 lines)  AV=2.53  SV=4.71  BV=7.81
    {1051,2432,1040, 0, 0, 0},  //TV = 9.89(29 lines)  AV=2.53  SV=4.71  BV=7.71
    {1123,2432,1040, 0, 0, 0},  //TV = 9.80(31 lines)  AV=2.53  SV=4.71  BV=7.61
    {1196,2432,1040, 0, 0, 0},  //TV = 9.71(33 lines)  AV=2.53  SV=4.71  BV=7.52
    {1268,2432,1056, 0, 0, 0},  //TV = 9.62(35 lines)  AV=2.53  SV=4.74  BV=7.41
    {1377,2432,1048, 0, 0, 0},  //TV = 9.50(38 lines)  AV=2.53  SV=4.72  BV=7.31
    {1486,2432,1040, 0, 0, 0},  //TV = 9.39(41 lines)  AV=2.53  SV=4.71  BV=7.21
    {1594,2432,1040, 0, 0, 0},  //TV = 9.29(44 lines)  AV=2.53  SV=4.71  BV=7.11
    {1703,2432,1040, 0, 0, 0},  //TV = 9.20(47 lines)  AV=2.53  SV=4.71  BV=7.01
    {1812,2432,1040, 0, 0, 0},  //TV = 9.11(50 lines)  AV=2.53  SV=4.71  BV=6.92
    {1957,2432,1040, 0, 0, 0},  //TV = 9.00(54 lines)  AV=2.53  SV=4.71  BV=6.81
    {2102,2432,1032, 0, 0, 0},  //TV = 8.89(58 lines)  AV=2.53  SV=4.70  BV=6.72
    {2246,2432,1040, 0, 0, 0},  //TV = 8.80(62 lines)  AV=2.53  SV=4.71  BV=6.61
    {2391,2432,1048, 0, 0, 0},  //TV = 8.71(66 lines)  AV=2.53  SV=4.72  BV=6.51
    {2572,2432,1040, 0, 0, 0},  //TV = 8.60(71 lines)  AV=2.53  SV=4.71  BV=6.42
    {2790,2432,1032, 0, 0, 0},  //TV = 8.49(77 lines)  AV=2.53  SV=4.70  BV=6.31
    {2971,2432,1040, 0, 0, 0},  //TV = 8.39(82 lines)  AV=2.53  SV=4.71  BV=6.21
    {3188,2432,1040, 0, 0, 0},  //TV = 8.29(88 lines)  AV=2.53  SV=4.71  BV=6.11
    {3406,2432,1040, 0, 0, 0},  //TV = 8.20(94 lines)  AV=2.53  SV=4.71  BV=6.01
    {3659,2432,1040, 0, 0, 0},  //TV = 8.09(101 lines)  AV=2.53  SV=4.71  BV=5.91
    {3913,2432,1040, 0, 0, 0},  //TV = 8.00(108 lines)  AV=2.53  SV=4.71  BV=5.81
    {4203,2432,1040, 0, 0, 0},  //TV = 7.89(116 lines)  AV=2.53  SV=4.71  BV=5.71
    {4492,2432,1040, 0, 0, 0},  //TV = 7.80(124 lines)  AV=2.53  SV=4.71  BV=5.61
    {4818,2432,1040, 0, 0, 0},  //TV = 7.70(133 lines)  AV=2.53  SV=4.71  BV=5.51
    {5144,2432,1040, 0, 0, 0},  //TV = 7.60(142 lines)  AV=2.53  SV=4.71  BV=5.42
    {5579,2432,1032, 0, 0, 0},  //TV = 7.49(154 lines)  AV=2.53  SV=4.70  BV=5.31
    {5978,2432,1032, 0, 0, 0},  //TV = 7.39(165 lines)  AV=2.53  SV=4.70  BV=5.21
    {6376,2432,1040, 0, 0, 0},  //TV = 7.29(176 lines)  AV=2.53  SV=4.71  BV=5.11
    {6847,2432,1032, 0, 0, 0},  //TV = 7.19(189 lines)  AV=2.53  SV=4.70  BV=5.01
    {7318,2432,1040, 0, 0, 0},  //TV = 7.09(202 lines)  AV=2.53  SV=4.71  BV=4.91
    {7861,2432,1032, 0, 0, 0},  //TV = 6.99(217 lines)  AV=2.53  SV=4.70  BV=4.81
    {8405,2432,1040, 0, 0, 0},  //TV = 6.89(232 lines)  AV=2.53  SV=4.71  BV=4.71
    {9021,2432,1032, 0, 0, 0},  //TV = 6.79(249 lines)  AV=2.53  SV=4.70  BV=4.62
    {9636,2432,1040, 0, 0, 0},  //TV = 6.70(266 lines)  AV=2.53  SV=4.71  BV=4.51
    {9999,2432,1072, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.76  BV=4.41
    {9999,2688,1040, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.86  BV=4.31
    {9999,2944,1024, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.97  BV=4.20
    {9999,3072,1048, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.06  BV=4.11
    {9999,3328,1040, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.17  BV=4.00
    {9999,3584,1032, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.26  BV=3.91
    {9999,3840,1032, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.36  BV=3.81
    {9999,4096,1040, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.47  BV=3.70
    {9999,4352,1048, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.56  BV=3.61
    {9999,4608,1056, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.66  BV=3.51
    {19997,2432,1072, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=4.76  BV=3.41
    {19997,2688,1040, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=4.86  BV=3.31
    {19997,2816,1064, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=4.96  BV=3.21
    {19997,3072,1048, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=5.06  BV=3.11
    {19997,3328,1032, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=5.16  BV=3.01
    {19997,3584,1032, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=5.26  BV=2.91
    {29995,2560,1032, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=4.78  BV=2.81
    {29995,2688,1048, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=4.87  BV=2.72
    {29995,2944,1032, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=4.98  BV=2.61
    {29995,3072,1056, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.07  BV=2.51
    {39993,2432,1072, 0, 0, 0},  //TV = 4.64(1104 lines)  AV=2.53  SV=4.76  BV=2.41
    {39993,2688,1040, 0, 0, 0},  //TV = 4.64(1104 lines)  AV=2.53  SV=4.86  BV=2.31
    {39993,2816,1064, 0, 0, 0},  //TV = 4.64(1104 lines)  AV=2.53  SV=4.96  BV=2.21
    {49991,2432,1056, 0, 0, 0},  //TV = 4.32(1380 lines)  AV=2.53  SV=4.74  BV=2.11
    {49991,2688,1024, 0, 0, 0},  //TV = 4.32(1380 lines)  AV=2.53  SV=4.84  BV=2.01
    {49991,2816,1048, 0, 0, 0},  //TV = 4.32(1380 lines)  AV=2.53  SV=4.94  BV=1.91
    {59989,2560,1032, 0, 0, 0},  //TV = 4.06(1656 lines)  AV=2.53  SV=4.78  BV=1.81
    {59989,2688,1048, 0, 0, 0},  //TV = 4.06(1656 lines)  AV=2.53  SV=4.87  BV=1.72
    {69987,2432,1064, 0, 0, 0},  //TV = 3.84(1932 lines)  AV=2.53  SV=4.75  BV=1.62
    {69987,2688,1032, 0, 0, 0},  //TV = 3.84(1932 lines)  AV=2.53  SV=4.85  BV=1.52
    {79985,2432,1072, 0, 0, 0},  //TV = 3.64(2208 lines)  AV=2.53  SV=4.76  BV=1.41
    {79985,2688,1040, 0, 0, 0},  //TV = 3.64(2208 lines)  AV=2.53  SV=4.86  BV=1.31
    {89983,2560,1040, 0, 0, 0},  //TV = 3.47(2484 lines)  AV=2.53  SV=4.79  BV=1.21
    {100018,2432,1056, 0, 0, 0},  //TV = 3.32(2761 lines)  AV=2.53  SV=4.74  BV=1.11
    {100018,2688,1024, 0, 0, 0},  //TV = 3.32(2761 lines)  AV=2.53  SV=4.84  BV=1.01
    {110017,2560,1048, 0, 0, 0},  //TV = 3.18(3037 lines)  AV=2.53  SV=4.80  BV=0.91
    {120015,2560,1032, 0, 0, 0},  //TV = 3.06(3313 lines)  AV=2.53  SV=4.78  BV=0.81
    {130013,2432,1072, 0, 0, 0},  //TV = 2.94(3589 lines)  AV=2.53  SV=4.76  BV=0.71
    {140011,2432,1064, 0, 0, 0},  //TV = 2.84(3865 lines)  AV=2.53  SV=4.75  BV=0.62
    {150009,2432,1064, 0, 0, 0},  //TV = 2.74(4141 lines)  AV=2.53  SV=4.75  BV=0.52
    {160007,2432,1072, 0, 0, 0},  //TV = 2.64(4417 lines)  AV=2.53  SV=4.76  BV=0.41
    {170005,2560,1024, 0, 0, 0},  //TV = 2.56(4693 lines)  AV=2.53  SV=4.77  BV=0.32
    {190001,2432,1040, 0, 0, 0},  //TV = 2.40(5245 lines)  AV=2.53  SV=4.71  BV=0.21
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_CaptureISO200Table =
{
    AETABLE_CAPTURE_ISO200,    //eAETableID
    121,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    122,    //i4MaxBV
    2,    //i4MinBV
    90,    //i4EffectiveMaxBV
    -30,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_200, //ISO SPEED
    sCaptureISO200PLineTable_60Hz,
    sCaptureISO200PLineTable_50Hz,
    NULL,
};

static strEvPline sCaptureISO400PLineTable_60Hz =
{
{
    {73,1600,1048, 0, 0, 0},  //TV = 13.74(2 lines)  AV=2.53  SV=4.12  BV=12.15
    {73,1664,1040, 0, 0, 0},  //TV = 13.74(2 lines)  AV=2.53  SV=4.17  BV=12.10
    {109,1216,1032, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.70  BV=11.99
    {109,1280,1048, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.80  BV=11.89
    {109,1344,1064, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.89  BV=11.80
    {109,1472,1032, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.98  BV=11.71
    {145,1216,1024, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.69  BV=11.59
    {145,1280,1056, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.81  BV=11.47
    {145,1344,1048, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.87  BV=11.41
    {145,1472,1024, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.97  BV=11.31
    {182,1216,1064, 0, 0, 0},  //TV = 12.42(5 lines)  AV=2.53  SV=3.75  BV=11.20
    {182,1344,1024, 0, 0, 0},  //TV = 12.42(5 lines)  AV=2.53  SV=3.84  BV=11.11
    {218,1152,1072, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.68  BV=11.01
    {218,1280,1032, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.78  BV=10.91
    {218,1344,1056, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.88  BV=10.81
    {254,1216,1072, 0, 0, 0},  //TV = 11.94(7 lines)  AV=2.53  SV=3.76  BV=10.71
    {290,1152,1064, 0, 0, 0},  //TV = 11.75(8 lines)  AV=2.53  SV=3.67  BV=10.61
    {290,1280,1024, 0, 0, 0},  //TV = 11.75(8 lines)  AV=2.53  SV=3.77  BV=10.51
    {327,1216,1024, 0, 0, 0},  //TV = 11.58(9 lines)  AV=2.53  SV=3.69  BV=10.41
    {327,1280,1048, 0, 0, 0},  //TV = 11.58(9 lines)  AV=2.53  SV=3.80  BV=10.31
    {363,1216,1064, 0, 0, 0},  //TV = 11.43(10 lines)  AV=2.53  SV=3.75  BV=10.21
    {399,1216,1032, 0, 0, 0},  //TV = 11.29(11 lines)  AV=2.53  SV=3.70  BV=10.11
    {435,1152,1080, 0, 0, 0},  //TV = 11.17(12 lines)  AV=2.53  SV=3.69  BV=10.00
    {471,1152,1064, 0, 0, 0},  //TV = 11.05(13 lines)  AV=2.53  SV=3.67  BV=9.91
    {470,1280,1024, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=3.77  BV=9.82
    {470,1344,1048, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=3.87  BV=9.71
    {470,1472,1024, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=3.97  BV=9.61
    {470,1536,1056, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=4.07  BV=9.51
    {470,1664,1040, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=4.17  BV=9.41
    {470,1792,1040, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=4.27  BV=9.31
    {470,1920,1040, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=4.37  BV=9.21
    {470,2048,1040, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=4.47  BV=9.12
    {470,2176,1056, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=4.58  BV=9.01
    {470,2304,1064, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=4.67  BV=8.91
    {470,2560,1032, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=4.78  BV=8.80
    {470,2688,1048, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=4.87  BV=8.71
    {470,2944,1024, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=4.97  BV=8.61
    {470,3072,1056, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=5.07  BV=8.51
    {470,3328,1048, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=5.18  BV=8.40
    {470,3584,1040, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=5.27  BV=8.31
    {470,3840,1040, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=5.37  BV=8.21
    {470,4096,1040, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=5.47  BV=8.12
    {470,4352,1056, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=5.58  BV=8.01
    {470,4608,1072, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=5.68  BV=7.90
    {470,5120,1032, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=5.78  BV=7.80
    {508,4864,1072, 0, 0, 0},  //TV = 10.94(14 lines)  AV=2.53  SV=5.76  BV=7.71
    {544,4864,1072, 0, 0, 0},  //TV = 10.84(15 lines)  AV=2.53  SV=5.76  BV=7.61
    {580,5120,1024, 0, 0, 0},  //TV = 10.75(16 lines)  AV=2.53  SV=5.77  BV=7.51
    {616,5120,1032, 0, 0, 0},  //TV = 10.66(17 lines)  AV=2.53  SV=5.78  BV=7.41
    {689,4864,1048, 0, 0, 0},  //TV = 10.50(19 lines)  AV=2.53  SV=5.72  BV=7.30
    {725,4864,1064, 0, 0, 0},  //TV = 10.43(20 lines)  AV=2.53  SV=5.75  BV=7.21
    {797,4864,1040, 0, 0, 0},  //TV = 10.29(22 lines)  AV=2.53  SV=5.71  BV=7.11
    {834,4864,1064, 0, 0, 0},  //TV = 10.23(23 lines)  AV=2.53  SV=5.75  BV=7.01
    {906,4864,1048, 0, 0, 0},  //TV = 10.11(25 lines)  AV=2.53  SV=5.72  BV=6.91
    {979,4864,1040, 0, 0, 0},  //TV = 10.00(27 lines)  AV=2.53  SV=5.71  BV=6.81
    {1051,4864,1032, 0, 0, 0},  //TV = 9.89(29 lines)  AV=2.53  SV=5.70  BV=6.72
    {1123,4864,1040, 0, 0, 0},  //TV = 9.80(31 lines)  AV=2.53  SV=5.71  BV=6.61
    {1196,4864,1048, 0, 0, 0},  //TV = 9.71(33 lines)  AV=2.53  SV=5.72  BV=6.51
    {1268,4864,1064, 0, 0, 0},  //TV = 9.62(35 lines)  AV=2.53  SV=5.75  BV=6.40
    {1377,4864,1048, 0, 0, 0},  //TV = 9.50(38 lines)  AV=2.53  SV=5.72  BV=6.31
    {1486,4864,1040, 0, 0, 0},  //TV = 9.39(41 lines)  AV=2.53  SV=5.71  BV=6.21
    {1594,4864,1032, 0, 0, 0},  //TV = 9.29(44 lines)  AV=2.53  SV=5.70  BV=6.12
    {1703,4864,1040, 0, 0, 0},  //TV = 9.20(47 lines)  AV=2.53  SV=5.71  BV=6.01
    {1812,4864,1048, 0, 0, 0},  //TV = 9.11(50 lines)  AV=2.53  SV=5.72  BV=5.91
    {1957,4864,1040, 0, 0, 0},  //TV = 9.00(54 lines)  AV=2.53  SV=5.71  BV=5.81
    {2102,4864,1040, 0, 0, 0},  //TV = 8.89(58 lines)  AV=2.53  SV=5.71  BV=5.71
    {2246,4864,1040, 0, 0, 0},  //TV = 8.80(62 lines)  AV=2.53  SV=5.71  BV=5.61
    {2391,4864,1048, 0, 0, 0},  //TV = 8.71(66 lines)  AV=2.53  SV=5.72  BV=5.51
    {2572,4864,1048, 0, 0, 0},  //TV = 8.60(71 lines)  AV=2.53  SV=5.72  BV=5.40
    {2790,4864,1032, 0, 0, 0},  //TV = 8.49(77 lines)  AV=2.53  SV=5.70  BV=5.31
    {2971,4864,1040, 0, 0, 0},  //TV = 8.39(82 lines)  AV=2.53  SV=5.71  BV=5.21
    {3188,4864,1032, 0, 0, 0},  //TV = 8.29(88 lines)  AV=2.53  SV=5.70  BV=5.12
    {3406,4864,1040, 0, 0, 0},  //TV = 8.20(94 lines)  AV=2.53  SV=5.71  BV=5.01
    {3659,4864,1040, 0, 0, 0},  //TV = 8.09(101 lines)  AV=2.53  SV=5.71  BV=4.91
    {3913,4864,1040, 0, 0, 0},  //TV = 8.00(108 lines)  AV=2.53  SV=5.71  BV=4.81
    {4203,4864,1032, 0, 0, 0},  //TV = 7.89(116 lines)  AV=2.53  SV=5.70  BV=4.72
    {4492,4864,1040, 0, 0, 0},  //TV = 7.80(124 lines)  AV=2.53  SV=5.71  BV=4.61
    {4855,4864,1032, 0, 0, 0},  //TV = 7.69(134 lines)  AV=2.53  SV=5.70  BV=4.51
    {5181,4864,1040, 0, 0, 0},  //TV = 7.59(143 lines)  AV=2.53  SV=5.71  BV=4.40
    {5579,4864,1032, 0, 0, 0},  //TV = 7.49(154 lines)  AV=2.53  SV=5.70  BV=4.31
    {5978,4864,1032, 0, 0, 0},  //TV = 7.39(165 lines)  AV=2.53  SV=5.70  BV=4.21
    {6376,4864,1040, 0, 0, 0},  //TV = 7.29(176 lines)  AV=2.53  SV=5.71  BV=4.11
    {6847,4864,1032, 0, 0, 0},  //TV = 7.19(189 lines)  AV=2.53  SV=5.70  BV=4.01
    {7318,4864,1032, 0, 0, 0},  //TV = 7.09(202 lines)  AV=2.53  SV=5.70  BV=3.92
    {7861,4864,1032, 0, 0, 0},  //TV = 6.99(217 lines)  AV=2.53  SV=5.70  BV=3.81
    {8332,4864,1040, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=5.71  BV=3.72
    {8332,5120,1072, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=5.83  BV=3.60
    {8332,5632,1032, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=5.91  BV=3.52
    {8332,6144,1024, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=6.03  BV=3.40
    {8332,6144,1096, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=6.13  BV=3.31
    {8332,6144,1176, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=6.23  BV=3.20
    {8332,6144,1256, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=6.32  BV=3.11
    {8332,6144,1352, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=6.43  BV=3.00
    {8332,6144,1448, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=6.53  BV=2.90
    {8332,6144,1552, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=6.63  BV=2.80
    {16664,4864,1048, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=5.72  BV=2.71
    {16664,5120,1064, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=5.82  BV=2.61
    {16664,5632,1040, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=5.93  BV=2.51
    {16664,5888,1064, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=6.02  BV=2.41
    {16664,6144,1096, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=6.13  BV=2.31
    {16664,6144,1168, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=6.22  BV=2.21
    {24996,4864,1056, 0, 0, 0},  //TV = 5.32(690 lines)  AV=2.53  SV=5.74  BV=2.11
    {24996,5376,1024, 0, 0, 0},  //TV = 5.32(690 lines)  AV=2.53  SV=5.84  BV=2.01
    {24996,5632,1048, 0, 0, 0},  //TV = 5.32(690 lines)  AV=2.53  SV=5.94  BV=1.91
    {24996,6144,1032, 0, 0, 0},  //TV = 5.32(690 lines)  AV=2.53  SV=6.04  BV=1.81
    {33327,4864,1048, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=5.72  BV=1.71
    {33327,5120,1064, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=5.82  BV=1.61
    {33327,5632,1040, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=5.93  BV=1.51
    {33327,5888,1064, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=6.02  BV=1.41
    {41659,5120,1048, 0, 0, 0},  //TV = 4.59(1150 lines)  AV=2.53  SV=5.80  BV=1.31
    {41659,5376,1072, 0, 0, 0},  //TV = 4.59(1150 lines)  AV=2.53  SV=5.90  BV=1.21
    {49991,4864,1056, 0, 0, 0},  //TV = 4.32(1380 lines)  AV=2.53  SV=5.74  BV=1.11
    {49991,5376,1024, 0, 0, 0},  //TV = 4.32(1380 lines)  AV=2.53  SV=5.84  BV=1.01
    {58323,4864,1040, 0, 0, 0},  //TV = 4.10(1610 lines)  AV=2.53  SV=5.71  BV=0.91
    {58323,5120,1056, 0, 0, 0},  //TV = 4.10(1610 lines)  AV=2.53  SV=5.81  BV=0.82
    {66654,4864,1040, 0, 0, 0},  //TV = 3.91(1840 lines)  AV=2.53  SV=5.71  BV=0.72
    {66654,5120,1072, 0, 0, 0},  //TV = 3.91(1840 lines)  AV=2.53  SV=5.83  BV=0.60
    {74986,4864,1064, 0, 0, 0},  //TV = 3.74(2070 lines)  AV=2.53  SV=5.75  BV=0.52
    {83318,4864,1032, 0, 0, 0},  //TV = 3.59(2300 lines)  AV=2.53  SV=5.70  BV=0.41
    {83318,5120,1056, 0, 0, 0},  //TV = 3.59(2300 lines)  AV=2.53  SV=5.81  BV=0.30
    {91650,5120,1024, 0, 0, 0},  //TV = 3.45(2530 lines)  AV=2.53  SV=5.77  BV=0.21
    {99981,4864,1064, 0, 0, 0},  //TV = 3.32(2760 lines)  AV=2.53  SV=5.75  BV=0.10
    {108313,4864,1048, 0, 0, 0},  //TV = 3.21(2990 lines)  AV=2.53  SV=5.72  BV=0.01
    {116645,4864,1048, 0, 0, 0},  //TV = 3.10(3220 lines)  AV=2.53  SV=5.72  BV=-0.10
    {124977,4864,1048, 0, 0, 0},  //TV = 3.00(3450 lines)  AV=2.53  SV=5.72  BV=-0.20
    {133345,4864,1048, 0, 0, 0},  //TV = 2.91(3681 lines)  AV=2.53  SV=5.72  BV=-0.29
    {141677,4864,1064, 0, 0, 0},  //TV = 2.82(3911 lines)  AV=2.53  SV=5.75  BV=-0.40
    {150009,4864,1072, 0, 0, 0},  //TV = 2.74(4141 lines)  AV=2.53  SV=5.76  BV=-0.49
    {166672,4864,1040, 0, 0, 0},  //TV = 2.58(4601 lines)  AV=2.53  SV=5.71  BV=-0.60
    {175004,4864,1064, 0, 0, 0},  //TV = 2.51(4831 lines)  AV=2.53  SV=5.75  BV=-0.71
    {191668,4864,1040, 0, 0, 0},  //TV = 2.38(5291 lines)  AV=2.53  SV=5.71  BV=-0.80
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sCaptureISO400PLineTable_50Hz =
{
{
    {73,1600,1048, 0, 0, 0},  //TV = 13.74(2 lines)  AV=2.53  SV=4.12  BV=12.15
    {73,1664,1040, 0, 0, 0},  //TV = 13.74(2 lines)  AV=2.53  SV=4.17  BV=12.10
    {109,1216,1032, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.70  BV=11.99
    {109,1280,1048, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.80  BV=11.89
    {109,1344,1064, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.89  BV=11.80
    {109,1472,1032, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.98  BV=11.71
    {145,1216,1024, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.69  BV=11.59
    {145,1280,1056, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.81  BV=11.47
    {145,1344,1048, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.87  BV=11.41
    {145,1472,1024, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.97  BV=11.31
    {182,1216,1064, 0, 0, 0},  //TV = 12.42(5 lines)  AV=2.53  SV=3.75  BV=11.20
    {182,1344,1024, 0, 0, 0},  //TV = 12.42(5 lines)  AV=2.53  SV=3.84  BV=11.11
    {218,1152,1072, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.68  BV=11.01
    {218,1280,1032, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.78  BV=10.91
    {218,1344,1056, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.88  BV=10.81
    {254,1216,1072, 0, 0, 0},  //TV = 11.94(7 lines)  AV=2.53  SV=3.76  BV=10.71
    {290,1152,1064, 0, 0, 0},  //TV = 11.75(8 lines)  AV=2.53  SV=3.67  BV=10.61
    {290,1280,1024, 0, 0, 0},  //TV = 11.75(8 lines)  AV=2.53  SV=3.77  BV=10.51
    {327,1216,1024, 0, 0, 0},  //TV = 11.58(9 lines)  AV=2.53  SV=3.69  BV=10.41
    {327,1280,1048, 0, 0, 0},  //TV = 11.58(9 lines)  AV=2.53  SV=3.80  BV=10.31
    {363,1216,1064, 0, 0, 0},  //TV = 11.43(10 lines)  AV=2.53  SV=3.75  BV=10.21
    {399,1216,1032, 0, 0, 0},  //TV = 11.29(11 lines)  AV=2.53  SV=3.70  BV=10.11
    {435,1152,1080, 0, 0, 0},  //TV = 11.17(12 lines)  AV=2.53  SV=3.69  BV=10.00
    {471,1152,1064, 0, 0, 0},  //TV = 11.05(13 lines)  AV=2.53  SV=3.67  BV=9.91
    {470,1280,1024, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=3.77  BV=9.82
    {470,1344,1048, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=3.87  BV=9.71
    {470,1472,1024, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=3.97  BV=9.61
    {470,1536,1056, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=4.07  BV=9.51
    {470,1664,1040, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=4.17  BV=9.41
    {470,1792,1040, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=4.27  BV=9.31
    {470,1920,1040, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=4.37  BV=9.21
    {470,2048,1040, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=4.47  BV=9.12
    {470,2176,1056, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=4.58  BV=9.01
    {470,2304,1064, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=4.67  BV=8.91
    {470,2560,1032, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=4.78  BV=8.80
    {470,2688,1048, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=4.87  BV=8.71
    {470,2944,1024, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=4.97  BV=8.61
    {470,3072,1056, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=5.07  BV=8.51
    {470,3328,1048, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=5.18  BV=8.40
    {470,3584,1040, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=5.27  BV=8.31
    {470,3840,1040, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=5.37  BV=8.21
    {470,4096,1040, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=5.47  BV=8.12
    {470,4352,1056, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=5.58  BV=8.01
    {470,4608,1072, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=5.68  BV=7.90
    {470,5120,1032, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=5.78  BV=7.80
    {508,4864,1072, 0, 0, 0},  //TV = 10.94(14 lines)  AV=2.53  SV=5.76  BV=7.71
    {544,4864,1072, 0, 0, 0},  //TV = 10.84(15 lines)  AV=2.53  SV=5.76  BV=7.61
    {580,5120,1024, 0, 0, 0},  //TV = 10.75(16 lines)  AV=2.53  SV=5.77  BV=7.51
    {616,5120,1032, 0, 0, 0},  //TV = 10.66(17 lines)  AV=2.53  SV=5.78  BV=7.41
    {689,4864,1048, 0, 0, 0},  //TV = 10.50(19 lines)  AV=2.53  SV=5.72  BV=7.30
    {725,4864,1064, 0, 0, 0},  //TV = 10.43(20 lines)  AV=2.53  SV=5.75  BV=7.21
    {797,4864,1040, 0, 0, 0},  //TV = 10.29(22 lines)  AV=2.53  SV=5.71  BV=7.11
    {834,4864,1064, 0, 0, 0},  //TV = 10.23(23 lines)  AV=2.53  SV=5.75  BV=7.01
    {906,4864,1048, 0, 0, 0},  //TV = 10.11(25 lines)  AV=2.53  SV=5.72  BV=6.91
    {979,4864,1040, 0, 0, 0},  //TV = 10.00(27 lines)  AV=2.53  SV=5.71  BV=6.81
    {1051,4864,1032, 0, 0, 0},  //TV = 9.89(29 lines)  AV=2.53  SV=5.70  BV=6.72
    {1123,4864,1040, 0, 0, 0},  //TV = 9.80(31 lines)  AV=2.53  SV=5.71  BV=6.61
    {1196,4864,1048, 0, 0, 0},  //TV = 9.71(33 lines)  AV=2.53  SV=5.72  BV=6.51
    {1268,4864,1064, 0, 0, 0},  //TV = 9.62(35 lines)  AV=2.53  SV=5.75  BV=6.40
    {1377,4864,1048, 0, 0, 0},  //TV = 9.50(38 lines)  AV=2.53  SV=5.72  BV=6.31
    {1486,4864,1040, 0, 0, 0},  //TV = 9.39(41 lines)  AV=2.53  SV=5.71  BV=6.21
    {1594,4864,1032, 0, 0, 0},  //TV = 9.29(44 lines)  AV=2.53  SV=5.70  BV=6.12
    {1703,4864,1040, 0, 0, 0},  //TV = 9.20(47 lines)  AV=2.53  SV=5.71  BV=6.01
    {1812,4864,1048, 0, 0, 0},  //TV = 9.11(50 lines)  AV=2.53  SV=5.72  BV=5.91
    {1957,4864,1040, 0, 0, 0},  //TV = 9.00(54 lines)  AV=2.53  SV=5.71  BV=5.81
    {2102,4864,1040, 0, 0, 0},  //TV = 8.89(58 lines)  AV=2.53  SV=5.71  BV=5.71
    {2246,4864,1040, 0, 0, 0},  //TV = 8.80(62 lines)  AV=2.53  SV=5.71  BV=5.61
    {2391,4864,1048, 0, 0, 0},  //TV = 8.71(66 lines)  AV=2.53  SV=5.72  BV=5.51
    {2572,4864,1048, 0, 0, 0},  //TV = 8.60(71 lines)  AV=2.53  SV=5.72  BV=5.40
    {2790,4864,1032, 0, 0, 0},  //TV = 8.49(77 lines)  AV=2.53  SV=5.70  BV=5.31
    {2971,4864,1040, 0, 0, 0},  //TV = 8.39(82 lines)  AV=2.53  SV=5.71  BV=5.21
    {3188,4864,1032, 0, 0, 0},  //TV = 8.29(88 lines)  AV=2.53  SV=5.70  BV=5.12
    {3406,4864,1040, 0, 0, 0},  //TV = 8.20(94 lines)  AV=2.53  SV=5.71  BV=5.01
    {3659,4864,1040, 0, 0, 0},  //TV = 8.09(101 lines)  AV=2.53  SV=5.71  BV=4.91
    {3913,4864,1040, 0, 0, 0},  //TV = 8.00(108 lines)  AV=2.53  SV=5.71  BV=4.81
    {4203,4864,1032, 0, 0, 0},  //TV = 7.89(116 lines)  AV=2.53  SV=5.70  BV=4.72
    {4492,4864,1040, 0, 0, 0},  //TV = 7.80(124 lines)  AV=2.53  SV=5.71  BV=4.61
    {4855,4864,1032, 0, 0, 0},  //TV = 7.69(134 lines)  AV=2.53  SV=5.70  BV=4.51
    {5181,4864,1040, 0, 0, 0},  //TV = 7.59(143 lines)  AV=2.53  SV=5.71  BV=4.40
    {5579,4864,1032, 0, 0, 0},  //TV = 7.49(154 lines)  AV=2.53  SV=5.70  BV=4.31
    {5978,4864,1032, 0, 0, 0},  //TV = 7.39(165 lines)  AV=2.53  SV=5.70  BV=4.21
    {6376,4864,1040, 0, 0, 0},  //TV = 7.29(176 lines)  AV=2.53  SV=5.71  BV=4.11
    {6847,4864,1032, 0, 0, 0},  //TV = 7.19(189 lines)  AV=2.53  SV=5.70  BV=4.01
    {7318,4864,1032, 0, 0, 0},  //TV = 7.09(202 lines)  AV=2.53  SV=5.70  BV=3.92
    {7861,4864,1032, 0, 0, 0},  //TV = 6.99(217 lines)  AV=2.53  SV=5.70  BV=3.81
    {8405,4864,1032, 0, 0, 0},  //TV = 6.89(232 lines)  AV=2.53  SV=5.70  BV=3.72
    {9057,4864,1032, 0, 0, 0},  //TV = 6.79(250 lines)  AV=2.53  SV=5.70  BV=3.61
    {9709,4864,1032, 0, 0, 0},  //TV = 6.69(268 lines)  AV=2.53  SV=5.70  BV=3.51
    {9999,5120,1024, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.77  BV=3.40
    {9999,5376,1040, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.86  BV=3.31
    {9999,5632,1064, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.96  BV=3.21
    {9999,6144,1048, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=6.06  BV=3.11
    {9999,6144,1120, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=6.16  BV=3.01
    {9999,6144,1208, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=6.27  BV=2.90
    {9999,6144,1288, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=6.36  BV=2.81
    {9999,6144,1384, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=6.46  BV=2.71
    {9999,6144,1480, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=6.56  BV=2.61
    {9999,6144,1592, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=6.67  BV=2.50
    {19997,4864,1072, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=5.76  BV=2.41
    {19997,5376,1040, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=5.86  BV=2.31
    {19997,5632,1064, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=5.96  BV=2.21
    {19997,6144,1048, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=6.06  BV=2.11
    {19997,6144,1120, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=6.16  BV=2.01
    {19997,6144,1200, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=6.26  BV=1.91
    {29995,5120,1032, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.78  BV=1.81
    {29995,5376,1048, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.87  BV=1.72
    {29995,5888,1024, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.97  BV=1.62
    {29995,6144,1056, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.07  BV=1.51
    {39993,4864,1072, 0, 0, 0},  //TV = 4.64(1104 lines)  AV=2.53  SV=5.76  BV=1.41
    {39993,5376,1040, 0, 0, 0},  //TV = 4.64(1104 lines)  AV=2.53  SV=5.86  BV=1.31
    {39993,5632,1064, 0, 0, 0},  //TV = 4.64(1104 lines)  AV=2.53  SV=5.96  BV=1.21
    {49991,4864,1056, 0, 0, 0},  //TV = 4.32(1380 lines)  AV=2.53  SV=5.74  BV=1.11
    {49991,5376,1024, 0, 0, 0},  //TV = 4.32(1380 lines)  AV=2.53  SV=5.84  BV=1.01
    {49991,5632,1048, 0, 0, 0},  //TV = 4.32(1380 lines)  AV=2.53  SV=5.94  BV=0.91
    {59989,5120,1032, 0, 0, 0},  //TV = 4.06(1656 lines)  AV=2.53  SV=5.78  BV=0.81
    {59989,5376,1048, 0, 0, 0},  //TV = 4.06(1656 lines)  AV=2.53  SV=5.87  BV=0.72
    {69987,4864,1064, 0, 0, 0},  //TV = 3.84(1932 lines)  AV=2.53  SV=5.75  BV=0.62
    {69987,5376,1032, 0, 0, 0},  //TV = 3.84(1932 lines)  AV=2.53  SV=5.85  BV=0.52
    {79985,4864,1072, 0, 0, 0},  //TV = 3.64(2208 lines)  AV=2.53  SV=5.76  BV=0.41
    {79985,5376,1040, 0, 0, 0},  //TV = 3.64(2208 lines)  AV=2.53  SV=5.86  BV=0.31
    {89983,5120,1048, 0, 0, 0},  //TV = 3.47(2484 lines)  AV=2.53  SV=5.80  BV=0.20
    {100018,4864,1056, 0, 0, 0},  //TV = 3.32(2761 lines)  AV=2.53  SV=5.74  BV=0.11
    {110017,4864,1032, 0, 0, 0},  //TV = 3.18(3037 lines)  AV=2.53  SV=5.70  BV=0.01
    {110017,5120,1064, 0, 0, 0},  //TV = 3.18(3037 lines)  AV=2.53  SV=5.82  BV=-0.11
    {120015,5120,1032, 0, 0, 0},  //TV = 3.06(3313 lines)  AV=2.53  SV=5.78  BV=-0.19
    {130013,5120,1024, 0, 0, 0},  //TV = 2.94(3589 lines)  AV=2.53  SV=5.77  BV=-0.30
    {140011,4864,1072, 0, 0, 0},  //TV = 2.84(3865 lines)  AV=2.53  SV=5.76  BV=-0.40
    {150009,4864,1072, 0, 0, 0},  //TV = 2.74(4141 lines)  AV=2.53  SV=5.76  BV=-0.49
    {160007,5120,1024, 0, 0, 0},  //TV = 2.64(4417 lines)  AV=2.53  SV=5.77  BV=-0.60
    {180003,4864,1032, 0, 0, 0},  //TV = 2.47(4969 lines)  AV=2.53  SV=5.70  BV=-0.70
    {190001,4864,1040, 0, 0, 0},  //TV = 2.40(5245 lines)  AV=2.53  SV=5.71  BV=-0.79
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_CaptureISO400Table =
{
    AETABLE_CAPTURE_ISO400,    //eAETableID
    131,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    122,    //i4MaxBV
    -8,    //i4MinBV
    90,    //i4EffectiveMaxBV
    -30,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_400, //ISO SPEED
    sCaptureISO400PLineTable_60Hz,
    sCaptureISO400PLineTable_50Hz,
    NULL,
};

static strEvPline sCaptureISO800PLineTable_60Hz =
{
{
    {73,1600,1048, 0, 0, 0},  //TV = 13.74(2 lines)  AV=2.53  SV=4.12  BV=12.15
    {73,1664,1040, 0, 0, 0},  //TV = 13.74(2 lines)  AV=2.53  SV=4.17  BV=12.10
    {109,1216,1032, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.70  BV=11.99
    {109,1280,1048, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.80  BV=11.89
    {109,1344,1064, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.89  BV=11.80
    {109,1472,1032, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.98  BV=11.71
    {145,1216,1024, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.69  BV=11.59
    {145,1280,1056, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.81  BV=11.47
    {145,1344,1048, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.87  BV=11.41
    {145,1472,1024, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.97  BV=11.31
    {182,1216,1064, 0, 0, 0},  //TV = 12.42(5 lines)  AV=2.53  SV=3.75  BV=11.20
    {182,1344,1024, 0, 0, 0},  //TV = 12.42(5 lines)  AV=2.53  SV=3.84  BV=11.11
    {218,1152,1072, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.68  BV=11.01
    {218,1280,1032, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.78  BV=10.91
    {218,1344,1056, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.88  BV=10.81
    {254,1216,1072, 0, 0, 0},  //TV = 11.94(7 lines)  AV=2.53  SV=3.76  BV=10.71
    {290,1152,1064, 0, 0, 0},  //TV = 11.75(8 lines)  AV=2.53  SV=3.67  BV=10.61
    {290,1280,1024, 0, 0, 0},  //TV = 11.75(8 lines)  AV=2.53  SV=3.77  BV=10.51
    {327,1216,1024, 0, 0, 0},  //TV = 11.58(9 lines)  AV=2.53  SV=3.69  BV=10.41
    {327,1280,1048, 0, 0, 0},  //TV = 11.58(9 lines)  AV=2.53  SV=3.80  BV=10.31
    {363,1216,1064, 0, 0, 0},  //TV = 11.43(10 lines)  AV=2.53  SV=3.75  BV=10.21
    {399,1216,1032, 0, 0, 0},  //TV = 11.29(11 lines)  AV=2.53  SV=3.70  BV=10.11
    {435,1152,1080, 0, 0, 0},  //TV = 11.17(12 lines)  AV=2.53  SV=3.69  BV=10.00
    {471,1152,1064, 0, 0, 0},  //TV = 11.05(13 lines)  AV=2.53  SV=3.67  BV=9.91
    {470,1280,1024, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=3.77  BV=9.82
    {470,1344,1048, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=3.87  BV=9.71
    {470,1472,1024, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=3.97  BV=9.61
    {470,1536,1056, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=4.07  BV=9.51
    {470,1664,1040, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=4.17  BV=9.41
    {470,1792,1040, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=4.27  BV=9.31
    {470,1920,1040, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=4.37  BV=9.21
    {470,2048,1040, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=4.47  BV=9.12
    {470,2176,1056, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=4.58  BV=9.01
    {470,2304,1064, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=4.67  BV=8.91
    {470,2560,1032, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=4.78  BV=8.80
    {470,2688,1048, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=4.87  BV=8.71
    {470,2944,1024, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=4.97  BV=8.61
    {470,3072,1056, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=5.07  BV=8.51
    {470,3328,1048, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=5.18  BV=8.40
    {470,3584,1040, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=5.27  BV=8.31
    {470,3840,1040, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=5.37  BV=8.21
    {470,4096,1040, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=5.47  BV=8.12
    {470,4352,1056, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=5.58  BV=8.01
    {470,4608,1072, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=5.68  BV=7.90
    {470,5120,1032, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=5.78  BV=7.80
    {470,5376,1048, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=5.87  BV=7.71
    {470,5888,1024, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=5.97  BV=7.61
    {470,6144,1056, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=6.07  BV=7.51
    {470,6144,1128, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=6.17  BV=7.41
    {470,6144,1208, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=6.27  BV=7.31
    {470,6144,1304, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=6.38  BV=7.20
    {470,6144,1400, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=6.48  BV=7.10
    {470,6144,1496, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=6.58  BV=7.01
    {470,6144,1600, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=6.67  BV=6.91
    {470,6144,1720, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=6.78  BV=6.80
    {508,6144,1696, 0, 0, 0},  //TV = 10.94(14 lines)  AV=2.53  SV=6.76  BV=6.71
    {544,6144,1704, 0, 0, 0},  //TV = 10.84(15 lines)  AV=2.53  SV=6.76  BV=6.61
    {580,6144,1712, 0, 0, 0},  //TV = 10.75(16 lines)  AV=2.53  SV=6.77  BV=6.51
    {616,6144,1728, 0, 0, 0},  //TV = 10.66(17 lines)  AV=2.53  SV=6.78  BV=6.41
    {689,6144,1656, 0, 0, 0},  //TV = 10.50(19 lines)  AV=2.53  SV=6.72  BV=6.31
    {725,6144,1688, 0, 0, 0},  //TV = 10.43(20 lines)  AV=2.53  SV=6.75  BV=6.21
    {797,6144,1648, 0, 0, 0},  //TV = 10.29(22 lines)  AV=2.53  SV=6.72  BV=6.10
    {834,6144,1680, 0, 0, 0},  //TV = 10.23(23 lines)  AV=2.53  SV=6.74  BV=6.01
    {906,6144,1664, 0, 0, 0},  //TV = 10.11(25 lines)  AV=2.53  SV=6.73  BV=5.91
    {979,6144,1648, 0, 0, 0},  //TV = 10.00(27 lines)  AV=2.53  SV=6.72  BV=5.81
    {1051,6144,1640, 0, 0, 0},  //TV = 9.89(29 lines)  AV=2.53  SV=6.71  BV=5.71
    {1123,6144,1648, 0, 0, 0},  //TV = 9.80(31 lines)  AV=2.53  SV=6.72  BV=5.61
    {1196,6144,1664, 0, 0, 0},  //TV = 9.71(33 lines)  AV=2.53  SV=6.73  BV=5.50
    {1268,6144,1680, 0, 0, 0},  //TV = 9.62(35 lines)  AV=2.53  SV=6.74  BV=5.41
    {1377,6144,1656, 0, 0, 0},  //TV = 9.50(38 lines)  AV=2.53  SV=6.72  BV=5.31
    {1486,6144,1648, 0, 0, 0},  //TV = 9.39(41 lines)  AV=2.53  SV=6.72  BV=5.21
    {1594,6144,1640, 0, 0, 0},  //TV = 9.29(44 lines)  AV=2.53  SV=6.71  BV=5.11
    {1703,6144,1640, 0, 0, 0},  //TV = 9.20(47 lines)  AV=2.53  SV=6.71  BV=5.02
    {1812,6144,1664, 0, 0, 0},  //TV = 9.11(50 lines)  AV=2.53  SV=6.73  BV=4.91
    {1957,6144,1648, 0, 0, 0},  //TV = 9.00(54 lines)  AV=2.53  SV=6.72  BV=4.81
    {2102,6144,1648, 0, 0, 0},  //TV = 8.89(58 lines)  AV=2.53  SV=6.72  BV=4.71
    {2246,6144,1648, 0, 0, 0},  //TV = 8.80(62 lines)  AV=2.53  SV=6.72  BV=4.61
    {2391,6144,1656, 0, 0, 0},  //TV = 8.71(66 lines)  AV=2.53  SV=6.72  BV=4.51
    {2572,6144,1656, 0, 0, 0},  //TV = 8.60(71 lines)  AV=2.53  SV=6.72  BV=4.41
    {2790,6144,1640, 0, 0, 0},  //TV = 8.49(77 lines)  AV=2.53  SV=6.71  BV=4.30
    {2971,6144,1648, 0, 0, 0},  //TV = 8.39(82 lines)  AV=2.53  SV=6.72  BV=4.21
    {3188,6144,1640, 0, 0, 0},  //TV = 8.29(88 lines)  AV=2.53  SV=6.71  BV=4.11
    {3406,6144,1656, 0, 0, 0},  //TV = 8.20(94 lines)  AV=2.53  SV=6.72  BV=4.00
    {3659,6144,1648, 0, 0, 0},  //TV = 8.09(101 lines)  AV=2.53  SV=6.72  BV=3.91
    {3913,6144,1648, 0, 0, 0},  //TV = 8.00(108 lines)  AV=2.53  SV=6.72  BV=3.81
    {4203,6144,1640, 0, 0, 0},  //TV = 7.89(116 lines)  AV=2.53  SV=6.71  BV=3.71
    {4492,6144,1648, 0, 0, 0},  //TV = 7.80(124 lines)  AV=2.53  SV=6.72  BV=3.61
    {4855,6144,1640, 0, 0, 0},  //TV = 7.69(134 lines)  AV=2.53  SV=6.71  BV=3.50
    {5181,6144,1648, 0, 0, 0},  //TV = 7.59(143 lines)  AV=2.53  SV=6.72  BV=3.40
    {5579,6144,1640, 0, 0, 0},  //TV = 7.49(154 lines)  AV=2.53  SV=6.71  BV=3.30
    {5978,6144,1640, 0, 0, 0},  //TV = 7.39(165 lines)  AV=2.53  SV=6.71  BV=3.20
    {6376,6144,1640, 0, 0, 0},  //TV = 7.29(176 lines)  AV=2.53  SV=6.71  BV=3.11
    {6847,6144,1640, 0, 0, 0},  //TV = 7.19(189 lines)  AV=2.53  SV=6.71  BV=3.01
    {7318,6144,1640, 0, 0, 0},  //TV = 7.09(202 lines)  AV=2.53  SV=6.71  BV=2.91
    {7861,6144,1640, 0, 0, 0},  //TV = 6.99(217 lines)  AV=2.53  SV=6.71  BV=2.81
    {8332,6144,1656, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=6.72  BV=2.71
    {8332,6144,1776, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=6.82  BV=2.61
    {8332,6144,1904, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=6.92  BV=2.51
    {8332,6144,2048, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=7.03  BV=2.40
    {8332,6144,2200, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=7.13  BV=2.30
    {8332,6144,2352, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=7.23  BV=2.20
    {8332,6144,2520, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=7.33  BV=2.11
    {8332,6144,2704, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=7.43  BV=2.00
    {8332,6144,2896, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=7.53  BV=1.90
    {8332,6144,3104, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=7.63  BV=1.80
    {16664,6144,1664, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=6.73  BV=1.70
    {16664,6144,1776, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=6.82  BV=1.61
    {16664,6144,1904, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=6.92  BV=1.51
    {16664,6144,2040, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=7.02  BV=1.41
    {16664,6144,2192, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=7.13  BV=1.31
    {16664,6144,2344, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=7.22  BV=1.21
    {24996,6144,1672, 0, 0, 0},  //TV = 5.32(690 lines)  AV=2.53  SV=6.74  BV=1.11
    {24996,6144,1792, 0, 0, 0},  //TV = 5.32(690 lines)  AV=2.53  SV=6.84  BV=1.01
    {24996,6144,1928, 0, 0, 0},  //TV = 5.32(690 lines)  AV=2.53  SV=6.94  BV=0.91
    {24996,6144,2064, 0, 0, 0},  //TV = 5.32(690 lines)  AV=2.53  SV=7.04  BV=0.81
    {33327,6144,1656, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=6.72  BV=0.71
    {33327,6144,1776, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=6.82  BV=0.61
    {33327,6144,1904, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=6.92  BV=0.51
    {33327,6144,2040, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=7.02  BV=0.41
    {41659,6144,1744, 0, 0, 0},  //TV = 4.59(1150 lines)  AV=2.53  SV=6.80  BV=0.31
    {41659,6144,1872, 0, 0, 0},  //TV = 4.59(1150 lines)  AV=2.53  SV=6.90  BV=0.21
    {49991,6144,1672, 0, 0, 0},  //TV = 4.32(1380 lines)  AV=2.53  SV=6.74  BV=0.11
    {49991,6144,1808, 0, 0, 0},  //TV = 4.32(1380 lines)  AV=2.53  SV=6.85  BV=-0.00
    {58323,6144,1656, 0, 0, 0},  //TV = 4.10(1610 lines)  AV=2.53  SV=6.72  BV=-0.10
    {58323,6144,1776, 0, 0, 0},  //TV = 4.10(1610 lines)  AV=2.53  SV=6.82  BV=-0.20
    {66654,6144,1664, 0, 0, 0},  //TV = 3.91(1840 lines)  AV=2.53  SV=6.73  BV=-0.30
    {66654,6144,1784, 0, 0, 0},  //TV = 3.91(1840 lines)  AV=2.53  SV=6.83  BV=-0.40
    {74986,6144,1712, 0, 0, 0},  //TV = 3.74(2070 lines)  AV=2.53  SV=6.77  BV=-0.51
    {83318,6144,1640, 0, 0, 0},  //TV = 3.59(2300 lines)  AV=2.53  SV=6.71  BV=-0.60
    {83318,6144,1760, 0, 0, 0},  //TV = 3.59(2300 lines)  AV=2.53  SV=6.81  BV=-0.70
    {91650,6144,1712, 0, 0, 0},  //TV = 3.45(2530 lines)  AV=2.53  SV=6.77  BV=-0.80
    {99981,6144,1680, 0, 0, 0},  //TV = 3.32(2760 lines)  AV=2.53  SV=6.74  BV=-0.89
    {108313,6144,1680, 0, 0, 0},  //TV = 3.21(2990 lines)  AV=2.53  SV=6.74  BV=-1.01
    {116645,6144,1672, 0, 0, 0},  //TV = 3.10(3220 lines)  AV=2.53  SV=6.74  BV=-1.11
    {124977,6144,1656, 0, 0, 0},  //TV = 3.00(3450 lines)  AV=2.53  SV=6.72  BV=-1.20
    {133345,6144,1680, 0, 0, 0},  //TV = 2.91(3681 lines)  AV=2.53  SV=6.74  BV=-1.31
    {141677,6144,1688, 0, 0, 0},  //TV = 2.82(3911 lines)  AV=2.53  SV=6.75  BV=-1.40
    {150009,6144,1704, 0, 0, 0},  //TV = 2.74(4141 lines)  AV=2.53  SV=6.76  BV=-1.50
    {166672,6144,1648, 0, 0, 0},  //TV = 2.58(4601 lines)  AV=2.53  SV=6.72  BV=-1.60
    {175004,6144,1688, 0, 0, 0},  //TV = 2.51(4831 lines)  AV=2.53  SV=6.75  BV=-1.71
    {191668,6144,1648, 0, 0, 0},  //TV = 2.38(5291 lines)  AV=2.53  SV=6.72  BV=-1.81
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sCaptureISO800PLineTable_50Hz =
{
{
    {73,1600,1048, 0, 0, 0},  //TV = 13.74(2 lines)  AV=2.53  SV=4.12  BV=12.15
    {73,1664,1040, 0, 0, 0},  //TV = 13.74(2 lines)  AV=2.53  SV=4.17  BV=12.10
    {109,1216,1032, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.70  BV=11.99
    {109,1280,1048, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.80  BV=11.89
    {109,1344,1064, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.89  BV=11.80
    {109,1472,1032, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.98  BV=11.71
    {145,1216,1024, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.69  BV=11.59
    {145,1280,1056, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.81  BV=11.47
    {145,1344,1048, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.87  BV=11.41
    {145,1472,1024, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.97  BV=11.31
    {182,1216,1064, 0, 0, 0},  //TV = 12.42(5 lines)  AV=2.53  SV=3.75  BV=11.20
    {182,1344,1024, 0, 0, 0},  //TV = 12.42(5 lines)  AV=2.53  SV=3.84  BV=11.11
    {218,1152,1072, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.68  BV=11.01
    {218,1280,1032, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.78  BV=10.91
    {218,1344,1056, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.88  BV=10.81
    {254,1216,1072, 0, 0, 0},  //TV = 11.94(7 lines)  AV=2.53  SV=3.76  BV=10.71
    {290,1152,1064, 0, 0, 0},  //TV = 11.75(8 lines)  AV=2.53  SV=3.67  BV=10.61
    {290,1280,1024, 0, 0, 0},  //TV = 11.75(8 lines)  AV=2.53  SV=3.77  BV=10.51
    {327,1216,1024, 0, 0, 0},  //TV = 11.58(9 lines)  AV=2.53  SV=3.69  BV=10.41
    {327,1280,1048, 0, 0, 0},  //TV = 11.58(9 lines)  AV=2.53  SV=3.80  BV=10.31
    {363,1216,1064, 0, 0, 0},  //TV = 11.43(10 lines)  AV=2.53  SV=3.75  BV=10.21
    {399,1216,1032, 0, 0, 0},  //TV = 11.29(11 lines)  AV=2.53  SV=3.70  BV=10.11
    {435,1152,1080, 0, 0, 0},  //TV = 11.17(12 lines)  AV=2.53  SV=3.69  BV=10.00
    {471,1152,1064, 0, 0, 0},  //TV = 11.05(13 lines)  AV=2.53  SV=3.67  BV=9.91
    {470,1280,1024, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=3.77  BV=9.82
    {470,1344,1048, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=3.87  BV=9.71
    {470,1472,1024, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=3.97  BV=9.61
    {470,1536,1056, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=4.07  BV=9.51
    {470,1664,1040, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=4.17  BV=9.41
    {470,1792,1040, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=4.27  BV=9.31
    {470,1920,1040, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=4.37  BV=9.21
    {470,2048,1040, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=4.47  BV=9.12
    {470,2176,1056, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=4.58  BV=9.01
    {470,2304,1064, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=4.67  BV=8.91
    {470,2560,1032, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=4.78  BV=8.80
    {470,2688,1048, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=4.87  BV=8.71
    {470,2944,1024, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=4.97  BV=8.61
    {470,3072,1056, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=5.07  BV=8.51
    {470,3328,1048, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=5.18  BV=8.40
    {470,3584,1040, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=5.27  BV=8.31
    {470,3840,1040, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=5.37  BV=8.21
    {470,4096,1040, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=5.47  BV=8.12
    {470,4352,1056, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=5.58  BV=8.01
    {470,4608,1072, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=5.68  BV=7.90
    {470,5120,1032, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=5.78  BV=7.80
    {470,5376,1048, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=5.87  BV=7.71
    {470,5888,1024, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=5.97  BV=7.61
    {470,6144,1056, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=6.07  BV=7.51
    {470,6144,1128, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=6.17  BV=7.41
    {470,6144,1208, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=6.27  BV=7.31
    {470,6144,1304, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=6.38  BV=7.20
    {470,6144,1400, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=6.48  BV=7.10
    {470,6144,1496, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=6.58  BV=7.01
    {470,6144,1600, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=6.67  BV=6.91
    {470,6144,1720, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=6.78  BV=6.80
    {508,6144,1696, 0, 0, 0},  //TV = 10.94(14 lines)  AV=2.53  SV=6.76  BV=6.71
    {544,6144,1704, 0, 0, 0},  //TV = 10.84(15 lines)  AV=2.53  SV=6.76  BV=6.61
    {580,6144,1712, 0, 0, 0},  //TV = 10.75(16 lines)  AV=2.53  SV=6.77  BV=6.51
    {616,6144,1728, 0, 0, 0},  //TV = 10.66(17 lines)  AV=2.53  SV=6.78  BV=6.41
    {689,6144,1656, 0, 0, 0},  //TV = 10.50(19 lines)  AV=2.53  SV=6.72  BV=6.31
    {725,6144,1688, 0, 0, 0},  //TV = 10.43(20 lines)  AV=2.53  SV=6.75  BV=6.21
    {797,6144,1648, 0, 0, 0},  //TV = 10.29(22 lines)  AV=2.53  SV=6.72  BV=6.10
    {834,6144,1680, 0, 0, 0},  //TV = 10.23(23 lines)  AV=2.53  SV=6.74  BV=6.01
    {906,6144,1664, 0, 0, 0},  //TV = 10.11(25 lines)  AV=2.53  SV=6.73  BV=5.91
    {979,6144,1648, 0, 0, 0},  //TV = 10.00(27 lines)  AV=2.53  SV=6.72  BV=5.81
    {1051,6144,1640, 0, 0, 0},  //TV = 9.89(29 lines)  AV=2.53  SV=6.71  BV=5.71
    {1123,6144,1648, 0, 0, 0},  //TV = 9.80(31 lines)  AV=2.53  SV=6.72  BV=5.61
    {1196,6144,1664, 0, 0, 0},  //TV = 9.71(33 lines)  AV=2.53  SV=6.73  BV=5.50
    {1268,6144,1680, 0, 0, 0},  //TV = 9.62(35 lines)  AV=2.53  SV=6.74  BV=5.41
    {1377,6144,1656, 0, 0, 0},  //TV = 9.50(38 lines)  AV=2.53  SV=6.72  BV=5.31
    {1486,6144,1648, 0, 0, 0},  //TV = 9.39(41 lines)  AV=2.53  SV=6.72  BV=5.21
    {1594,6144,1640, 0, 0, 0},  //TV = 9.29(44 lines)  AV=2.53  SV=6.71  BV=5.11
    {1703,6144,1640, 0, 0, 0},  //TV = 9.20(47 lines)  AV=2.53  SV=6.71  BV=5.02
    {1812,6144,1664, 0, 0, 0},  //TV = 9.11(50 lines)  AV=2.53  SV=6.73  BV=4.91
    {1957,6144,1648, 0, 0, 0},  //TV = 9.00(54 lines)  AV=2.53  SV=6.72  BV=4.81
    {2102,6144,1648, 0, 0, 0},  //TV = 8.89(58 lines)  AV=2.53  SV=6.72  BV=4.71
    {2246,6144,1648, 0, 0, 0},  //TV = 8.80(62 lines)  AV=2.53  SV=6.72  BV=4.61
    {2391,6144,1656, 0, 0, 0},  //TV = 8.71(66 lines)  AV=2.53  SV=6.72  BV=4.51
    {2572,6144,1656, 0, 0, 0},  //TV = 8.60(71 lines)  AV=2.53  SV=6.72  BV=4.41
    {2790,6144,1640, 0, 0, 0},  //TV = 8.49(77 lines)  AV=2.53  SV=6.71  BV=4.30
    {2971,6144,1648, 0, 0, 0},  //TV = 8.39(82 lines)  AV=2.53  SV=6.72  BV=4.21
    {3188,6144,1640, 0, 0, 0},  //TV = 8.29(88 lines)  AV=2.53  SV=6.71  BV=4.11
    {3406,6144,1656, 0, 0, 0},  //TV = 8.20(94 lines)  AV=2.53  SV=6.72  BV=4.00
    {3659,6144,1648, 0, 0, 0},  //TV = 8.09(101 lines)  AV=2.53  SV=6.72  BV=3.91
    {3913,6144,1648, 0, 0, 0},  //TV = 8.00(108 lines)  AV=2.53  SV=6.72  BV=3.81
    {4203,6144,1640, 0, 0, 0},  //TV = 7.89(116 lines)  AV=2.53  SV=6.71  BV=3.71
    {4492,6144,1648, 0, 0, 0},  //TV = 7.80(124 lines)  AV=2.53  SV=6.72  BV=3.61
    {4855,6144,1640, 0, 0, 0},  //TV = 7.69(134 lines)  AV=2.53  SV=6.71  BV=3.50
    {5181,6144,1648, 0, 0, 0},  //TV = 7.59(143 lines)  AV=2.53  SV=6.72  BV=3.40
    {5579,6144,1640, 0, 0, 0},  //TV = 7.49(154 lines)  AV=2.53  SV=6.71  BV=3.30
    {5978,6144,1640, 0, 0, 0},  //TV = 7.39(165 lines)  AV=2.53  SV=6.71  BV=3.20
    {6376,6144,1640, 0, 0, 0},  //TV = 7.29(176 lines)  AV=2.53  SV=6.71  BV=3.11
    {6847,6144,1640, 0, 0, 0},  //TV = 7.19(189 lines)  AV=2.53  SV=6.71  BV=3.01
    {7318,6144,1640, 0, 0, 0},  //TV = 7.09(202 lines)  AV=2.53  SV=6.71  BV=2.91
    {7861,6144,1640, 0, 0, 0},  //TV = 6.99(217 lines)  AV=2.53  SV=6.71  BV=2.81
    {8405,6144,1640, 0, 0, 0},  //TV = 6.89(232 lines)  AV=2.53  SV=6.71  BV=2.71
    {9021,6144,1640, 0, 0, 0},  //TV = 6.79(249 lines)  AV=2.53  SV=6.71  BV=2.61
    {9709,6144,1640, 0, 0, 0},  //TV = 6.69(268 lines)  AV=2.53  SV=6.71  BV=2.50
    {9999,6144,1704, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=6.76  BV=2.41
    {9999,6144,1832, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=6.87  BV=2.30
    {9999,6144,1960, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=6.97  BV=2.20
    {9999,6144,2104, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=7.07  BV=2.10
    {9999,6144,2248, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=7.16  BV=2.01
    {9999,6144,2408, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=7.26  BV=1.91
    {9999,6144,2584, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=7.36  BV=1.81
    {9999,6144,2768, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=7.46  BV=1.71
    {9999,6144,2968, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=7.56  BV=1.61
    {9999,6144,3184, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=7.67  BV=1.50
    {19997,6144,1704, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=6.76  BV=1.41
    {19997,6144,1824, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=6.86  BV=1.31
    {19997,6144,1952, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=6.96  BV=1.21
    {19997,6144,2096, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=7.06  BV=1.11
    {19997,6144,2248, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=7.16  BV=1.01
    {19997,6144,2408, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=7.26  BV=0.91
    {29995,6144,1720, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.78  BV=0.81
    {29995,6144,1840, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.87  BV=0.71
    {29995,6144,1976, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.98  BV=0.61
    {29995,6144,2112, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=7.07  BV=0.51
    {39993,6144,1696, 0, 0, 0},  //TV = 4.64(1104 lines)  AV=2.53  SV=6.76  BV=0.41
    {39993,6144,1824, 0, 0, 0},  //TV = 4.64(1104 lines)  AV=2.53  SV=6.86  BV=0.31
    {39993,6144,1952, 0, 0, 0},  //TV = 4.64(1104 lines)  AV=2.53  SV=6.96  BV=0.21
    {49991,6144,1672, 0, 0, 0},  //TV = 4.32(1380 lines)  AV=2.53  SV=6.74  BV=0.11
    {49991,6144,1808, 0, 0, 0},  //TV = 4.32(1380 lines)  AV=2.53  SV=6.85  BV=-0.00
    {49991,6144,1936, 0, 0, 0},  //TV = 4.32(1380 lines)  AV=2.53  SV=6.95  BV=-0.10
    {59989,6144,1728, 0, 0, 0},  //TV = 4.06(1656 lines)  AV=2.53  SV=6.78  BV=-0.20
    {59989,6144,1848, 0, 0, 0},  //TV = 4.06(1656 lines)  AV=2.53  SV=6.88  BV=-0.30
    {69987,6144,1704, 0, 0, 0},  //TV = 3.84(1932 lines)  AV=2.53  SV=6.76  BV=-0.40
    {69987,6144,1824, 0, 0, 0},  //TV = 3.84(1932 lines)  AV=2.53  SV=6.86  BV=-0.50
    {79985,6144,1720, 0, 0, 0},  //TV = 3.64(2208 lines)  AV=2.53  SV=6.78  BV=-0.61
    {79985,6144,1832, 0, 0, 0},  //TV = 3.64(2208 lines)  AV=2.53  SV=6.87  BV=-0.70
    {89983,6144,1760, 0, 0, 0},  //TV = 3.47(2484 lines)  AV=2.53  SV=6.81  BV=-0.81
    {100018,6144,1696, 0, 0, 0},  //TV = 3.32(2761 lines)  AV=2.53  SV=6.76  BV=-0.91
    {110017,6144,1640, 0, 0, 0},  //TV = 3.18(3037 lines)  AV=2.53  SV=6.71  BV=-1.00
    {110017,6144,1768, 0, 0, 0},  //TV = 3.18(3037 lines)  AV=2.53  SV=6.82  BV=-1.11
    {120015,6144,1736, 0, 0, 0},  //TV = 3.06(3313 lines)  AV=2.53  SV=6.79  BV=-1.21
    {130013,6144,1720, 0, 0, 0},  //TV = 2.94(3589 lines)  AV=2.53  SV=6.78  BV=-1.31
    {140011,6144,1712, 0, 0, 0},  //TV = 2.84(3865 lines)  AV=2.53  SV=6.77  BV=-1.41
    {150009,6144,1704, 0, 0, 0},  //TV = 2.74(4141 lines)  AV=2.53  SV=6.76  BV=-1.50
    {160007,6144,1712, 0, 0, 0},  //TV = 2.64(4417 lines)  AV=2.53  SV=6.77  BV=-1.60
    {180003,6144,1640, 0, 0, 0},  //TV = 2.47(4969 lines)  AV=2.53  SV=6.71  BV=-1.71
    {190001,6144,1656, 0, 0, 0},  //TV = 2.40(5245 lines)  AV=2.53  SV=6.72  BV=-1.80
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_CaptureISO800Table =
{
    AETABLE_CAPTURE_ISO800,    //eAETableID
    141,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    122,    //i4MaxBV
    -18,    //i4MinBV
    90,    //i4EffectiveMaxBV
    -30,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_800, //ISO SPEED
    sCaptureISO800PLineTable_60Hz,
    sCaptureISO800PLineTable_50Hz,
    NULL,
};

static strEvPline sCaptureISO1600PLineTable_60Hz =
{
{
    {73,1600,1048, 0, 0, 0},  //TV = 13.74(2 lines)  AV=2.53  SV=4.12  BV=12.15
    {73,1664,1040, 0, 0, 0},  //TV = 13.74(2 lines)  AV=2.53  SV=4.17  BV=12.10
    {109,1216,1032, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.70  BV=11.99
    {109,1280,1048, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.80  BV=11.89
    {109,1344,1064, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.89  BV=11.80
    {109,1472,1032, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.98  BV=11.71
    {145,1216,1024, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.69  BV=11.59
    {145,1280,1056, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.81  BV=11.47
    {145,1344,1048, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.87  BV=11.41
    {145,1472,1024, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.97  BV=11.31
    {182,1216,1064, 0, 0, 0},  //TV = 12.42(5 lines)  AV=2.53  SV=3.75  BV=11.20
    {182,1344,1024, 0, 0, 0},  //TV = 12.42(5 lines)  AV=2.53  SV=3.84  BV=11.11
    {218,1152,1072, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.68  BV=11.01
    {218,1280,1032, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.78  BV=10.91
    {218,1344,1056, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.88  BV=10.81
    {254,1216,1072, 0, 0, 0},  //TV = 11.94(7 lines)  AV=2.53  SV=3.76  BV=10.71
    {290,1152,1064, 0, 0, 0},  //TV = 11.75(8 lines)  AV=2.53  SV=3.67  BV=10.61
    {290,1280,1024, 0, 0, 0},  //TV = 11.75(8 lines)  AV=2.53  SV=3.77  BV=10.51
    {327,1216,1024, 0, 0, 0},  //TV = 11.58(9 lines)  AV=2.53  SV=3.69  BV=10.41
    {327,1280,1048, 0, 0, 0},  //TV = 11.58(9 lines)  AV=2.53  SV=3.80  BV=10.31
    {363,1216,1064, 0, 0, 0},  //TV = 11.43(10 lines)  AV=2.53  SV=3.75  BV=10.21
    {399,1216,1032, 0, 0, 0},  //TV = 11.29(11 lines)  AV=2.53  SV=3.70  BV=10.11
    {435,1152,1080, 0, 0, 0},  //TV = 11.17(12 lines)  AV=2.53  SV=3.69  BV=10.00
    {471,1152,1064, 0, 0, 0},  //TV = 11.05(13 lines)  AV=2.53  SV=3.67  BV=9.91
    {470,1280,1024, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=3.77  BV=9.82
    {470,1344,1048, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=3.87  BV=9.71
    {470,1472,1024, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=3.97  BV=9.61
    {470,1536,1056, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=4.07  BV=9.51
    {470,1664,1040, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=4.17  BV=9.41
    {470,1792,1040, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=4.27  BV=9.31
    {470,1920,1040, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=4.37  BV=9.21
    {470,2048,1040, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=4.47  BV=9.12
    {470,2176,1056, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=4.58  BV=9.01
    {470,2304,1064, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=4.67  BV=8.91
    {470,2560,1032, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=4.78  BV=8.80
    {470,2688,1048, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=4.87  BV=8.71
    {470,2944,1024, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=4.97  BV=8.61
    {470,3072,1056, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=5.07  BV=8.51
    {470,3328,1048, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=5.18  BV=8.40
    {470,3584,1040, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=5.27  BV=8.31
    {470,3840,1040, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=5.37  BV=8.21
    {470,4096,1040, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=5.47  BV=8.12
    {470,4352,1056, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=5.58  BV=8.01
    {470,4608,1072, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=5.68  BV=7.90
    {470,5120,1032, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=5.78  BV=7.80
    {470,5376,1048, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=5.87  BV=7.71
    {470,5888,1024, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=5.97  BV=7.61
    {470,6144,1056, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=6.07  BV=7.51
    {470,6144,1128, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=6.17  BV=7.41
    {470,6144,1208, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=6.27  BV=7.31
    {470,6144,1304, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=6.38  BV=7.20
    {470,6144,1400, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=6.48  BV=7.10
    {470,6144,1496, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=6.58  BV=7.01
    {470,6144,1600, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=6.67  BV=6.91
    {470,6144,1720, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=6.78  BV=6.80
    {470,6144,1840, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=6.87  BV=6.71
    {470,6144,1968, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=6.97  BV=6.61
    {470,6144,2112, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=7.07  BV=6.51
    {470,6144,2264, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=7.17  BV=6.41
    {470,6144,2424, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=7.27  BV=6.31
    {470,6144,2600, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=7.37  BV=6.21
    {470,6144,2784, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=7.47  BV=6.11
    {470,6144,2984, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=7.57  BV=6.01
    {470,6144,3192, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=7.67  BV=5.91
    {470,6144,3424, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=7.77  BV=5.81
    {508,6144,3400, 0, 0, 0},  //TV = 10.94(14 lines)  AV=2.53  SV=7.76  BV=5.71
    {544,6144,3408, 0, 0, 0},  //TV = 10.84(15 lines)  AV=2.53  SV=7.76  BV=5.61
    {580,6144,3424, 0, 0, 0},  //TV = 10.75(16 lines)  AV=2.53  SV=7.77  BV=5.51
    {616,6144,3456, 0, 0, 0},  //TV = 10.66(17 lines)  AV=2.53  SV=7.78  BV=5.41
    {689,6144,3320, 0, 0, 0},  //TV = 10.50(19 lines)  AV=2.53  SV=7.73  BV=5.30
    {725,6144,3376, 0, 0, 0},  //TV = 10.43(20 lines)  AV=2.53  SV=7.75  BV=5.21
    {797,6144,3296, 0, 0, 0},  //TV = 10.29(22 lines)  AV=2.53  SV=7.72  BV=5.10
    {834,6144,3368, 0, 0, 0},  //TV = 10.23(23 lines)  AV=2.53  SV=7.75  BV=5.01
    {906,6144,3328, 0, 0, 0},  //TV = 10.11(25 lines)  AV=2.53  SV=7.73  BV=4.91
    {979,6144,3304, 0, 0, 0},  //TV = 10.00(27 lines)  AV=2.53  SV=7.72  BV=4.80
    {1051,6144,3280, 0, 0, 0},  //TV = 9.89(29 lines)  AV=2.53  SV=7.71  BV=4.71
    {1123,6144,3296, 0, 0, 0},  //TV = 9.80(31 lines)  AV=2.53  SV=7.72  BV=4.61
    {1196,6144,3328, 0, 0, 0},  //TV = 9.71(33 lines)  AV=2.53  SV=7.73  BV=4.50
    {1268,6144,3368, 0, 0, 0},  //TV = 9.62(35 lines)  AV=2.53  SV=7.75  BV=4.40
    {1377,6144,3320, 0, 0, 0},  //TV = 9.50(38 lines)  AV=2.53  SV=7.73  BV=4.30
    {1486,6144,3280, 0, 0, 0},  //TV = 9.39(41 lines)  AV=2.53  SV=7.71  BV=4.21
    {1594,6144,3288, 0, 0, 0},  //TV = 9.29(44 lines)  AV=2.53  SV=7.71  BV=4.11
    {1703,6144,3288, 0, 0, 0},  //TV = 9.20(47 lines)  AV=2.53  SV=7.71  BV=4.01
    {1812,6144,3328, 0, 0, 0},  //TV = 9.11(50 lines)  AV=2.53  SV=7.73  BV=3.91
    {1957,6144,3296, 0, 0, 0},  //TV = 9.00(54 lines)  AV=2.53  SV=7.72  BV=3.81
    {2102,6144,3304, 0, 0, 0},  //TV = 8.89(58 lines)  AV=2.53  SV=7.72  BV=3.70
    {2246,6144,3304, 0, 0, 0},  //TV = 8.80(62 lines)  AV=2.53  SV=7.72  BV=3.61
    {2391,6144,3320, 0, 0, 0},  //TV = 8.71(66 lines)  AV=2.53  SV=7.73  BV=3.51
    {2572,6144,3320, 0, 0, 0},  //TV = 8.60(71 lines)  AV=2.53  SV=7.73  BV=3.40
    {2790,6144,3280, 0, 0, 0},  //TV = 8.49(77 lines)  AV=2.53  SV=7.71  BV=3.30
    {2971,6144,3296, 0, 0, 0},  //TV = 8.39(82 lines)  AV=2.53  SV=7.72  BV=3.21
    {3188,6144,3280, 0, 0, 0},  //TV = 8.29(88 lines)  AV=2.53  SV=7.71  BV=3.11
    {3406,6144,3312, 0, 0, 0},  //TV = 8.20(94 lines)  AV=2.53  SV=7.72  BV=3.00
    {3659,6144,3296, 0, 0, 0},  //TV = 8.09(101 lines)  AV=2.53  SV=7.72  BV=2.91
    {3913,6144,3304, 0, 0, 0},  //TV = 8.00(108 lines)  AV=2.53  SV=7.72  BV=2.81
    {4203,6144,3288, 0, 0, 0},  //TV = 7.89(116 lines)  AV=2.53  SV=7.71  BV=2.71
    {4492,6144,3296, 0, 0, 0},  //TV = 7.80(124 lines)  AV=2.53  SV=7.72  BV=2.61
    {4855,6144,3288, 0, 0, 0},  //TV = 7.69(134 lines)  AV=2.53  SV=7.71  BV=2.50
    {5181,6144,3296, 0, 0, 0},  //TV = 7.59(143 lines)  AV=2.53  SV=7.72  BV=2.40
    {5579,6144,3280, 0, 0, 0},  //TV = 7.49(154 lines)  AV=2.53  SV=7.71  BV=2.30
    {5978,6144,3280, 0, 0, 0},  //TV = 7.39(165 lines)  AV=2.53  SV=7.71  BV=2.20
    {6376,6144,3288, 0, 0, 0},  //TV = 7.29(176 lines)  AV=2.53  SV=7.71  BV=2.11
    {6847,6144,3280, 0, 0, 0},  //TV = 7.19(189 lines)  AV=2.53  SV=7.71  BV=2.01
    {7318,6144,3288, 0, 0, 0},  //TV = 7.09(202 lines)  AV=2.53  SV=7.71  BV=1.91
    {7861,6144,3280, 0, 0, 0},  //TV = 6.99(217 lines)  AV=2.53  SV=7.71  BV=1.81
    {8332,6144,3312, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=7.72  BV=1.71
    {8332,6144,3552, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=7.82  BV=1.61
    {8332,6144,3832, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=7.93  BV=1.50
    {8332,6144,4104, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=8.03  BV=1.40
    {8332,6144,4400, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=8.13  BV=1.30
    {8332,6144,4712, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=8.23  BV=1.20
    {8332,6144,5048, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=8.33  BV=1.10
    {8332,6144,5408, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=8.43  BV=1.00
    {8332,6144,5792, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=8.53  BV=0.90
    {8332,6144,6208, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=8.63  BV=0.80
    {16664,6144,3328, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=7.73  BV=0.70
    {16664,6144,3560, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=7.83  BV=0.61
    {16664,6144,3816, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=7.93  BV=0.51
    {16664,6144,4088, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=8.03  BV=0.41
    {16664,6144,4384, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=8.13  BV=0.31
    {16664,6144,4696, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=8.23  BV=0.21
    {24996,6144,3352, 0, 0, 0},  //TV = 5.32(690 lines)  AV=2.53  SV=7.74  BV=0.11
    {24996,6144,3616, 0, 0, 0},  //TV = 5.32(690 lines)  AV=2.53  SV=7.85  BV=-0.00
    {24996,6144,3880, 0, 0, 0},  //TV = 5.32(690 lines)  AV=2.53  SV=7.95  BV=-0.10
    {24996,6144,4160, 0, 0, 0},  //TV = 5.32(690 lines)  AV=2.53  SV=8.05  BV=-0.20
    {33327,6144,3336, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=7.73  BV=-0.30
    {33327,6144,3576, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=7.83  BV=-0.40
    {33327,6144,3832, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=7.93  BV=-0.50
    {41659,6144,3288, 0, 0, 0},  //TV = 4.59(1150 lines)  AV=2.53  SV=7.71  BV=-0.60
    {41659,6144,3520, 0, 0, 0},  //TV = 4.59(1150 lines)  AV=2.53  SV=7.81  BV=-0.70
    {41659,6144,3776, 0, 0, 0},  //TV = 4.59(1150 lines)  AV=2.53  SV=7.91  BV=-0.80
    {49991,6144,3376, 0, 0, 0},  //TV = 4.32(1380 lines)  AV=2.53  SV=7.75  BV=-0.90
    {49991,6144,3616, 0, 0, 0},  //TV = 4.32(1380 lines)  AV=2.53  SV=7.85  BV=-1.00
    {58323,6144,3320, 0, 0, 0},  //TV = 4.10(1610 lines)  AV=2.53  SV=7.73  BV=-1.10
    {58323,6144,3560, 0, 0, 0},  //TV = 4.10(1610 lines)  AV=2.53  SV=7.83  BV=-1.20
    {66654,6144,3336, 0, 0, 0},  //TV = 3.91(1840 lines)  AV=2.53  SV=7.73  BV=-1.30
    {66654,6144,3576, 0, 0, 0},  //TV = 3.91(1840 lines)  AV=2.53  SV=7.83  BV=-1.40
    {74986,6144,3408, 0, 0, 0},  //TV = 3.74(2070 lines)  AV=2.53  SV=7.76  BV=-1.50
    {83318,6144,3288, 0, 0, 0},  //TV = 3.59(2300 lines)  AV=2.53  SV=7.71  BV=-1.60
    {83318,6144,3520, 0, 0, 0},  //TV = 3.59(2300 lines)  AV=2.53  SV=7.81  BV=-1.70
    {91650,6144,3432, 0, 0, 0},  //TV = 3.45(2530 lines)  AV=2.53  SV=7.77  BV=-1.80
    {99981,6144,3368, 0, 0, 0},  //TV = 3.32(2760 lines)  AV=2.53  SV=7.75  BV=-1.90
    {108313,6144,3336, 0, 0, 0},  //TV = 3.21(2990 lines)  AV=2.53  SV=7.73  BV=-2.00
    {116645,6144,3320, 0, 0, 0},  //TV = 3.10(3220 lines)  AV=2.53  SV=7.73  BV=-2.10
    {124977,6144,3344, 0, 0, 0},  //TV = 3.00(3450 lines)  AV=2.53  SV=7.74  BV=-2.21
    {133345,6144,3336, 0, 0, 0},  //TV = 2.91(3681 lines)  AV=2.53  SV=7.73  BV=-2.30
    {141677,6144,3384, 0, 0, 0},  //TV = 2.82(3911 lines)  AV=2.53  SV=7.75  BV=-2.41
    {150009,6144,3424, 0, 0, 0},  //TV = 2.74(4141 lines)  AV=2.53  SV=7.77  BV=-2.51
    {166672,6144,3304, 0, 0, 0},  //TV = 2.58(4601 lines)  AV=2.53  SV=7.72  BV=-2.61
    {175004,6144,3376, 0, 0, 0},  //TV = 2.51(4831 lines)  AV=2.53  SV=7.75  BV=-2.71
    {191668,6144,3304, 0, 0, 0},  //TV = 2.38(5291 lines)  AV=2.53  SV=7.72  BV=-2.81
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sCaptureISO1600PLineTable_50Hz =
{
{
    {73,1600,1048, 0, 0, 0},  //TV = 13.74(2 lines)  AV=2.53  SV=4.12  BV=12.15
    {73,1664,1040, 0, 0, 0},  //TV = 13.74(2 lines)  AV=2.53  SV=4.17  BV=12.10
    {109,1216,1032, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.70  BV=11.99
    {109,1280,1048, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.80  BV=11.89
    {109,1344,1064, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.89  BV=11.80
    {109,1472,1032, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.98  BV=11.71
    {145,1216,1024, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.69  BV=11.59
    {145,1280,1056, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.81  BV=11.47
    {145,1344,1048, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.87  BV=11.41
    {145,1472,1024, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.97  BV=11.31
    {182,1216,1064, 0, 0, 0},  //TV = 12.42(5 lines)  AV=2.53  SV=3.75  BV=11.20
    {182,1344,1024, 0, 0, 0},  //TV = 12.42(5 lines)  AV=2.53  SV=3.84  BV=11.11
    {218,1152,1072, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.68  BV=11.01
    {218,1280,1032, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.78  BV=10.91
    {218,1344,1056, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.88  BV=10.81
    {254,1216,1072, 0, 0, 0},  //TV = 11.94(7 lines)  AV=2.53  SV=3.76  BV=10.71
    {290,1152,1064, 0, 0, 0},  //TV = 11.75(8 lines)  AV=2.53  SV=3.67  BV=10.61
    {290,1280,1024, 0, 0, 0},  //TV = 11.75(8 lines)  AV=2.53  SV=3.77  BV=10.51
    {327,1216,1024, 0, 0, 0},  //TV = 11.58(9 lines)  AV=2.53  SV=3.69  BV=10.41
    {327,1280,1048, 0, 0, 0},  //TV = 11.58(9 lines)  AV=2.53  SV=3.80  BV=10.31
    {363,1216,1064, 0, 0, 0},  //TV = 11.43(10 lines)  AV=2.53  SV=3.75  BV=10.21
    {399,1216,1032, 0, 0, 0},  //TV = 11.29(11 lines)  AV=2.53  SV=3.70  BV=10.11
    {435,1152,1080, 0, 0, 0},  //TV = 11.17(12 lines)  AV=2.53  SV=3.69  BV=10.00
    {471,1152,1064, 0, 0, 0},  //TV = 11.05(13 lines)  AV=2.53  SV=3.67  BV=9.91
    {470,1280,1024, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=3.77  BV=9.82
    {470,1344,1048, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=3.87  BV=9.71
    {470,1472,1024, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=3.97  BV=9.61
    {470,1536,1056, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=4.07  BV=9.51
    {470,1664,1040, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=4.17  BV=9.41
    {470,1792,1040, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=4.27  BV=9.31
    {470,1920,1040, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=4.37  BV=9.21
    {470,2048,1040, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=4.47  BV=9.12
    {470,2176,1056, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=4.58  BV=9.01
    {470,2304,1064, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=4.67  BV=8.91
    {470,2560,1032, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=4.78  BV=8.80
    {470,2688,1048, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=4.87  BV=8.71
    {470,2944,1024, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=4.97  BV=8.61
    {470,3072,1056, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=5.07  BV=8.51
    {470,3328,1048, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=5.18  BV=8.40
    {470,3584,1040, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=5.27  BV=8.31
    {470,3840,1040, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=5.37  BV=8.21
    {470,4096,1040, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=5.47  BV=8.12
    {470,4352,1056, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=5.58  BV=8.01
    {470,4608,1072, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=5.68  BV=7.90
    {470,5120,1032, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=5.78  BV=7.80
    {470,5376,1048, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=5.87  BV=7.71
    {470,5888,1024, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=5.97  BV=7.61
    {470,6144,1056, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=6.07  BV=7.51
    {470,6144,1128, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=6.17  BV=7.41
    {470,6144,1208, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=6.27  BV=7.31
    {470,6144,1304, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=6.38  BV=7.20
    {470,6144,1400, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=6.48  BV=7.10
    {470,6144,1496, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=6.58  BV=7.01
    {470,6144,1600, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=6.67  BV=6.91
    {470,6144,1720, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=6.78  BV=6.80
    {470,6144,1840, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=6.87  BV=6.71
    {470,6144,1968, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=6.97  BV=6.61
    {470,6144,2112, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=7.07  BV=6.51
    {470,6144,2264, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=7.17  BV=6.41
    {470,6144,2424, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=7.27  BV=6.31
    {470,6144,2600, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=7.37  BV=6.21
    {470,6144,2784, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=7.47  BV=6.11
    {470,6144,2984, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=7.57  BV=6.01
    {470,6144,3192, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=7.67  BV=5.91
    {470,6144,3424, 0, 0, 0},  //TV = 11.06(12 lines)  AV=2.53  SV=7.77  BV=5.81
    {508,6144,3400, 0, 0, 0},  //TV = 10.94(14 lines)  AV=2.53  SV=7.76  BV=5.71
    {544,6144,3408, 0, 0, 0},  //TV = 10.84(15 lines)  AV=2.53  SV=7.76  BV=5.61
    {580,6144,3424, 0, 0, 0},  //TV = 10.75(16 lines)  AV=2.53  SV=7.77  BV=5.51
    {616,6144,3456, 0, 0, 0},  //TV = 10.66(17 lines)  AV=2.53  SV=7.78  BV=5.41
    {689,6144,3320, 0, 0, 0},  //TV = 10.50(19 lines)  AV=2.53  SV=7.73  BV=5.30
    {725,6144,3376, 0, 0, 0},  //TV = 10.43(20 lines)  AV=2.53  SV=7.75  BV=5.21
    {797,6144,3296, 0, 0, 0},  //TV = 10.29(22 lines)  AV=2.53  SV=7.72  BV=5.10
    {834,6144,3368, 0, 0, 0},  //TV = 10.23(23 lines)  AV=2.53  SV=7.75  BV=5.01
    {906,6144,3328, 0, 0, 0},  //TV = 10.11(25 lines)  AV=2.53  SV=7.73  BV=4.91
    {979,6144,3304, 0, 0, 0},  //TV = 10.00(27 lines)  AV=2.53  SV=7.72  BV=4.80
    {1051,6144,3280, 0, 0, 0},  //TV = 9.89(29 lines)  AV=2.53  SV=7.71  BV=4.71
    {1123,6144,3296, 0, 0, 0},  //TV = 9.80(31 lines)  AV=2.53  SV=7.72  BV=4.61
    {1196,6144,3328, 0, 0, 0},  //TV = 9.71(33 lines)  AV=2.53  SV=7.73  BV=4.50
    {1268,6144,3368, 0, 0, 0},  //TV = 9.62(35 lines)  AV=2.53  SV=7.75  BV=4.40
    {1377,6144,3320, 0, 0, 0},  //TV = 9.50(38 lines)  AV=2.53  SV=7.73  BV=4.30
    {1486,6144,3280, 0, 0, 0},  //TV = 9.39(41 lines)  AV=2.53  SV=7.71  BV=4.21
    {1594,6144,3288, 0, 0, 0},  //TV = 9.29(44 lines)  AV=2.53  SV=7.71  BV=4.11
    {1703,6144,3288, 0, 0, 0},  //TV = 9.20(47 lines)  AV=2.53  SV=7.71  BV=4.01
    {1812,6144,3328, 0, 0, 0},  //TV = 9.11(50 lines)  AV=2.53  SV=7.73  BV=3.91
    {1957,6144,3296, 0, 0, 0},  //TV = 9.00(54 lines)  AV=2.53  SV=7.72  BV=3.81
    {2102,6144,3304, 0, 0, 0},  //TV = 8.89(58 lines)  AV=2.53  SV=7.72  BV=3.70
    {2246,6144,3304, 0, 0, 0},  //TV = 8.80(62 lines)  AV=2.53  SV=7.72  BV=3.61
    {2391,6144,3320, 0, 0, 0},  //TV = 8.71(66 lines)  AV=2.53  SV=7.73  BV=3.51
    {2572,6144,3320, 0, 0, 0},  //TV = 8.60(71 lines)  AV=2.53  SV=7.73  BV=3.40
    {2790,6144,3280, 0, 0, 0},  //TV = 8.49(77 lines)  AV=2.53  SV=7.71  BV=3.30
    {2971,6144,3296, 0, 0, 0},  //TV = 8.39(82 lines)  AV=2.53  SV=7.72  BV=3.21
    {3188,6144,3280, 0, 0, 0},  //TV = 8.29(88 lines)  AV=2.53  SV=7.71  BV=3.11
    {3406,6144,3312, 0, 0, 0},  //TV = 8.20(94 lines)  AV=2.53  SV=7.72  BV=3.00
    {3659,6144,3296, 0, 0, 0},  //TV = 8.09(101 lines)  AV=2.53  SV=7.72  BV=2.91
    {3913,6144,3304, 0, 0, 0},  //TV = 8.00(108 lines)  AV=2.53  SV=7.72  BV=2.81
    {4203,6144,3288, 0, 0, 0},  //TV = 7.89(116 lines)  AV=2.53  SV=7.71  BV=2.71
    {4492,6144,3296, 0, 0, 0},  //TV = 7.80(124 lines)  AV=2.53  SV=7.72  BV=2.61
    {4855,6144,3288, 0, 0, 0},  //TV = 7.69(134 lines)  AV=2.53  SV=7.71  BV=2.50
    {5181,6144,3296, 0, 0, 0},  //TV = 7.59(143 lines)  AV=2.53  SV=7.72  BV=2.40
    {5579,6144,3280, 0, 0, 0},  //TV = 7.49(154 lines)  AV=2.53  SV=7.71  BV=2.30
    {5978,6144,3280, 0, 0, 0},  //TV = 7.39(165 lines)  AV=2.53  SV=7.71  BV=2.20
    {6376,6144,3288, 0, 0, 0},  //TV = 7.29(176 lines)  AV=2.53  SV=7.71  BV=2.11
    {6847,6144,3280, 0, 0, 0},  //TV = 7.19(189 lines)  AV=2.53  SV=7.71  BV=2.01
    {7318,6144,3288, 0, 0, 0},  //TV = 7.09(202 lines)  AV=2.53  SV=7.71  BV=1.91
    {7861,6144,3280, 0, 0, 0},  //TV = 6.99(217 lines)  AV=2.53  SV=7.71  BV=1.81
    {8405,6144,3288, 0, 0, 0},  //TV = 6.89(232 lines)  AV=2.53  SV=7.71  BV=1.71
    {9021,6144,3280, 0, 0, 0},  //TV = 6.79(249 lines)  AV=2.53  SV=7.71  BV=1.61
    {9709,6144,3288, 0, 0, 0},  //TV = 6.69(268 lines)  AV=2.53  SV=7.71  BV=1.50
    {9999,6144,3416, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=7.77  BV=1.40
    {9999,6144,3664, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=7.87  BV=1.30
    {9999,6144,3928, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=7.97  BV=1.20
    {9999,6144,4208, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=8.07  BV=1.10
    {9999,6144,4504, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=8.17  BV=1.00
    {9999,6144,4824, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=8.26  BV=0.91
    {9999,6144,5176, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=8.37  BV=0.80
    {9999,6144,5544, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=8.47  BV=0.70
    {9999,6144,5936, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=8.56  BV=0.61
    {9999,6144,6360, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=8.66  BV=0.51
    {19997,6144,3408, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=7.76  BV=0.41
    {19997,6144,3648, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=7.86  BV=0.31
    {19997,6144,3912, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=7.96  BV=0.21
    {19997,6144,4192, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=8.06  BV=0.11
    {19997,6144,4528, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=8.17  BV=-0.00
    {19997,6144,4848, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=8.27  BV=-0.10
    {29995,6144,3464, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=7.79  BV=-0.20
    {29995,6144,3712, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=7.89  BV=-0.30
    {29995,6144,3976, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=7.99  BV=-0.40
    {29995,6144,4264, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=8.09  BV=-0.50
    {39993,6144,3424, 0, 0, 0},  //TV = 4.64(1104 lines)  AV=2.53  SV=7.77  BV=-0.60
    {39993,6144,3672, 0, 0, 0},  //TV = 4.64(1104 lines)  AV=2.53  SV=7.87  BV=-0.70
    {39993,6144,3936, 0, 0, 0},  //TV = 4.64(1104 lines)  AV=2.53  SV=7.97  BV=-0.80
    {49991,6144,3376, 0, 0, 0},  //TV = 4.32(1380 lines)  AV=2.53  SV=7.75  BV=-0.90
    {49991,6144,3616, 0, 0, 0},  //TV = 4.32(1380 lines)  AV=2.53  SV=7.85  BV=-1.00
    {49991,6144,3872, 0, 0, 0},  //TV = 4.32(1380 lines)  AV=2.53  SV=7.95  BV=-1.10
    {59989,6144,3456, 0, 0, 0},  //TV = 4.06(1656 lines)  AV=2.53  SV=7.78  BV=-1.20
    {59989,6144,3704, 0, 0, 0},  //TV = 4.06(1656 lines)  AV=2.53  SV=7.88  BV=-1.30
    {69987,6144,3408, 0, 0, 0},  //TV = 3.84(1932 lines)  AV=2.53  SV=7.76  BV=-1.40
    {69987,6144,3648, 0, 0, 0},  //TV = 3.84(1932 lines)  AV=2.53  SV=7.86  BV=-1.50
    {79985,6144,3424, 0, 0, 0},  //TV = 3.64(2208 lines)  AV=2.53  SV=7.77  BV=-1.60
    {79985,6144,3664, 0, 0, 0},  //TV = 3.64(2208 lines)  AV=2.53  SV=7.87  BV=-1.70
    {89983,6144,3496, 0, 0, 0},  //TV = 3.47(2484 lines)  AV=2.53  SV=7.80  BV=-1.80
    {100018,6144,3368, 0, 0, 0},  //TV = 3.32(2761 lines)  AV=2.53  SV=7.75  BV=-1.90
    {110017,6144,3280, 0, 0, 0},  //TV = 3.18(3037 lines)  AV=2.53  SV=7.71  BV=-2.00
    {110017,6144,3520, 0, 0, 0},  //TV = 3.18(3037 lines)  AV=2.53  SV=7.81  BV=-2.10
    {120015,6144,3480, 0, 0, 0},  //TV = 3.06(3313 lines)  AV=2.53  SV=7.79  BV=-2.21
    {130013,6144,3416, 0, 0, 0},  //TV = 2.94(3589 lines)  AV=2.53  SV=7.77  BV=-2.30
    {140011,6144,3424, 0, 0, 0},  //TV = 2.84(3865 lines)  AV=2.53  SV=7.77  BV=-2.41
    {150009,6144,3424, 0, 0, 0},  //TV = 2.74(4141 lines)  AV=2.53  SV=7.77  BV=-2.51
    {160007,6144,3440, 0, 0, 0},  //TV = 2.64(4417 lines)  AV=2.53  SV=7.78  BV=-2.61
    {180003,6144,3280, 0, 0, 0},  //TV = 2.47(4969 lines)  AV=2.53  SV=7.71  BV=-2.71
    {190001,6144,3328, 0, 0, 0},  //TV = 2.40(5245 lines)  AV=2.53  SV=7.73  BV=-2.81
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_CaptureISO1600Table =
{
    AETABLE_CAPTURE_ISO1600,    //eAETableID
    151,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    122,    //i4MaxBV
    -28,    //i4MinBV
    90,    //i4EffectiveMaxBV
    -30,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_1600, //ISO SPEED
    sCaptureISO1600PLineTable_60Hz,
    sCaptureISO1600PLineTable_50Hz,
    NULL,
};

static strEvPline sCaptureStrobePLineTable_60Hz =
{
{
    {73,1600,1048, 0, 0, 0},  //TV = 13.74(2 lines)  AV=2.53  SV=4.12  BV=12.15
    {73,1664,1040, 0, 0, 0},  //TV = 13.74(2 lines)  AV=2.53  SV=4.17  BV=12.10
    {109,1216,1032, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.70  BV=11.99
    {109,1280,1048, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.80  BV=11.89
    {109,1344,1064, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.89  BV=11.80
    {109,1472,1032, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.98  BV=11.71
    {145,1216,1024, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.69  BV=11.59
    {145,1280,1056, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.81  BV=11.47
    {145,1344,1048, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.87  BV=11.41
    {145,1472,1024, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.97  BV=11.31
    {182,1216,1064, 0, 0, 0},  //TV = 12.42(5 lines)  AV=2.53  SV=3.75  BV=11.20
    {182,1344,1024, 0, 0, 0},  //TV = 12.42(5 lines)  AV=2.53  SV=3.84  BV=11.11
    {218,1152,1072, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.68  BV=11.01
    {218,1280,1032, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.78  BV=10.91
    {218,1344,1056, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.88  BV=10.81
    {254,1216,1072, 0, 0, 0},  //TV = 11.94(7 lines)  AV=2.53  SV=3.76  BV=10.71
    {290,1152,1064, 0, 0, 0},  //TV = 11.75(8 lines)  AV=2.53  SV=3.67  BV=10.61
    {290,1280,1024, 0, 0, 0},  //TV = 11.75(8 lines)  AV=2.53  SV=3.77  BV=10.51
    {327,1216,1024, 0, 0, 0},  //TV = 11.58(9 lines)  AV=2.53  SV=3.69  BV=10.41
    {327,1280,1048, 0, 0, 0},  //TV = 11.58(9 lines)  AV=2.53  SV=3.80  BV=10.31
    {363,1216,1064, 0, 0, 0},  //TV = 11.43(10 lines)  AV=2.53  SV=3.75  BV=10.21
    {399,1216,1032, 0, 0, 0},  //TV = 11.29(11 lines)  AV=2.53  SV=3.70  BV=10.11
    {435,1152,1080, 0, 0, 0},  //TV = 11.17(12 lines)  AV=2.53  SV=3.69  BV=10.00
    {471,1152,1064, 0, 0, 0},  //TV = 11.05(13 lines)  AV=2.53  SV=3.67  BV=9.91
    {471,1280,1024, 0, 0, 0},  //TV = 11.05(13 lines)  AV=2.53  SV=3.77  BV=9.81
    {508,1216,1072, 0, 0, 0},  //TV = 10.94(14 lines)  AV=2.53  SV=3.76  BV=9.71
    {580,1152,1064, 0, 0, 0},  //TV = 10.75(16 lines)  AV=2.53  SV=3.67  BV=9.61
    {616,1152,1072, 0, 0, 0},  //TV = 10.66(17 lines)  AV=2.53  SV=3.68  BV=9.51
    {653,1216,1024, 0, 0, 0},  //TV = 10.58(18 lines)  AV=2.53  SV=3.69  BV=9.42
    {689,1216,1040, 0, 0, 0},  //TV = 10.50(19 lines)  AV=2.53  SV=3.71  BV=9.32
    {761,1152,1072, 0, 0, 0},  //TV = 10.36(21 lines)  AV=2.53  SV=3.68  BV=9.21
    {797,1216,1032, 0, 0, 0},  //TV = 10.29(22 lines)  AV=2.53  SV=3.70  BV=9.12
    {870,1152,1080, 0, 0, 0},  //TV = 10.17(24 lines)  AV=2.53  SV=3.69  BV=9.00
    {942,1152,1064, 0, 0, 0},  //TV = 10.05(26 lines)  AV=2.53  SV=3.67  BV=8.91
    {979,1216,1040, 0, 0, 0},  //TV = 10.00(27 lines)  AV=2.53  SV=3.71  BV=8.81
    {1051,1216,1032, 0, 0, 0},  //TV = 9.89(29 lines)  AV=2.53  SV=3.70  BV=8.72
    {1160,1152,1072, 0, 0, 0},  //TV = 9.75(32 lines)  AV=2.53  SV=3.68  BV=8.60
    {1232,1152,1072, 0, 0, 0},  //TV = 9.66(34 lines)  AV=2.53  SV=3.68  BV=8.51
    {1305,1216,1024, 0, 0, 0},  //TV = 9.58(36 lines)  AV=2.53  SV=3.69  BV=8.42
    {1413,1152,1080, 0, 0, 0},  //TV = 9.47(39 lines)  AV=2.53  SV=3.69  BV=8.30
    {1522,1152,1072, 0, 0, 0},  //TV = 9.36(42 lines)  AV=2.53  SV=3.68  BV=8.21
    {1631,1152,1072, 0, 0, 0},  //TV = 9.26(45 lines)  AV=2.53  SV=3.68  BV=8.11
    {1739,1152,1080, 0, 0, 0},  //TV = 9.17(48 lines)  AV=2.53  SV=3.69  BV=8.00
    {1884,1152,1064, 0, 0, 0},  //TV = 9.05(52 lines)  AV=2.53  SV=3.67  BV=7.91
    {1993,1152,1080, 0, 0, 0},  //TV = 8.97(55 lines)  AV=2.53  SV=3.69  BV=7.81
    {2138,1152,1080, 0, 0, 0},  //TV = 8.87(59 lines)  AV=2.53  SV=3.69  BV=7.71
    {2319,1152,1064, 0, 0, 0},  //TV = 8.75(64 lines)  AV=2.53  SV=3.67  BV=7.61
    {2464,1152,1072, 0, 0, 0},  //TV = 8.66(68 lines)  AV=2.53  SV=3.68  BV=7.51
    {2645,1152,1072, 0, 0, 0},  //TV = 8.56(73 lines)  AV=2.53  SV=3.68  BV=7.41
    {2826,1152,1080, 0, 0, 0},  //TV = 8.47(78 lines)  AV=2.53  SV=3.69  BV=7.30
    {3043,1152,1072, 0, 0, 0},  //TV = 8.36(84 lines)  AV=2.53  SV=3.68  BV=7.21
    {3261,1152,1072, 0, 0, 0},  //TV = 8.26(90 lines)  AV=2.53  SV=3.68  BV=7.11
    {3514,1152,1072, 0, 0, 0},  //TV = 8.15(97 lines)  AV=2.53  SV=3.68  BV=7.00
    {3732,1152,1072, 0, 0, 0},  //TV = 8.07(103 lines)  AV=2.53  SV=3.68  BV=6.91
    {4021,1152,1072, 0, 0, 0},  //TV = 7.96(111 lines)  AV=2.53  SV=3.68  BV=6.80
    {4347,1152,1064, 0, 0, 0},  //TV = 7.85(120 lines)  AV=2.53  SV=3.67  BV=6.70
    {4601,1152,1072, 0, 0, 0},  //TV = 7.76(127 lines)  AV=2.53  SV=3.68  BV=6.61
    {4927,1152,1072, 0, 0, 0},  //TV = 7.67(136 lines)  AV=2.53  SV=3.68  BV=6.51
    {5289,1152,1072, 0, 0, 0},  //TV = 7.56(146 lines)  AV=2.53  SV=3.68  BV=6.41
    {5688,1152,1072, 0, 0, 0},  //TV = 7.46(157 lines)  AV=2.53  SV=3.68  BV=6.30
    {6123,1152,1064, 0, 0, 0},  //TV = 7.35(169 lines)  AV=2.53  SV=3.67  BV=6.21
    {6557,1152,1064, 0, 0, 0},  //TV = 7.25(181 lines)  AV=2.53  SV=3.67  BV=6.11
    {7028,1152,1064, 0, 0, 0},  //TV = 7.15(194 lines)  AV=2.53  SV=3.67  BV=6.01
    {7499,1152,1072, 0, 0, 0},  //TV = 7.06(207 lines)  AV=2.53  SV=3.68  BV=5.91
    {8115,1152,1064, 0, 0, 0},  //TV = 6.95(224 lines)  AV=2.53  SV=3.67  BV=5.80
    {8332,1216,1056, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=3.74  BV=5.70
    {8332,1280,1064, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=3.82  BV=5.61
    {8332,1408,1040, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=3.93  BV=5.51
    {8332,1472,1064, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.02  BV=5.41
    {8332,1600,1048, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.12  BV=5.31
    {8332,1728,1040, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.22  BV=5.21
    {8332,1856,1040, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.32  BV=5.11
    {8332,1984,1040, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.42  BV=5.01
    {8332,2048,1088, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.53  BV=4.90
    {8332,2304,1032, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.62  BV=4.81
    {16664,1216,1048, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=3.72  BV=4.71
    {16664,1280,1064, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=3.82  BV=4.61
    {16664,1408,1040, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=3.93  BV=4.51
    {16664,1472,1064, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=4.02  BV=4.41
    {16664,1600,1056, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=4.13  BV=4.30
    {16664,1728,1040, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=4.22  BV=4.21
    {24996,1216,1064, 0, 0, 0},  //TV = 5.32(690 lines)  AV=2.53  SV=3.75  BV=4.10
    {24996,1344,1024, 0, 0, 0},  //TV = 5.32(690 lines)  AV=2.53  SV=3.84  BV=4.01
    {24996,1408,1048, 0, 0, 0},  //TV = 5.32(690 lines)  AV=2.53  SV=3.94  BV=3.91
    {24996,1536,1032, 0, 0, 0},  //TV = 5.32(690 lines)  AV=2.53  SV=4.04  BV=3.81
    {33327,1216,1048, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=3.72  BV=3.71
    {33327,1280,1064, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=3.82  BV=3.61
    {33327,1408,1040, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=3.93  BV=3.51
    {33327,1472,1064, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=4.02  BV=3.41
    {33327,1600,1048, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=4.12  BV=3.31
    {33327,1728,1040, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=4.22  BV=3.21
    {33327,1856,1040, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=4.32  BV=3.11
    {33327,1984,1040, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=4.42  BV=3.01
    {33327,2048,1080, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=4.52  BV=2.91
    {33327,2304,1024, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=4.61  BV=2.82
    {33327,2432,1048, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=4.72  BV=2.71
    {33327,2560,1064, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=4.82  BV=2.61
    {33327,2816,1032, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=4.91  BV=2.52
    {33327,3072,1024, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=5.03  BV=2.40
    {33327,3200,1048, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=5.12  BV=2.31
    {33327,3456,1040, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=5.22  BV=2.21
    {33327,3712,1040, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=5.32  BV=2.11
    {33327,3968,1040, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=5.42  BV=2.01
    {33327,4096,1088, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=5.53  BV=1.90
    {33327,4608,1032, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=5.62  BV=1.81
    {33327,4864,1048, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=5.72  BV=1.71
    {33327,5120,1064, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=5.82  BV=1.61
    {33327,5632,1040, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=5.93  BV=1.51
    {33327,5888,1064, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=6.02  BV=1.41
    {33327,6144,1096, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=6.13  BV=1.31
    {33327,6144,1176, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=6.23  BV=1.20
    {33327,6144,1256, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=6.32  BV=1.11
    {33327,6144,1352, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=6.43  BV=1.00
    {33327,6144,1448, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=6.53  BV=0.90
    {33327,6144,1544, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=6.62  BV=0.81
    {33327,6144,1664, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=6.73  BV=0.70
    {33327,6144,1784, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=6.83  BV=0.60
    {33327,6144,1904, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=6.92  BV=0.51
    {41659,6144,1640, 0, 0, 0},  //TV = 4.59(1150 lines)  AV=2.53  SV=6.71  BV=0.40
    {41659,6144,1760, 0, 0, 0},  //TV = 4.59(1150 lines)  AV=2.53  SV=6.81  BV=0.30
    {49991,6144,1568, 0, 0, 0},  //TV = 4.32(1380 lines)  AV=2.53  SV=6.64  BV=0.20
    {49991,6144,1680, 0, 0, 0},  //TV = 4.32(1380 lines)  AV=2.53  SV=6.74  BV=0.11
    {58323,6144,1552, 0, 0, 0},  //TV = 4.10(1610 lines)  AV=2.53  SV=6.63  BV=-0.00
    {58323,6144,1664, 0, 0, 0},  //TV = 4.10(1610 lines)  AV=2.53  SV=6.73  BV=-0.10
    {66654,6144,1552, 0, 0, 0},  //TV = 3.91(1840 lines)  AV=2.53  SV=6.63  BV=-0.20
    {66654,6144,1680, 0, 0, 0},  //TV = 3.91(1840 lines)  AV=2.53  SV=6.74  BV=-0.31
    {66654,6144,1800, 0, 0, 0},  //TV = 3.91(1840 lines)  AV=2.53  SV=6.84  BV=-0.41
    {66654,6144,1928, 0, 0, 0},  //TV = 3.91(1840 lines)  AV=2.53  SV=6.94  BV=-0.51
    {66654,6144,2064, 0, 0, 0},  //TV = 3.91(1840 lines)  AV=2.53  SV=7.04  BV=-0.61
    {66654,6144,2208, 0, 0, 0},  //TV = 3.91(1840 lines)  AV=2.53  SV=7.14  BV=-0.70
    {66654,6144,2368, 0, 0, 0},  //TV = 3.91(1840 lines)  AV=2.53  SV=7.24  BV=-0.80
    {66654,6144,2536, 0, 0, 0},  //TV = 3.91(1840 lines)  AV=2.53  SV=7.34  BV=-0.90
    {66654,6144,2720, 0, 0, 0},  //TV = 3.91(1840 lines)  AV=2.53  SV=7.44  BV=-1.00
    {66654,6144,2912, 0, 0, 0},  //TV = 3.91(1840 lines)  AV=2.53  SV=7.54  BV=-1.10
    {66654,6144,3120, 0, 0, 0},  //TV = 3.91(1840 lines)  AV=2.53  SV=7.64  BV=-1.20
    {66654,6144,3344, 0, 0, 0},  //TV = 3.91(1840 lines)  AV=2.53  SV=7.74  BV=-1.30
    {66654,6144,3584, 0, 0, 0},  //TV = 3.91(1840 lines)  AV=2.53  SV=7.84  BV=-1.40
    {66654,6144,3840, 0, 0, 0},  //TV = 3.91(1840 lines)  AV=2.53  SV=7.94  BV=-1.50
    {66654,6144,4120, 0, 0, 0},  //TV = 3.91(1840 lines)  AV=2.53  SV=8.04  BV=-1.60
    {66654,6144,4408, 0, 0, 0},  //TV = 3.91(1840 lines)  AV=2.53  SV=8.13  BV=-1.70
    {66654,6144,4728, 0, 0, 0},  //TV = 3.91(1840 lines)  AV=2.53  SV=8.24  BV=-1.80
    {66654,6144,5064, 0, 0, 0},  //TV = 3.91(1840 lines)  AV=2.53  SV=8.33  BV=-1.90
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sCaptureStrobePLineTable_50Hz =
{
{
    {73,1600,1048, 0, 0, 0},  //TV = 13.74(2 lines)  AV=2.53  SV=4.12  BV=12.15
    {73,1664,1040, 0, 0, 0},  //TV = 13.74(2 lines)  AV=2.53  SV=4.17  BV=12.10
    {109,1216,1032, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.70  BV=11.99
    {109,1280,1048, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.80  BV=11.89
    {109,1344,1064, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.89  BV=11.80
    {109,1472,1032, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.98  BV=11.71
    {145,1216,1024, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.69  BV=11.59
    {145,1280,1056, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.81  BV=11.47
    {145,1344,1048, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.87  BV=11.41
    {145,1472,1024, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.97  BV=11.31
    {182,1216,1064, 0, 0, 0},  //TV = 12.42(5 lines)  AV=2.53  SV=3.75  BV=11.20
    {182,1344,1024, 0, 0, 0},  //TV = 12.42(5 lines)  AV=2.53  SV=3.84  BV=11.11
    {218,1152,1072, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.68  BV=11.01
    {218,1280,1032, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.78  BV=10.91
    {218,1344,1056, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.88  BV=10.81
    {254,1216,1072, 0, 0, 0},  //TV = 11.94(7 lines)  AV=2.53  SV=3.76  BV=10.71
    {290,1152,1064, 0, 0, 0},  //TV = 11.75(8 lines)  AV=2.53  SV=3.67  BV=10.61
    {290,1280,1024, 0, 0, 0},  //TV = 11.75(8 lines)  AV=2.53  SV=3.77  BV=10.51
    {327,1216,1024, 0, 0, 0},  //TV = 11.58(9 lines)  AV=2.53  SV=3.69  BV=10.41
    {327,1280,1048, 0, 0, 0},  //TV = 11.58(9 lines)  AV=2.53  SV=3.80  BV=10.31
    {363,1216,1064, 0, 0, 0},  //TV = 11.43(10 lines)  AV=2.53  SV=3.75  BV=10.21
    {399,1216,1032, 0, 0, 0},  //TV = 11.29(11 lines)  AV=2.53  SV=3.70  BV=10.11
    {435,1152,1080, 0, 0, 0},  //TV = 11.17(12 lines)  AV=2.53  SV=3.69  BV=10.00
    {471,1152,1064, 0, 0, 0},  //TV = 11.05(13 lines)  AV=2.53  SV=3.67  BV=9.91
    {471,1280,1024, 0, 0, 0},  //TV = 11.05(13 lines)  AV=2.53  SV=3.77  BV=9.81
    {508,1216,1072, 0, 0, 0},  //TV = 10.94(14 lines)  AV=2.53  SV=3.76  BV=9.71
    {580,1152,1064, 0, 0, 0},  //TV = 10.75(16 lines)  AV=2.53  SV=3.67  BV=9.61
    {616,1152,1072, 0, 0, 0},  //TV = 10.66(17 lines)  AV=2.53  SV=3.68  BV=9.51
    {653,1216,1024, 0, 0, 0},  //TV = 10.58(18 lines)  AV=2.53  SV=3.69  BV=9.42
    {689,1216,1040, 0, 0, 0},  //TV = 10.50(19 lines)  AV=2.53  SV=3.71  BV=9.32
    {761,1152,1072, 0, 0, 0},  //TV = 10.36(21 lines)  AV=2.53  SV=3.68  BV=9.21
    {797,1216,1032, 0, 0, 0},  //TV = 10.29(22 lines)  AV=2.53  SV=3.70  BV=9.12
    {870,1152,1080, 0, 0, 0},  //TV = 10.17(24 lines)  AV=2.53  SV=3.69  BV=9.00
    {942,1152,1064, 0, 0, 0},  //TV = 10.05(26 lines)  AV=2.53  SV=3.67  BV=8.91
    {979,1216,1040, 0, 0, 0},  //TV = 10.00(27 lines)  AV=2.53  SV=3.71  BV=8.81
    {1051,1216,1032, 0, 0, 0},  //TV = 9.89(29 lines)  AV=2.53  SV=3.70  BV=8.72
    {1160,1152,1072, 0, 0, 0},  //TV = 9.75(32 lines)  AV=2.53  SV=3.68  BV=8.60
    {1232,1152,1072, 0, 0, 0},  //TV = 9.66(34 lines)  AV=2.53  SV=3.68  BV=8.51
    {1305,1216,1024, 0, 0, 0},  //TV = 9.58(36 lines)  AV=2.53  SV=3.69  BV=8.42
    {1413,1152,1080, 0, 0, 0},  //TV = 9.47(39 lines)  AV=2.53  SV=3.69  BV=8.30
    {1522,1152,1072, 0, 0, 0},  //TV = 9.36(42 lines)  AV=2.53  SV=3.68  BV=8.21
    {1631,1152,1072, 0, 0, 0},  //TV = 9.26(45 lines)  AV=2.53  SV=3.68  BV=8.11
    {1739,1152,1080, 0, 0, 0},  //TV = 9.17(48 lines)  AV=2.53  SV=3.69  BV=8.00
    {1884,1152,1064, 0, 0, 0},  //TV = 9.05(52 lines)  AV=2.53  SV=3.67  BV=7.91
    {1993,1152,1080, 0, 0, 0},  //TV = 8.97(55 lines)  AV=2.53  SV=3.69  BV=7.81
    {2138,1152,1080, 0, 0, 0},  //TV = 8.87(59 lines)  AV=2.53  SV=3.69  BV=7.71
    {2319,1152,1064, 0, 0, 0},  //TV = 8.75(64 lines)  AV=2.53  SV=3.67  BV=7.61
    {2464,1152,1072, 0, 0, 0},  //TV = 8.66(68 lines)  AV=2.53  SV=3.68  BV=7.51
    {2645,1152,1072, 0, 0, 0},  //TV = 8.56(73 lines)  AV=2.53  SV=3.68  BV=7.41
    {2826,1152,1080, 0, 0, 0},  //TV = 8.47(78 lines)  AV=2.53  SV=3.69  BV=7.30
    {3043,1152,1072, 0, 0, 0},  //TV = 8.36(84 lines)  AV=2.53  SV=3.68  BV=7.21
    {3261,1152,1072, 0, 0, 0},  //TV = 8.26(90 lines)  AV=2.53  SV=3.68  BV=7.11
    {3514,1152,1072, 0, 0, 0},  //TV = 8.15(97 lines)  AV=2.53  SV=3.68  BV=7.00
    {3732,1152,1072, 0, 0, 0},  //TV = 8.07(103 lines)  AV=2.53  SV=3.68  BV=6.91
    {4021,1152,1072, 0, 0, 0},  //TV = 7.96(111 lines)  AV=2.53  SV=3.68  BV=6.80
    {4347,1152,1064, 0, 0, 0},  //TV = 7.85(120 lines)  AV=2.53  SV=3.67  BV=6.70
    {4601,1152,1072, 0, 0, 0},  //TV = 7.76(127 lines)  AV=2.53  SV=3.68  BV=6.61
    {4927,1152,1072, 0, 0, 0},  //TV = 7.67(136 lines)  AV=2.53  SV=3.68  BV=6.51
    {5289,1152,1072, 0, 0, 0},  //TV = 7.56(146 lines)  AV=2.53  SV=3.68  BV=6.41
    {5688,1152,1072, 0, 0, 0},  //TV = 7.46(157 lines)  AV=2.53  SV=3.68  BV=6.30
    {6123,1152,1064, 0, 0, 0},  //TV = 7.35(169 lines)  AV=2.53  SV=3.67  BV=6.21
    {6557,1152,1064, 0, 0, 0},  //TV = 7.25(181 lines)  AV=2.53  SV=3.67  BV=6.11
    {7028,1152,1064, 0, 0, 0},  //TV = 7.15(194 lines)  AV=2.53  SV=3.67  BV=6.01
    {7499,1152,1072, 0, 0, 0},  //TV = 7.06(207 lines)  AV=2.53  SV=3.68  BV=5.91
    {8115,1152,1064, 0, 0, 0},  //TV = 6.95(224 lines)  AV=2.53  SV=3.67  BV=5.80
    {8694,1152,1064, 0, 0, 0},  //TV = 6.85(240 lines)  AV=2.53  SV=3.67  BV=5.70
    {9310,1152,1064, 0, 0, 0},  //TV = 6.75(257 lines)  AV=2.53  SV=3.67  BV=5.60
    {9962,1152,1064, 0, 0, 0},  //TV = 6.65(275 lines)  AV=2.53  SV=3.67  BV=5.51
    {9999,1216,1072, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=3.76  BV=5.41
    {9999,1344,1040, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=3.86  BV=5.31
    {9999,1408,1064, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=3.96  BV=5.21
    {9999,1536,1048, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.06  BV=5.11
    {9999,1664,1032, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.16  BV=5.01
    {9999,1792,1032, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.26  BV=4.91
    {9999,1920,1032, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.36  BV=4.81
    {9999,2048,1040, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.47  BV=4.70
    {9999,2176,1040, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.55  BV=4.62
    {9999,2304,1056, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.66  BV=4.51
    {19997,1216,1072, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=3.76  BV=4.41
    {19997,1344,1040, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=3.86  BV=4.31
    {19997,1472,1024, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=3.97  BV=4.20
    {19997,1536,1048, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=4.06  BV=4.11
    {19997,1664,1032, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=4.16  BV=4.01
    {29995,1152,1072, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=3.68  BV=3.91
    {29995,1280,1032, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=3.78  BV=3.81
    {29995,1344,1048, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=3.87  BV=3.72
    {29995,1472,1040, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=3.99  BV=3.60
    {29995,1536,1056, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=4.07  BV=3.51
    {29995,1664,1048, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=4.18  BV=3.41
    {29995,1792,1040, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=4.27  BV=3.31
    {29995,1920,1040, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=4.37  BV=3.21
    {29995,2048,1048, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=4.48  BV=3.11
    {29995,2176,1056, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=4.58  BV=3.01
    {29995,2304,1064, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=4.67  BV=2.92
    {29995,2560,1032, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=4.78  BV=2.81
    {29995,2688,1056, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=4.88  BV=2.70
    {29995,2944,1032, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=4.98  BV=2.61
    {29995,3072,1056, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.07  BV=2.51
    {29995,3328,1048, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.18  BV=2.41
    {29995,3584,1040, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.27  BV=2.31
    {29995,3840,1040, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.37  BV=2.21
    {29995,4096,1048, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.48  BV=2.11
    {29995,4352,1056, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.58  BV=2.01
    {29995,4608,1072, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.68  BV=1.91
    {29995,5120,1032, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.78  BV=1.81
    {29995,5376,1056, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.88  BV=1.70
    {29995,5888,1032, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.98  BV=1.61
    {29995,6144,1056, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.07  BV=1.51
    {29995,6144,1128, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.17  BV=1.42
    {29995,6144,1224, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.29  BV=1.30
    {29995,6144,1304, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.38  BV=1.21
    {29995,6144,1400, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.48  BV=1.11
    {29995,6144,1496, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.58  BV=1.01
    {29995,6144,1608, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.68  BV=0.91
    {29995,6144,1712, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.77  BV=0.82
    {29995,6144,1848, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.88  BV=0.70
    {29995,6144,1984, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.98  BV=0.60
    {39993,6144,1584, 0, 0, 0},  //TV = 4.64(1104 lines)  AV=2.53  SV=6.66  BV=0.51
    {39993,6144,1712, 0, 0, 0},  //TV = 4.64(1104 lines)  AV=2.53  SV=6.77  BV=0.40
    {39993,6144,1832, 0, 0, 0},  //TV = 4.64(1104 lines)  AV=2.53  SV=6.87  BV=0.30
    {49991,6144,1568, 0, 0, 0},  //TV = 4.32(1380 lines)  AV=2.53  SV=6.64  BV=0.20
    {49991,6144,1680, 0, 0, 0},  //TV = 4.32(1380 lines)  AV=2.53  SV=6.74  BV=0.11
    {49991,6144,1816, 0, 0, 0},  //TV = 4.32(1380 lines)  AV=2.53  SV=6.86  BV=-0.01
    {59989,6144,1624, 0, 0, 0},  //TV = 4.06(1656 lines)  AV=2.53  SV=6.69  BV=-0.11
    {59989,6144,1728, 0, 0, 0},  //TV = 4.06(1656 lines)  AV=2.53  SV=6.78  BV=-0.20
    {59989,6144,1864, 0, 0, 0},  //TV = 4.06(1656 lines)  AV=2.53  SV=6.89  BV=-0.31
    {59989,6144,2000, 0, 0, 0},  //TV = 4.06(1656 lines)  AV=2.53  SV=6.99  BV=-0.41
    {59989,6144,2136, 0, 0, 0},  //TV = 4.06(1656 lines)  AV=2.53  SV=7.09  BV=-0.50
    {59989,6144,2296, 0, 0, 0},  //TV = 4.06(1656 lines)  AV=2.53  SV=7.19  BV=-0.61
    {59989,6144,2456, 0, 0, 0},  //TV = 4.06(1656 lines)  AV=2.53  SV=7.29  BV=-0.71
    {59989,6144,2632, 0, 0, 0},  //TV = 4.06(1656 lines)  AV=2.53  SV=7.39  BV=-0.81
    {59989,6144,2816, 0, 0, 0},  //TV = 4.06(1656 lines)  AV=2.53  SV=7.49  BV=-0.90
    {59989,6144,3024, 0, 0, 0},  //TV = 4.06(1656 lines)  AV=2.53  SV=7.59  BV=-1.01
    {59989,6144,3240, 0, 0, 0},  //TV = 4.06(1656 lines)  AV=2.53  SV=7.69  BV=-1.11
    {59989,6144,3472, 0, 0, 0},  //TV = 4.06(1656 lines)  AV=2.53  SV=7.79  BV=-1.20
    {59989,6144,3720, 0, 0, 0},  //TV = 4.06(1656 lines)  AV=2.53  SV=7.89  BV=-1.30
    {59989,6144,3984, 0, 0, 0},  //TV = 4.06(1656 lines)  AV=2.53  SV=7.99  BV=-1.40
    {59989,6144,4272, 0, 0, 0},  //TV = 4.06(1656 lines)  AV=2.53  SV=8.09  BV=-1.50
    {59989,6144,4576, 0, 0, 0},  //TV = 4.06(1656 lines)  AV=2.53  SV=8.19  BV=-1.60
    {59989,6144,4904, 0, 0, 0},  //TV = 4.06(1656 lines)  AV=2.53  SV=8.29  BV=-1.70
    {59989,6144,5256, 0, 0, 0},  //TV = 4.06(1656 lines)  AV=2.53  SV=8.39  BV=-1.80
    {59989,6144,5632, 0, 0, 0},  //TV = 4.06(1656 lines)  AV=2.53  SV=8.49  BV=-1.90
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_StrobeTable =
{
    AETABLE_STROBE,    //eAETableID
    142,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    122,    //i4MaxBV
    -19,    //i4MinBV
    90,    //i4EffectiveMaxBV
    -30,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO SPEED
    sCaptureStrobePLineTable_60Hz,
    sCaptureStrobePLineTable_50Hz,
    NULL,
};

static strEvPline sAEScene1PLineTable_60Hz =
{
{
    {73,1600,1048, 0, 0, 0},  //TV = 13.74(2 lines)  AV=2.53  SV=4.12  BV=12.15
    {73,1664,1040, 0, 0, 0},  //TV = 13.74(2 lines)  AV=2.53  SV=4.17  BV=12.10
    {109,1216,1032, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.70  BV=11.99
    {109,1280,1048, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.80  BV=11.89
    {109,1344,1064, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.89  BV=11.80
    {109,1472,1032, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.98  BV=11.71
    {145,1216,1024, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.69  BV=11.59
    {145,1280,1056, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.81  BV=11.47
    {145,1344,1048, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.87  BV=11.41
    {145,1472,1024, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.97  BV=11.31
    {182,1216,1064, 0, 0, 0},  //TV = 12.42(5 lines)  AV=2.53  SV=3.75  BV=11.20
    {182,1344,1024, 0, 0, 0},  //TV = 12.42(5 lines)  AV=2.53  SV=3.84  BV=11.11
    {218,1152,1072, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.68  BV=11.01
    {218,1280,1032, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.78  BV=10.91
    {218,1344,1056, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.88  BV=10.81
    {254,1216,1072, 0, 0, 0},  //TV = 11.94(7 lines)  AV=2.53  SV=3.76  BV=10.71
    {290,1152,1064, 0, 0, 0},  //TV = 11.75(8 lines)  AV=2.53  SV=3.67  BV=10.61
    {290,1280,1024, 0, 0, 0},  //TV = 11.75(8 lines)  AV=2.53  SV=3.77  BV=10.51
    {327,1216,1024, 0, 0, 0},  //TV = 11.58(9 lines)  AV=2.53  SV=3.69  BV=10.41
    {327,1280,1048, 0, 0, 0},  //TV = 11.58(9 lines)  AV=2.53  SV=3.80  BV=10.31
    {363,1216,1064, 0, 0, 0},  //TV = 11.43(10 lines)  AV=2.53  SV=3.75  BV=10.21
    {399,1216,1032, 0, 0, 0},  //TV = 11.29(11 lines)  AV=2.53  SV=3.70  BV=10.11
    {435,1152,1080, 0, 0, 0},  //TV = 11.17(12 lines)  AV=2.53  SV=3.69  BV=10.00
    {471,1152,1064, 0, 0, 0},  //TV = 11.05(13 lines)  AV=2.53  SV=3.67  BV=9.91
    {471,1280,1024, 0, 0, 0},  //TV = 11.05(13 lines)  AV=2.53  SV=3.77  BV=9.81
    {508,1216,1072, 0, 0, 0},  //TV = 10.94(14 lines)  AV=2.53  SV=3.76  BV=9.71
    {580,1152,1064, 0, 0, 0},  //TV = 10.75(16 lines)  AV=2.53  SV=3.67  BV=9.61
    {616,1152,1072, 0, 0, 0},  //TV = 10.66(17 lines)  AV=2.53  SV=3.68  BV=9.51
    {653,1216,1024, 0, 0, 0},  //TV = 10.58(18 lines)  AV=2.53  SV=3.69  BV=9.42
    {689,1216,1040, 0, 0, 0},  //TV = 10.50(19 lines)  AV=2.53  SV=3.71  BV=9.32
    {761,1152,1072, 0, 0, 0},  //TV = 10.36(21 lines)  AV=2.53  SV=3.68  BV=9.21
    {797,1216,1032, 0, 0, 0},  //TV = 10.29(22 lines)  AV=2.53  SV=3.70  BV=9.12
    {870,1152,1080, 0, 0, 0},  //TV = 10.17(24 lines)  AV=2.53  SV=3.69  BV=9.00
    {942,1152,1064, 0, 0, 0},  //TV = 10.05(26 lines)  AV=2.53  SV=3.67  BV=8.91
    {979,1216,1040, 0, 0, 0},  //TV = 10.00(27 lines)  AV=2.53  SV=3.71  BV=8.81
    {1051,1216,1032, 0, 0, 0},  //TV = 9.89(29 lines)  AV=2.53  SV=3.70  BV=8.72
    {1160,1152,1072, 0, 0, 0},  //TV = 9.75(32 lines)  AV=2.53  SV=3.68  BV=8.60
    {1232,1152,1072, 0, 0, 0},  //TV = 9.66(34 lines)  AV=2.53  SV=3.68  BV=8.51
    {1305,1216,1024, 0, 0, 0},  //TV = 9.58(36 lines)  AV=2.53  SV=3.69  BV=8.42
    {1413,1152,1080, 0, 0, 0},  //TV = 9.47(39 lines)  AV=2.53  SV=3.69  BV=8.30
    {1522,1152,1072, 0, 0, 0},  //TV = 9.36(42 lines)  AV=2.53  SV=3.68  BV=8.21
    {1631,1152,1072, 0, 0, 0},  //TV = 9.26(45 lines)  AV=2.53  SV=3.68  BV=8.11
    {1739,1152,1080, 0, 0, 0},  //TV = 9.17(48 lines)  AV=2.53  SV=3.69  BV=8.00
    {1884,1152,1064, 0, 0, 0},  //TV = 9.05(52 lines)  AV=2.53  SV=3.67  BV=7.91
    {1993,1152,1080, 0, 0, 0},  //TV = 8.97(55 lines)  AV=2.53  SV=3.69  BV=7.81
    {2138,1152,1080, 0, 0, 0},  //TV = 8.87(59 lines)  AV=2.53  SV=3.69  BV=7.71
    {2319,1152,1064, 0, 0, 0},  //TV = 8.75(64 lines)  AV=2.53  SV=3.67  BV=7.61
    {2464,1152,1072, 0, 0, 0},  //TV = 8.66(68 lines)  AV=2.53  SV=3.68  BV=7.51
    {2645,1152,1072, 0, 0, 0},  //TV = 8.56(73 lines)  AV=2.53  SV=3.68  BV=7.41
    {2826,1152,1080, 0, 0, 0},  //TV = 8.47(78 lines)  AV=2.53  SV=3.69  BV=7.30
    {3043,1152,1072, 0, 0, 0},  //TV = 8.36(84 lines)  AV=2.53  SV=3.68  BV=7.21
    {3261,1152,1072, 0, 0, 0},  //TV = 8.26(90 lines)  AV=2.53  SV=3.68  BV=7.11
    {3514,1152,1072, 0, 0, 0},  //TV = 8.15(97 lines)  AV=2.53  SV=3.68  BV=7.00
    {3732,1152,1072, 0, 0, 0},  //TV = 8.07(103 lines)  AV=2.53  SV=3.68  BV=6.91
    {4021,1152,1072, 0, 0, 0},  //TV = 7.96(111 lines)  AV=2.53  SV=3.68  BV=6.80
    {4347,1152,1064, 0, 0, 0},  //TV = 7.85(120 lines)  AV=2.53  SV=3.67  BV=6.70
    {4601,1152,1072, 0, 0, 0},  //TV = 7.76(127 lines)  AV=2.53  SV=3.68  BV=6.61
    {4927,1152,1072, 0, 0, 0},  //TV = 7.67(136 lines)  AV=2.53  SV=3.68  BV=6.51
    {5289,1152,1072, 0, 0, 0},  //TV = 7.56(146 lines)  AV=2.53  SV=3.68  BV=6.41
    {5688,1152,1072, 0, 0, 0},  //TV = 7.46(157 lines)  AV=2.53  SV=3.68  BV=6.30
    {6123,1152,1064, 0, 0, 0},  //TV = 7.35(169 lines)  AV=2.53  SV=3.67  BV=6.21
    {6557,1152,1064, 0, 0, 0},  //TV = 7.25(181 lines)  AV=2.53  SV=3.67  BV=6.11
    {7028,1152,1064, 0, 0, 0},  //TV = 7.15(194 lines)  AV=2.53  SV=3.67  BV=6.01
    {7499,1152,1072, 0, 0, 0},  //TV = 7.06(207 lines)  AV=2.53  SV=3.68  BV=5.91
    {8115,1152,1064, 0, 0, 0},  //TV = 6.95(224 lines)  AV=2.53  SV=3.67  BV=5.80
    {8332,1216,1056, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=3.74  BV=5.70
    {8332,1280,1064, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=3.82  BV=5.61
    {8332,1408,1040, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=3.93  BV=5.51
    {8332,1472,1064, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.02  BV=5.41
    {8332,1600,1048, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.12  BV=5.31
    {8332,1728,1040, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.22  BV=5.21
    {8332,1856,1040, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.32  BV=5.11
    {8332,1984,1040, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.42  BV=5.01
    {8332,2048,1088, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.53  BV=4.90
    {8332,2304,1032, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.62  BV=4.81
    {16664,1216,1048, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=3.72  BV=4.71
    {16664,1280,1064, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=3.82  BV=4.61
    {16664,1408,1040, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=3.93  BV=4.51
    {16664,1472,1064, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=4.02  BV=4.41
    {16664,1600,1056, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=4.13  BV=4.30
    {16664,1728,1040, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=4.22  BV=4.21
    {24996,1216,1064, 0, 0, 0},  //TV = 5.32(690 lines)  AV=2.53  SV=3.75  BV=4.10
    {24996,1344,1024, 0, 0, 0},  //TV = 5.32(690 lines)  AV=2.53  SV=3.84  BV=4.01
    {24996,1408,1048, 0, 0, 0},  //TV = 5.32(690 lines)  AV=2.53  SV=3.94  BV=3.91
    {24996,1536,1032, 0, 0, 0},  //TV = 5.32(690 lines)  AV=2.53  SV=4.04  BV=3.81
    {33327,1216,1048, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=3.72  BV=3.71
    {33327,1280,1064, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=3.82  BV=3.61
    {33327,1408,1040, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=3.93  BV=3.51
    {33327,1472,1064, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=4.02  BV=3.41
    {33327,1600,1048, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=4.12  BV=3.31
    {33327,1728,1040, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=4.22  BV=3.21
    {33327,1856,1040, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=4.32  BV=3.11
    {33327,1984,1040, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=4.42  BV=3.01
    {33327,2048,1080, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=4.52  BV=2.91
    {33327,2304,1024, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=4.61  BV=2.82
    {33327,2432,1048, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=4.72  BV=2.71
    {33327,2560,1064, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=4.82  BV=2.61
    {33327,2816,1032, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=4.91  BV=2.52
    {33327,3072,1024, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=5.03  BV=2.40
    {33327,3200,1048, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=5.12  BV=2.31
    {33327,3456,1040, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=5.22  BV=2.21
    {33327,3712,1040, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=5.32  BV=2.11
    {33327,3968,1040, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=5.42  BV=2.01
    {33327,4096,1088, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=5.53  BV=1.90
    {33327,4608,1032, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=5.62  BV=1.81
    {33327,4864,1048, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=5.72  BV=1.71
    {33327,5120,1064, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=5.82  BV=1.61
    {33327,5632,1040, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=5.93  BV=1.51
    {33327,5888,1064, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=6.02  BV=1.41
    {33327,6144,1096, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=6.13  BV=1.31
    {33327,6144,1176, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=6.23  BV=1.20
    {33327,6144,1256, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=6.32  BV=1.11
    {33327,6144,1352, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=6.43  BV=1.00
    {33327,6144,1448, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=6.53  BV=0.90
    {33327,6144,1544, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=6.62  BV=0.81
    {33327,6144,1664, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=6.73  BV=0.70
    {33327,6144,1784, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=6.83  BV=0.60
    {33327,6144,1904, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=6.92  BV=0.51
    {41659,6144,1640, 0, 0, 0},  //TV = 4.59(1150 lines)  AV=2.53  SV=6.71  BV=0.40
    {41659,6144,1760, 0, 0, 0},  //TV = 4.59(1150 lines)  AV=2.53  SV=6.81  BV=0.30
    {49991,6144,1568, 0, 0, 0},  //TV = 4.32(1380 lines)  AV=2.53  SV=6.64  BV=0.20
    {49991,6144,1680, 0, 0, 0},  //TV = 4.32(1380 lines)  AV=2.53  SV=6.74  BV=0.11
    {58323,6144,1552, 0, 0, 0},  //TV = 4.10(1610 lines)  AV=2.53  SV=6.63  BV=-0.00
    {58323,6144,1664, 0, 0, 0},  //TV = 4.10(1610 lines)  AV=2.53  SV=6.73  BV=-0.10
    {66654,6144,1552, 0, 0, 0},  //TV = 3.91(1840 lines)  AV=2.53  SV=6.63  BV=-0.20
    {66654,6144,1680, 0, 0, 0},  //TV = 3.91(1840 lines)  AV=2.53  SV=6.74  BV=-0.31
    {66654,6144,1800, 0, 0, 0},  //TV = 3.91(1840 lines)  AV=2.53  SV=6.84  BV=-0.41
    {66654,6144,1928, 0, 0, 0},  //TV = 3.91(1840 lines)  AV=2.53  SV=6.94  BV=-0.51
    {66654,6144,2064, 0, 0, 0},  //TV = 3.91(1840 lines)  AV=2.53  SV=7.04  BV=-0.61
    {66654,6144,2208, 0, 0, 0},  //TV = 3.91(1840 lines)  AV=2.53  SV=7.14  BV=-0.70
    {66654,6144,2368, 0, 0, 0},  //TV = 3.91(1840 lines)  AV=2.53  SV=7.24  BV=-0.80
    {66654,6144,2536, 0, 0, 0},  //TV = 3.91(1840 lines)  AV=2.53  SV=7.34  BV=-0.90
    {66654,6144,2720, 0, 0, 0},  //TV = 3.91(1840 lines)  AV=2.53  SV=7.44  BV=-1.00
    {66654,6144,2912, 0, 0, 0},  //TV = 3.91(1840 lines)  AV=2.53  SV=7.54  BV=-1.10
    {66654,6144,3120, 0, 0, 0},  //TV = 3.91(1840 lines)  AV=2.53  SV=7.64  BV=-1.20
    {66654,6144,3344, 0, 0, 0},  //TV = 3.91(1840 lines)  AV=2.53  SV=7.74  BV=-1.30
    {66654,6144,3584, 0, 0, 0},  //TV = 3.91(1840 lines)  AV=2.53  SV=7.84  BV=-1.40
    {66654,6144,3840, 0, 0, 0},  //TV = 3.91(1840 lines)  AV=2.53  SV=7.94  BV=-1.50
    {66654,6144,4120, 0, 0, 0},  //TV = 3.91(1840 lines)  AV=2.53  SV=8.04  BV=-1.60
    {66654,6144,4408, 0, 0, 0},  //TV = 3.91(1840 lines)  AV=2.53  SV=8.13  BV=-1.70
    {66654,6144,4728, 0, 0, 0},  //TV = 3.91(1840 lines)  AV=2.53  SV=8.24  BV=-1.80
    {66654,6144,5064, 0, 0, 0},  //TV = 3.91(1840 lines)  AV=2.53  SV=8.33  BV=-1.90
    {66654,6144,5448, 0, 0, 0},  //TV = 3.91(1840 lines)  AV=2.53  SV=8.44  BV=-2.01
    {74986,6144,5192, 0, 0, 0},  //TV = 3.74(2070 lines)  AV=2.53  SV=8.37  BV=-2.11
    {74986,6144,5560, 0, 0, 0},  //TV = 3.74(2070 lines)  AV=2.53  SV=8.47  BV=-2.21
    {83318,6144,5360, 0, 0, 0},  //TV = 3.59(2300 lines)  AV=2.53  SV=8.42  BV=-2.31
    {91650,6144,5224, 0, 0, 0},  //TV = 3.45(2530 lines)  AV=2.53  SV=8.38  BV=-2.41
    {99981,6144,5136, 0, 0, 0},  //TV = 3.32(2760 lines)  AV=2.53  SV=8.35  BV=-2.51
    {99981,6144,5504, 0, 0, 0},  //TV = 3.32(2760 lines)  AV=2.53  SV=8.45  BV=-2.61
    {108313,6144,5440, 0, 0, 0},  //TV = 3.21(2990 lines)  AV=2.53  SV=8.44  BV=-2.71
    {116645,6144,5416, 0, 0, 0},  //TV = 3.10(3220 lines)  AV=2.53  SV=8.43  BV=-2.81
    {124977,6144,5416, 0, 0, 0},  //TV = 3.00(3450 lines)  AV=2.53  SV=8.43  BV=-2.91
    {141677,6144,5120, 0, 0, 0},  //TV = 2.82(3911 lines)  AV=2.53  SV=8.35  BV=-3.01
    {150009,6144,5184, 0, 0, 0},  //TV = 2.74(4141 lines)  AV=2.53  SV=8.37  BV=-3.11
    {158341,6144,5264, 0, 0, 0},  //TV = 2.66(4371 lines)  AV=2.53  SV=8.39  BV=-3.21
    {166672,6144,5360, 0, 0, 0},  //TV = 2.58(4601 lines)  AV=2.53  SV=8.42  BV=-3.31
    {183336,6144,5224, 0, 0, 0},  //TV = 2.45(5061 lines)  AV=2.53  SV=8.38  BV=-3.41
    {199999,6144,5120, 0, 0, 0},  //TV = 2.32(5521 lines)  AV=2.53  SV=8.35  BV=-3.50
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sAEScene1PLineTable_50Hz =
{
{
    {73,1600,1048, 0, 0, 0},  //TV = 13.74(2 lines)  AV=2.53  SV=4.12  BV=12.15
    {73,1664,1040, 0, 0, 0},  //TV = 13.74(2 lines)  AV=2.53  SV=4.17  BV=12.10
    {109,1216,1032, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.70  BV=11.99
    {109,1280,1048, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.80  BV=11.89
    {109,1344,1064, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.89  BV=11.80
    {109,1472,1032, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.98  BV=11.71
    {145,1216,1024, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.69  BV=11.59
    {145,1280,1056, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.81  BV=11.47
    {145,1344,1048, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.87  BV=11.41
    {145,1472,1024, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.97  BV=11.31
    {182,1216,1064, 0, 0, 0},  //TV = 12.42(5 lines)  AV=2.53  SV=3.75  BV=11.20
    {182,1344,1024, 0, 0, 0},  //TV = 12.42(5 lines)  AV=2.53  SV=3.84  BV=11.11
    {218,1152,1072, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.68  BV=11.01
    {218,1280,1032, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.78  BV=10.91
    {218,1344,1056, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.88  BV=10.81
    {254,1216,1072, 0, 0, 0},  //TV = 11.94(7 lines)  AV=2.53  SV=3.76  BV=10.71
    {290,1152,1064, 0, 0, 0},  //TV = 11.75(8 lines)  AV=2.53  SV=3.67  BV=10.61
    {290,1280,1024, 0, 0, 0},  //TV = 11.75(8 lines)  AV=2.53  SV=3.77  BV=10.51
    {327,1216,1024, 0, 0, 0},  //TV = 11.58(9 lines)  AV=2.53  SV=3.69  BV=10.41
    {327,1280,1048, 0, 0, 0},  //TV = 11.58(9 lines)  AV=2.53  SV=3.80  BV=10.31
    {363,1216,1064, 0, 0, 0},  //TV = 11.43(10 lines)  AV=2.53  SV=3.75  BV=10.21
    {399,1216,1032, 0, 0, 0},  //TV = 11.29(11 lines)  AV=2.53  SV=3.70  BV=10.11
    {435,1152,1080, 0, 0, 0},  //TV = 11.17(12 lines)  AV=2.53  SV=3.69  BV=10.00
    {471,1152,1064, 0, 0, 0},  //TV = 11.05(13 lines)  AV=2.53  SV=3.67  BV=9.91
    {471,1280,1024, 0, 0, 0},  //TV = 11.05(13 lines)  AV=2.53  SV=3.77  BV=9.81
    {508,1216,1072, 0, 0, 0},  //TV = 10.94(14 lines)  AV=2.53  SV=3.76  BV=9.71
    {580,1152,1064, 0, 0, 0},  //TV = 10.75(16 lines)  AV=2.53  SV=3.67  BV=9.61
    {616,1152,1072, 0, 0, 0},  //TV = 10.66(17 lines)  AV=2.53  SV=3.68  BV=9.51
    {653,1216,1024, 0, 0, 0},  //TV = 10.58(18 lines)  AV=2.53  SV=3.69  BV=9.42
    {689,1216,1040, 0, 0, 0},  //TV = 10.50(19 lines)  AV=2.53  SV=3.71  BV=9.32
    {761,1152,1072, 0, 0, 0},  //TV = 10.36(21 lines)  AV=2.53  SV=3.68  BV=9.21
    {797,1216,1032, 0, 0, 0},  //TV = 10.29(22 lines)  AV=2.53  SV=3.70  BV=9.12
    {870,1152,1080, 0, 0, 0},  //TV = 10.17(24 lines)  AV=2.53  SV=3.69  BV=9.00
    {942,1152,1064, 0, 0, 0},  //TV = 10.05(26 lines)  AV=2.53  SV=3.67  BV=8.91
    {979,1216,1040, 0, 0, 0},  //TV = 10.00(27 lines)  AV=2.53  SV=3.71  BV=8.81
    {1051,1216,1032, 0, 0, 0},  //TV = 9.89(29 lines)  AV=2.53  SV=3.70  BV=8.72
    {1160,1152,1072, 0, 0, 0},  //TV = 9.75(32 lines)  AV=2.53  SV=3.68  BV=8.60
    {1232,1152,1072, 0, 0, 0},  //TV = 9.66(34 lines)  AV=2.53  SV=3.68  BV=8.51
    {1305,1216,1024, 0, 0, 0},  //TV = 9.58(36 lines)  AV=2.53  SV=3.69  BV=8.42
    {1413,1152,1080, 0, 0, 0},  //TV = 9.47(39 lines)  AV=2.53  SV=3.69  BV=8.30
    {1522,1152,1072, 0, 0, 0},  //TV = 9.36(42 lines)  AV=2.53  SV=3.68  BV=8.21
    {1631,1152,1072, 0, 0, 0},  //TV = 9.26(45 lines)  AV=2.53  SV=3.68  BV=8.11
    {1739,1152,1080, 0, 0, 0},  //TV = 9.17(48 lines)  AV=2.53  SV=3.69  BV=8.00
    {1884,1152,1064, 0, 0, 0},  //TV = 9.05(52 lines)  AV=2.53  SV=3.67  BV=7.91
    {1993,1152,1080, 0, 0, 0},  //TV = 8.97(55 lines)  AV=2.53  SV=3.69  BV=7.81
    {2138,1152,1080, 0, 0, 0},  //TV = 8.87(59 lines)  AV=2.53  SV=3.69  BV=7.71
    {2319,1152,1064, 0, 0, 0},  //TV = 8.75(64 lines)  AV=2.53  SV=3.67  BV=7.61
    {2464,1152,1072, 0, 0, 0},  //TV = 8.66(68 lines)  AV=2.53  SV=3.68  BV=7.51
    {2645,1152,1072, 0, 0, 0},  //TV = 8.56(73 lines)  AV=2.53  SV=3.68  BV=7.41
    {2826,1152,1080, 0, 0, 0},  //TV = 8.47(78 lines)  AV=2.53  SV=3.69  BV=7.30
    {3043,1152,1072, 0, 0, 0},  //TV = 8.36(84 lines)  AV=2.53  SV=3.68  BV=7.21
    {3261,1152,1072, 0, 0, 0},  //TV = 8.26(90 lines)  AV=2.53  SV=3.68  BV=7.11
    {3514,1152,1072, 0, 0, 0},  //TV = 8.15(97 lines)  AV=2.53  SV=3.68  BV=7.00
    {3732,1152,1072, 0, 0, 0},  //TV = 8.07(103 lines)  AV=2.53  SV=3.68  BV=6.91
    {4021,1152,1072, 0, 0, 0},  //TV = 7.96(111 lines)  AV=2.53  SV=3.68  BV=6.80
    {4347,1152,1064, 0, 0, 0},  //TV = 7.85(120 lines)  AV=2.53  SV=3.67  BV=6.70
    {4601,1152,1072, 0, 0, 0},  //TV = 7.76(127 lines)  AV=2.53  SV=3.68  BV=6.61
    {4927,1152,1072, 0, 0, 0},  //TV = 7.67(136 lines)  AV=2.53  SV=3.68  BV=6.51
    {5289,1152,1072, 0, 0, 0},  //TV = 7.56(146 lines)  AV=2.53  SV=3.68  BV=6.41
    {5688,1152,1072, 0, 0, 0},  //TV = 7.46(157 lines)  AV=2.53  SV=3.68  BV=6.30
    {6123,1152,1064, 0, 0, 0},  //TV = 7.35(169 lines)  AV=2.53  SV=3.67  BV=6.21
    {6557,1152,1064, 0, 0, 0},  //TV = 7.25(181 lines)  AV=2.53  SV=3.67  BV=6.11
    {7028,1152,1064, 0, 0, 0},  //TV = 7.15(194 lines)  AV=2.53  SV=3.67  BV=6.01
    {7499,1152,1072, 0, 0, 0},  //TV = 7.06(207 lines)  AV=2.53  SV=3.68  BV=5.91
    {8115,1152,1064, 0, 0, 0},  //TV = 6.95(224 lines)  AV=2.53  SV=3.67  BV=5.80
    {8694,1152,1064, 0, 0, 0},  //TV = 6.85(240 lines)  AV=2.53  SV=3.67  BV=5.70
    {9310,1152,1064, 0, 0, 0},  //TV = 6.75(257 lines)  AV=2.53  SV=3.67  BV=5.60
    {9962,1152,1064, 0, 0, 0},  //TV = 6.65(275 lines)  AV=2.53  SV=3.67  BV=5.51
    {9999,1216,1072, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=3.76  BV=5.41
    {9999,1344,1040, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=3.86  BV=5.31
    {9999,1408,1064, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=3.96  BV=5.21
    {9999,1536,1048, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.06  BV=5.11
    {9999,1664,1032, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.16  BV=5.01
    {9999,1792,1032, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.26  BV=4.91
    {9999,1920,1032, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.36  BV=4.81
    {9999,2048,1040, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.47  BV=4.70
    {9999,2176,1040, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.55  BV=4.62
    {9999,2304,1056, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.66  BV=4.51
    {19997,1216,1072, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=3.76  BV=4.41
    {19997,1344,1040, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=3.86  BV=4.31
    {19997,1472,1024, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=3.97  BV=4.20
    {19997,1536,1048, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=4.06  BV=4.11
    {19997,1664,1032, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=4.16  BV=4.01
    {29995,1152,1072, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=3.68  BV=3.91
    {29995,1280,1032, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=3.78  BV=3.81
    {29995,1344,1048, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=3.87  BV=3.72
    {29995,1472,1040, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=3.99  BV=3.60
    {29995,1536,1056, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=4.07  BV=3.51
    {29995,1664,1048, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=4.18  BV=3.41
    {29995,1792,1040, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=4.27  BV=3.31
    {29995,1920,1040, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=4.37  BV=3.21
    {29995,2048,1048, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=4.48  BV=3.11
    {29995,2176,1056, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=4.58  BV=3.01
    {29995,2304,1064, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=4.67  BV=2.92
    {29995,2560,1032, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=4.78  BV=2.81
    {29995,2688,1056, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=4.88  BV=2.70
    {29995,2944,1032, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=4.98  BV=2.61
    {29995,3072,1056, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.07  BV=2.51
    {29995,3328,1048, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.18  BV=2.41
    {29995,3584,1040, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.27  BV=2.31
    {29995,3840,1040, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.37  BV=2.21
    {29995,4096,1048, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.48  BV=2.11
    {29995,4352,1056, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.58  BV=2.01
    {29995,4608,1072, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.68  BV=1.91
    {29995,5120,1032, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.78  BV=1.81
    {29995,5376,1056, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.88  BV=1.70
    {29995,5888,1032, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.98  BV=1.61
    {29995,6144,1056, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.07  BV=1.51
    {29995,6144,1128, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.17  BV=1.42
    {29995,6144,1224, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.29  BV=1.30
    {29995,6144,1304, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.38  BV=1.21
    {29995,6144,1400, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.48  BV=1.11
    {29995,6144,1496, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.58  BV=1.01
    {29995,6144,1608, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.68  BV=0.91
    {29995,6144,1712, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.77  BV=0.82
    {29995,6144,1848, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.88  BV=0.70
    {29995,6144,1984, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.98  BV=0.60
    {39993,6144,1584, 0, 0, 0},  //TV = 4.64(1104 lines)  AV=2.53  SV=6.66  BV=0.51
    {39993,6144,1712, 0, 0, 0},  //TV = 4.64(1104 lines)  AV=2.53  SV=6.77  BV=0.40
    {39993,6144,1832, 0, 0, 0},  //TV = 4.64(1104 lines)  AV=2.53  SV=6.87  BV=0.30
    {49991,6144,1568, 0, 0, 0},  //TV = 4.32(1380 lines)  AV=2.53  SV=6.64  BV=0.20
    {49991,6144,1680, 0, 0, 0},  //TV = 4.32(1380 lines)  AV=2.53  SV=6.74  BV=0.11
    {49991,6144,1816, 0, 0, 0},  //TV = 4.32(1380 lines)  AV=2.53  SV=6.86  BV=-0.01
    {59989,6144,1624, 0, 0, 0},  //TV = 4.06(1656 lines)  AV=2.53  SV=6.69  BV=-0.11
    {59989,6144,1728, 0, 0, 0},  //TV = 4.06(1656 lines)  AV=2.53  SV=6.78  BV=-0.20
    {59989,6144,1864, 0, 0, 0},  //TV = 4.06(1656 lines)  AV=2.53  SV=6.89  BV=-0.31
    {59989,6144,2000, 0, 0, 0},  //TV = 4.06(1656 lines)  AV=2.53  SV=6.99  BV=-0.41
    {59989,6144,2136, 0, 0, 0},  //TV = 4.06(1656 lines)  AV=2.53  SV=7.09  BV=-0.50
    {59989,6144,2296, 0, 0, 0},  //TV = 4.06(1656 lines)  AV=2.53  SV=7.19  BV=-0.61
    {59989,6144,2456, 0, 0, 0},  //TV = 4.06(1656 lines)  AV=2.53  SV=7.29  BV=-0.71
    {59989,6144,2632, 0, 0, 0},  //TV = 4.06(1656 lines)  AV=2.53  SV=7.39  BV=-0.81
    {59989,6144,2816, 0, 0, 0},  //TV = 4.06(1656 lines)  AV=2.53  SV=7.49  BV=-0.90
    {59989,6144,3024, 0, 0, 0},  //TV = 4.06(1656 lines)  AV=2.53  SV=7.59  BV=-1.01
    {59989,6144,3240, 0, 0, 0},  //TV = 4.06(1656 lines)  AV=2.53  SV=7.69  BV=-1.11
    {59989,6144,3472, 0, 0, 0},  //TV = 4.06(1656 lines)  AV=2.53  SV=7.79  BV=-1.20
    {59989,6144,3720, 0, 0, 0},  //TV = 4.06(1656 lines)  AV=2.53  SV=7.89  BV=-1.30
    {59989,6144,3984, 0, 0, 0},  //TV = 4.06(1656 lines)  AV=2.53  SV=7.99  BV=-1.40
    {59989,6144,4272, 0, 0, 0},  //TV = 4.06(1656 lines)  AV=2.53  SV=8.09  BV=-1.50
    {59989,6144,4576, 0, 0, 0},  //TV = 4.06(1656 lines)  AV=2.53  SV=8.19  BV=-1.60
    {59989,6144,4904, 0, 0, 0},  //TV = 4.06(1656 lines)  AV=2.53  SV=8.29  BV=-1.70
    {59989,6144,5256, 0, 0, 0},  //TV = 4.06(1656 lines)  AV=2.53  SV=8.39  BV=-1.80
    {59989,6144,5632, 0, 0, 0},  //TV = 4.06(1656 lines)  AV=2.53  SV=8.49  BV=-1.90
    {69987,6144,5184, 0, 0, 0},  //TV = 3.84(1932 lines)  AV=2.53  SV=8.37  BV=-2.01
    {69987,6144,5560, 0, 0, 0},  //TV = 3.84(1932 lines)  AV=2.53  SV=8.47  BV=-2.11
    {79985,6144,5216, 0, 0, 0},  //TV = 3.64(2208 lines)  AV=2.53  SV=8.38  BV=-2.21
    {79985,6144,5584, 0, 0, 0},  //TV = 3.64(2208 lines)  AV=2.53  SV=8.48  BV=-2.31
    {89983,6144,5320, 0, 0, 0},  //TV = 3.47(2484 lines)  AV=2.53  SV=8.41  BV=-2.41
    {100018,6144,5128, 0, 0, 0},  //TV = 3.32(2761 lines)  AV=2.53  SV=8.35  BV=-2.51
    {100018,6144,5496, 0, 0, 0},  //TV = 3.32(2761 lines)  AV=2.53  SV=8.45  BV=-2.60
    {110017,6144,5360, 0, 0, 0},  //TV = 3.18(3037 lines)  AV=2.53  SV=8.42  BV=-2.71
    {120015,6144,5264, 0, 0, 0},  //TV = 3.06(3313 lines)  AV=2.53  SV=8.39  BV=-2.81
    {130013,6144,5208, 0, 0, 0},  //TV = 2.94(3589 lines)  AV=2.53  SV=8.38  BV=-2.91
    {140011,6144,5184, 0, 0, 0},  //TV = 2.84(3865 lines)  AV=2.53  SV=8.37  BV=-3.01
    {150009,6144,5184, 0, 0, 0},  //TV = 2.74(4141 lines)  AV=2.53  SV=8.37  BV=-3.11
    {160007,6144,5208, 0, 0, 0},  //TV = 2.64(4417 lines)  AV=2.53  SV=8.38  BV=-3.21
    {170005,6144,5256, 0, 0, 0},  //TV = 2.56(4693 lines)  AV=2.53  SV=8.39  BV=-3.31
    {180003,6144,5320, 0, 0, 0},  //TV = 2.47(4969 lines)  AV=2.53  SV=8.41  BV=-3.41
    {199999,6144,5120, 0, 0, 0},  //TV = 2.32(5521 lines)  AV=2.53  SV=8.35  BV=-3.50
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_SceneTable1 =
{
    AETABLE_SCENE_INDEX1,    //eAETableID
    158,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    122,    //i4MaxBV
    -35,    //i4MinBV
    90,    //i4EffectiveMaxBV
    -50,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO SPEED
    sAEScene1PLineTable_60Hz,
    sAEScene1PLineTable_50Hz,
    NULL,
};

static strEvPline sAEScene2PLineTable_60Hz =
{
{
    {73,1600,1048, 0, 0, 0},  //TV = 13.74(2 lines)  AV=2.53  SV=4.12  BV=12.15
    {73,1664,1040, 0, 0, 0},  //TV = 13.74(2 lines)  AV=2.53  SV=4.17  BV=12.10
    {109,1216,1032, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.70  BV=11.99
    {109,1280,1048, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.80  BV=11.89
    {109,1344,1064, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.89  BV=11.80
    {109,1472,1032, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.98  BV=11.71
    {145,1216,1024, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.69  BV=11.59
    {145,1280,1056, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.81  BV=11.47
    {145,1344,1048, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.87  BV=11.41
    {145,1472,1024, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.97  BV=11.31
    {182,1216,1064, 0, 0, 0},  //TV = 12.42(5 lines)  AV=2.53  SV=3.75  BV=11.20
    {182,1344,1024, 0, 0, 0},  //TV = 12.42(5 lines)  AV=2.53  SV=3.84  BV=11.11
    {218,1152,1072, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.68  BV=11.01
    {218,1280,1032, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.78  BV=10.91
    {218,1344,1056, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.88  BV=10.81
    {254,1216,1072, 0, 0, 0},  //TV = 11.94(7 lines)  AV=2.53  SV=3.76  BV=10.71
    {290,1152,1064, 0, 0, 0},  //TV = 11.75(8 lines)  AV=2.53  SV=3.67  BV=10.61
    {290,1280,1024, 0, 0, 0},  //TV = 11.75(8 lines)  AV=2.53  SV=3.77  BV=10.51
    {327,1216,1024, 0, 0, 0},  //TV = 11.58(9 lines)  AV=2.53  SV=3.69  BV=10.41
    {327,1280,1048, 0, 0, 0},  //TV = 11.58(9 lines)  AV=2.53  SV=3.80  BV=10.31
    {363,1216,1064, 0, 0, 0},  //TV = 11.43(10 lines)  AV=2.53  SV=3.75  BV=10.21
    {399,1216,1032, 0, 0, 0},  //TV = 11.29(11 lines)  AV=2.53  SV=3.70  BV=10.11
    {435,1152,1080, 0, 0, 0},  //TV = 11.17(12 lines)  AV=2.53  SV=3.69  BV=10.00
    {471,1152,1064, 0, 0, 0},  //TV = 11.05(13 lines)  AV=2.53  SV=3.67  BV=9.91
    {471,1280,1024, 0, 0, 0},  //TV = 11.05(13 lines)  AV=2.53  SV=3.77  BV=9.81
    {508,1216,1072, 0, 0, 0},  //TV = 10.94(14 lines)  AV=2.53  SV=3.76  BV=9.71
    {580,1152,1064, 0, 0, 0},  //TV = 10.75(16 lines)  AV=2.53  SV=3.67  BV=9.61
    {616,1152,1072, 0, 0, 0},  //TV = 10.66(17 lines)  AV=2.53  SV=3.68  BV=9.51
    {653,1216,1024, 0, 0, 0},  //TV = 10.58(18 lines)  AV=2.53  SV=3.69  BV=9.42
    {689,1216,1040, 0, 0, 0},  //TV = 10.50(19 lines)  AV=2.53  SV=3.71  BV=9.32
    {761,1152,1072, 0, 0, 0},  //TV = 10.36(21 lines)  AV=2.53  SV=3.68  BV=9.21
    {797,1216,1032, 0, 0, 0},  //TV = 10.29(22 lines)  AV=2.53  SV=3.70  BV=9.12
    {870,1152,1080, 0, 0, 0},  //TV = 10.17(24 lines)  AV=2.53  SV=3.69  BV=9.00
    {942,1152,1064, 0, 0, 0},  //TV = 10.05(26 lines)  AV=2.53  SV=3.67  BV=8.91
    {979,1216,1040, 0, 0, 0},  //TV = 10.00(27 lines)  AV=2.53  SV=3.71  BV=8.81
    {1051,1216,1032, 0, 0, 0},  //TV = 9.89(29 lines)  AV=2.53  SV=3.70  BV=8.72
    {1160,1152,1072, 0, 0, 0},  //TV = 9.75(32 lines)  AV=2.53  SV=3.68  BV=8.60
    {1232,1152,1072, 0, 0, 0},  //TV = 9.66(34 lines)  AV=2.53  SV=3.68  BV=8.51
    {1305,1216,1024, 0, 0, 0},  //TV = 9.58(36 lines)  AV=2.53  SV=3.69  BV=8.42
    {1413,1152,1080, 0, 0, 0},  //TV = 9.47(39 lines)  AV=2.53  SV=3.69  BV=8.30
    {1522,1152,1072, 0, 0, 0},  //TV = 9.36(42 lines)  AV=2.53  SV=3.68  BV=8.21
    {1631,1152,1072, 0, 0, 0},  //TV = 9.26(45 lines)  AV=2.53  SV=3.68  BV=8.11
    {1739,1152,1080, 0, 0, 0},  //TV = 9.17(48 lines)  AV=2.53  SV=3.69  BV=8.00
    {1884,1152,1064, 0, 0, 0},  //TV = 9.05(52 lines)  AV=2.53  SV=3.67  BV=7.91
    {1993,1152,1080, 0, 0, 0},  //TV = 8.97(55 lines)  AV=2.53  SV=3.69  BV=7.81
    {2138,1152,1080, 0, 0, 0},  //TV = 8.87(59 lines)  AV=2.53  SV=3.69  BV=7.71
    {2319,1152,1064, 0, 0, 0},  //TV = 8.75(64 lines)  AV=2.53  SV=3.67  BV=7.61
    {2464,1152,1072, 0, 0, 0},  //TV = 8.66(68 lines)  AV=2.53  SV=3.68  BV=7.51
    {2645,1152,1072, 0, 0, 0},  //TV = 8.56(73 lines)  AV=2.53  SV=3.68  BV=7.41
    {2826,1152,1080, 0, 0, 0},  //TV = 8.47(78 lines)  AV=2.53  SV=3.69  BV=7.30
    {3043,1152,1072, 0, 0, 0},  //TV = 8.36(84 lines)  AV=2.53  SV=3.68  BV=7.21
    {3261,1152,1072, 0, 0, 0},  //TV = 8.26(90 lines)  AV=2.53  SV=3.68  BV=7.11
    {3514,1152,1072, 0, 0, 0},  //TV = 8.15(97 lines)  AV=2.53  SV=3.68  BV=7.00
    {3732,1152,1072, 0, 0, 0},  //TV = 8.07(103 lines)  AV=2.53  SV=3.68  BV=6.91
    {4021,1152,1072, 0, 0, 0},  //TV = 7.96(111 lines)  AV=2.53  SV=3.68  BV=6.80
    {4347,1152,1064, 0, 0, 0},  //TV = 7.85(120 lines)  AV=2.53  SV=3.67  BV=6.70
    {4601,1152,1072, 0, 0, 0},  //TV = 7.76(127 lines)  AV=2.53  SV=3.68  BV=6.61
    {4927,1152,1072, 0, 0, 0},  //TV = 7.67(136 lines)  AV=2.53  SV=3.68  BV=6.51
    {5289,1152,1072, 0, 0, 0},  //TV = 7.56(146 lines)  AV=2.53  SV=3.68  BV=6.41
    {5688,1152,1072, 0, 0, 0},  //TV = 7.46(157 lines)  AV=2.53  SV=3.68  BV=6.30
    {6123,1152,1064, 0, 0, 0},  //TV = 7.35(169 lines)  AV=2.53  SV=3.67  BV=6.21
    {6557,1152,1064, 0, 0, 0},  //TV = 7.25(181 lines)  AV=2.53  SV=3.67  BV=6.11
    {7028,1152,1064, 0, 0, 0},  //TV = 7.15(194 lines)  AV=2.53  SV=3.67  BV=6.01
    {7499,1152,1072, 0, 0, 0},  //TV = 7.06(207 lines)  AV=2.53  SV=3.68  BV=5.91
    {8115,1152,1064, 0, 0, 0},  //TV = 6.95(224 lines)  AV=2.53  SV=3.67  BV=5.80
    {8332,1216,1056, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=3.74  BV=5.70
    {8332,1280,1064, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=3.82  BV=5.61
    {8332,1408,1040, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=3.93  BV=5.51
    {8332,1472,1064, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.02  BV=5.41
    {8332,1600,1048, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.12  BV=5.31
    {8332,1728,1040, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.22  BV=5.21
    {8332,1856,1040, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.32  BV=5.11
    {8332,1984,1048, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.43  BV=5.00
    {8332,2048,1088, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.53  BV=4.90
    {8332,2304,1024, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.61  BV=4.82
    {8332,2432,1048, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.72  BV=4.71
    {8332,2560,1064, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.82  BV=4.61
    {8332,2816,1032, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.91  BV=4.52
    {8332,3072,1024, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=5.03  BV=4.40
    {8332,3200,1048, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=5.12  BV=4.31
    {8332,3456,1040, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=5.22  BV=4.21
    {8332,3712,1040, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=5.32  BV=4.11
    {8332,3968,1048, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=5.43  BV=4.00
    {8332,4096,1080, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=5.52  BV=3.91
    {8332,4608,1032, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=5.62  BV=3.81
    {8332,4864,1048, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=5.72  BV=3.71
    {8332,5120,1064, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=5.82  BV=3.61
    {8332,5632,1040, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=5.93  BV=3.51
    {8332,5888,1064, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=6.02  BV=3.41
    {8332,6144,1088, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=6.12  BV=3.32
    {8332,6144,1168, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=6.22  BV=3.21
    {8332,6144,1264, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=6.33  BV=3.10
    {8332,6144,1352, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=6.43  BV=3.00
    {16664,4352,1024, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=5.53  BV=2.90
    {16664,4608,1032, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=5.62  BV=2.81
    {16664,4864,1048, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=5.72  BV=2.71
    {16664,5120,1072, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=5.83  BV=2.60
    {16664,5632,1040, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=5.93  BV=2.51
    {24996,4096,1024, 0, 0, 0},  //TV = 5.32(690 lines)  AV=2.53  SV=5.44  BV=2.40
    {24996,4352,1032, 0, 0, 0},  //TV = 5.32(690 lines)  AV=2.53  SV=5.54  BV=2.31
    {24996,4608,1040, 0, 0, 0},  //TV = 5.32(690 lines)  AV=2.53  SV=5.64  BV=2.21
    {24996,4864,1056, 0, 0, 0},  //TV = 5.32(690 lines)  AV=2.53  SV=5.74  BV=2.11
    {24996,5376,1024, 0, 0, 0},  //TV = 5.32(690 lines)  AV=2.53  SV=5.84  BV=2.01
    {33327,4096,1088, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=5.53  BV=1.90
    {33327,4608,1032, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=5.62  BV=1.81
    {33327,4864,1048, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=5.72  BV=1.71
    {33327,5120,1064, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=5.82  BV=1.61
    {33327,5632,1040, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=5.93  BV=1.51
    {33327,5888,1064, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=6.02  BV=1.41
    {33327,6144,1088, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=6.12  BV=1.32
    {33327,6144,1168, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=6.22  BV=1.21
    {33327,6144,1256, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=6.32  BV=1.11
    {33327,6144,1352, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=6.43  BV=1.00
    {33327,6144,1448, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=6.53  BV=0.90
    {33327,6144,1552, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=6.63  BV=0.80
    {33327,6144,1656, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=6.72  BV=0.71
    {33327,6144,1776, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=6.82  BV=0.61
    {33327,6144,1904, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=6.92  BV=0.51
    {33327,6144,2040, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=7.02  BV=0.41
    {33327,6144,2184, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=7.12  BV=0.31
    {33327,6144,2344, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=7.22  BV=0.21
    {33327,6144,2512, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=7.32  BV=0.11
    {33327,6144,2712, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=7.43  BV=-0.00
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sAEScene2PLineTable_50Hz =
{
{
    {73,1600,1048, 0, 0, 0},  //TV = 13.74(2 lines)  AV=2.53  SV=4.12  BV=12.15
    {73,1664,1040, 0, 0, 0},  //TV = 13.74(2 lines)  AV=2.53  SV=4.17  BV=12.10
    {109,1216,1032, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.70  BV=11.99
    {109,1280,1048, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.80  BV=11.89
    {109,1344,1064, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.89  BV=11.80
    {109,1472,1032, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.98  BV=11.71
    {145,1216,1024, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.69  BV=11.59
    {145,1280,1056, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.81  BV=11.47
    {145,1344,1048, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.87  BV=11.41
    {145,1472,1024, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.97  BV=11.31
    {182,1216,1064, 0, 0, 0},  //TV = 12.42(5 lines)  AV=2.53  SV=3.75  BV=11.20
    {182,1344,1024, 0, 0, 0},  //TV = 12.42(5 lines)  AV=2.53  SV=3.84  BV=11.11
    {218,1152,1072, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.68  BV=11.01
    {218,1280,1032, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.78  BV=10.91
    {218,1344,1056, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.88  BV=10.81
    {254,1216,1072, 0, 0, 0},  //TV = 11.94(7 lines)  AV=2.53  SV=3.76  BV=10.71
    {290,1152,1064, 0, 0, 0},  //TV = 11.75(8 lines)  AV=2.53  SV=3.67  BV=10.61
    {290,1280,1024, 0, 0, 0},  //TV = 11.75(8 lines)  AV=2.53  SV=3.77  BV=10.51
    {327,1216,1024, 0, 0, 0},  //TV = 11.58(9 lines)  AV=2.53  SV=3.69  BV=10.41
    {327,1280,1048, 0, 0, 0},  //TV = 11.58(9 lines)  AV=2.53  SV=3.80  BV=10.31
    {363,1216,1064, 0, 0, 0},  //TV = 11.43(10 lines)  AV=2.53  SV=3.75  BV=10.21
    {399,1216,1032, 0, 0, 0},  //TV = 11.29(11 lines)  AV=2.53  SV=3.70  BV=10.11
    {435,1152,1080, 0, 0, 0},  //TV = 11.17(12 lines)  AV=2.53  SV=3.69  BV=10.00
    {471,1152,1064, 0, 0, 0},  //TV = 11.05(13 lines)  AV=2.53  SV=3.67  BV=9.91
    {471,1280,1024, 0, 0, 0},  //TV = 11.05(13 lines)  AV=2.53  SV=3.77  BV=9.81
    {508,1216,1072, 0, 0, 0},  //TV = 10.94(14 lines)  AV=2.53  SV=3.76  BV=9.71
    {580,1152,1064, 0, 0, 0},  //TV = 10.75(16 lines)  AV=2.53  SV=3.67  BV=9.61
    {616,1152,1072, 0, 0, 0},  //TV = 10.66(17 lines)  AV=2.53  SV=3.68  BV=9.51
    {653,1216,1024, 0, 0, 0},  //TV = 10.58(18 lines)  AV=2.53  SV=3.69  BV=9.42
    {689,1216,1040, 0, 0, 0},  //TV = 10.50(19 lines)  AV=2.53  SV=3.71  BV=9.32
    {761,1152,1072, 0, 0, 0},  //TV = 10.36(21 lines)  AV=2.53  SV=3.68  BV=9.21
    {797,1216,1032, 0, 0, 0},  //TV = 10.29(22 lines)  AV=2.53  SV=3.70  BV=9.12
    {870,1152,1080, 0, 0, 0},  //TV = 10.17(24 lines)  AV=2.53  SV=3.69  BV=9.00
    {942,1152,1064, 0, 0, 0},  //TV = 10.05(26 lines)  AV=2.53  SV=3.67  BV=8.91
    {979,1216,1040, 0, 0, 0},  //TV = 10.00(27 lines)  AV=2.53  SV=3.71  BV=8.81
    {1051,1216,1032, 0, 0, 0},  //TV = 9.89(29 lines)  AV=2.53  SV=3.70  BV=8.72
    {1160,1152,1072, 0, 0, 0},  //TV = 9.75(32 lines)  AV=2.53  SV=3.68  BV=8.60
    {1232,1152,1072, 0, 0, 0},  //TV = 9.66(34 lines)  AV=2.53  SV=3.68  BV=8.51
    {1305,1216,1024, 0, 0, 0},  //TV = 9.58(36 lines)  AV=2.53  SV=3.69  BV=8.42
    {1413,1152,1080, 0, 0, 0},  //TV = 9.47(39 lines)  AV=2.53  SV=3.69  BV=8.30
    {1522,1152,1072, 0, 0, 0},  //TV = 9.36(42 lines)  AV=2.53  SV=3.68  BV=8.21
    {1631,1152,1072, 0, 0, 0},  //TV = 9.26(45 lines)  AV=2.53  SV=3.68  BV=8.11
    {1739,1152,1080, 0, 0, 0},  //TV = 9.17(48 lines)  AV=2.53  SV=3.69  BV=8.00
    {1884,1152,1064, 0, 0, 0},  //TV = 9.05(52 lines)  AV=2.53  SV=3.67  BV=7.91
    {1993,1152,1080, 0, 0, 0},  //TV = 8.97(55 lines)  AV=2.53  SV=3.69  BV=7.81
    {2138,1152,1080, 0, 0, 0},  //TV = 8.87(59 lines)  AV=2.53  SV=3.69  BV=7.71
    {2319,1152,1064, 0, 0, 0},  //TV = 8.75(64 lines)  AV=2.53  SV=3.67  BV=7.61
    {2464,1152,1072, 0, 0, 0},  //TV = 8.66(68 lines)  AV=2.53  SV=3.68  BV=7.51
    {2645,1152,1072, 0, 0, 0},  //TV = 8.56(73 lines)  AV=2.53  SV=3.68  BV=7.41
    {2826,1152,1080, 0, 0, 0},  //TV = 8.47(78 lines)  AV=2.53  SV=3.69  BV=7.30
    {3043,1152,1072, 0, 0, 0},  //TV = 8.36(84 lines)  AV=2.53  SV=3.68  BV=7.21
    {3261,1152,1072, 0, 0, 0},  //TV = 8.26(90 lines)  AV=2.53  SV=3.68  BV=7.11
    {3514,1152,1072, 0, 0, 0},  //TV = 8.15(97 lines)  AV=2.53  SV=3.68  BV=7.00
    {3732,1152,1072, 0, 0, 0},  //TV = 8.07(103 lines)  AV=2.53  SV=3.68  BV=6.91
    {4021,1152,1072, 0, 0, 0},  //TV = 7.96(111 lines)  AV=2.53  SV=3.68  BV=6.80
    {4347,1152,1064, 0, 0, 0},  //TV = 7.85(120 lines)  AV=2.53  SV=3.67  BV=6.70
    {4601,1152,1072, 0, 0, 0},  //TV = 7.76(127 lines)  AV=2.53  SV=3.68  BV=6.61
    {4927,1152,1072, 0, 0, 0},  //TV = 7.67(136 lines)  AV=2.53  SV=3.68  BV=6.51
    {5289,1152,1072, 0, 0, 0},  //TV = 7.56(146 lines)  AV=2.53  SV=3.68  BV=6.41
    {5688,1152,1072, 0, 0, 0},  //TV = 7.46(157 lines)  AV=2.53  SV=3.68  BV=6.30
    {6123,1152,1064, 0, 0, 0},  //TV = 7.35(169 lines)  AV=2.53  SV=3.67  BV=6.21
    {6557,1152,1064, 0, 0, 0},  //TV = 7.25(181 lines)  AV=2.53  SV=3.67  BV=6.11
    {7028,1152,1064, 0, 0, 0},  //TV = 7.15(194 lines)  AV=2.53  SV=3.67  BV=6.01
    {7499,1152,1072, 0, 0, 0},  //TV = 7.06(207 lines)  AV=2.53  SV=3.68  BV=5.91
    {8115,1152,1064, 0, 0, 0},  //TV = 6.95(224 lines)  AV=2.53  SV=3.67  BV=5.80
    {8694,1152,1064, 0, 0, 0},  //TV = 6.85(240 lines)  AV=2.53  SV=3.67  BV=5.70
    {9310,1152,1064, 0, 0, 0},  //TV = 6.75(257 lines)  AV=2.53  SV=3.67  BV=5.60
    {9962,1152,1064, 0, 0, 0},  //TV = 6.65(275 lines)  AV=2.53  SV=3.67  BV=5.51
    {9999,1216,1072, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=3.76  BV=5.41
    {9999,1344,1040, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=3.86  BV=5.31
    {9999,1408,1064, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=3.96  BV=5.21
    {9999,1536,1048, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.06  BV=5.11
    {9999,1664,1040, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.17  BV=5.00
    {9999,1792,1032, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.26  BV=4.91
    {9999,1920,1032, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.36  BV=4.81
    {9999,2048,1032, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.45  BV=4.72
    {9999,2176,1040, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.55  BV=4.62
    {9999,2304,1056, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.66  BV=4.51
    {9999,2432,1072, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.76  BV=4.41
    {9999,2688,1040, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.86  BV=4.31
    {9999,2816,1064, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.96  BV=4.21
    {9999,3072,1048, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.06  BV=4.11
    {9999,3328,1040, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.17  BV=4.00
    {9999,3584,1032, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.26  BV=3.91
    {9999,3840,1032, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.36  BV=3.81
    {9999,4096,1032, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.45  BV=3.72
    {9999,4352,1040, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.55  BV=3.62
    {9999,4608,1056, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.66  BV=3.51
    {9999,4864,1072, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.76  BV=3.41
    {9999,5376,1040, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.86  BV=3.31
    {9999,5632,1064, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=5.96  BV=3.21
    {9999,6144,1040, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=6.05  BV=3.12
    {9999,6144,1128, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=6.17  BV=3.00
    {9999,6144,1208, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=6.27  BV=2.90
    {9999,6144,1296, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=6.37  BV=2.80
    {19997,4096,1040, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=5.47  BV=2.70
    {19997,4352,1048, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=5.56  BV=2.61
    {19997,4608,1056, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=5.66  BV=2.51
    {19997,5120,1024, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=5.77  BV=2.40
    {19997,5376,1040, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=5.86  BV=2.31
    {19997,5632,1064, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=5.96  BV=2.21
    {29995,4096,1048, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.48  BV=2.11
    {29995,4352,1056, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.58  BV=2.01
    {29995,4608,1072, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.68  BV=1.91
    {29995,5120,1032, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.78  BV=1.81
    {29995,5376,1056, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.88  BV=1.70
    {29995,5888,1032, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.98  BV=1.61
    {29995,6144,1056, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.07  BV=1.51
    {29995,6144,1128, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.17  BV=1.42
    {29995,6144,1216, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.28  BV=1.31
    {29995,6144,1304, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.38  BV=1.21
    {29995,6144,1400, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.48  BV=1.11
    {29995,6144,1504, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.58  BV=1.00
    {29995,6144,1608, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.68  BV=0.91
    {29995,6144,1720, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.78  BV=0.81
    {29995,6144,1848, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.88  BV=0.70
    {29995,6144,1976, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.98  BV=0.61
    {29995,6144,2120, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=7.08  BV=0.51
    {29995,6144,2272, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=7.18  BV=0.41
    {29995,6144,2432, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=7.28  BV=0.31
    {29995,6144,2600, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=7.37  BV=0.21
    {29995,6144,2792, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=7.48  BV=0.11
    {29995,6144,3008, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=7.58  BV=0.00
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_SceneTable2 =
{
    AETABLE_SCENE_INDEX2,    //eAETableID
    123,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    122,    //i4MaxBV
    0,    //i4MinBV
    90,    //i4EffectiveMaxBV
    -30,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO SPEED
    sAEScene2PLineTable_60Hz,
    sAEScene2PLineTable_50Hz,
    NULL,
};

static strEvPline sAEScene3PLineTable_60Hz =
{
{
    {73,1600,1048, 0, 0, 0},  //TV = 13.74(2 lines)  AV=2.53  SV=4.12  BV=12.15
    {73,1664,1040, 0, 0, 0},  //TV = 13.74(2 lines)  AV=2.53  SV=4.17  BV=12.10
    {109,1216,1032, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.70  BV=11.99
    {109,1280,1048, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.80  BV=11.89
    {109,1344,1064, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.89  BV=11.80
    {109,1472,1032, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.98  BV=11.71
    {145,1216,1024, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.69  BV=11.59
    {145,1280,1056, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.81  BV=11.47
    {145,1344,1048, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.87  BV=11.41
    {145,1472,1024, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.97  BV=11.31
    {182,1216,1064, 0, 0, 0},  //TV = 12.42(5 lines)  AV=2.53  SV=3.75  BV=11.20
    {182,1344,1024, 0, 0, 0},  //TV = 12.42(5 lines)  AV=2.53  SV=3.84  BV=11.11
    {218,1152,1072, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.68  BV=11.01
    {218,1280,1032, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.78  BV=10.91
    {218,1344,1056, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.88  BV=10.81
    {254,1216,1072, 0, 0, 0},  //TV = 11.94(7 lines)  AV=2.53  SV=3.76  BV=10.71
    {290,1152,1064, 0, 0, 0},  //TV = 11.75(8 lines)  AV=2.53  SV=3.67  BV=10.61
    {290,1280,1024, 0, 0, 0},  //TV = 11.75(8 lines)  AV=2.53  SV=3.77  BV=10.51
    {327,1216,1024, 0, 0, 0},  //TV = 11.58(9 lines)  AV=2.53  SV=3.69  BV=10.41
    {327,1280,1048, 0, 0, 0},  //TV = 11.58(9 lines)  AV=2.53  SV=3.80  BV=10.31
    {363,1216,1064, 0, 0, 0},  //TV = 11.43(10 lines)  AV=2.53  SV=3.75  BV=10.21
    {399,1216,1032, 0, 0, 0},  //TV = 11.29(11 lines)  AV=2.53  SV=3.70  BV=10.11
    {435,1152,1080, 0, 0, 0},  //TV = 11.17(12 lines)  AV=2.53  SV=3.69  BV=10.00
    {471,1152,1064, 0, 0, 0},  //TV = 11.05(13 lines)  AV=2.53  SV=3.67  BV=9.91
    {471,1280,1024, 0, 0, 0},  //TV = 11.05(13 lines)  AV=2.53  SV=3.77  BV=9.81
    {508,1216,1072, 0, 0, 0},  //TV = 10.94(14 lines)  AV=2.53  SV=3.76  BV=9.71
    {580,1152,1064, 0, 0, 0},  //TV = 10.75(16 lines)  AV=2.53  SV=3.67  BV=9.61
    {616,1152,1072, 0, 0, 0},  //TV = 10.66(17 lines)  AV=2.53  SV=3.68  BV=9.51
    {653,1216,1024, 0, 0, 0},  //TV = 10.58(18 lines)  AV=2.53  SV=3.69  BV=9.42
    {689,1216,1040, 0, 0, 0},  //TV = 10.50(19 lines)  AV=2.53  SV=3.71  BV=9.32
    {761,1152,1072, 0, 0, 0},  //TV = 10.36(21 lines)  AV=2.53  SV=3.68  BV=9.21
    {797,1216,1032, 0, 0, 0},  //TV = 10.29(22 lines)  AV=2.53  SV=3.70  BV=9.12
    {870,1152,1080, 0, 0, 0},  //TV = 10.17(24 lines)  AV=2.53  SV=3.69  BV=9.00
    {942,1152,1064, 0, 0, 0},  //TV = 10.05(26 lines)  AV=2.53  SV=3.67  BV=8.91
    {979,1216,1040, 0, 0, 0},  //TV = 10.00(27 lines)  AV=2.53  SV=3.71  BV=8.81
    {1051,1216,1032, 0, 0, 0},  //TV = 9.89(29 lines)  AV=2.53  SV=3.70  BV=8.72
    {1160,1152,1072, 0, 0, 0},  //TV = 9.75(32 lines)  AV=2.53  SV=3.68  BV=8.60
    {1232,1152,1072, 0, 0, 0},  //TV = 9.66(34 lines)  AV=2.53  SV=3.68  BV=8.51
    {1305,1216,1024, 0, 0, 0},  //TV = 9.58(36 lines)  AV=2.53  SV=3.69  BV=8.42
    {1413,1152,1080, 0, 0, 0},  //TV = 9.47(39 lines)  AV=2.53  SV=3.69  BV=8.30
    {1522,1152,1072, 0, 0, 0},  //TV = 9.36(42 lines)  AV=2.53  SV=3.68  BV=8.21
    {1631,1152,1072, 0, 0, 0},  //TV = 9.26(45 lines)  AV=2.53  SV=3.68  BV=8.11
    {1739,1152,1080, 0, 0, 0},  //TV = 9.17(48 lines)  AV=2.53  SV=3.69  BV=8.00
    {1884,1152,1064, 0, 0, 0},  //TV = 9.05(52 lines)  AV=2.53  SV=3.67  BV=7.91
    {1993,1152,1080, 0, 0, 0},  //TV = 8.97(55 lines)  AV=2.53  SV=3.69  BV=7.81
    {2138,1152,1080, 0, 0, 0},  //TV = 8.87(59 lines)  AV=2.53  SV=3.69  BV=7.71
    {2319,1152,1064, 0, 0, 0},  //TV = 8.75(64 lines)  AV=2.53  SV=3.67  BV=7.61
    {2464,1152,1072, 0, 0, 0},  //TV = 8.66(68 lines)  AV=2.53  SV=3.68  BV=7.51
    {2645,1152,1072, 0, 0, 0},  //TV = 8.56(73 lines)  AV=2.53  SV=3.68  BV=7.41
    {2826,1152,1080, 0, 0, 0},  //TV = 8.47(78 lines)  AV=2.53  SV=3.69  BV=7.30
    {3043,1152,1072, 0, 0, 0},  //TV = 8.36(84 lines)  AV=2.53  SV=3.68  BV=7.21
    {3261,1152,1072, 0, 0, 0},  //TV = 8.26(90 lines)  AV=2.53  SV=3.68  BV=7.11
    {3514,1152,1072, 0, 0, 0},  //TV = 8.15(97 lines)  AV=2.53  SV=3.68  BV=7.00
    {3732,1152,1072, 0, 0, 0},  //TV = 8.07(103 lines)  AV=2.53  SV=3.68  BV=6.91
    {4021,1152,1072, 0, 0, 0},  //TV = 7.96(111 lines)  AV=2.53  SV=3.68  BV=6.80
    {4347,1152,1064, 0, 0, 0},  //TV = 7.85(120 lines)  AV=2.53  SV=3.67  BV=6.70
    {4601,1152,1072, 0, 0, 0},  //TV = 7.76(127 lines)  AV=2.53  SV=3.68  BV=6.61
    {4927,1152,1072, 0, 0, 0},  //TV = 7.67(136 lines)  AV=2.53  SV=3.68  BV=6.51
    {5289,1152,1072, 0, 0, 0},  //TV = 7.56(146 lines)  AV=2.53  SV=3.68  BV=6.41
    {5688,1152,1072, 0, 0, 0},  //TV = 7.46(157 lines)  AV=2.53  SV=3.68  BV=6.30
    {6123,1152,1064, 0, 0, 0},  //TV = 7.35(169 lines)  AV=2.53  SV=3.67  BV=6.21
    {6557,1152,1064, 0, 0, 0},  //TV = 7.25(181 lines)  AV=2.53  SV=3.67  BV=6.11
    {7028,1152,1064, 0, 0, 0},  //TV = 7.15(194 lines)  AV=2.53  SV=3.67  BV=6.01
    {7499,1152,1072, 0, 0, 0},  //TV = 7.06(207 lines)  AV=2.53  SV=3.68  BV=5.91
    {8115,1152,1064, 0, 0, 0},  //TV = 6.95(224 lines)  AV=2.53  SV=3.67  BV=5.80
    {8332,1216,1056, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=3.74  BV=5.70
    {8332,1280,1064, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=3.82  BV=5.61
    {8332,1408,1040, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=3.93  BV=5.51
    {8332,1472,1064, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.02  BV=5.41
    {8332,1600,1048, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.12  BV=5.31
    {8332,1728,1040, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.22  BV=5.21
    {8332,1856,1040, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.32  BV=5.11
    {8332,1984,1040, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.42  BV=5.01
    {8332,2048,1088, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.53  BV=4.90
    {8332,2304,1032, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.62  BV=4.81
    {16664,1216,1048, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=3.72  BV=4.71
    {16664,1280,1064, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=3.82  BV=4.61
    {16664,1408,1040, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=3.93  BV=4.51
    {16664,1472,1064, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=4.02  BV=4.41
    {16664,1600,1056, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=4.13  BV=4.30
    {16664,1728,1040, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=4.22  BV=4.21
    {24996,1216,1064, 0, 0, 0},  //TV = 5.32(690 lines)  AV=2.53  SV=3.75  BV=4.10
    {24996,1344,1024, 0, 0, 0},  //TV = 5.32(690 lines)  AV=2.53  SV=3.84  BV=4.01
    {24996,1408,1048, 0, 0, 0},  //TV = 5.32(690 lines)  AV=2.53  SV=3.94  BV=3.91
    {24996,1536,1032, 0, 0, 0},  //TV = 5.32(690 lines)  AV=2.53  SV=4.04  BV=3.81
    {33327,1216,1048, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=3.72  BV=3.71
    {33327,1280,1064, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=3.82  BV=3.61
    {33327,1408,1040, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=3.93  BV=3.51
    {33327,1472,1064, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=4.02  BV=3.41
    {33327,1600,1048, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=4.12  BV=3.31
    {33327,1728,1040, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=4.22  BV=3.21
    {33327,1856,1040, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=4.32  BV=3.11
    {33327,1984,1040, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=4.42  BV=3.01
    {33327,2048,1080, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=4.52  BV=2.91
    {33327,2304,1024, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=4.61  BV=2.82
    {33327,2432,1040, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=4.71  BV=2.72
    {41659,2048,1072, 0, 0, 0},  //TV = 4.59(1150 lines)  AV=2.53  SV=4.51  BV=2.60
    {41659,2176,1072, 0, 0, 0},  //TV = 4.59(1150 lines)  AV=2.53  SV=4.60  BV=2.51
    {49991,2048,1024, 0, 0, 0},  //TV = 4.32(1380 lines)  AV=2.53  SV=4.44  BV=2.40
    {49991,2176,1032, 0, 0, 0},  //TV = 4.32(1380 lines)  AV=2.53  SV=4.54  BV=2.31
    {49991,2304,1040, 0, 0, 0},  //TV = 4.32(1380 lines)  AV=2.53  SV=4.64  BV=2.21
    {58323,2048,1080, 0, 0, 0},  //TV = 4.10(1610 lines)  AV=2.53  SV=4.52  BV=2.11
    {58323,2304,1024, 0, 0, 0},  //TV = 4.10(1610 lines)  AV=2.53  SV=4.61  BV=2.01
    {66654,2048,1088, 0, 0, 0},  //TV = 3.91(1840 lines)  AV=2.53  SV=4.53  BV=1.90
    {66654,2304,1032, 0, 0, 0},  //TV = 3.91(1840 lines)  AV=2.53  SV=4.62  BV=1.81
    {66654,2432,1040, 0, 0, 0},  //TV = 3.91(1840 lines)  AV=2.53  SV=4.71  BV=1.72
    {66654,2560,1072, 0, 0, 0},  //TV = 3.91(1840 lines)  AV=2.53  SV=4.83  BV=1.60
    {66654,2816,1040, 0, 0, 0},  //TV = 3.91(1840 lines)  AV=2.53  SV=4.93  BV=1.51
    {66654,2944,1064, 0, 0, 0},  //TV = 3.91(1840 lines)  AV=2.53  SV=5.02  BV=1.41
    {66654,3200,1056, 0, 0, 0},  //TV = 3.91(1840 lines)  AV=2.53  SV=5.13  BV=1.30
    {66654,3456,1040, 0, 0, 0},  //TV = 3.91(1840 lines)  AV=2.53  SV=5.22  BV=1.21
    {66654,3712,1040, 0, 0, 0},  //TV = 3.91(1840 lines)  AV=2.53  SV=5.32  BV=1.11
    {66654,3968,1040, 0, 0, 0},  //TV = 3.91(1840 lines)  AV=2.53  SV=5.42  BV=1.01
    {66654,4352,1024, 0, 0, 0},  //TV = 3.91(1840 lines)  AV=2.53  SV=5.53  BV=0.90
    {74986,4096,1032, 0, 0, 0},  //TV = 3.74(2070 lines)  AV=2.53  SV=5.45  BV=0.81
    {74986,4352,1040, 0, 0, 0},  //TV = 3.74(2070 lines)  AV=2.53  SV=5.55  BV=0.71
    {83318,4096,1064, 0, 0, 0},  //TV = 3.59(2300 lines)  AV=2.53  SV=5.50  BV=0.61
    {91650,4096,1040, 0, 0, 0},  //TV = 3.45(2530 lines)  AV=2.53  SV=5.47  BV=0.51
    {91650,4352,1048, 0, 0, 0},  //TV = 3.45(2530 lines)  AV=2.53  SV=5.56  BV=0.41
    {99981,4352,1024, 0, 0, 0},  //TV = 3.32(2760 lines)  AV=2.53  SV=5.53  BV=0.32
    {99981,4608,1040, 0, 0, 0},  //TV = 3.32(2760 lines)  AV=2.53  SV=5.64  BV=0.21
    {99981,4864,1064, 0, 0, 0},  //TV = 3.32(2760 lines)  AV=2.53  SV=5.75  BV=0.10
    {99981,5376,1032, 0, 0, 0},  //TV = 3.32(2760 lines)  AV=2.53  SV=5.85  BV=0.00
    {99981,5632,1056, 0, 0, 0},  //TV = 3.32(2760 lines)  AV=2.53  SV=5.95  BV=-0.10
    {99981,6144,1040, 0, 0, 0},  //TV = 3.32(2760 lines)  AV=2.53  SV=6.05  BV=-0.20
    {99981,6144,1112, 0, 0, 0},  //TV = 3.32(2760 lines)  AV=2.53  SV=6.15  BV=-0.30
    {99981,6144,1192, 0, 0, 0},  //TV = 3.32(2760 lines)  AV=2.53  SV=6.25  BV=-0.40
    {99981,6144,1280, 0, 0, 0},  //TV = 3.32(2760 lines)  AV=2.53  SV=6.35  BV=-0.50
    {99981,6144,1368, 0, 0, 0},  //TV = 3.32(2760 lines)  AV=2.53  SV=6.45  BV=-0.60
    {99981,6144,1464, 0, 0, 0},  //TV = 3.32(2760 lines)  AV=2.53  SV=6.54  BV=-0.70
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sAEScene3PLineTable_50Hz =
{
{
    {73,1600,1048, 0, 0, 0},  //TV = 13.74(2 lines)  AV=2.53  SV=4.12  BV=12.15
    {73,1664,1040, 0, 0, 0},  //TV = 13.74(2 lines)  AV=2.53  SV=4.17  BV=12.10
    {109,1216,1032, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.70  BV=11.99
    {109,1280,1048, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.80  BV=11.89
    {109,1344,1064, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.89  BV=11.80
    {109,1472,1032, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.98  BV=11.71
    {145,1216,1024, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.69  BV=11.59
    {145,1280,1056, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.81  BV=11.47
    {145,1344,1048, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.87  BV=11.41
    {145,1472,1024, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.97  BV=11.31
    {182,1216,1064, 0, 0, 0},  //TV = 12.42(5 lines)  AV=2.53  SV=3.75  BV=11.20
    {182,1344,1024, 0, 0, 0},  //TV = 12.42(5 lines)  AV=2.53  SV=3.84  BV=11.11
    {218,1152,1072, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.68  BV=11.01
    {218,1280,1032, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.78  BV=10.91
    {218,1344,1056, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.88  BV=10.81
    {254,1216,1072, 0, 0, 0},  //TV = 11.94(7 lines)  AV=2.53  SV=3.76  BV=10.71
    {290,1152,1064, 0, 0, 0},  //TV = 11.75(8 lines)  AV=2.53  SV=3.67  BV=10.61
    {290,1280,1024, 0, 0, 0},  //TV = 11.75(8 lines)  AV=2.53  SV=3.77  BV=10.51
    {327,1216,1024, 0, 0, 0},  //TV = 11.58(9 lines)  AV=2.53  SV=3.69  BV=10.41
    {327,1280,1048, 0, 0, 0},  //TV = 11.58(9 lines)  AV=2.53  SV=3.80  BV=10.31
    {363,1216,1064, 0, 0, 0},  //TV = 11.43(10 lines)  AV=2.53  SV=3.75  BV=10.21
    {399,1216,1032, 0, 0, 0},  //TV = 11.29(11 lines)  AV=2.53  SV=3.70  BV=10.11
    {435,1152,1080, 0, 0, 0},  //TV = 11.17(12 lines)  AV=2.53  SV=3.69  BV=10.00
    {471,1152,1064, 0, 0, 0},  //TV = 11.05(13 lines)  AV=2.53  SV=3.67  BV=9.91
    {471,1280,1024, 0, 0, 0},  //TV = 11.05(13 lines)  AV=2.53  SV=3.77  BV=9.81
    {508,1216,1072, 0, 0, 0},  //TV = 10.94(14 lines)  AV=2.53  SV=3.76  BV=9.71
    {580,1152,1064, 0, 0, 0},  //TV = 10.75(16 lines)  AV=2.53  SV=3.67  BV=9.61
    {616,1152,1072, 0, 0, 0},  //TV = 10.66(17 lines)  AV=2.53  SV=3.68  BV=9.51
    {653,1216,1024, 0, 0, 0},  //TV = 10.58(18 lines)  AV=2.53  SV=3.69  BV=9.42
    {689,1216,1040, 0, 0, 0},  //TV = 10.50(19 lines)  AV=2.53  SV=3.71  BV=9.32
    {761,1152,1072, 0, 0, 0},  //TV = 10.36(21 lines)  AV=2.53  SV=3.68  BV=9.21
    {797,1216,1032, 0, 0, 0},  //TV = 10.29(22 lines)  AV=2.53  SV=3.70  BV=9.12
    {870,1152,1080, 0, 0, 0},  //TV = 10.17(24 lines)  AV=2.53  SV=3.69  BV=9.00
    {942,1152,1064, 0, 0, 0},  //TV = 10.05(26 lines)  AV=2.53  SV=3.67  BV=8.91
    {979,1216,1040, 0, 0, 0},  //TV = 10.00(27 lines)  AV=2.53  SV=3.71  BV=8.81
    {1051,1216,1032, 0, 0, 0},  //TV = 9.89(29 lines)  AV=2.53  SV=3.70  BV=8.72
    {1160,1152,1072, 0, 0, 0},  //TV = 9.75(32 lines)  AV=2.53  SV=3.68  BV=8.60
    {1232,1152,1072, 0, 0, 0},  //TV = 9.66(34 lines)  AV=2.53  SV=3.68  BV=8.51
    {1305,1216,1024, 0, 0, 0},  //TV = 9.58(36 lines)  AV=2.53  SV=3.69  BV=8.42
    {1413,1152,1080, 0, 0, 0},  //TV = 9.47(39 lines)  AV=2.53  SV=3.69  BV=8.30
    {1522,1152,1072, 0, 0, 0},  //TV = 9.36(42 lines)  AV=2.53  SV=3.68  BV=8.21
    {1631,1152,1072, 0, 0, 0},  //TV = 9.26(45 lines)  AV=2.53  SV=3.68  BV=8.11
    {1739,1152,1080, 0, 0, 0},  //TV = 9.17(48 lines)  AV=2.53  SV=3.69  BV=8.00
    {1884,1152,1064, 0, 0, 0},  //TV = 9.05(52 lines)  AV=2.53  SV=3.67  BV=7.91
    {1993,1152,1080, 0, 0, 0},  //TV = 8.97(55 lines)  AV=2.53  SV=3.69  BV=7.81
    {2138,1152,1080, 0, 0, 0},  //TV = 8.87(59 lines)  AV=2.53  SV=3.69  BV=7.71
    {2319,1152,1064, 0, 0, 0},  //TV = 8.75(64 lines)  AV=2.53  SV=3.67  BV=7.61
    {2464,1152,1072, 0, 0, 0},  //TV = 8.66(68 lines)  AV=2.53  SV=3.68  BV=7.51
    {2645,1152,1072, 0, 0, 0},  //TV = 8.56(73 lines)  AV=2.53  SV=3.68  BV=7.41
    {2826,1152,1080, 0, 0, 0},  //TV = 8.47(78 lines)  AV=2.53  SV=3.69  BV=7.30
    {3043,1152,1072, 0, 0, 0},  //TV = 8.36(84 lines)  AV=2.53  SV=3.68  BV=7.21
    {3261,1152,1072, 0, 0, 0},  //TV = 8.26(90 lines)  AV=2.53  SV=3.68  BV=7.11
    {3514,1152,1072, 0, 0, 0},  //TV = 8.15(97 lines)  AV=2.53  SV=3.68  BV=7.00
    {3732,1152,1072, 0, 0, 0},  //TV = 8.07(103 lines)  AV=2.53  SV=3.68  BV=6.91
    {4021,1152,1072, 0, 0, 0},  //TV = 7.96(111 lines)  AV=2.53  SV=3.68  BV=6.80
    {4347,1152,1064, 0, 0, 0},  //TV = 7.85(120 lines)  AV=2.53  SV=3.67  BV=6.70
    {4601,1152,1072, 0, 0, 0},  //TV = 7.76(127 lines)  AV=2.53  SV=3.68  BV=6.61
    {4927,1152,1072, 0, 0, 0},  //TV = 7.67(136 lines)  AV=2.53  SV=3.68  BV=6.51
    {5289,1152,1072, 0, 0, 0},  //TV = 7.56(146 lines)  AV=2.53  SV=3.68  BV=6.41
    {5688,1152,1072, 0, 0, 0},  //TV = 7.46(157 lines)  AV=2.53  SV=3.68  BV=6.30
    {6123,1152,1064, 0, 0, 0},  //TV = 7.35(169 lines)  AV=2.53  SV=3.67  BV=6.21
    {6557,1152,1064, 0, 0, 0},  //TV = 7.25(181 lines)  AV=2.53  SV=3.67  BV=6.11
    {7028,1152,1064, 0, 0, 0},  //TV = 7.15(194 lines)  AV=2.53  SV=3.67  BV=6.01
    {7499,1152,1072, 0, 0, 0},  //TV = 7.06(207 lines)  AV=2.53  SV=3.68  BV=5.91
    {8115,1152,1064, 0, 0, 0},  //TV = 6.95(224 lines)  AV=2.53  SV=3.67  BV=5.80
    {8694,1152,1064, 0, 0, 0},  //TV = 6.85(240 lines)  AV=2.53  SV=3.67  BV=5.70
    {9310,1152,1064, 0, 0, 0},  //TV = 6.75(257 lines)  AV=2.53  SV=3.67  BV=5.60
    {9962,1152,1064, 0, 0, 0},  //TV = 6.65(275 lines)  AV=2.53  SV=3.67  BV=5.51
    {9999,1216,1072, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=3.76  BV=5.41
    {9999,1344,1040, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=3.86  BV=5.31
    {9999,1408,1064, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=3.96  BV=5.21
    {9999,1536,1048, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.06  BV=5.11
    {9999,1664,1032, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.16  BV=5.01
    {9999,1792,1032, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.26  BV=4.91
    {9999,1920,1032, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.36  BV=4.81
    {9999,2048,1040, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.47  BV=4.70
    {9999,2176,1040, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.55  BV=4.62
    {9999,2304,1056, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.66  BV=4.51
    {19997,1216,1072, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=3.76  BV=4.41
    {19997,1344,1040, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=3.86  BV=4.31
    {19997,1472,1024, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=3.97  BV=4.20
    {19997,1536,1048, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=4.06  BV=4.11
    {19997,1664,1032, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=4.16  BV=4.01
    {29995,1152,1072, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=3.68  BV=3.91
    {29995,1280,1032, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=3.78  BV=3.81
    {29995,1344,1048, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=3.87  BV=3.72
    {29995,1472,1040, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=3.99  BV=3.60
    {29995,1536,1056, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=4.07  BV=3.51
    {29995,1664,1048, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=4.18  BV=3.41
    {29995,1792,1040, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=4.27  BV=3.31
    {29995,1920,1040, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=4.37  BV=3.21
    {29995,2048,1048, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=4.48  BV=3.11
    {29995,2176,1056, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=4.58  BV=3.01
    {29995,2304,1064, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=4.67  BV=2.92
    {29995,2560,1032, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=4.78  BV=2.81
    {39993,2048,1032, 0, 0, 0},  //TV = 4.64(1104 lines)  AV=2.53  SV=4.45  BV=2.72
    {39993,2176,1040, 0, 0, 0},  //TV = 4.64(1104 lines)  AV=2.53  SV=4.55  BV=2.62
    {39993,2304,1056, 0, 0, 0},  //TV = 4.64(1104 lines)  AV=2.53  SV=4.66  BV=2.51
    {39993,2432,1072, 0, 0, 0},  //TV = 4.64(1104 lines)  AV=2.53  SV=4.76  BV=2.41
    {49991,2176,1032, 0, 0, 0},  //TV = 4.32(1380 lines)  AV=2.53  SV=4.54  BV=2.31
    {49991,2304,1040, 0, 0, 0},  //TV = 4.32(1380 lines)  AV=2.53  SV=4.64  BV=2.21
    {59989,2048,1048, 0, 0, 0},  //TV = 4.06(1656 lines)  AV=2.53  SV=4.48  BV=2.11
    {59989,2176,1056, 0, 0, 0},  //TV = 4.06(1656 lines)  AV=2.53  SV=4.58  BV=2.01
    {59989,2304,1072, 0, 0, 0},  //TV = 4.06(1656 lines)  AV=2.53  SV=4.68  BV=1.91
    {59989,2560,1032, 0, 0, 0},  //TV = 4.06(1656 lines)  AV=2.53  SV=4.78  BV=1.81
    {59989,2688,1048, 0, 0, 0},  //TV = 4.06(1656 lines)  AV=2.53  SV=4.87  BV=1.72
    {59989,2944,1032, 0, 0, 0},  //TV = 4.06(1656 lines)  AV=2.53  SV=4.98  BV=1.61
    {59989,3072,1056, 0, 0, 0},  //TV = 4.06(1656 lines)  AV=2.53  SV=5.07  BV=1.51
    {59989,3328,1048, 0, 0, 0},  //TV = 4.06(1656 lines)  AV=2.53  SV=5.18  BV=1.41
    {59989,3584,1040, 0, 0, 0},  //TV = 4.06(1656 lines)  AV=2.53  SV=5.27  BV=1.31
    {59989,3840,1040, 0, 0, 0},  //TV = 4.06(1656 lines)  AV=2.53  SV=5.37  BV=1.21
    {59989,4096,1048, 0, 0, 0},  //TV = 4.06(1656 lines)  AV=2.53  SV=5.48  BV=1.11
    {59989,4352,1056, 0, 0, 0},  //TV = 4.06(1656 lines)  AV=2.53  SV=5.58  BV=1.01
    {69987,4096,1032, 0, 0, 0},  //TV = 3.84(1932 lines)  AV=2.53  SV=5.45  BV=0.91
    {69987,4352,1040, 0, 0, 0},  //TV = 3.84(1932 lines)  AV=2.53  SV=5.55  BV=0.81
    {79985,4096,1032, 0, 0, 0},  //TV = 3.64(2208 lines)  AV=2.53  SV=5.45  BV=0.72
    {79985,4352,1048, 0, 0, 0},  //TV = 3.64(2208 lines)  AV=2.53  SV=5.56  BV=0.61
    {89983,4096,1056, 0, 0, 0},  //TV = 3.47(2484 lines)  AV=2.53  SV=5.49  BV=0.51
    {89983,4352,1064, 0, 0, 0},  //TV = 3.47(2484 lines)  AV=2.53  SV=5.59  BV=0.41
    {100018,4352,1024, 0, 0, 0},  //TV = 3.32(2761 lines)  AV=2.53  SV=5.53  BV=0.32
    {100018,4608,1040, 0, 0, 0},  //TV = 3.32(2761 lines)  AV=2.53  SV=5.64  BV=0.21
    {100018,4864,1056, 0, 0, 0},  //TV = 3.32(2761 lines)  AV=2.53  SV=5.74  BV=0.11
    {100018,5376,1032, 0, 0, 0},  //TV = 3.32(2761 lines)  AV=2.53  SV=5.85  BV=0.00
    {100018,5632,1056, 0, 0, 0},  //TV = 3.32(2761 lines)  AV=2.53  SV=5.95  BV=-0.10
    {100018,6144,1040, 0, 0, 0},  //TV = 3.32(2761 lines)  AV=2.53  SV=6.05  BV=-0.20
    {100018,6144,1112, 0, 0, 0},  //TV = 3.32(2761 lines)  AV=2.53  SV=6.15  BV=-0.30
    {100018,6144,1192, 0, 0, 0},  //TV = 3.32(2761 lines)  AV=2.53  SV=6.25  BV=-0.40
    {100018,6144,1280, 0, 0, 0},  //TV = 3.32(2761 lines)  AV=2.53  SV=6.35  BV=-0.50
    {100018,6144,1368, 0, 0, 0},  //TV = 3.32(2761 lines)  AV=2.53  SV=6.45  BV=-0.60
    {100018,6144,1464, 0, 0, 0},  //TV = 3.32(2761 lines)  AV=2.53  SV=6.54  BV=-0.70
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_SceneTable3 =
{
    AETABLE_SCENE_INDEX3,    //eAETableID
    130,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    122,    //i4MaxBV
    -7,    //i4MinBV
    90,    //i4EffectiveMaxBV
    -30,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO SPEED
    sAEScene3PLineTable_60Hz,
    sAEScene3PLineTable_50Hz,
    NULL,
};

static strEvPline sAEScene4PLineTable_60Hz =
{
{
    {199999,1664,1048, 0, 0, 0},  //TV = 2.32(5521 lines)  AV=2.53  SV=4.18  BV=0.67
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sAEScene4PLineTable_50Hz =
{
{
    {199999,1664,1048, 0, 0, 0},  //TV = 2.32(5521 lines)  AV=2.53  SV=4.18  BV=0.67
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_SceneTable4 =
{
    AETABLE_SCENE_INDEX4,    //eAETableID
    1,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    7,    //i4MaxBV
    7,    //i4MinBV
    90,    //i4EffectiveMaxBV
    -30,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO SPEED
    sAEScene4PLineTable_60Hz,
    sAEScene4PLineTable_50Hz,
    NULL,
};

static strEvPline sAEScene5PLineTable_60Hz =
{
{
    {73,1600,1048, 0, 0, 0},  //TV = 13.74(2 lines)  AV=2.53  SV=4.12  BV=12.15
    {73,1664,1040, 0, 0, 0},  //TV = 13.74(2 lines)  AV=2.53  SV=4.17  BV=12.10
    {109,1216,1032, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.70  BV=11.99
    {109,1280,1048, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.80  BV=11.89
    {109,1344,1064, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.89  BV=11.80
    {109,1472,1032, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.98  BV=11.71
    {145,1216,1024, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.69  BV=11.59
    {145,1280,1056, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.81  BV=11.47
    {145,1344,1048, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.87  BV=11.41
    {145,1472,1024, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.97  BV=11.31
    {182,1216,1064, 0, 0, 0},  //TV = 12.42(5 lines)  AV=2.53  SV=3.75  BV=11.20
    {182,1344,1024, 0, 0, 0},  //TV = 12.42(5 lines)  AV=2.53  SV=3.84  BV=11.11
    {218,1152,1072, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.68  BV=11.01
    {218,1280,1032, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.78  BV=10.91
    {218,1344,1056, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.88  BV=10.81
    {254,1216,1072, 0, 0, 0},  //TV = 11.94(7 lines)  AV=2.53  SV=3.76  BV=10.71
    {290,1152,1064, 0, 0, 0},  //TV = 11.75(8 lines)  AV=2.53  SV=3.67  BV=10.61
    {290,1280,1024, 0, 0, 0},  //TV = 11.75(8 lines)  AV=2.53  SV=3.77  BV=10.51
    {327,1216,1024, 0, 0, 0},  //TV = 11.58(9 lines)  AV=2.53  SV=3.69  BV=10.41
    {327,1280,1048, 0, 0, 0},  //TV = 11.58(9 lines)  AV=2.53  SV=3.80  BV=10.31
    {363,1216,1064, 0, 0, 0},  //TV = 11.43(10 lines)  AV=2.53  SV=3.75  BV=10.21
    {399,1216,1032, 0, 0, 0},  //TV = 11.29(11 lines)  AV=2.53  SV=3.70  BV=10.11
    {435,1152,1080, 0, 0, 0},  //TV = 11.17(12 lines)  AV=2.53  SV=3.69  BV=10.00
    {471,1152,1064, 0, 0, 0},  //TV = 11.05(13 lines)  AV=2.53  SV=3.67  BV=9.91
    {471,1280,1024, 0, 0, 0},  //TV = 11.05(13 lines)  AV=2.53  SV=3.77  BV=9.81
    {508,1216,1072, 0, 0, 0},  //TV = 10.94(14 lines)  AV=2.53  SV=3.76  BV=9.71
    {580,1152,1064, 0, 0, 0},  //TV = 10.75(16 lines)  AV=2.53  SV=3.67  BV=9.61
    {616,1152,1072, 0, 0, 0},  //TV = 10.66(17 lines)  AV=2.53  SV=3.68  BV=9.51
    {653,1216,1024, 0, 0, 0},  //TV = 10.58(18 lines)  AV=2.53  SV=3.69  BV=9.42
    {689,1216,1040, 0, 0, 0},  //TV = 10.50(19 lines)  AV=2.53  SV=3.71  BV=9.32
    {761,1152,1072, 0, 0, 0},  //TV = 10.36(21 lines)  AV=2.53  SV=3.68  BV=9.21
    {797,1216,1032, 0, 0, 0},  //TV = 10.29(22 lines)  AV=2.53  SV=3.70  BV=9.12
    {870,1152,1080, 0, 0, 0},  //TV = 10.17(24 lines)  AV=2.53  SV=3.69  BV=9.00
    {942,1152,1064, 0, 0, 0},  //TV = 10.05(26 lines)  AV=2.53  SV=3.67  BV=8.91
    {979,1216,1040, 0, 0, 0},  //TV = 10.00(27 lines)  AV=2.53  SV=3.71  BV=8.81
    {1051,1216,1032, 0, 0, 0},  //TV = 9.89(29 lines)  AV=2.53  SV=3.70  BV=8.72
    {1160,1152,1072, 0, 0, 0},  //TV = 9.75(32 lines)  AV=2.53  SV=3.68  BV=8.60
    {1232,1152,1072, 0, 0, 0},  //TV = 9.66(34 lines)  AV=2.53  SV=3.68  BV=8.51
    {1305,1216,1024, 0, 0, 0},  //TV = 9.58(36 lines)  AV=2.53  SV=3.69  BV=8.42
    {1413,1152,1080, 0, 0, 0},  //TV = 9.47(39 lines)  AV=2.53  SV=3.69  BV=8.30
    {1522,1152,1072, 0, 0, 0},  //TV = 9.36(42 lines)  AV=2.53  SV=3.68  BV=8.21
    {1631,1152,1072, 0, 0, 0},  //TV = 9.26(45 lines)  AV=2.53  SV=3.68  BV=8.11
    {1739,1152,1080, 0, 0, 0},  //TV = 9.17(48 lines)  AV=2.53  SV=3.69  BV=8.00
    {1884,1152,1064, 0, 0, 0},  //TV = 9.05(52 lines)  AV=2.53  SV=3.67  BV=7.91
    {1993,1152,1080, 0, 0, 0},  //TV = 8.97(55 lines)  AV=2.53  SV=3.69  BV=7.81
    {2138,1152,1080, 0, 0, 0},  //TV = 8.87(59 lines)  AV=2.53  SV=3.69  BV=7.71
    {2319,1152,1064, 0, 0, 0},  //TV = 8.75(64 lines)  AV=2.53  SV=3.67  BV=7.61
    {2464,1152,1072, 0, 0, 0},  //TV = 8.66(68 lines)  AV=2.53  SV=3.68  BV=7.51
    {2645,1152,1072, 0, 0, 0},  //TV = 8.56(73 lines)  AV=2.53  SV=3.68  BV=7.41
    {2826,1152,1080, 0, 0, 0},  //TV = 8.47(78 lines)  AV=2.53  SV=3.69  BV=7.30
    {3043,1152,1072, 0, 0, 0},  //TV = 8.36(84 lines)  AV=2.53  SV=3.68  BV=7.21
    {3261,1152,1072, 0, 0, 0},  //TV = 8.26(90 lines)  AV=2.53  SV=3.68  BV=7.11
    {3514,1152,1072, 0, 0, 0},  //TV = 8.15(97 lines)  AV=2.53  SV=3.68  BV=7.00
    {3732,1152,1072, 0, 0, 0},  //TV = 8.07(103 lines)  AV=2.53  SV=3.68  BV=6.91
    {4021,1152,1072, 0, 0, 0},  //TV = 7.96(111 lines)  AV=2.53  SV=3.68  BV=6.80
    {4347,1152,1064, 0, 0, 0},  //TV = 7.85(120 lines)  AV=2.53  SV=3.67  BV=6.70
    {4601,1152,1072, 0, 0, 0},  //TV = 7.76(127 lines)  AV=2.53  SV=3.68  BV=6.61
    {4927,1152,1072, 0, 0, 0},  //TV = 7.67(136 lines)  AV=2.53  SV=3.68  BV=6.51
    {5289,1152,1072, 0, 0, 0},  //TV = 7.56(146 lines)  AV=2.53  SV=3.68  BV=6.41
    {5688,1152,1072, 0, 0, 0},  //TV = 7.46(157 lines)  AV=2.53  SV=3.68  BV=6.30
    {6123,1152,1064, 0, 0, 0},  //TV = 7.35(169 lines)  AV=2.53  SV=3.67  BV=6.21
    {6557,1152,1064, 0, 0, 0},  //TV = 7.25(181 lines)  AV=2.53  SV=3.67  BV=6.11
    {7028,1152,1064, 0, 0, 0},  //TV = 7.15(194 lines)  AV=2.53  SV=3.67  BV=6.01
    {7499,1152,1072, 0, 0, 0},  //TV = 7.06(207 lines)  AV=2.53  SV=3.68  BV=5.91
    {8115,1152,1064, 0, 0, 0},  //TV = 6.95(224 lines)  AV=2.53  SV=3.67  BV=5.80
    {8332,1216,1056, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=3.74  BV=5.70
    {8332,1280,1064, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=3.82  BV=5.61
    {8332,1408,1040, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=3.93  BV=5.51
    {8332,1472,1064, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.02  BV=5.41
    {8332,1600,1048, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.12  BV=5.31
    {8332,1728,1040, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.22  BV=5.21
    {8332,1856,1040, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.32  BV=5.11
    {8332,1984,1040, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.42  BV=5.01
    {8332,2048,1088, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.53  BV=4.90
    {8332,2304,1032, 0, 0, 0},  //TV = 6.91(230 lines)  AV=2.53  SV=4.62  BV=4.81
    {16664,1216,1048, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=3.72  BV=4.71
    {16664,1280,1064, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=3.82  BV=4.61
    {16664,1408,1040, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=3.93  BV=4.51
    {16664,1472,1064, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=4.02  BV=4.41
    {16664,1600,1056, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=4.13  BV=4.30
    {16664,1728,1040, 0, 0, 0},  //TV = 5.91(460 lines)  AV=2.53  SV=4.22  BV=4.21
    {24996,1216,1064, 0, 0, 0},  //TV = 5.32(690 lines)  AV=2.53  SV=3.75  BV=4.10
    {24996,1344,1024, 0, 0, 0},  //TV = 5.32(690 lines)  AV=2.53  SV=3.84  BV=4.01
    {24996,1408,1048, 0, 0, 0},  //TV = 5.32(690 lines)  AV=2.53  SV=3.94  BV=3.91
    {24996,1536,1032, 0, 0, 0},  //TV = 5.32(690 lines)  AV=2.53  SV=4.04  BV=3.81
    {33327,1216,1048, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=3.72  BV=3.71
    {33327,1280,1064, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=3.82  BV=3.61
    {33327,1408,1040, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=3.93  BV=3.51
    {33327,1472,1064, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=4.02  BV=3.41
    {33327,1600,1048, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=4.12  BV=3.31
    {33327,1728,1040, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=4.22  BV=3.21
    {33327,1856,1040, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=4.32  BV=3.11
    {33327,1984,1040, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=4.42  BV=3.01
    {33327,2048,1080, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=4.52  BV=2.91
    {33327,2304,1024, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=4.61  BV=2.82
    {33327,2432,1048, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=4.72  BV=2.71
    {33327,2560,1064, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=4.82  BV=2.61
    {33327,2816,1032, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=4.91  BV=2.52
    {33327,3072,1024, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=5.03  BV=2.40
    {33327,3200,1048, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=5.12  BV=2.31
    {33327,3456,1040, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=5.22  BV=2.21
    {33327,3712,1040, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=5.32  BV=2.11
    {33327,3968,1040, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=5.42  BV=2.01
    {33327,4096,1088, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=5.53  BV=1.90
    {33327,4608,1032, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=5.62  BV=1.81
    {33327,4864,1048, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=5.72  BV=1.71
    {33327,5120,1064, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=5.82  BV=1.61
    {33327,5632,1040, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=5.93  BV=1.51
    {33327,5888,1064, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=6.02  BV=1.41
    {33327,6144,1096, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=6.13  BV=1.31
    {33327,6144,1176, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=6.23  BV=1.20
    {33327,6144,1256, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=6.32  BV=1.11
    {33327,6144,1352, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=6.43  BV=1.00
    {33327,6144,1448, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=6.53  BV=0.90
    {33327,6144,1544, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=6.62  BV=0.81
    {33327,6144,1664, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=6.73  BV=0.70
    {33327,6144,1784, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=6.83  BV=0.60
    {33327,6144,1904, 0, 0, 0},  //TV = 4.91(920 lines)  AV=2.53  SV=6.92  BV=0.51
    {41659,6144,1640, 0, 0, 0},  //TV = 4.59(1150 lines)  AV=2.53  SV=6.71  BV=0.40
    {41659,6144,1760, 0, 0, 0},  //TV = 4.59(1150 lines)  AV=2.53  SV=6.81  BV=0.30
    {49991,6144,1568, 0, 0, 0},  //TV = 4.32(1380 lines)  AV=2.53  SV=6.64  BV=0.20
    {49991,6144,1680, 0, 0, 0},  //TV = 4.32(1380 lines)  AV=2.53  SV=6.74  BV=0.11
    {58323,6144,1552, 0, 0, 0},  //TV = 4.10(1610 lines)  AV=2.53  SV=6.63  BV=-0.00
    {58323,6144,1664, 0, 0, 0},  //TV = 4.10(1610 lines)  AV=2.53  SV=6.73  BV=-0.10
    {66654,6144,1552, 0, 0, 0},  //TV = 3.91(1840 lines)  AV=2.53  SV=6.63  BV=-0.20
    {66654,6144,1680, 0, 0, 0},  //TV = 3.91(1840 lines)  AV=2.53  SV=6.74  BV=-0.31
    {66654,6144,1800, 0, 0, 0},  //TV = 3.91(1840 lines)  AV=2.53  SV=6.84  BV=-0.41
    {66654,6144,1928, 0, 0, 0},  //TV = 3.91(1840 lines)  AV=2.53  SV=6.94  BV=-0.51
    {66654,6144,2064, 0, 0, 0},  //TV = 3.91(1840 lines)  AV=2.53  SV=7.04  BV=-0.61
    {66654,6144,2208, 0, 0, 0},  //TV = 3.91(1840 lines)  AV=2.53  SV=7.14  BV=-0.70
    {66654,6144,2368, 0, 0, 0},  //TV = 3.91(1840 lines)  AV=2.53  SV=7.24  BV=-0.80
    {66654,6144,2536, 0, 0, 0},  //TV = 3.91(1840 lines)  AV=2.53  SV=7.34  BV=-0.90
    {66654,6144,2720, 0, 0, 0},  //TV = 3.91(1840 lines)  AV=2.53  SV=7.44  BV=-1.00
    {66654,6144,2912, 0, 0, 0},  //TV = 3.91(1840 lines)  AV=2.53  SV=7.54  BV=-1.10
    {66654,6144,3120, 0, 0, 0},  //TV = 3.91(1840 lines)  AV=2.53  SV=7.64  BV=-1.20
    {66654,6144,3344, 0, 0, 0},  //TV = 3.91(1840 lines)  AV=2.53  SV=7.74  BV=-1.30
    {66654,6144,3584, 0, 0, 0},  //TV = 3.91(1840 lines)  AV=2.53  SV=7.84  BV=-1.40
    {66654,6144,3840, 0, 0, 0},  //TV = 3.91(1840 lines)  AV=2.53  SV=7.94  BV=-1.50
    {66654,6144,4120, 0, 0, 0},  //TV = 3.91(1840 lines)  AV=2.53  SV=8.04  BV=-1.60
    {66654,6144,4408, 0, 0, 0},  //TV = 3.91(1840 lines)  AV=2.53  SV=8.13  BV=-1.70
    {66654,6144,4728, 0, 0, 0},  //TV = 3.91(1840 lines)  AV=2.53  SV=8.24  BV=-1.80
    {66654,6144,5064, 0, 0, 0},  //TV = 3.91(1840 lines)  AV=2.53  SV=8.33  BV=-1.90
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sAEScene5PLineTable_50Hz =
{
{
    {73,1600,1048, 0, 0, 0},  //TV = 13.74(2 lines)  AV=2.53  SV=4.12  BV=12.15
    {73,1664,1040, 0, 0, 0},  //TV = 13.74(2 lines)  AV=2.53  SV=4.17  BV=12.10
    {109,1216,1032, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.70  BV=11.99
    {109,1280,1048, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.80  BV=11.89
    {109,1344,1064, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.89  BV=11.80
    {109,1472,1032, 0, 0, 0},  //TV = 13.16(3 lines)  AV=2.53  SV=3.98  BV=11.71
    {145,1216,1024, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.69  BV=11.59
    {145,1280,1056, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.81  BV=11.47
    {145,1344,1048, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.87  BV=11.41
    {145,1472,1024, 0, 0, 0},  //TV = 12.75(4 lines)  AV=2.53  SV=3.97  BV=11.31
    {182,1216,1064, 0, 0, 0},  //TV = 12.42(5 lines)  AV=2.53  SV=3.75  BV=11.20
    {182,1344,1024, 0, 0, 0},  //TV = 12.42(5 lines)  AV=2.53  SV=3.84  BV=11.11
    {218,1152,1072, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.68  BV=11.01
    {218,1280,1032, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.78  BV=10.91
    {218,1344,1056, 0, 0, 0},  //TV = 12.16(6 lines)  AV=2.53  SV=3.88  BV=10.81
    {254,1216,1072, 0, 0, 0},  //TV = 11.94(7 lines)  AV=2.53  SV=3.76  BV=10.71
    {290,1152,1064, 0, 0, 0},  //TV = 11.75(8 lines)  AV=2.53  SV=3.67  BV=10.61
    {290,1280,1024, 0, 0, 0},  //TV = 11.75(8 lines)  AV=2.53  SV=3.77  BV=10.51
    {327,1216,1024, 0, 0, 0},  //TV = 11.58(9 lines)  AV=2.53  SV=3.69  BV=10.41
    {327,1280,1048, 0, 0, 0},  //TV = 11.58(9 lines)  AV=2.53  SV=3.80  BV=10.31
    {363,1216,1064, 0, 0, 0},  //TV = 11.43(10 lines)  AV=2.53  SV=3.75  BV=10.21
    {399,1216,1032, 0, 0, 0},  //TV = 11.29(11 lines)  AV=2.53  SV=3.70  BV=10.11
    {435,1152,1080, 0, 0, 0},  //TV = 11.17(12 lines)  AV=2.53  SV=3.69  BV=10.00
    {471,1152,1064, 0, 0, 0},  //TV = 11.05(13 lines)  AV=2.53  SV=3.67  BV=9.91
    {471,1280,1024, 0, 0, 0},  //TV = 11.05(13 lines)  AV=2.53  SV=3.77  BV=9.81
    {508,1216,1072, 0, 0, 0},  //TV = 10.94(14 lines)  AV=2.53  SV=3.76  BV=9.71
    {580,1152,1064, 0, 0, 0},  //TV = 10.75(16 lines)  AV=2.53  SV=3.67  BV=9.61
    {616,1152,1072, 0, 0, 0},  //TV = 10.66(17 lines)  AV=2.53  SV=3.68  BV=9.51
    {653,1216,1024, 0, 0, 0},  //TV = 10.58(18 lines)  AV=2.53  SV=3.69  BV=9.42
    {689,1216,1040, 0, 0, 0},  //TV = 10.50(19 lines)  AV=2.53  SV=3.71  BV=9.32
    {761,1152,1072, 0, 0, 0},  //TV = 10.36(21 lines)  AV=2.53  SV=3.68  BV=9.21
    {797,1216,1032, 0, 0, 0},  //TV = 10.29(22 lines)  AV=2.53  SV=3.70  BV=9.12
    {870,1152,1080, 0, 0, 0},  //TV = 10.17(24 lines)  AV=2.53  SV=3.69  BV=9.00
    {942,1152,1064, 0, 0, 0},  //TV = 10.05(26 lines)  AV=2.53  SV=3.67  BV=8.91
    {979,1216,1040, 0, 0, 0},  //TV = 10.00(27 lines)  AV=2.53  SV=3.71  BV=8.81
    {1051,1216,1032, 0, 0, 0},  //TV = 9.89(29 lines)  AV=2.53  SV=3.70  BV=8.72
    {1160,1152,1072, 0, 0, 0},  //TV = 9.75(32 lines)  AV=2.53  SV=3.68  BV=8.60
    {1232,1152,1072, 0, 0, 0},  //TV = 9.66(34 lines)  AV=2.53  SV=3.68  BV=8.51
    {1305,1216,1024, 0, 0, 0},  //TV = 9.58(36 lines)  AV=2.53  SV=3.69  BV=8.42
    {1413,1152,1080, 0, 0, 0},  //TV = 9.47(39 lines)  AV=2.53  SV=3.69  BV=8.30
    {1522,1152,1072, 0, 0, 0},  //TV = 9.36(42 lines)  AV=2.53  SV=3.68  BV=8.21
    {1631,1152,1072, 0, 0, 0},  //TV = 9.26(45 lines)  AV=2.53  SV=3.68  BV=8.11
    {1739,1152,1080, 0, 0, 0},  //TV = 9.17(48 lines)  AV=2.53  SV=3.69  BV=8.00
    {1884,1152,1064, 0, 0, 0},  //TV = 9.05(52 lines)  AV=2.53  SV=3.67  BV=7.91
    {1993,1152,1080, 0, 0, 0},  //TV = 8.97(55 lines)  AV=2.53  SV=3.69  BV=7.81
    {2138,1152,1080, 0, 0, 0},  //TV = 8.87(59 lines)  AV=2.53  SV=3.69  BV=7.71
    {2319,1152,1064, 0, 0, 0},  //TV = 8.75(64 lines)  AV=2.53  SV=3.67  BV=7.61
    {2464,1152,1072, 0, 0, 0},  //TV = 8.66(68 lines)  AV=2.53  SV=3.68  BV=7.51
    {2645,1152,1072, 0, 0, 0},  //TV = 8.56(73 lines)  AV=2.53  SV=3.68  BV=7.41
    {2826,1152,1080, 0, 0, 0},  //TV = 8.47(78 lines)  AV=2.53  SV=3.69  BV=7.30
    {3043,1152,1072, 0, 0, 0},  //TV = 8.36(84 lines)  AV=2.53  SV=3.68  BV=7.21
    {3261,1152,1072, 0, 0, 0},  //TV = 8.26(90 lines)  AV=2.53  SV=3.68  BV=7.11
    {3514,1152,1072, 0, 0, 0},  //TV = 8.15(97 lines)  AV=2.53  SV=3.68  BV=7.00
    {3732,1152,1072, 0, 0, 0},  //TV = 8.07(103 lines)  AV=2.53  SV=3.68  BV=6.91
    {4021,1152,1072, 0, 0, 0},  //TV = 7.96(111 lines)  AV=2.53  SV=3.68  BV=6.80
    {4347,1152,1064, 0, 0, 0},  //TV = 7.85(120 lines)  AV=2.53  SV=3.67  BV=6.70
    {4601,1152,1072, 0, 0, 0},  //TV = 7.76(127 lines)  AV=2.53  SV=3.68  BV=6.61
    {4927,1152,1072, 0, 0, 0},  //TV = 7.67(136 lines)  AV=2.53  SV=3.68  BV=6.51
    {5289,1152,1072, 0, 0, 0},  //TV = 7.56(146 lines)  AV=2.53  SV=3.68  BV=6.41
    {5688,1152,1072, 0, 0, 0},  //TV = 7.46(157 lines)  AV=2.53  SV=3.68  BV=6.30
    {6123,1152,1064, 0, 0, 0},  //TV = 7.35(169 lines)  AV=2.53  SV=3.67  BV=6.21
    {6557,1152,1064, 0, 0, 0},  //TV = 7.25(181 lines)  AV=2.53  SV=3.67  BV=6.11
    {7028,1152,1064, 0, 0, 0},  //TV = 7.15(194 lines)  AV=2.53  SV=3.67  BV=6.01
    {7499,1152,1072, 0, 0, 0},  //TV = 7.06(207 lines)  AV=2.53  SV=3.68  BV=5.91
    {8115,1152,1064, 0, 0, 0},  //TV = 6.95(224 lines)  AV=2.53  SV=3.67  BV=5.80
    {8694,1152,1064, 0, 0, 0},  //TV = 6.85(240 lines)  AV=2.53  SV=3.67  BV=5.70
    {9310,1152,1064, 0, 0, 0},  //TV = 6.75(257 lines)  AV=2.53  SV=3.67  BV=5.60
    {9962,1152,1064, 0, 0, 0},  //TV = 6.65(275 lines)  AV=2.53  SV=3.67  BV=5.51
    {9999,1216,1072, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=3.76  BV=5.41
    {9999,1344,1040, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=3.86  BV=5.31
    {9999,1408,1064, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=3.96  BV=5.21
    {9999,1536,1048, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.06  BV=5.11
    {9999,1664,1032, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.16  BV=5.01
    {9999,1792,1032, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.26  BV=4.91
    {9999,1920,1032, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.36  BV=4.81
    {9999,2048,1040, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.47  BV=4.70
    {9999,2176,1040, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.55  BV=4.62
    {9999,2304,1056, 0, 0, 0},  //TV = 6.64(276 lines)  AV=2.53  SV=4.66  BV=4.51
    {19997,1216,1072, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=3.76  BV=4.41
    {19997,1344,1040, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=3.86  BV=4.31
    {19997,1472,1024, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=3.97  BV=4.20
    {19997,1536,1048, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=4.06  BV=4.11
    {19997,1664,1032, 0, 0, 0},  //TV = 5.64(552 lines)  AV=2.53  SV=4.16  BV=4.01
    {29995,1152,1072, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=3.68  BV=3.91
    {29995,1280,1032, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=3.78  BV=3.81
    {29995,1344,1048, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=3.87  BV=3.72
    {29995,1472,1040, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=3.99  BV=3.60
    {29995,1536,1056, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=4.07  BV=3.51
    {29995,1664,1048, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=4.18  BV=3.41
    {29995,1792,1040, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=4.27  BV=3.31
    {29995,1920,1040, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=4.37  BV=3.21
    {29995,2048,1048, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=4.48  BV=3.11
    {29995,2176,1056, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=4.58  BV=3.01
    {29995,2304,1064, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=4.67  BV=2.92
    {29995,2560,1032, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=4.78  BV=2.81
    {29995,2688,1056, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=4.88  BV=2.70
    {29995,2944,1032, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=4.98  BV=2.61
    {29995,3072,1056, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.07  BV=2.51
    {29995,3328,1048, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.18  BV=2.41
    {29995,3584,1040, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.27  BV=2.31
    {29995,3840,1040, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.37  BV=2.21
    {29995,4096,1048, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.48  BV=2.11
    {29995,4352,1056, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.58  BV=2.01
    {29995,4608,1072, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.68  BV=1.91
    {29995,5120,1032, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.78  BV=1.81
    {29995,5376,1056, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.88  BV=1.70
    {29995,5888,1032, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=5.98  BV=1.61
    {29995,6144,1056, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.07  BV=1.51
    {29995,6144,1128, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.17  BV=1.42
    {29995,6144,1224, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.29  BV=1.30
    {29995,6144,1304, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.38  BV=1.21
    {29995,6144,1400, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.48  BV=1.11
    {29995,6144,1496, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.58  BV=1.01
    {29995,6144,1608, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.68  BV=0.91
    {29995,6144,1712, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.77  BV=0.82
    {29995,6144,1848, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.88  BV=0.70
    {29995,6144,1984, 0, 0, 0},  //TV = 5.06(828 lines)  AV=2.53  SV=6.98  BV=0.60
    {39993,6144,1584, 0, 0, 0},  //TV = 4.64(1104 lines)  AV=2.53  SV=6.66  BV=0.51
    {39993,6144,1712, 0, 0, 0},  //TV = 4.64(1104 lines)  AV=2.53  SV=6.77  BV=0.40
    {39993,6144,1832, 0, 0, 0},  //TV = 4.64(1104 lines)  AV=2.53  SV=6.87  BV=0.30
    {49991,6144,1568, 0, 0, 0},  //TV = 4.32(1380 lines)  AV=2.53  SV=6.64  BV=0.20
    {49991,6144,1680, 0, 0, 0},  //TV = 4.32(1380 lines)  AV=2.53  SV=6.74  BV=0.11
    {49991,6144,1816, 0, 0, 0},  //TV = 4.32(1380 lines)  AV=2.53  SV=6.86  BV=-0.01
    {59989,6144,1624, 0, 0, 0},  //TV = 4.06(1656 lines)  AV=2.53  SV=6.69  BV=-0.11
    {59989,6144,1728, 0, 0, 0},  //TV = 4.06(1656 lines)  AV=2.53  SV=6.78  BV=-0.20
    {59989,6144,1864, 0, 0, 0},  //TV = 4.06(1656 lines)  AV=2.53  SV=6.89  BV=-0.31
    {59989,6144,2000, 0, 0, 0},  //TV = 4.06(1656 lines)  AV=2.53  SV=6.99  BV=-0.41
    {59989,6144,2136, 0, 0, 0},  //TV = 4.06(1656 lines)  AV=2.53  SV=7.09  BV=-0.50
    {59989,6144,2296, 0, 0, 0},  //TV = 4.06(1656 lines)  AV=2.53  SV=7.19  BV=-0.61
    {59989,6144,2456, 0, 0, 0},  //TV = 4.06(1656 lines)  AV=2.53  SV=7.29  BV=-0.71
    {59989,6144,2632, 0, 0, 0},  //TV = 4.06(1656 lines)  AV=2.53  SV=7.39  BV=-0.81
    {59989,6144,2816, 0, 0, 0},  //TV = 4.06(1656 lines)  AV=2.53  SV=7.49  BV=-0.90
    {59989,6144,3024, 0, 0, 0},  //TV = 4.06(1656 lines)  AV=2.53  SV=7.59  BV=-1.01
    {59989,6144,3240, 0, 0, 0},  //TV = 4.06(1656 lines)  AV=2.53  SV=7.69  BV=-1.11
    {59989,6144,3472, 0, 0, 0},  //TV = 4.06(1656 lines)  AV=2.53  SV=7.79  BV=-1.20
    {59989,6144,3720, 0, 0, 0},  //TV = 4.06(1656 lines)  AV=2.53  SV=7.89  BV=-1.30
    {59989,6144,3984, 0, 0, 0},  //TV = 4.06(1656 lines)  AV=2.53  SV=7.99  BV=-1.40
    {59989,6144,4272, 0, 0, 0},  //TV = 4.06(1656 lines)  AV=2.53  SV=8.09  BV=-1.50
    {59989,6144,4576, 0, 0, 0},  //TV = 4.06(1656 lines)  AV=2.53  SV=8.19  BV=-1.60
    {59989,6144,4904, 0, 0, 0},  //TV = 4.06(1656 lines)  AV=2.53  SV=8.29  BV=-1.70
    {59989,6144,5256, 0, 0, 0},  //TV = 4.06(1656 lines)  AV=2.53  SV=8.39  BV=-1.80
    {59989,6144,5632, 0, 0, 0},  //TV = 4.06(1656 lines)  AV=2.53  SV=8.49  BV=-1.90
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_SceneTable5 =
{
    AETABLE_SCENE_INDEX5,    //eAETableID
    142,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    122,    //i4MaxBV
    -19,    //i4MinBV
    90,    //i4EffectiveMaxBV
    -30,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO SPEED
    sAEScene5PLineTable_60Hz,
    sAEScene5PLineTable_50Hz,
    NULL,
};

static strEvPline sAESceneReservePLineTable =
{
{
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};
static strAETable g_AE_ReserveSceneTable =
{
	AETABLE_SCENE_MAX,    //eAETableID
	0,    //u4TotalIndex
	20,    //u4StrobeTrigerBV
	0,    //i4MaxBV
	0,    //i4MinBV
	90,    //i4EffectiveMaxBV
	0,      //i4EffectiveMinBV
	LIB3A_AE_ISO_SPEED_AUTO, //ISO SPEED
	sAESceneReservePLineTable,
	sAESceneReservePLineTable,
	NULL,
};
static strAESceneMapping g_AEScenePLineMapping = 
{
{
    {LIB3A_AE_SCENE_AUTO, {AETABLE_RPEVIEW_AUTO, AETABLE_CAPTURE_AUTO, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX5}},
    {LIB3A_AE_SCENE_NIGHT, {AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX1, AETABLE_VIDEO_NIGHT, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX1}},
    {LIB3A_AE_SCENE_ACTION, {AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX2, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX2}},
    {LIB3A_AE_SCENE_BEACH, {AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX3, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX3}},
    {LIB3A_AE_SCENE_CANDLELIGHT, {AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX1, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX1}},
    {LIB3A_AE_SCENE_FIREWORKS, {AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX4, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX4}},
    {LIB3A_AE_SCENE_LANDSCAPE, {AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX3, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX3}},
    {LIB3A_AE_SCENE_PORTRAIT, {AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX2, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX2}},
    {LIB3A_AE_SCENE_NIGHT_PORTRAIT, {AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX1, AETABLE_VIDEO_NIGHT, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX1}},
    {LIB3A_AE_SCENE_PARTY, {AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX1, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX1}},
    {LIB3A_AE_SCENE_SNOW, {AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX3, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX3}},
    {LIB3A_AE_SCENE_SPORTS, {AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX2, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX2}},
    {LIB3A_AE_SCENE_STEADYPHOTO, {AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX2, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX2}},
    {LIB3A_AE_SCENE_SUNSET, {AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX3, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX3}},
    {LIB3A_AE_SCENE_THEATRE, {AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX1, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX1}},
    {LIB3A_AE_SCENE_ISO_ANTI_SHAKE, {AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX2, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX2}},
    {LIB3A_AE_SCENE_ISO100, {AETABLE_RPEVIEW_AUTO, AETABLE_CAPTURE_ISO100, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_CAPTURE_ISO100}},
    {LIB3A_AE_SCENE_ISO200, {AETABLE_RPEVIEW_AUTO, AETABLE_CAPTURE_ISO200, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_CAPTURE_ISO200}},
    {LIB3A_AE_SCENE_ISO400, {AETABLE_RPEVIEW_AUTO, AETABLE_CAPTURE_ISO400, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_CAPTURE_ISO400}},
    {LIB3A_AE_SCENE_ISO800, {AETABLE_RPEVIEW_AUTO, AETABLE_CAPTURE_ISO800, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_CAPTURE_ISO800}},
    {LIB3A_AE_SCENE_ISO1600 , {AETABLE_RPEVIEW_AUTO, AETABLE_CAPTURE_ISO1600, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_CAPTURE_ISO1600}},
    {LIB3A_AE_SCENE_UNSUPPORTED, {AETABLE_RPEVIEW_AUTO,AETABLE_CAPTURE_AUTO,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_CAPTURE_AUTO}},    //reserve for future
    {LIB3A_AE_SCENE_UNSUPPORTED, {AETABLE_RPEVIEW_AUTO,AETABLE_CAPTURE_AUTO,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_CAPTURE_AUTO}},    //reserve for future
    {LIB3A_AE_SCENE_UNSUPPORTED, {AETABLE_RPEVIEW_AUTO,AETABLE_CAPTURE_AUTO,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_CAPTURE_AUTO}},    //reserve for future
    {LIB3A_AE_SCENE_UNSUPPORTED, {AETABLE_RPEVIEW_AUTO,AETABLE_CAPTURE_AUTO,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_CAPTURE_AUTO}},    //reserve for future
    {LIB3A_AE_SCENE_UNSUPPORTED, {AETABLE_RPEVIEW_AUTO,AETABLE_CAPTURE_AUTO,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_CAPTURE_AUTO}},    //reserve for future
    {LIB3A_AE_SCENE_UNSUPPORTED, {AETABLE_RPEVIEW_AUTO,AETABLE_CAPTURE_AUTO,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_CAPTURE_AUTO}},    //reserve for future
    {LIB3A_AE_SCENE_UNSUPPORTED, {AETABLE_RPEVIEW_AUTO,AETABLE_CAPTURE_AUTO,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_CAPTURE_AUTO}},    //reserve for future
    {LIB3A_AE_SCENE_UNSUPPORTED, {AETABLE_RPEVIEW_AUTO,AETABLE_CAPTURE_AUTO,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_CAPTURE_AUTO}},    //reserve for future
    {LIB3A_AE_SCENE_UNSUPPORTED, {AETABLE_RPEVIEW_AUTO,AETABLE_CAPTURE_AUTO,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_CAPTURE_AUTO}},    //reserve for future
},
};

static strAEPLineTable g_strAEPlineTable =
{
{
// PLINE Table
g_AE_PreviewAutoTable,
g_AE_CaptureAutoTable,
g_AE_VideoAutoTable,
g_AE_Video1AutoTable,
g_AE_Video2AutoTable,
g_AE_Custom1AutoTable,
g_AE_Custom2AutoTable,
g_AE_Custom3AutoTable,
g_AE_Custom4AutoTable,
g_AE_Custom5AutoTable,
g_AE_VideoNightTable,
g_AE_CaptureISO100Table,
g_AE_CaptureISO200Table,
g_AE_CaptureISO400Table,
g_AE_CaptureISO800Table,
g_AE_CaptureISO1600Table,
g_AE_StrobeTable,
g_AE_SceneTable1,
g_AE_SceneTable2,
g_AE_SceneTable3,
g_AE_SceneTable4,
g_AE_SceneTable5,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
},
};

static strAEPLineNumInfo g_strAEPreviewAutoPLineInfo =
{
    AETABLE_RPEVIEW_AUTO,
    90,
    -10,
    {
        {1,10000,120,1195,1195},
        {2,120,120,1195,2048},
        {3,120,60,2048,2048},
        {4,60,60,2048,3072},
        {5,60,30,3072,3072},
        {6,30,30,3072,16384},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAECaptureAutoPLineInfo =
{
    AETABLE_CAPTURE_AUTO,
    90,
    -10,
    {
        {1,10000,120,1195,1195},
        {2,120,120,1195,2048},
        {3,120,60,2048,2048},
        {4,60,60,2048,3072},
        {5,60,30,3072,3072},
        {6,30,30,3072,16384},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAEVideoAutoPLineInfo =
{
    AETABLE_VIDEO_AUTO,
    90,
    -10,
    {
        {1,10000,120,1195,1195},
        {2,120,120,1195,2048},
        {3,120,60,2048,2048},
        {4,60,60,2048,3072},
        {5,60,30,3072,3072},
        {6,30,30,3072,16384},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAEVideo1AutoPLineInfo =
{
    AETABLE_VIDEO1_AUTO,
    90,
    -10,
    {
        {1,10000,120,1195,1195},
        {2,120,120,1195,2048},
        {3,120,60,2048,2048},
        {4,60,60,2048,3072},
        {5,60,30,3072,3072},
        {6,30,30,3072,16384},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAEVideo2AutoPLineInfo =
{
    AETABLE_VIDEO2_AUTO,
    90,
    -10,
    {
        {1,10000,120,1195,1195},
        {2,120,120,1195,2048},
        {3,120,60,2048,2048},
        {4,60,60,2048,3072},
        {5,60,30,3072,3072},
        {6,30,30,3072,16384},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAECustom1AutoPLineInfo =
{
    AETABLE_CUSTOM1_AUTO,
    90,
    -10,
    {
        {1,10000,120,1195,1195},
        {2,120,120,1195,2048},
        {3,120,60,2048,2048},
        {4,60,60,2048,3072},
        {5,60,30,3072,3072},
        {6,30,30,3072,16384},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAECustom2AutoPLineInfo =
{
    AETABLE_CUSTOM2_AUTO,
    90,
    -30,
    {
        {1,10000,60,1195,1195},
        {2,60,60,1195,3072},
        {3,60,30,3072,3072},
        {4,30,30,3072,10240},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAECustom3AutoPLineInfo =
{
    AETABLE_CUSTOM3_AUTO,
    90,
    -30,
    {
        {1,10000,60,1195,1195},
        {2,60,60,1195,3072},
        {3,60,30,3072,3072},
        {4,30,30,3072,10240},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAECustom4AutoPLineInfo =
{
    AETABLE_CUSTOM4_AUTO,
    90,
    -30,
    {
        {1,10000,60,1195,1195},
        {2,60,60,1195,3072},
        {3,60,30,3072,3072},
        {4,30,30,3072,10240},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAECustom5AutoPLineInfo =
{
    AETABLE_CUSTOM5_AUTO,
    90,
    -30,
    {
        {1,10000,60,1195,1195},
        {2,60,60,1195,3072},
        {3,60,30,3072,3072},
        {4,30,30,3072,10240},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAEVideoNightPLineInfo =
{
    AETABLE_VIDEO_NIGHT,
    90,
    -30,
    {
        {1,10000,30,1195,1195},
        {2,30,30,1195,10240},
        {3,30,15,10240,10240},
        {4,15,15,10240,35200},
        {5,15,10,35200,35200},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAECaptureISO100PLineInfo =
{
    AETABLE_CAPTURE_ISO100,
    90,
    -30,
    {
        {1,10000,5,1230,1230},
        {2,0,0,0,0},
        {3,0,0,0,0},
        {4,0,0,0,0},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAECaptureISO200PLineInfo =
{
    AETABLE_CAPTURE_ISO200,
    90,
    -30,
    {
        {1,10000,2000,1195,1195},
        {2,2000,2000,1195,2460},
        {3,2000,5,2460,2460},
        {4,0,0,0,0},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAECaptureISO400PLineInfo =
{
    AETABLE_CAPTURE_ISO400,
    90,
    -30,
    {
        {1,10000,2000,1195,1195},
        {2,2000,2000,1195,4920},
        {3,2000,5,4920,4920},
        {4,0,0,0,0},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAECaptureISO800PLineInfo =
{
    AETABLE_CAPTURE_ISO800,
    90,
    -30,
    {
        {1,10000,2000,1195,1195},
        {2,2000,2000,1195,9840},
        {3,2000,5,9840,9840},
        {4,0,0,0,0},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAECaptureISO1600PLineInfo =
{
    AETABLE_CAPTURE_ISO1600,
    90,
    -30,
    {
        {1,10000,2000,1195,1195},
        {2,2000,2000,1195,19680},
        {3,2000,5,19680,19680},
        {4,0,0,0,0},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAEStrobePLineInfo =
{
    AETABLE_STROBE,
    90,
    -30,
    {
        {1,10000,30,1195,1195},
        {2,30,30,1195,9216},
        {3,30,15,9216,9216},
        {4,15,15,9216,30720},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAEScene1PLineInfo =
{
    AETABLE_SCENE_INDEX1,
    90,
    -50,
    {
        {1,10000,30,1195,1195},
        {2,30,30,1195,9216},
        {3,30,15,9216,9216},
        {4,15,15,9216,30720},
        {5,15,5,30720,30720},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAEScene2PLineInfo =
{
    AETABLE_SCENE_INDEX2,
    90,
    -30,
    {
        {1,10000,100,1195,1195},
        {2,100,100,1195,4096},
        {3,100,30,4096,4096},
        {4,30,30,4096,16384},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAEScene3PLineInfo =
{
    AETABLE_SCENE_INDEX3,
    90,
    -30,
    {
        {1,10000,30,1195,1195},
        {2,30,30,1195,2048},
        {3,30,15,2048,2048},
        {4,15,15,2048,4096},
        {5,15,10,4096,4096},
        {6,10,10,4096,9216},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAEScene4PLineInfo =
{
    AETABLE_SCENE_INDEX4,
    90,
    -30,
    {
        {1,5,5,1706,1706},
        {2,0,0,0,0},
        {3,0,0,0,0},
        {4,0,0,0,0},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAEScene5PLineInfo =
{
    AETABLE_SCENE_INDEX5,
    90,
    -30,
    {
        {1,10000,30,1195,1195},
        {2,30,30,1195,9216},
        {3,30,15,9216,9216},
        {4,15,15,9216,30720},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};





























static strAEPLineNumInfo g_strAENoScenePLineInfo =
{
    AETABLE_SCENE_MAX,
    90,
    0,
    {
        {1,0,0,0,0},
        {2,0,0,0,0},
        {3,0,0,0,0},
        {4,0,0,0,0},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};
static strAEPLineInfomation g_strAEPlineInfo =
{
MTRUE,   // FALSE mean the sampling
{
// PLINE Info
g_strAEPreviewAutoPLineInfo,
g_strAECaptureAutoPLineInfo,
g_strAEVideoAutoPLineInfo,
g_strAEVideo1AutoPLineInfo,
g_strAEVideo2AutoPLineInfo,
g_strAECustom1AutoPLineInfo,
g_strAECustom2AutoPLineInfo,
g_strAECustom3AutoPLineInfo,
g_strAECustom4AutoPLineInfo,
g_strAECustom5AutoPLineInfo,
g_strAEVideoNightPLineInfo,
g_strAECaptureISO100PLineInfo,
g_strAECaptureISO200PLineInfo,
g_strAECaptureISO400PLineInfo,
g_strAECaptureISO800PLineInfo,
g_strAECaptureISO1600PLineInfo,
g_strAEStrobePLineInfo,
g_strAEScene1PLineInfo,
g_strAEScene2PLineInfo,
g_strAEScene3PLineInfo,
g_strAEScene4PLineInfo,
g_strAEScene5PLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
},
};

static strAEPLineGainList g_strAEGainList =
{
81,
{
{1024,100},
{1088,100},
{1152,100},
{1216,100},
{1280,100},
{1344,100},
{1408,100},
{1472,100},
{1536,100},
{1600,100},
{1664,100},
{1728,100},
{1792,100},
{1856,100},
{1920,100},
{1984,100},
{2048,100},
{2176,100},
{2304,100},
{2432,100},
{2560,100},
{2688,100},
{2816,100},
{2944,100},
{3072,100},
{3200,100},
{3328,100},
{3456,100},
{3584,100},
{3712,100},
{3840,100},
{3968,100},
{4096,100},
{4352,100},
{4608,100},
{4864,100},
{5120,100},
{5376,100},
{5632,100},
{5888,100},
{6144,100},
{6400,100},
{6656,100},
{6912,100},
{7168,100},
{7424,100},
{7680,100},
{7936,100},
{8192,100},
{8704,100},
{9216,100},
{9728,100},
{10240,100},
{10752,100},
{11264,100},
{11776,100},
{12288,100},
{12800,100},
{13312,100},
{13824,100},
{14336,100},
{14848,100},
{15360,100},
{15872,100},
{16384,100},
{17408,100},
{18432,100},
{19456,100},
{20480,100},
{21504,100},
{22528,100},
{23552,100},
{24576,100},
{25600,100},
{26624,100},
{27648,100},
{28672,100},
{29696,100},
{30720,100},
{31744,100},
{32768,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
}
};

static AE_PLINETABLE_T g_PlineTableMapping =
{
g_AEScenePLineMapping,
g_strAEPlineTable,
g_strAEPlineInfo,
g_strAEGainList
};
#endif


#if 0 //Save the P-line info to file for debug
MinGain,1024 
MaxGain,6144 
MiniISOGain,34 
GainStepUnitInTotalRange,64 
PreviewExposureLineUnit,36225 
PreviewMaxFrameRate,25 
VideoExposureLineUnit,36225 
VideoMaxFrameRate,25 
VideoToPreviewSensitivityRatio,1024 
CaptureExposureLineUnit,36225 
CaptureMaxFrameRate,25 
CaptureToPreviewSensitivityRatio,1024 
Video1ExposureLineUnit,36225 
Video1MaxFrameRate,25 
Video1ToPreviewSensitivityRatio,1024 
Video2ExposureLineUnit,36225 
Video2MaxFrameRate,25 
Video2ToPreviewSensitivityRatio,1024 
Custom1ExposureLineUnit,36225 
Custom1MaxFrameRate,25 
Custom1ToPreviewSensitivityRatio,1024 
Custom2ExposureLineUnit,36225 
Custom2MaxFrameRate,25 
Custom2ToPreviewSensitivityRatio,1024 
Custom3ExposureLineUnit,36225 
Custom3MaxFrameRate,25 
Custom3ToPreviewSensitivityRatio,1024 
Custom4ExposureLineUnit,36225 
Custom4MaxFrameRate,25 
Custom4ToPreviewSensitivityRatio,1024 
Custom5ExposureLineUnit,36225 
Custom5MaxFrameRate,25 
Custom5ToPreviewSensitivityRatio,1024 
FocusLength,30 
Fno,24 

// Preview table -- Use preview sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_RPEVIEW_AUTO
90,-10
1,10000,120,1195,1195
2,120,120,1195,2048
3,120,60,2048,2048
4,60,60,2048,3072
5,60,30,3072,3072
6,30,30,3072,16384
AETABLE_END

// Capture table -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CAPTURE_AUTO
90,-10
1,10000,120,1195,1195
2,120,120,1195,2048
3,120,60,2048,2048
4,60,60,2048,3072
5,60,30,3072,3072
6,30,30,3072,16384
AETABLE_END

// Video table -- Use video sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_VIDEO_AUTO
90,-10
1,10000,120,1195,1195
2,120,120,1195,2048
3,120,60,2048,2048
4,60,60,2048,3072
5,60,30,3072,3072
6,30,30,3072,16384
AETABLE_END

// Video1 table -- Use Video1 sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_VIDEO1_AUTO
90,-10
1,10000,120,1195,1195
2,120,120,1195,2048
3,120,60,2048,2048
4,60,60,2048,3072
5,60,30,3072,3072
6,30,30,3072,16384
AETABLE_END

// Video2 table -- Use Video2 sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_VIDEO2_AUTO
90,-10
1,10000,120,1195,1195
2,120,120,1195,2048
3,120,60,2048,2048
4,60,60,2048,3072
5,60,30,3072,3072
6,30,30,3072,16384
AETABLE_END

// Custom1 table -- Use Custom1 sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CUSTOM1_AUTO
90,-10
1,10000,120,1195,1195
2,120,120,1195,2048
3,120,60,2048,2048
4,60,60,2048,3072
5,60,30,3072,3072
6,30,30,3072,16384
AETABLE_END

// Custom2 table -- Use Custom2 sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CUSTOM2_AUTO
90,-30
1,10000,60,1195,1195
2,60,60,1195,3072
3,60,30,3072,3072
4,30,30,3072,10240
AETABLE_END

// Custom3 table -- Use Custom3 sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CUSTOM3_AUTO
90,-30
1,10000,60,1195,1195
2,60,60,1195,3072
3,60,30,3072,3072
4,30,30,3072,10240
AETABLE_END

// Custom4 table -- Use Custom4 sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CUSTOM4_AUTO
90,-30
1,10000,60,1195,1195
2,60,60,1195,3072
3,60,30,3072,3072
4,30,30,3072,10240
AETABLE_END

// Custom5 table -- Use Custom5 sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CUSTOM5_AUTO
90,-30
1,10000,60,1195,1195
2,60,60,1195,3072
3,60,30,3072,3072
4,30,30,3072,10240
AETABLE_END

// Video Night table -- Use video sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_VIDEO_NIGHT
90,-30
1,10000,30,1195,1195
2,30,30,1195,10240
3,30,15,10240,10240
4,15,15,10240,35200
5,15,10,35200,35200
AETABLE_END

// Capture ISO100 -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CAPTURE_ISO100
90,-30
1,10000,5,1230,1230
AETABLE_END

// Capture ISO200 -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CAPTURE_ISO200
90,-30
1,10000,2000,1195,1195
2,2000,2000,1195,2460
3,2000,5,2460,2460
AETABLE_END

// Capture ISO400 -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CAPTURE_ISO400
90,-30
1,10000,2000,1195,1195
2,2000,2000,1195,4920
3,2000,5,4920,4920
AETABLE_END

// Capture ISO800 -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CAPTURE_ISO800
90,-30
1,10000,2000,1195,1195
2,2000,2000,1195,9840
3,2000,5,9840,9840
AETABLE_END

// Capture ISO1600 -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CAPTURE_ISO1600
90,-30
1,10000,2000,1195,1195
2,2000,2000,1195,19680
3,2000,5,19680,19680
AETABLE_END

// Strobe table -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_STROBE
90,-30
1,10000,30,1195,1195
2,30,30,1195,9216
3,30,15,9216,9216
4,15,15,9216,30720
AETABLE_END


//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_SCENE_INDEX1
90,-50
1,10000,30,1195,1195
2,30,30,1195,9216
3,30,15,9216,9216
4,15,15,9216,30720
5,15,5,30720,30720
AETABLE_END


//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_SCENE_INDEX2
90,-30
1,10000,100,1195,1195
2,100,100,1195,4096
3,100,30,4096,4096
4,30,30,4096,16384
AETABLE_END

// Table1 PLine -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_SCENE_INDEX3
90,-30
1,10000,30,1195,1195
2,30,30,1195,2048
3,30,15,2048,2048
4,15,15,2048,4096
5,15,10,4096,4096
6,10,10,4096,9216
AETABLE_END

// Table2 PLine -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_SCENE_INDEX4
90,-30
1,5,5,1706,1706
AETABLE_END

// Table3 PLine -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_SCENE_INDEX5
90,-30
1,10000,30,1195,1195
2,30,30,1195,9216
3,30,15,9216,9216
4,15,15,9216,30720
AETABLE_END

// Table4 PLine -- Use capture sensor setting

// Table5 PLine -- Use capture sensor setting

// Table6 PLine -- Use capture sensor setting

// Table7 PLine -- Use capture sensor setting

// Table8 PLine -- Use capture sensor setting

// Table9 PLine -- Use capture sensor setting

// Table10 PLine -- Use capture sensor setting

// Table11 PLine -- Use capture sensor setting

// Table12 PLine -- Use capture sensor setting

// Table13 PLine -- Use capture sensor setting

// Table14 PLine -- Use capture sensor setting

// Table15 PLine -- Use capture sensor setting

// Table16 PLine -- Use capture sensor setting

// Table17 PLine -- Use capture sensor setting

// Table18 PLine -- Use capture sensor setting

// Table19 PLine -- Use capture sensor setting

// Table20 PLine -- Use capture sensor setting

// Table21 PLine -- Use capture sensor setting

// Table22 PLine -- Use capture sensor setting

// Table23 PLine -- Use capture sensor setting

// Table24 PLine -- Use capture sensor setting

// Table25 PLine -- Use capture sensor setting

// Table26 PLine -- Use capture sensor setting

// Table27 PLine -- Use capture sensor setting

// Table28 PLine -- Use capture sensor setting

// Table29 PLine -- Use capture sensor setting

// Table30 PLine -- Use capture sensor setting

// Table31 PLine -- Use capture sensor setting

AE_SCENE_AUTO,AETABLE_RPEVIEW_AUTO,AETABLE_CAPTURE_AUTO,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_SCENE_INDEX5
AE_SCENE_NIGHT,AETABLE_RPEVIEW_AUTO,AETABLE_SCENE_INDEX1,AETABLE_VIDEO_NIGHT,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_SCENE_INDEX1
AE_SCENE_ACTION,AETABLE_RPEVIEW_AUTO,AETABLE_SCENE_INDEX2,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_SCENE_INDEX2
AE_SCENE_BEACH,AETABLE_RPEVIEW_AUTO,AETABLE_SCENE_INDEX3,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_SCENE_INDEX3
AE_SCENE_CANDLELIGHT,AETABLE_RPEVIEW_AUTO,AETABLE_SCENE_INDEX1,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_SCENE_INDEX1
AE_SCENE_FIREWORKS,AETABLE_RPEVIEW_AUTO,AETABLE_SCENE_INDEX4,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_SCENE_INDEX4
AE_SCENE_LANDSCAPE,AETABLE_RPEVIEW_AUTO,AETABLE_SCENE_INDEX3,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_SCENE_INDEX3
AE_SCENE_PORTRAIT,AETABLE_RPEVIEW_AUTO,AETABLE_SCENE_INDEX2,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_SCENE_INDEX2
AE_SCENE_NIGHT_PORTRAIT,AETABLE_RPEVIEW_AUTO,AETABLE_SCENE_INDEX1,AETABLE_VIDEO_NIGHT,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_SCENE_INDEX1
AE_SCENE_PARTY,AETABLE_RPEVIEW_AUTO,AETABLE_SCENE_INDEX1,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_SCENE_INDEX1
AE_SCENE_SNOW,AETABLE_RPEVIEW_AUTO,AETABLE_SCENE_INDEX3,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_SCENE_INDEX3
AE_SCENE_SPORTS,AETABLE_RPEVIEW_AUTO,AETABLE_SCENE_INDEX2,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_SCENE_INDEX2
AE_SCENE_STEADYPHOTO,AETABLE_RPEVIEW_AUTO,AETABLE_SCENE_INDEX2,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_SCENE_INDEX2
AE_SCENE_SUNSET,AETABLE_RPEVIEW_AUTO,AETABLE_SCENE_INDEX3,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_SCENE_INDEX3
AE_SCENE_THEATRE,AETABLE_RPEVIEW_AUTO,AETABLE_SCENE_INDEX1,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_SCENE_INDEX1
AE_SCENE_ISO_ANTI_SHAKE,AETABLE_RPEVIEW_AUTO,AETABLE_SCENE_INDEX2,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_SCENE_INDEX2
AE_SCENE_ISO100,AETABLE_RPEVIEW_AUTO,AETABLE_CAPTURE_ISO100,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_CAPTURE_ISO100
AE_SCENE_ISO200,AETABLE_RPEVIEW_AUTO,AETABLE_CAPTURE_ISO200,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_CAPTURE_ISO200
AE_SCENE_ISO400,AETABLE_RPEVIEW_AUTO,AETABLE_CAPTURE_ISO400,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_CAPTURE_ISO400
AE_SCENE_ISO800,AETABLE_RPEVIEW_AUTO,AETABLE_CAPTURE_ISO800,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_CAPTURE_ISO800
AE_SCENE_ISO1600 ,AETABLE_RPEVIEW_AUTO,AETABLE_CAPTURE_ISO1600,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_CAPTURE_ISO1600
,,,,,,,,,,,
,,,,,,,,,,,
,,,,,,,,,,,
,,,,,,,,,,,
,,,,,,,,,,,
,,,,,,,,,,,
,,,,,,,,,,,
,,,,,,,,,,,
,,,,,,,,,,,
#endif
