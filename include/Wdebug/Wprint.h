/******************************************************************************
  > File Name		: Wprint.h
  > Author			: dong
  > Mail			: 3235459847@qq.com
  > Created Time	: 2020年08月05日 星期三 20时03分03秒
******************************************************************************/

#ifndef __WPRINT_H
#define __WPRINT_H

#include "Wdebug/original/WprintOriginal.h"

#define		WDEBUG_HEAD				"[file:%s][func:%s][line:%d]["
#define		WDEBUG_TAIL				"]"
#define		WDEBUG_BUF_HEAD			"[file:%s][func:%s][line:%d]{"
#define		WDEBUG_BUF_TAIL			"}"
#define		WDEBUG_PARAM			__FILE__, __func__, __LINE__
#define		WDEBUG_BUF_PARAM		__FILE__, __func__, __LINE__


#define		Wprint(INFO,...)			\
			WprintOriginal(WDEBUG_HEAD,WDEBUG_TAIL,WDEBUG_PARAM,INFO,##__VA_ARGS__)

#define		WprintBuf(FORMAT,BUF,LENGTH, INFO, ...)		\
			WprintBufOriginal(WDEBUG_HEAD,WDEBUG_TAIL,WDEBUG_PARAM,FORMAT,BUF,LENGTH, INFO,##__VA_ARGS__)

#define		WprintStyle(INFO_STYLE,INFO,...)		\
			WprintStyleOriginal(WDEBUG_HEAD,WDEBUG_TAIL,WDEBUG_PARAM,INFO_STYLE,INFO,##__VA_ARGS__)

#define		WprintAllStyle(HEAD_STYLE,INFO_STYLE,INFO,...)		\
			WprintAllStyleOriginal(WDEBUG_HEAD,WDEBUG_TAIL,WDEBUG_PARAM,HEAD_STYLE,INFO_STYLE,INFO,##__VA_ARGS__)



#endif

