/******************************************************************************
  > File Name		: WdebugDownOriginalReload.h
  > Author			: dong
  > Mail			: 3235459847@qq.com
  > Created Time	: 2020年08月05日 星期三 19时59分29秒
******************************************************************************/

#ifndef __WDEBUGDOWNORIGINALRELOAD_H
#define __WDEBUGDOWNORIGINALRELOAD_H

#ifdef WDEBUG_MAKEFILE_OK
#include "Wdebug/reload/WprintReload.h"
#else
#include "../WprintReload.h"
#endif // WDEBUG_MAKEFILE_OK

#ifndef WDEBUG_DOWN_LEVEL_DIR
#define		WDEBUG_DOWN_LEVEL_DIR		<=
#endif // !WDEBUG_DOWN_LEVEL_DIR

#ifndef WdebugDownOriginal
#define		WdebugDownOriginal(LEVEL,INFO,...)		if (LEVEL WDEBUG_DOWN_LEVEL_DIR WDEBUG_DOWN_LEVEL) {\
					Wprint(INFO,##__VA_ARGS__);\
				}
#endif // !WdebugDownOriginal

#ifndef WdebugBufDownOriginal
#define		WdebugBufDownOriginal(LEVEL,FORMAT,BUF,LENGTH,INFO,...)		if (LEVEL WDEBUG_DOWN_LEVEL_DIR WDEBUG_DOWN_LEVEL) {\
					WprintBuf(FORMAT,BUF,LENDTH,INFO,##__VA_ARGS__); \
				}
#endif // !WdebugBufDownOriginal



#endif

