/******************************************************************************
  > File Name		: WdebugUpOriginalReload.h
  > Author			: dong
  > Mail			: 3235459847@qq.com
  > Created Time	: 2020年08月05日 星期三 19时59分13秒
******************************************************************************/

#ifndef __WDEBUGUPORIGINALRELOAD_H
#define __WDEBUGUPORIGINALRELOAD_H

#ifdef WDEBUG_MAKEFILE_OK
#include "Wdebug/reload/WprintReload.h"
#else
#include "../WprintReload.h"
#endif // WDEBUG_MAKEFILE_OK

#ifndef WDEBUG_UP_LEVEL_DIR
#define		WDEBUG_UP_LEVEL_DIR		>=
#endif // !WDEBUG_UP_LEVEL_DIR

#ifndef WdebugUpOriginal
#define		WdebugUpOriginal(LEVEL,INFO,...)		if (LEVEL WDEBUG_UP_LEVEL_DIR WDEBUG_UP_LEVEL) {\
					Wprint(INFO,##__VA_ARGS__);\
				}
#endif // !WdebugUpOriginal

#ifndef WdebugBufUpOriginal
#define		WdebugBufUpOriginal(LEVEL,FORMAT,BUF,LENGTH,INFO,...)		if (LEVEL WDEBUG_UP_LEVEL_DIR WDEBUG_UP_LEVEL) {\
					WprintBuf(FORMAT,BUF,LENDTH,INFO,##__VA_ARGS__); \
				}
#endif // !WdebugBufUpOriginal



#endif

