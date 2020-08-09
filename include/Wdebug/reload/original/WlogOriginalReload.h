/******************************************************************************
  > File Name		: WlogOriginalReload.h
  > Author			: dong
  > Mail			: 3235459847@qq.com
  > Created Time	: 2020年08月05日 星期三 19时58分48秒
******************************************************************************/

#ifndef __WLOGORIGINALRELOAD_H
#define __WLOGORIGINALRELOAD_H

#ifdef WDEBUG_MAKEFILE_OK
#include "Wdebug/reload/WprintReload.h"
#else
#include "../WprintReload.h"
#endif // WDEBUG_MAKEFILE_OK

#ifndef WlogOriginal
#define		WlogOriginal(INFO,...)		\
			Wprint(INFO, ##__VA_ARGS__);
#endif // !WlogOriginal

#ifndef WbufOriginal
#define		WbufOriginal(FORMAT,BUF,LENGTH,INFO,...)		\
			WprintBuf(FORMAT,BUF,LENGTH,INFO,##__VA_ARGS__)
#endif // !WbufOriginal

#ifndef WerrOriginal
#define		WerrOriginal(INFO,...)		\
			WprintStyle(Trmnl_FGC_RED,INFO,##__VA_ARGS__)
#endif // !WerrOriginal

#ifndef WalarmOriginal
#define		WalarmOriginal(INFO,...)		\
			WprintAllStyle(Trmnl_FGC_WHILE,Trmnl_FGC_YELLOW,INFO,##__VA_ARGS__)
#endif // !WalarmOriginal

#ifndef WlogStyleOriginal
#define		WlogStyleOriginal(INFO_STYLE,INFO,...)		\
			WprintStyle(INFO_STYLE,INFO,##__VA_ARGS__)
#endif // !WlogStyleOriginal

#endif

