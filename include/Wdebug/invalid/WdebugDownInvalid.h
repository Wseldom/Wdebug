/******************************************************************************
  > File Name		: WdebugDown.h
  > Author			: dong
  > Mail			: 3235459847@qq.com
  > Created Time	: 2020年04月28日 星期二 11时17分47秒
******************************************************************************/

#ifndef __WDEBUG_PRINT_DOWN_H
#define __WDEBUG_PRINT_DOWN_H

//#ifdef WDEBUG_MAKEFILE_OK
//#include "Wdebug/original/WdebugDownOriginal.h"
//#else
//#include "./original/WdebugDownOriginal.h"
//#endif // WDEBUG_MAKEFILE_OK


#ifndef WdebugDown
		#define		WdebugDown(LEVEL,INFO,...)		
#endif // !WdebugDown

#ifndef WdebugBufDown
		#define		WdebugBufDown(LEVEL,FORMAT,BUF,LENGTH,INFO,...)		
#endif // !WdebugBufDown


#endif

