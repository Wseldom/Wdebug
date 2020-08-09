/******************************************************************************
  > File Name		: WdebugDownOriginal.h
  > Author			: dong
  > Mail			: 3235459847@qq.com
  > Created Time	: 2020年08月05日 星期三 19时59分29秒
******************************************************************************/

#ifndef __WDEBUGDOWNORIGINAL_H
#define __WDEBUGDOWNORIGINAL_H

//#ifdef WDEBUG_MAKEFILE_OK
//#include "Wdebug/Wprint.h"
//#else
//#include "../Wprint.h"
//#endif // WDEBUG_MAKEFILE_OK

#ifndef WDEBUG_DOWN_LEVEL_DIR
#define		WDEBUG_DOWN_LEVEL_DIR
#endif // !WDEBUG_DOWN_LEVEL_DIR

#ifndef WdebugDownOriginal
#define		WdebugDownOriginal(LEVEL,INFO,...)
#endif // !WdebugDownOriginal

#ifndef WdebugBufDownOriginal
#define		WdebugBufDownOriginal(LEVEL,FORMAT,BUF,LENGTH,INFO,...)
#endif // !WdebugBufDownOriginal



#endif

