/******************************************************************************
  > File Name		: Wlog.h
  > Author			: dong
  > Mail			: 3235459847@qq.com
  > Created Time	: 2020年05月22日 星期五 15时43分07秒
******************************************************************************/

#ifndef __WLOG_H
#define __WLOG_H

//#ifdef WDEBUG_MAKEFILE_OK
//#include "Wdebug/invalid/original/WlogOriginalInvalid.h"
//#else
//#include "./original/WlogOriginalInvalid.h"
//#endif // WDEBUG_MAKEFILE_OK

#ifndef Wlog
#define		Wlog(INFO,...)
#endif // Wlog

#ifndef Wbuf
#define		Wbuf(FORMAT,BUF,LENGTH, INFO, ...)
#endif // !Wbuf

#ifndef WlogStyle
#define		WlogStyle(STYLE,INFO,...)
#endif // !WlogStyle

#ifndef Werr
#define		Werr(INFO,...)
#endif // !Werr

#ifndef Walarm
#define		Walarm(INFO,...)
#endif // !Walarm

#endif

