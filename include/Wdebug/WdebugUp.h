/******************************************************************************
  > File Name		: WdebugUp.h
  > Author			: dong
  > Mail			: 3235459847@qq.com
  > Created Time	: 2020年04月28日 星期二 10时58分27秒
******************************************************************************/

#ifndef __WDEBUG_PRINT_UP_H
#define __WDEBUG_PRINT_UP_H

#include "WTrmnlCtrl.h"
#include <stdio.h>

#ifndef WDEBUG_UP_PRINT
#define		WDEBUG_UP_PRINT		printf
#endif

#if WDEBUG_UP_FLAG == 0

	#define		Wdebug_INFO_UP(LEVEL,info,...)

	#define		Wdebug_BUF_UP(LEVEL,FORMAT,BUF,LENGTH, INFO, ...)

#elif WDEBUG_UP_FLAG == 1

	#define		Wdebug_INFO_UP_HEAD_ATTR			 	Trmnl_SET_FORE(Trmnl_color_yellow)
	#define		Wdebug_INFO_UP_ATTR				Trmnl_SET_FORE(Trmnl_color_green)

	#define		Wdebug_INFO_UP(LEVEL,info,...)		if (LEVEL <= WDEBUG_UP_LEVEL) {\
					WDEBUG_UP_PRINT(Trmnl_RST Wdebug_INFO_UP_HEAD_ATTR "[文件:%s][时间:%s][日期:%s][函数:%s][行:%d]["Wdebug_INFO_UP_ATTR  info Trmnl_SET_FORE(Trmnl_color_yellow) "]\r\n" Trmnl_RST, __FILE__, __TIME__, __DATE__, __func__, __LINE__, ##__VA_ARGS__);\
				}
	#define		Wdebug_BUF_UP(LEVEL,FORMAT,BUF,LENGTH,INFO,...)		if (LEVEL <= WDEBUG_UP_LEVEL) {\
					WDEBUG_UP_PRINT(Trmnl_RST Wdebug_INFO_UP_HEAD_ATTR "[文件:%s][时间:%s][日期:%s][函数:%s][行:%d] {" Wdebug_INFO_UP_ATTR INFO "\r\n",__FILE__, __TIME__, __DATE__, __func__, __LINE__, ##__VA_ARGS__); \
					int WDEBUG_BUF_LEN; \
					for (WDEBUG_BUF_LEN = 0; WDEBUG_BUF_LEN < LENGTH; ++WDEBUG_BUF_LEN) { \
						WDEBUG_UP_PRINT (FORMAT "  ", BUF[WDEBUG_BUF_LEN]); \
					}\
					WDEBUG_UP_PRINT(Trmnl_SET_FORE(Trmnl_color_yellow) "\r\n}\r\n" Trmnl_RST);\
				}

#elif WDEBUG_UP_FLAG == 2

	#define		Wdebug_INFO_UP_HEAD_ATTR			 	Trmnl_SET_FORE(Trmnl_color_yellow)
	#define		Wdebug_INFO_UP_ATTR				Trmnl_SET_FORE(Trmnl_color_green)

	#define		Wdebug_INFO_UP(LEVEL,info,...)		if (LEVEL <= WDEBUG_UP_LEVEL) {\
					WDEBUG_UP_PRINT(Trmnl_RST Wdebug_INFO_UP_HEAD_ATTR "[文件:%s][函数:%s][行:%d][" Wdebug_INFO_UP_ATTR  info Trmnl_SET_FORE(Trmnl_color_yellow) "]\r\n" Trmnl_RST, __FILE__, __func__, __LINE__, ##__VA_ARGS__);\
				}

	#define		Wdebug_BUF_UP(LEVEL,FORMAT,BUF,LENGTH,INFO,...)		if (LEVEL <= WDEBUG_UP_LEVEL) {\
					WDEBUG_UP_PRINT(Trmnl_RST Wdebug_INFO_UP_HEAD_ATTR "[文件:%s][函数:%s][行:%d] {" Wdebug_INFO_UP_ATTR INFO "\r\n",__FILE__, __func__, __LINE__ , ##__VA_ARGS__);\
					int WDEBUG_BUF_LEN; \
					for (WDEBUG_BUF_LEN = 0; WDEBUG_BUF_LEN < LENGTH; ++WDEBUG_BUF_LEN) {\
							WDEBUG_UP_PRINT(FORMAT "  ", BUF[WDEBUG_BUF_LEN]); \
					}\
					WDEBUG_UP_PRINT(Trmnl_SET_FORE(Trmnl_color_yellow) "\r\n}\r\n" Trmnl_RST);\
				}

#endif

#endif

