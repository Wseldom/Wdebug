/******************************************************************************
  > File Name		: Wdebug.h
  > Author			: dong
  > Mail			: 3235459847@qq.com
  > Created Time	: 2020年04月02日 星期四 11时46分11秒
******************************************************************************/

#ifndef __WDEBUG_H
#define __WDEBUG_H

#define	WDEBUG_MAKEFILE_OK

#include <stdio.h>
//定义debug打印输出函数，
//如需关闭所有debug信息只需注释此行
#define		WPRINT		printf

#define		WDEBUG_LEVEL_ENABLE
#define		WDEBUG_LEVEL		 0
#include "Wdebug/reload/level/WdebugReload_0.h"
#include "Wdebug/reload/level/WdebugReload_1.h"
#include "Wdebug/level/Wdebug_0.h"
#include "Wdebug/level/Wdebug_1.h"

#define		WDEBUG_UP_LEVEL			2
#define		WDEBUG_UP_ENABLE
#include	"Wdebug/reload/WdebugUpReload.h"
#include	"Wdebug/WdebugUp.h"

#define		WDEBUG_DOWN_LEVEL			2
#define		WDEBUG_DOWN_ENABLE
#include	"Wdebug/reload/WdebugDownReload.h"
#include	"Wdebug/WdebugDown.h"

#define		WLOG_ENABLE
#include "Wdebug/reload/WlogReload.h"
#include "Wdebug/Wlog.h"


#endif

