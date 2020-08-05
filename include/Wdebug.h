/******************************************************************************
  > File Name		: Wdebug.h
  > Author			: dong
  > Mail			: 3235459847@qq.com
  > Created Time	: 2020年04月02日 星期四 11时46分11秒
******************************************************************************/

#ifndef __WDEBUG_H
#define __WDEBUG_H

#define		WDEBUG_FLAG		2
#define		WDEBUG_LEVEL		 0
#include "Wdebug/level/Wdebug_0.h"
#include "Wdebug/level/Wdebug_1.h"

#define		WDEBUG_UP_LEVEL			2
#define		WDEBUG_UP_ENABLE
#include	"Wdebug/WdebugUp.h"

#define		WDEBUG_DOWN_LEVEL			2
#define		WDEBUG_DOWN_ENABLE
#include	"Wdebug/WdebugDown.h"

#define		WLOG_ENABLE
#include "Wdebug/Wlog.h"


#endif

