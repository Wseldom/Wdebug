/******************************************************************************
  > File Name		: Wlog.h
  > Author			: dong
  > Mail			: 3235459847@qq.com
  > Created Time	: 2020年05月22日 星期五 15时43分07秒
******************************************************************************/

#ifndef __WLOG_H
#define __WLOG_H

#include "Wdebug/original/WlogOriginal.h"

	#ifndef WLOG_ENABLE

		#define		Wlog(info,...)

		#define		Wbuf(FORMAT,BUF,LENGTH, INFO, ...)

		#define		WlogStyle(STYLE,info,...)

		#define		Werr(info,...)

		#define		Walarm(info,...)

	#else

		#define		Wlog(INFO,...)		\
					WlogOriginal(INFO, ##__VA_ARGS__);

		#define		Wbuf(FORMAT,BUF,LENGTH,INFO,...)		\
					WbufOriginal(FORMAT,BUF,LENGTH,INFO,##__VA_ARGS__)

		#define		Werr(INFO,...)		\
					WerrOriginal(INFO,##__VA_ARGS__)

		#define		Walarm(INFO,...)		\
					WalarmOriginal(INFO,##__VA_ARGS__)

		#define		WlogStyle(INFO_STYLE,INFO,...)		\
					WlogStyleOriginal(INFO_STYLE,INFO,##__VA_ARGS__)

	#endif

#endif

