/******************************************************************************
  > File Name		: WdebugUpOriginal.h
  > Author			: dong
  > Mail			: 3235459847@qq.com
  > Created Time	: 2020年08月05日 星期三 19时59分13秒
******************************************************************************/

#ifndef __WDEBUGUPORIGINAL_H
#define __WDEBUGUPORIGINAL_H

//#ifdef WDEBUG_MAKEFILE_OK
//#include "Wdebug/Wprint.h"
//#else
//#include "../Wprint.h"
//#endif // WDEBUG_MAKEFILE_OK

#ifndef WDEBUG_UP_LEVEL_DIR
#define		WDEBUG_UP_LEVEL_DIR
#endif // !WDEBUG_UP_LEVEL_DIR

#ifndef WdebugUpOriginal
#define		WdebugUpOriginal(LEVEL,INFO,...)
#endif // !WdebugUpOriginal

#ifndef WdebugBufUpOriginal
#define		WdebugBufUpOriginal(LEVEL,FORMAT,BUF,LENGTH,INFO,...)
#endif // !WdebugBufUpOriginal



#endif

