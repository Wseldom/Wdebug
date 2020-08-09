/******************************************************************************
  > File Name		: WprintOriginal.h
  > Author			: dong
  > Mail			: 3235459847@qq.com
  > Created Time	: 2020年04月02日 星期四 11时51分42秒
******************************************************************************/

#ifndef __WPRINTORIGINAL_H
#define __WPRINTORIGINAL_H

//#ifdef WDEBUG_MAKEFILE_OK
//#include "Wdebug/WTrmnlCtrl.h"
//#else
//#include "../WTrmnlCtrl.h"
//#endif // WDEBUG_MAKEFILE_OK

#ifndef WDEBUG_ENTER_KEY
#define		WDEBUG_ENTER_KEY
#endif // !WDEBUG_ENTER_KEY


//#ifndef WPRINT
//#define		WPRINT		printf
//#endif // !WPRINT
	
#ifndef WprintOriginal
#define		WprintOriginal(HEAD,TAIL,PARAM,INFO,...)
#endif // !WprintOriginal

#ifndef WprintBufOriginal
#define		WprintBufOriginal(HEAD,TAIL,PARAM,FORMAT,BUF,LENGTH, INFO, ...)
#endif // !WprintBufOriginal

#ifndef WprintStyleOriginal
#define		WprintStyleOriginal(HEAD,TAIL,PARAM,INFO_STYLE,INFO,...)
#endif // !WprintStyleOriginal

#ifndef WprintAllStyleOriginal
#define		WprintAllStyleOriginal(HEAD,TAIL,PARAM,HEAD_STYLE,INFO_STYLE,INFO,...)
#endif // !WprintAllStyleOriginal
//#elif
#endif

