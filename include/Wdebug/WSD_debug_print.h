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

		#define		WSD_DEBUG_BUF(FORMAT,BUF,LENGTH, INFO, ...)
	
	#elif WSD_DEBUG_FLAG == 1

		#define		WSD_DEBUG_HEAD_ATTR			 	Trmnl_SET_FORE(Trmnl_color_yellow)
		#define		WSD_DEBUG_INFO_ATTR				Trmnl_SET_FORE(Trmnl_color_green)
	
		#define		WSD_DEBUG_INFO(info,...)		printf(Trmnl_RST WSD_DEBUG_HEAD_ATTR "[文件:%s][时间:%s][日期:%s][函数:%s][行:%d]["WSD_DEBUG_INFO_ATTR  info Trmnl_SET_FORE(Trmnl_color_yellow) "]\r\n" Trmnl_RST, __FILE__, __TIME__, __DATE__, __func__, __LINE__, ##__VA_ARGS__);
		#define		WSD_DEBUG_BUF(FORMAT,BUF,LENGTH,INFO,...)		printf(Trmnl_RST WSD_DEBUG_HEAD_ATTR "[文件:%s][时间:%s][日期:%s][函数:%s][行:%d] {" WSD_DEBUG_INFO_ATTR INFO "\r\n",__FILE__, __TIME__, __DATE__, __func__, __LINE__, ##__VA_ARGS__); \
			{\
				int WSD_DEBUG_BUF_LEN; \
				for (WSD_DEBUG_BUF_LEN = 0; WSD_DEBUG_BUF_LEN < LENGTH; ++WSD_DEBUG_BUF_LEN) { \
					printf (FORMAT "  ", BUF[WSD_DEBUG_BUF_LEN]); \
				}\
				printf(Trmnl_SET_FORE(Trmnl_color_yellow) "\r\n}\r\n" Trmnl_RST);\
			}

	#elif WSD_DEBUG_FLAG == 2

		#define		WSD_DEBUG_HEAD_ATTR			 	Trmnl_SET_FORE(Trmnl_color_yellow)
		#define		WSD_DEBUG_INFO_ATTR				Trmnl_SET_FORE(Trmnl_color_green)
	
		#define		WSD_DEBUG_INFO(info,...)		printf(Trmnl_RST WSD_DEBUG_HEAD_ATTR "[文件:%s][函数:%s][行:%d][" WSD_DEBUG_INFO_ATTR  info Trmnl_SET_FORE(Trmnl_color_yellow) "]\r\n" Trmnl_RST, __FILE__, __func__, __LINE__, ##__VA_ARGS__);

		#define		WSD_DEBUG_BUF(FORMAT,BUF,LENGTH,INFO,...)		printf(Trmnl_RST WSD_DEBUG_HEAD_ATTR "[文件:%s][函数:%s][行:%d] {" WSD_DEBUG_INFO_ATTR INFO "\r\n",__FILE__, __func__, __LINE__ , ##__VA_ARGS__);\
			{\
				int WSD_DEBUG_BUF_LEN; \
				for (WSD_DEBUG_BUF_LEN = 0; WSD_DEBUG_BUF_LEN < LENGTH; ++WSD_DEBUG_BUF_LEN) {\
						printf(FORMAT "  ", BUF[WSD_DEBUG_BUF_LEN]); \
				}\
				printf(Trmnl_SET_FORE(Trmnl_color_yellow) "\r\n}\r\n" Trmnl_RST);\
			}
	
	#endif


#endif

