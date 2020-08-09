/******************************************************************************
  > File Name		: WprintReload.h
  > Author			: dong
  > Mail			: 3235459847@qq.com
  > Created Time	: 2020年08月05日 星期三 20时03分03秒
******************************************************************************/

#ifndef __WPRINTRELOAD_H
#define __WPRINTRELOAD_H

#ifdef WDEBUG_MAKEFILE_OK
#include "Wdebug/reload/original/WprintOriginalReload.h"
#else
#include "./original/WprintOriginalReload.h"
#endif // WDEBUG_MAKEFILE_OK


#ifndef WDEBUG_HEAD
#define		WDEBUG_HEAD				"[file:%s][func:%s][line:%d]["
#endif // !WDEBUG_HEAD
#ifndef WDEBUG_TAIL
#define		WDEBUG_TAIL				"]"
#endif // !WDEBUG_TAIL
#ifndef WDEBUG_BUF_HEAD
#define		WDEBUG_BUF_HEAD			"[file:%s][func:%s][line:%d]{"
#endif // !WDEBUG_BUF_HEAD
#ifndef WDEBUG_BUF_TAIL
#define		WDEBUG_BUF_TAIL			"}"
#endif // !WDEBUG_BUF_TAIL
#ifndef WDEBUG_PARAM
#define		WDEBUG_PARAM			__FILE__, __func__, __LINE__
#endif // !WDEBUG_PARAM
#ifndef WDEBUG_BUF_PARAM
#define		WDEBUG_BUF_PARAM		__FILE__, __func__, __LINE__
#endif // !WDEBUG_BUF_PARAM


#ifndef Wprint
	#define		Wprint(INFO,...)			\
				WprintOriginal(WDEBUG_HEAD,WDEBUG_TAIL,WDEBUG_PARAM,INFO,##__VA_ARGS__)
#endif // !Wprint

#ifndef WprintBuf
	#define		WprintBuf(FORMAT,BUF,LENGTH, INFO, ...)		\
				WprintBufOriginal(WDEBUG_HEAD,WDEBUG_TAIL,WDEBUG_PARAM,FORMAT,BUF,LENGTH, INFO,##__VA_ARGS__)
#endif // !WprintBuf

#ifndef WprintStyle
	#define		WprintStyle(INFO_STYLE,INFO,...)		\
				WprintStyleOriginal(WDEBUG_HEAD,WDEBUG_TAIL,WDEBUG_PARAM,INFO_STYLE,INFO,##__VA_ARGS__)
#endif // !WprintStyle

#ifndef WprintAllStyle
	#define		WprintAllStyle(HEAD_STYLE,INFO_STYLE,INFO,...)		\
				WprintAllStyleOriginal(WDEBUG_HEAD,WDEBUG_TAIL,WDEBUG_PARAM,HEAD_STYLE,INFO_STYLE,INFO,##__VA_ARGS__)
#endif // !WprintAllStyle




#endif

