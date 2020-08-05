/******************************************************************************
  > File Name		: WdebugDown.h
  > Author			: dong
  > Mail			: 3235459847@qq.com
  > Created Time	: 2020年04月28日 星期二 11时17分47秒
******************************************************************************/

#ifndef __WDEBUG_PRINT_DOWN_H
#define __WDEBUG_PRINT_DOWN_H

#include "Wdebug/original/WdebugDownOriginal.h"

	#ifndef WDEBUG_DOWN_ENABLE

		#define		WdebugDown(LEVEL,INFO,...)

		#define		WdebugBufDown(LEVEL,FORMAT,BUF,LENGTH, INFO, ...)

	#else

		#define		WdebugDown(LEVEL,INFO,...)		\
					WdebugDownOriginal(LEVEL,INFO,##__VA_ARGS__)

		#define		WdebugBufDown(LEVEL,FORMAT,BUF,LENGTH,INFO,...)		\
					WdebugBufDownOriginal(LEVEL,FORMAT,BUF,LENDTH,INFO,##__VA_ARGS__)

	#endif

#endif

