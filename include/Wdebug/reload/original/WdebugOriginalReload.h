/******************************************************************************
  > File Name		: WdebugOriginalReload.h
  > Author			: dong
  > Mail			: 3235459847@qq.com
  > Created Time	: 2020年08月05日 星期三 20时00分40秒
******************************************************************************/

#ifndef __WDEBUGORIGINALRELOAD_H
#define __WDEBUGORIGINALRELOAD_H

#ifdef WDEBUG_MAKEFILE_OK
#include "Wdebug/reload/WprintReload.h"
#else
#include "../WprintReload.h"
#endif // WDEBUG_MAKEFILE_OK

#ifndef WDEBUG_LEVEL_DIR
#define	WDEBUG_LEVEL_DIR		<=
#endif

	#ifndef WDEBUG_LEVEL_ENABLE

#ifndef Wdebug
		#define		Wdebug(INFO,...)			
#endif // !Wdebug

#ifndef WdebugBuf
		#define		WdebugBuf(FORMAT,BUF,LENGTH,INFO,...)		
#endif // !WdebugBuf

	#else

#ifndef Wdebug
		#define		Wdebug(INFO,...)			\
					Wprint(INFO,##__VA_ARGS__)
#endif // !Wdebug

#ifndef WdebugBuf
		#define		WdebugBuf(FORMAT,BUF,LENGTH,INFO,...)		\
					WprintBuf(FORMAT,BUF,LENGTH,INFO,##__VA_ARGS__)
#endif // !WdebugBuf

	#endif // !WDEBUG_LEVEL_ENABLE

#endif

