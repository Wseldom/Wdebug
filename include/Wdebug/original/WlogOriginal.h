/******************************************************************************
  > File Name		: WlogOriginal.h
  > Author			: dong
  > Mail			: 3235459847@qq.com
  > Created Time	: 2020年08月05日 星期三 19时58分48秒
******************************************************************************/

#ifndef __WLOGORIGINAL_H
#define __WLOGORIGINAL_H

#include "Wdebug/Wprint.h"

#define		WlogOriginal(INFO,...)		\
			Wprint(INFO, ##__VA_ARGS__);

#define		WbufOriginal(FORMAT,BUF,LENGTH,INFO,...)		\
			WprintBuf(FORMAT,BUF,LENGTH,INFO,##__VA_ARGS__)

#define		WerrOriginal(INFO,...)		\
			WprintStyle(Trmnl_FGC_RED,INFO,##__VA_ARGS__)

#define		WalarmOriginal(INFO,...)		\
			WprintAllStyle(Trmnl_FGC_WHILE,Trmnl_FGC_YELLOW,INFO,##__VA_ARGS__)

#define		WlogStyleOriginal(INFO_STYLE,info,...)		\
			WprintStyle(INFO_STYLE,info,##__VA_ARGS__)

#endif

