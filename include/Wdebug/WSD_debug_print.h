/******************************************************************************
  > File Name		: WSD_debug_print.h
  > Author			: dong
  > Mail			: 3235459847@qq.com
  > Created Time	: 2020年04月02日 星期四 11时51分42秒
******************************************************************************/

#ifndef __WSD_DEBUG_PRINT_H
#define __WSD_DEBUG_PRINT_H

#include "WTrmnlCtrl.h"
#include <stdio.h>

	#if WSD_DEBUG_FLAG == 0
	
		#define		WSD_DEBUG_INFO(info,...)
	
	#elif WSD_DEBUG_FLAG == 1

		#define		WSD_DEBUG_HEAD_ATTR			 	Trmnl_SET_HL Trmnl_SET_FORE(Trmnl_color_yellow)
		#define		WSD_DEBUG_INFO_ATTR				Trmnl_SET_FORE(Trmnl_color_green)
	
		#define		WSD_DEBUG_INFO(info,...)		printf(Trmnl_RST WSD_DEBUG_HEAD_ATTR "[文件:%s][时间:%s][日期:%s][函数:%s][行:%d]" "调试信息--->[" WSD_DEBUG_INFO_ATTR  info Trmnl_SET_FORE(Trmnl_color_yellow) "]\r\n" Trmnl_RST, __FILE__, __TIME__, __DATE__, __func__, __LINE__, ##__VA_ARGS__);
	
	#endif


#endif

