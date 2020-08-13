/******************************************************************************
  > File Name		: Wdebug.h
  > Author			: dong
  > Mail			: 3235459847@qq.com
  > Created Time	: 2020年04月02日 星期四 11时46分11秒
******************************************************************************/

#ifndef __WDEBUG_H
#define __WDEBUG_H

//makefile配置Wdebug目录说明
#define	WDEBUG_MAKEFILE_OK

#include <stdio.h>
//定义debug打印输出函数，
//如需关闭所有debug信息只需注释此行
#define		WPRINT		printf
//#include "Wdebug/invalid//original/WprintOriginalInvalid.h"//包含此文件关闭所有Wdebug，包括Wlog等
//#include "Wdebug/invalid/WdebugUpInvalid.h"//包含此文件关闭向上等级控制debug
//#include "Wdebug/invalid/WdebugDownInvalid.h"//包含此文件关闭向下等级控制debug
//#include "Wdebug/invalid/WlogInvalid.h"//包含此文件关闭日志打印
//#include "Wdebug/invalid/WTrmnlCtrlInvalid.h"//包含此文件去除风格控制
//#include "Wdebug/invalid/original/WdebugOriginalInvalid.h"//包含此文件关闭Wdebug等级调试

//#include "Wdebug/invalid/level/WdebugInvalid_0.h"
//#include "Wdebug/invalid/level/WdebugInvalid_1.h"


#define		WDEBUG_LEVEL		 1
//#include "Wdebug/reload/level/WdebugReload_0.h"//重载功能
//#include "Wdebug/reload/level/WdebugReload_1.h"//重载功能
#include "Wdebug/level/Wdebug_0.h"
#include "Wdebug/level/Wdebug_1.h"

#define		WDEBUG_UP_LEVEL			2
//#include	"Wdebug/reload/WdebugUpReload.h"//重载功能
#include	"Wdebug/WdebugUp.h"

#define		WDEBUG_DOWN_LEVEL			2
//#include	"Wdebug/reload/WdebugDownReload.h"//重载功能
#include	"Wdebug/WdebugDown.h"

//#include "Wdebug/reload/WlogReload.h"//重载功能
#include "Wdebug/Wlog.h"


#endif

