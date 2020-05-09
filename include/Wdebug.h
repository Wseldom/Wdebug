/******************************************************************************
  > File Name		: Wdebug.h
  > Author			: dong
  > Mail			: 3235459847@qq.com
  > Created Time	: 2020年04月02日 星期四 11时46分11秒
******************************************************************************/

#ifndef __WDEBUG_H
#define __WDEBUG_H

#define		WSD_DEBUG_FLAG		1
#define			WSD_DEBUG_LEVEL		 0

#include "Wdebug/level/Wdebug_0.h"
#include "Wdebug/level/Wdebug_1.h"

#define		WSD_DEBUG_UP_LEVEL			2
#define		WSD_DEBUG_UP_FLAG				2
#include	"Wdebug/WSD_debug_print_up.h"

#define		WSD_DEBUG_DOWN_LEVEL			2
#define		WSD_DEBUG_DOWN_FLAG				2
#include	"Wdebug/WSD_debug_print_down.h"

#endif

