/******************************************************************************
  > File Name		: WdebugUpReload.h
  > Author			: dong
  > Mail			: 3235459847@qq.com
  > Created Time	: 2020年04月28日 星期二 10时58分27秒
******************************************************************************/

#ifndef __WDEBUG_PRINT_UP_REALOD_H
#define __WDEBUG_PRINT_UP_REALOD_H

#ifdef WDEBUG_MAKEFILE_OK
#include "Wdebug/reload/original/WdebugUpOriginalReload.h"
#else 
#include "./original/WdebugUpOriginalReload.h"
#endif // WDEBUG_MAKEFILE_OK


#ifndef WdebugUp
	#define		WdebugUp(LEVEL,INFO,...)		\
				WdebugUpOriginal(LEVEL,INFO,##__VA_ARGS__)
#endif // !WdebugUp

#ifndef WdebugBufUp
	#define		WdebugBufUp(LEVEL,FORMAT,BUF,LENGTH,INFO,...)		\
				WdebugBufUpOriginal(LEVEL,FORMAT,BUF,LENGTH,INFO,##__VA_ARGS__)
#endif // !WdebugBufUp


#endif

