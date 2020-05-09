/******************************************************************************
  > File Name		: WSD_debug_print_up.h
  > Author			: dong
  > Mail			: 3235459847@qq.com
  > Created Time	: 2020年04月28日 星期二 10时58分27秒
******************************************************************************/

#ifndef __WSD_DEBUG_PRINT_UP_H
#define __WSD_DEBUG_PRINT_UP_H

#include "WTrmnlCtrl.h"
#include <stdio.h>

#if WSD_DEBUG_UP_FLAG == 0

	#define		Wdebug_INFO_UP(LEVEL,info,...)

	#define		Wdebug_BUF_UP(LEVEL,FORMAT,BUF,LENGTH, INFO, ...)

#elif WSD_DEBUG_UP_FLAG == 1

	#define		Wdebug_INFO_UP_HEAD_ATTR			 	Trmnl_SET_FORE(Trmnl_color_yellow)
	#define		Wdebug_INFO_UP_ATTR				Trmnl_SET_FORE(Trmnl_color_green)

	#define		Wdebug_INFO_UP(LEVEL,info,...)		if (LEVEL <= WSD_DEBUG_UP_LEVEL) {\
					printf(Trmnl_RST Wdebug_INFO_UP_HEAD_ATTR "[文件:%s][时间:%s][日期:%s][函数:%s][行:%d]["Wdebug_INFO_UP_ATTR  info Trmnl_SET_FORE(Trmnl_color_yellow) "]\r\n" Trmnl_RST, __FILE__, __TIME__, __DATE__, __func__, __LINE__, ##__VA_ARGS__);\
				}
	#define		Wdebug_BUF_UP(LEVEL,FORMAT,BUF,LENGTH,INFO,...)		if (LEVEL <= WSD_DEBUG_UP_LEVEL) {\
					printf(Trmnl_RST Wdebug_INFO_UP_HEAD_ATTR "[文件:%s][时间:%s][日期:%s][函数:%s][行:%d] {" Wdebug_INFO_UP_ATTR INFO "\r\n",__FILE__, __TIME__, __DATE__, __func__, __LINE__, ##__VA_ARGS__); \
					int WSD_DEBUG_BUF_LEN; \
					for (WSD_DEBUG_BUF_LEN = 0; WSD_DEBUG_BUF_LEN < LENGTH; ++WSD_DEBUG_BUF_LEN) { \
						printf (FORMAT "  ", BUF[WSD_DEBUG_BUF_LEN]); \
					}\
					printf(Trmnl_SET_FORE(Trmnl_color_yellow) "\r\n}\r\n" Trmnl_RST);\
				}

#elif WSD_DEBUG_UP_FLAG == 2

	#define		Wdebug_INFO_UP_HEAD_ATTR			 	Trmnl_SET_FORE(Trmnl_color_yellow)
	#define		Wdebug_INFO_UP_ATTR				Trmnl_SET_FORE(Trmnl_color_green)

	#define		Wdebug_INFO_UP(LEVEL,info,...)		if (LEVEL <= WSD_DEBUG_UP_LEVEL) {\
					printf(Trmnl_RST Wdebug_INFO_UP_HEAD_ATTR "[文件:%s][函数:%s][行:%d][" Wdebug_INFO_UP_ATTR  info Trmnl_SET_FORE(Trmnl_color_yellow) "]\r\n" Trmnl_RST, __FILE__, __func__, __LINE__, ##__VA_ARGS__);\
				}

	#define		Wdebug_BUF_UP(LEVEL,FORMAT,BUF,LENGTH,INFO,...)		if (LEVEL <= WSD_DEBUG_UP_LEVEL) {\
					printf(Trmnl_RST Wdebug_INFO_UP_HEAD_ATTR "[文件:%s][函数:%s][行:%d] {" Wdebug_INFO_UP_ATTR INFO "\r\n",__FILE__, __func__, __LINE__ , ##__VA_ARGS__);\
					int WSD_DEBUG_BUF_LEN; \
					for (WSD_DEBUG_BUF_LEN = 0; WSD_DEBUG_BUF_LEN < LENGTH; ++WSD_DEBUG_BUF_LEN) {\
							printf(FORMAT "  ", BUF[WSD_DEBUG_BUF_LEN]); \
					}\
					printf(Trmnl_SET_FORE(Trmnl_color_yellow) "\r\n}\r\n" Trmnl_RST);\
				}

#endif

#endif

