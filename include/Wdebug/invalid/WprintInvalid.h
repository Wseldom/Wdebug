/******************************************************************************
  > File Name		: Wprint.h
  > Author			: dong
  > Mail			: 3235459847@qq.com
  > Created Time	: 2020年08月05日 星期三 20时03分03秒
******************************************************************************/

#ifndef __WPRINT_H
#define __WPRINT_H

//#ifdef WDEBUG_MAKEFILE_OK
//#include "Wdebug/invalid/original/WprintOriginalInvalid.h"
//#else
//#include "./original/WprintOriginalInvalid.h"
//#endif // WDEBUG_MAKEFILE_OK


#ifndef WDEBUG_HEAD
#define		WDEBUG_HEAD
#endif // !WDEBUG_HEAD
#ifndef WDEBUG_TAIL
#define		WDEBUG_TAIL
#endif // !WDEBUG_TAIL
#ifndef WDEBUG_BUF_HEAD
#define		WDEBUG_BUF_HEAD
#endif // !WDEBUG_BUF_HEAD
#ifndef WDEBUG_BUF_TAIL
#define		WDEBUG_BUF_TAIL
#endif // !WDEBUG_BUF_TAIL
#ifndef WDEBUG_PARAM
#define		WDEBUG_PARAM
#endif // !WDEBUG_PARAM
#ifndef WDEBUG_BUF_PARAM
#define		WDEBUG_BUF_PARAM
#endif // !WDEBUG_BUF_PARAM


#ifndef Wprint
	#define		Wprint(INFO,...)
#endif // !Wprint

#ifndef WprintBuf
	#define		WprintBuf(FORMAT,BUF,LENGTH, INFO, ...)
#endif // !WprintBuf

#ifndef WprintStyle
	#define		WprintStyle(INFO_STYLE,INFO,...)
#endif // !WprintStyle

#ifndef WprintAllStyle
	#define		WprintAllStyle(HEAD_STYLE,INFO_STYLE,INFO,...)
#endif // !WprintAllStyle




#endif

