/******************************************************************************
  > File Name		: WdebugOriginal.h
  > Author			: dong
  > Mail			: 3235459847@qq.com
  > Created Time	: 2020年08月05日 星期三 20时00分40秒
******************************************************************************/

#ifndef __WDEBUGORIGINAL_H
#define __WDEBUGORIGINAL_H


#include "Wdebug/Wprint.h"

#ifndef WDEBUG_LEVEL_DIR
#define	WDEBUG_LEVEL_DIR		<=
#endif

	#ifndef WDEBUG_LEVEL_ENABLE

		#define		Wdebug(INFO,...)			
		#define		WdebugBuf(FORMAT,BUF,LENGTH,INFO,...)		

	#else

		#define		Wdebug(INFO,...)			\
					Wprint(INFO,##__VA_ARGS__)

		#define		WdebugBuf(FORMAT,BUF,LENGTH,INFO,...)		\
					WprintBuf(FORMAT,BUF,LENGTH,INFO,##__VA_ARGS__)

	#endif // !WDEBUG_LEVEL_ENABLE

#endif

