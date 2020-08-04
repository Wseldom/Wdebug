/******************************************************************************
  > File Name		: Wlog.h
  > Author			: dong
  > Mail			: 3235459847@qq.com
  > Created Time	: 2020年05月22日 星期五 15时43分07秒
******************************************************************************/

#ifndef __WLOG_H
#define __WLOG_H

#include "WTrmnlCtrl.h"
#include <stdio.h>

#ifndef WLOG_PRINT
#define		WLOG_PRINT		printf
#endif

#if WLOG_FLAG == 0

#define		Wlog(info,...)

#define		WlogStyle(STYLE,info,...)

#define		Werr(info,...)

#define		Walarm(info,...)

#define		Wbuf(FORMAT,BUF,LENGTH, INFO, ...)

#elif WLOG_FLAG == 1

#define		WLOG_HEAD_ATTR			 	Trmnl_SET_FORE(Trmnl_color_yellow)
#define		WLOG_ALARM_HEAD_ATTR			Trmnl_SET_FORE(Trmnl_color_white)
#define		WLOG_INFO_ATTR				Trmnl_SET_FORE(Trmnl_color_green)

#define		Wlog(info,...)		WLOG_PRINT(Trmnl_RST WLOG_HEAD_ATTR "[file:%s][time:%s][date:%s][func:%s][line:%d]["WLOG_INFO_ATTR  info Trmnl_RST WLOG_HEAD_ATTR "]\r\n" Trmnl_RST, __FILE__, __TIME__, __DATE__, __func__, __LINE__, ##__VA_ARGS__);

#define		WlogStyle(STYLE,info,...)		WLOG_PRINT(Trmnl_RST WLOG_HEAD_ATTR "[file:%s][time:%s][date:%s][func:%s][line:%d][" STYLE  info Trmnl_RST WLOG_HEAD_ATTR "]\r\n" Trmnl_RST, __FILE__, __TIME__, __DATE__, __func__, __LINE__, ##__VA_ARGS__);

#define		Werr(info,...)		WLOG_PRINT(Trmnl_RST WLOG_HEAD_ATTR "[file:%s][time:%s][date:%s][func:%s][line:%d][" Trmnl_SET_FORE(Trmnl_color_red)  info Trmnl_RST WLOG_HEAD_ATTR "]\r\n" Trmnl_RST, __FILE__, __TIME__, __DATE__, __func__, __LINE__, ##__VA_ARGS__);

#define		Walarm(info,...)		WLOG_PRINT(Trmnl_RST WLOG_ALARM_HEAD_ATTR "[file:%s][time:%s][date:%s][func:%s][line:%d][" Trmnl_SET_FORE(Trmnl_color_yellow)  info Trmnl_RST WLOG_ALARM_HEAD_ATTR "]\r\n" Trmnl_RST, __FILE__, __TIME__, __DATE__, __func__, __LINE__, ##__VA_ARGS__);

#define		Wbuf(FORMAT,BUF,LENGTH,INFO,...)		WLOG_PRINT(Trmnl_RST WLOG_HEAD_ATTR "[file:%s][time:%s][date:%s][func:%s][line:%d] {" WLOG_INFO_ATTR INFO "\r\n",__FILE__, __TIME__, __DATE__, __func__, __LINE__, ##__VA_ARGS__); \
			{\
				int WDEBUG_BUF_LEN; \
				for (WDEBUG_BUF_LEN = 0; WDEBUG_BUF_LEN < LENGTH; ++WDEBUG_BUF_LEN) { \
					WLOG_PRINT (FORMAT "  ", BUF[WDEBUG_BUF_LEN]); \
				}\
				WLOG_PRINT(Trmnl_RST WLOG_HEAD_ATTR "\r\n}\r\n" Trmnl_RST);\
			}

#elif WLOG_FLAG == 2

#define		WLOG_HEAD_ATTR			 	Trmnl_SET_FORE(Trmnl_color_yellow)
#define		WLOG_ALARM_HEAD_ATTR		Trmnl_SET_FORE(Trmnl_color_white)
#define		WLOG_INFO_ATTR				Trmnl_SET_FORE(Trmnl_color_green)

#define		Wlog(info,...)		WLOG_PRINT(Trmnl_RST WLOG_HEAD_ATTR "[file:%s][func:%s][line:%d][" WLOG_INFO_ATTR  info Trmnl_RST WLOG_HEAD_ATTR "]\r\n" Trmnl_RST, __FILE__, __func__, __LINE__, ##__VA_ARGS__);

#define		Werr(info,...)		WLOG_PRINT(Trmnl_RST WLOG_HEAD_ATTR "[file:%s][func:%s][line:%d][" Trmnl_SET_FORE(Trmnl_color_red)  info Trmnl_RST WLOG_HEAD_ATTR "]\r\n" Trmnl_RST, __FILE__, __func__, __LINE__, ##__VA_ARGS__);

#define		Walarm(info,...)		WLOG_PRINT(Trmnl_RST WLOG_ALARM_HEAD_ATTR "[file:%s][func:%s][line:%d][" Trmnl_SET_FORE(Trmnl_color_yellow)  info Trmnl_RST WLOG_ALARM_HEAD_ATTR "]\r\n" Trmnl_RST, __FILE__, __func__, __LINE__, ##__VA_ARGS__);

#define		WlogStyle(STYLE,info,...)		WLOG_PRINT(Trmnl_RST WLOG_HEAD_ATTR "[file:%s][func:%s][line:%d][" STYLE  info Trmnl_RST WLOG_HEAD_ATTR "]\r\n" Trmnl_RST, __FILE__, __func__, __LINE__, ##__VA_ARGS__);

#define		Wbuf(FORMAT,BUF,LENGTH,INFO,...)		WLOG_PRINT(Trmnl_RST WLOG_HEAD_ATTR "[file:%s][func:%s][line:%d] {" WLOG_INFO_ATTR INFO "\r\n",__FILE__, __func__, __LINE__ , ##__VA_ARGS__);\
			{\
				int WDEBUG_BUF_LEN; \
				for (WDEBUG_BUF_LEN = 0; WDEBUG_BUF_LEN < LENGTH; ++WDEBUG_BUF_LEN) {\
						WLOG_PRINT(FORMAT "  ", BUF[WDEBUG_BUF_LEN]); \
				}\
				WLOG_PRINT(Trmnl_RST WLOG_HEAD_ATTR "\r\n}\r\n" Trmnl_RST);\
			}

#endif

#endif

