/******************************************************************************
  > File Name		: Wprint.h
  > Author			: dong
  > Mail			: 3235459847@qq.com
  > Created Time	: 2020年04月02日 星期四 11时51分42秒
******************************************************************************/

#ifndef __WPRINT_H
#define __WPRINT_H

#include "WTrmnlCtrl.h"
#include <stdio.h>

	#if WDEBUG_FLAG == 0
	
		#define		WDEBUG_INFO(info,...)

		#define		WDEBUG_BUF(FORMAT,BUF,LENGTH, INFO, ...)
	
	#elif WDEBUG_FLAG == 1

		#define		WDEBUG_HEAD_ATTR			 	Trmnl_SET_FORE(Trmnl_color_yellow)
		#define		WDEBUG_INFO_ATTR				Trmnl_SET_FORE(Trmnl_color_green)
	
		#define		WDEBUG_INFO(info,...)		printf(Trmnl_RST WDEBUG_HEAD_ATTR "[文件:%s][时间:%s][日期:%s][函数:%s][行:%d]["WDEBUG_INFO_ATTR  info Trmnl_SET_FORE(Trmnl_color_yellow) "]\r\n" Trmnl_RST, __FILE__, __TIME__, __DATE__, __func__, __LINE__, ##__VA_ARGS__);
		#define		WDEBUG_BUF(FORMAT,BUF,LENGTH,INFO,...)		printf(Trmnl_RST WDEBUG_HEAD_ATTR "[文件:%s][时间:%s][日期:%s][函数:%s][行:%d] {" WDEBUG_INFO_ATTR INFO "\r\n",__FILE__, __TIME__, __DATE__, __func__, __LINE__, ##__VA_ARGS__); \
			{\
				int WDEBUG_BUF_LEN; \
				for (WDEBUG_BUF_LEN = 0; WDEBUG_BUF_LEN < LENGTH; ++WDEBUG_BUF_LEN) { \
					printf (FORMAT "  ", BUF[WDEBUG_BUF_LEN]); \
				}\
				printf(Trmnl_SET_FORE(Trmnl_color_yellow) "\r\n}\r\n" Trmnl_RST);\
			}

	#elif WDEBUG_FLAG == 2

		#define		WDEBUG_HEAD_ATTR			 	Trmnl_SET_FORE(Trmnl_color_yellow)
		#define		WDEBUG_INFO_ATTR				Trmnl_SET_FORE(Trmnl_color_green)
	
		#define		WDEBUG_INFO(info,...)		printf(Trmnl_RST WDEBUG_HEAD_ATTR "[文件:%s][函数:%s][行:%d][" WDEBUG_INFO_ATTR  info Trmnl_SET_FORE(Trmnl_color_yellow) "]\r\n" Trmnl_RST, __FILE__, __func__, __LINE__, ##__VA_ARGS__);

		#define		WDEBUG_BUF(FORMAT,BUF,LENGTH,INFO,...)		printf(Trmnl_RST WDEBUG_HEAD_ATTR "[文件:%s][函数:%s][行:%d] {" WDEBUG_INFO_ATTR INFO "\r\n",__FILE__, __func__, __LINE__ , ##__VA_ARGS__);\
			{\
				int WDEBUG_BUF_LEN; \
				for (WDEBUG_BUF_LEN = 0; WDEBUG_BUF_LEN < LENGTH; ++WDEBUG_BUF_LEN) {\
						printf(FORMAT "  ", BUF[WDEBUG_BUF_LEN]); \
				}\
				printf(Trmnl_SET_FORE(Trmnl_color_yellow) "\r\n}\r\n" Trmnl_RST);\
			}
	
	#endif


#endif

