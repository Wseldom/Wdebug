/******************************************************************************
  > File Name		: WlogReload.h
  > Author			: dong
  > Mail			: 3235459847@qq.com
  > Created Time	: 2020年05月22日 星期五 15时43分07秒
******************************************************************************/

#ifndef __WLOGRELOAD_H
#define __WLOGRELOAD_H

#ifdef WDEBUG_MAKEFILE_OK
#include "Wdebug/reload/original/WlogOriginalReload.h"
#else
#include "./original/WlogOriginalReload.h"
#endif // WDEBUG_MAKEFILE_OK

	#ifndef WLOG_ENABLE

#ifndef Wlog
#define		Wlog(info,...)
#endif // Wlog

#ifndef Wbuf
#define		Wbuf(FORMAT,BUF,LENGTH, INFO, ...)
#endif // !Wbuf

#ifndef WlogStyle
#define		WlogStyle(STYLE,info,...)
#endif // !WlogStyle

#ifndef Werr
#define		Werr(info,...)
#endif // !Werr

#ifndef Walarm
#define		Walarm(info,...)
#endif // !Walarm

	#else

#ifndef Wlog
		#define		Wlog(INFO,...)		\
							WlogOriginal(INFO, ##__VA_ARGS__);
#endif // !Wlog

#ifndef Wbuf
		#define		Wbuf(FORMAT,BUF,LENGTH,INFO,...)		\
							WbufOriginal(FORMAT,BUF,LENGTH,INFO,##__VA_ARGS__)
#endif // !Wbuf

#ifndef WlogStyle
		#define		WlogStyle(INFO_STYLE,INFO,...)		\
									WlogStyleOriginal(INFO_STYLE,INFO,##__VA_ARGS__)
#endif // !WlogStyle

#ifndef Werr
		#define		Werr(INFO,...)		\
							WerrOriginal(INFO,##__VA_ARGS__)
#endif // !Werr

#ifndef Walarm
		#define		Walarm(INFO,...)		\
							WalarmOriginal(INFO,##__VA_ARGS__)
#endif // !Walarm

	#endif

#endif

