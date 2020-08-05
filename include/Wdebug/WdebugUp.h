/******************************************************************************
  > File Name		: WdebugUp.h
  > Author			: dong
  > Mail			: 3235459847@qq.com
  > Created Time	: 2020年04月28日 星期二 10时58分27秒
******************************************************************************/

#ifndef __WDEBUG_PRINT_UP_H
#define __WDEBUG_PRINT_UP_H

#include "Wdebug/original/WdebugUpOriginal.h"



	#ifndef WDEBUG_UP_ENABLE

		#define		WdebugUp(LEVEL,info,...)

		#define		WdebugBufUp(LEVEL,FORMAT,BUF,LENGTH, INFO, ...)

	#else

		#define		WdebugUp(LEVEL,info,...)		\
					WdebugUpOriginal(LEVEL,info,##__VA_ARGS__)

		#define		WdebugBufUp(LEVEL,FORMAT,BUF,LENGTH,INFO,...)		\
					WdebugBufUpOriginal(LEVEL,FORMAT,BUF,LENGTH,INFO,##__VA_ARGS__)

	#endif

#endif

