/******************************************************************************
  > File Name		: WdebugDownReload.h
  > Author			: dong
  > Mail			: 3235459847@qq.com
  > Created Time	: 2020年04月28日 星期二 11时17分47秒
******************************************************************************/

#ifndef __WDEBUG_PRINT_DOWN_RELOAD_H
#define __WDEBUG_PRINT_DOWN_RELOAD_H

#ifdef WDEBUG_MAKEFILE_OK
#include "Wdebug/reload/original/WdebugDownOriginalReload.h"
#else
#include "./original/WdebugDownOriginalReload.h"
#endif // WDEBUG_MAKEFILE_OK


	#ifndef WDEBUG_DOWN_ENABLE

#ifndef WdebugDown
		#define		WdebugDown(LEVEL,INFO,...)		
#endif // !WdebugDown

#ifndef WdebugBufDown
		#define		WdebugBufDown(LEVEL,FORMAT,BUF,LENGTH,INFO,...)		
#endif // !WdebugBufDown

	#else

#ifndef WdebugDown
		#define		WdebugDown(LEVEL,INFO,...)		\
					WdebugDownOriginal(LEVEL,INFO,##__VA_ARGS__)
#endif // !WdebugDown

#ifndef WdebugBufDown
		#define		WdebugBufDown(LEVEL,FORMAT,BUF,LENGTH,INFO,...)		\
					WdebugBufDownOriginal(LEVEL,FORMAT,BUF,LENDTH,INFO,##__VA_ARGS__)
#endif // !WdebugBufDown

	#endif

#endif

