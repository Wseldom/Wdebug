/******************************************************************************
  > File Name		: WdebugOriginal.h
  > Author			: dong
  > Mail			: 3235459847@qq.com
  > Created Time	: 2020年08月05日 星期三 20时00分40秒
******************************************************************************/

#ifndef __WDEBUGORIGINAL_H
#define __WDEBUGORIGINAL_H

//#ifdef WDEBUG_MAKEFILE_OK
//#include "Wdebug/Wprint.h"
//#else
//#include "../Wprint.h"
//#endif // WDEBUG_MAKEFILE_OK

#ifndef WDEBUG_LEVEL_DIR
#define	WDEBUG_LEVEL_DIR
#endif

#ifndef Wdebug
		#define		Wdebug(INFO,...)			
#endif // !Wdebug

#ifndef WdebugBuf
		#define		WdebugBuf(FORMAT,BUF,LENGTH,INFO,...)		
#endif // !WdebugBuf

#endif

