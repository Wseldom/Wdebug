/******************************************************************************
  > File Name		: WSD_debug_print.h
  > Author			: dong
  > Mail			: 3235459847@qq.com
  > Created Time	: 2020年04月02日 星期四 11时51分42秒
******************************************************************************/

#ifndef __WSD_DEBUG_PRINT_H
#define __WSD_DEBUG_PRINT_H

#include "WSD_Terminal_ctrl.h"
#include <stdio.h>

	#if WSD_DEBUG_FLAG == 0
	
		#define		WSD_DEBUG_INFO(info,...)
	
	#elif WSD_DEBUG_FLAG == 1
	
		#define		WSD_DEBUG_INFO(info,...)		printf(Trmnl_RST Trmnl_SET_HL Trmnl_SET_FORE(Trmnl_color_yellow) "[date:%s][time:%s][file:%s][func:%s][line:%d]" Trmnl_SET_FORE(Trmnl_color_green) " info--->[" info "]\r\n" Trmnl_RST, __DATE__, __TIME__, __FILE__, __func__, __LINE__, ##__VA_ARGS__);
	
	#endif


#endif

