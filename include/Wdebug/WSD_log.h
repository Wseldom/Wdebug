/******************************************************************************
  > File Name		: WSD_log.h
  > Author			: dong
  > Mail			: 3235459847@qq.com
  > Created Time	: 2020年05月22日 星期五 15时43分07秒
******************************************************************************/

#ifndef __WSD_LOG_H
#define __WSD_LOG_H

#include "WTrmnlCtrl.h"
#include <stdio.h>

#if WSD_LOG_FLAG == 0

#define		Wlog(info,...)

#define		Wlog_style(STYLE,info,...)

#define		Werr(info,...)

#define		Walarm(info,...)

#define		Wlog_buf(FORMAT,BUF,LENGTH, INFO, ...)

#elif WSD_LOG_FLAG == 1

#define		WSD_LOG_HEAD_ATTR			 	Trmnl_SET_FORE(Trmnl_color_yellow)
#define		WSD_LOG_ALARM_HEAD_ATTR			Trmnl_SET_FORE(Trmnl_color_white)
#define		WSD_LOG_INFO_ATTR				Trmnl_SET_FORE(Trmnl_color_green)

#define		Wlog(info,...)		printf(Trmnl_RST WSD_LOG_HEAD_ATTR "[file:%s][time:%s][date:%s][func:%s][line:%d]["WSD_LOG_INFO_ATTR  info Trmnl_RST WSD_LOG_HEAD_ATTR "]\r\n" Trmnl_RST, __FILE__, __TIME__, __DATE__, __func__, __LINE__, ##__VA_ARGS__);

#define		Wlog_style(STYLE,info,...)		printf(Trmnl_RST WSD_LOG_HEAD_ATTR "[file:%s][time:%s][date:%s][func:%s][line:%d][" STYLE  info Trmnl_RST WSD_LOG_HEAD_ATTR "]\r\n" Trmnl_RST, __FILE__, __TIME__, __DATE__, __func__, __LINE__, ##__VA_ARGS__);

#define		Werr(info,...)		printf(Trmnl_RST WSD_LOG_HEAD_ATTR "[file:%s][time:%s][date:%s][func:%s][line:%d][" Trmnl_SET_FORE(Trmnl_color_red)  info Trmnl_RST WSD_LOG_HEAD_ATTR "]\r\n" Trmnl_RST, __FILE__, __TIME__, __DATE__, __func__, __LINE__, ##__VA_ARGS__);

#define		Walarm(info,...)		printf(Trmnl_RST WSD_LOG_ALARM_HEAD_ATTR "[file:%s][time:%s][date:%s][func:%s][line:%d][" Trmnl_SET_FORE(Trmnl_color_yellow)  info Trmnl_RST WSD_LOG_ALARM_HEAD_ATTR "]\r\n" Trmnl_RST, __FILE__, __TIME__, __DATE__, __func__, __LINE__, ##__VA_ARGS__);

#define		Wlog_buf(FORMAT,BUF,LENGTH,INFO,...)		printf(Trmnl_RST WSD_LOG_HEAD_ATTR "[file:%s][time:%s][date:%s][func:%s][line:%d] {" WSD_LOG_INFO_ATTR INFO "\r\n",__FILE__, __TIME__, __DATE__, __func__, __LINE__, ##__VA_ARGS__); \
			{\
				int WSD_DEBUG_BUF_LEN; \
				for (WSD_DEBUG_BUF_LEN = 0; WSD_DEBUG_BUF_LEN < LENGTH; ++WSD_DEBUG_BUF_LEN) { \
					printf (FORMAT "  ", BUF[WSD_DEBUG_BUF_LEN]); \
				}\
				printf(Trmnl_RST WSD_LOG_HEAD_ATTR "\r\n}\r\n" Trmnl_RST);\
			}

#elif WSD_LOG_FLAG == 2

#define		WSD_LOG_HEAD_ATTR			 	Trmnl_SET_FORE(Trmnl_color_yellow)
#define		WSD_LOG_ALARM_HEAD_ATTR			Trmnl_SET_FORE(Trmnl_color_white)
#define		WSD_LOG_INFO_ATTR				Trmnl_SET_FORE(Trmnl_color_green)

#define		Wlog(info,...)		printf(Trmnl_RST WSD_LOG_HEAD_ATTR "[file:%s][func:%s][line:%d][" WSD_LOG_INFO_ATTR  info Trmnl_RST WSD_LOG_HEAD_ATTR "]\r\n" Trmnl_RST, __FILE__, __func__, __LINE__, ##__VA_ARGS__);

#define		Werr(info,...)		printf(Trmnl_RST WSD_LOG_HEAD_ATTR "[file:%s][func:%s][line:%d][" Trmnl_SET_FORE(Trmnl_color_red)  info Trmnl_RST WSD_LOG_HEAD_ATTR "]\r\n" Trmnl_RST, __FILE__, __func__, __LINE__, ##__VA_ARGS__);

#define		Walarm(info,...)		printf(Trmnl_RST WSD_LOG_ALARM_HEAD_ATTR "[file:%s][func:%s][line:%d][" Trmnl_SET_FORE(Trmnl_color_yellow)  info Trmnl_RST WSD_LOG_ALARM_HEAD_ATTR "]\r\n" Trmnl_RST, __FILE__, __func__, __LINE__, ##__VA_ARGS__);

#define		Wlog_style(STYLE,info,...)		printf(Trmnl_RST WSD_LOG_HEAD_ATTR "[file:%s][func:%s][line:%d][" STYLE  info Trmnl_RST WSD_LOG_HEAD_ATTR "]\r\n" Trmnl_RST, __FILE__, __func__, __LINE__, ##__VA_ARGS__);

#define		Wlog_buf(FORMAT,BUF,LENGTH,INFO,...)		printf(Trmnl_RST WSD_LOG_HEAD_ATTR "[file:%s][func:%s][line:%d] {" WSD_LOG_INFO_ATTR INFO "\r\n",__FILE__, __func__, __LINE__ , ##__VA_ARGS__);\
			{\
				int WSD_DEBUG_BUF_LEN; \
				for (WSD_DEBUG_BUF_LEN = 0; WSD_DEBUG_BUF_LEN < LENGTH; ++WSD_DEBUG_BUF_LEN) {\
						printf(FORMAT "  ", BUF[WSD_DEBUG_BUF_LEN]); \
				}\
				printf(Trmnl_RST WSD_LOG_HEAD_ATTR "\r\n}\r\n" Trmnl_RST);\
			}

#endif

#endif

