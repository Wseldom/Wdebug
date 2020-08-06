/******************************************************************************
  > File Name		: WdebugUpOriginal.h
  > Author			: dong
  > Mail			: 3235459847@qq.com
  > Created Time	: 2020年08月05日 星期三 19时59分13秒
******************************************************************************/

#ifndef __WDEBUGUPORIGINAL_H
#define __WDEBUGUPORIGINAL_H

#include "Wdebug/Wprint.h"

#ifndef WDEBUG_UP_LEVEL_DIR
#define		WDEBUG_UP_LEVEL_DIR		>=
#endif // !WDEBUG_UP_LEVEL_DIR


#define		WdebugUpOriginal(LEVEL,info,...)		if (LEVEL WDEBUG_UP_LEVEL_DIR WDEBUG_UP_LEVEL) {\
					Wprint(info,##__VA_ARGS__);\
				}

#define		WdebugBufUpOriginal(LEVEL,FORMAT,BUF,LENGTH,INFO,...)		if (LEVEL WDEBUG_UP_LEVEL_DIR WDEBUG_UP_LEVEL) {\
					WprintBuf(FORMAT,BUF,LENDTH,INFO,##__VA_ARGS__); \
				}


#endif

