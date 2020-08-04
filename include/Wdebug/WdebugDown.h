/******************************************************************************
  > File Name		: WdebugDown.h
  > Author			: dong
  > Mail			: 3235459847@qq.com
  > Created Time	: 2020年04月28日 星期二 11时17分47秒
******************************************************************************/

#ifndef __WDEBUG_PRINT_DOWN_H
#define __WDEBUG_PRINT_DOWN_H

#include "WTrmnlCtrl.h"
#include <stdio.h>

#ifndef WDEBUG_DOWN_PRINT		
#define	WDEBUG_DOWN_PRINT		printf
#endif

#if WDEBUG_DOWN_FLAG == 0

#define		Wdebug_INFO_DOWN(LEVEL,info,...)

#define		Wdebug_BUF_DOWN(LEVEL,FORMAT,BUF,LENGTH, INFO, ...)

#elif WDEBUG_DOWN_FLAG == 1

#define		Wdebug_INFO_DOWN_HEAD_ATTR			 	Trmnl_SET_FORE(Trmnl_color_yellow)
#define		Wdebug_INFO_DOWN_ATTR				Trmnl_SET_FORE(Trmnl_color_green)

#define		Wdebug_INFO_DOWN(LEVEL,info,...)		if (LEVEL > WDEBUG_DOWN_LEVEL) {\
					WDEBUG_DOWN_PRINT(Trmnl_RST Wdebug_INFO_DOWN_HEAD_ATTR "[文件:%s][时间:%s][日期:%s][函数:%s][行:%d]["Wdebug_INFO_DOWN_ATTR  info Trmnl_SET_FORE(Trmnl_color_yellow) "]\r\n" Trmnl_RST, __FILE__, __TIME__, __DATE__, __func__, __LINE__, ##__VA_ARGS__);\
				}
#define		Wdebug_BUF_DOWN(LEVEL,FORMAT,BUF,LENGTH,INFO,...)		if (LEVEL > WDEBUG_DOWN_LEVEL) {\
					WDEBUG_DOWN_PRINT(Trmnl_RST Wdebug_INFO_DOWN_HEAD_ATTR "[文件:%s][时间:%s][日期:%s][函数:%s][行:%d] {" Wdebug_INFO_DOWN_ATTR INFO "\r\n",__FILE__, __TIME__, __DATE__, __func__, __LINE__, ##__VA_ARGS__); \
					int WDEBUG_BUF_LEN; \
					for (WDEBUG_BUF_LEN = 0; WDEBUG_BUF_LEN < LENGTH; ++WDEBUG_BUF_LEN) { \
						WDEBUG_DOWN_PRINT (FORMAT "  ", BUF[WDEBUG_BUF_LEN]); \
					}\
					WDEBUG_DOWN_PRINT(Trmnl_SET_FORE(Trmnl_color_yellow) "\r\n}\r\n" Trmnl_RST);\
				}

#elif WDEBUG_DOWN_FLAG == 2

#define		Wdebug_INFO_DOWN_HEAD_ATTR			 	Trmnl_SET_FORE(Trmnl_color_yellow)
#define		Wdebug_INFO_DOWN_ATTR				Trmnl_SET_FORE(Trmnl_color_green)

#define		Wdebug_INFO_DOWN(LEVEL,info,...)		if (LEVEL > WDEBUG_DOWN_LEVEL) {\
					WDEBUG_DOWN_PRINT(Trmnl_RST Wdebug_INFO_DOWN_HEAD_ATTR "[文件:%s][函数:%s][行:%d][" Wdebug_INFO_DOWN_ATTR  info Trmnl_SET_FORE(Trmnl_color_yellow) "]\r\n" Trmnl_RST, __FILE__, __func__, __LINE__, ##__VA_ARGS__);\
			}

#define		Wdebug_BUF_DOWN(LEVEL,FORMAT,BUF,LENGTH,INFO,...)		if (LEVEL > WDEBUG_DOWN_LEVEL) {\
					WDEBUG_DOWN_PRINT(Trmnl_RST Wdebug_INFO_DOWN_HEAD_ATTR "[文件:%s][函数:%s][行:%d] {" Wdebug_INFO_DOWN_ATTR INFO "\r\n",__FILE__, __func__, __LINE__ , ##__VA_ARGS__);\
					int WDEBUG_BUF_LEN; \
					for (WDEBUG_BUF_LEN = 0; WDEBUG_BUF_LEN < LENGTH; ++WDEBUG_BUF_LEN) {\
							WDEBUG_DOWN_PRINT(FORMAT "  ", BUF[WDEBUG_BUF_LEN]); \
					}\
					WDEBUG_DOWN_PRINT(Trmnl_SET_FORE(Trmnl_color_yellow) "\r\n}\r\n" Trmnl_RST);\
				}

#endif

#endif

