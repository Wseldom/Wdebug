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
#ifndef WPRINT
#define		WPRINT		printf
#endif // !WPRINT

//#include "Wdebug/invalid//original/WprintOriginalInvalid.h"//包含此文件关闭所有Wdebug，包括Wlog等
//#include "Wdebug/invalid/WdebugUpInvalid.h"//包含此文件关闭向上等级控制debug
//#include "Wdebug/invalid/WdebugDownInvalid.h"//包含此文件关闭向下等级控制debug
//#include "Wdebug/invalid/WlogInvalid.h"//包含此文件关闭日志打印
//#include "Wdebug/invalid/WTrmnlCtrlInvalid.h"//包含此文件去除风格控制
//#include "Wdebug/invalid/original/WdebugOriginalInvalid.h"//包含此文件关闭Wdebug等级调试

//#include "Wdebug/invalid/level/WdebugInvalid_0.h"
//#include "Wdebug/invalid/level/WdebugInvalid_1.h"

//#define WDEBUG_DISABLE_HEAD_TAIL
#ifndef WDEBUG_DISABLE_HEAD_TAIL
#ifndef WDEBUG_HEAD
#define		WDEBUG_HEAD				"[func:%s][line:%d]["
#endif // !WDEBUG_HEAD
#ifndef WDEBUG_TAIL
#define		WDEBUG_TAIL				"]"
#endif // !WDEBUG_TAIL
#ifndef WDEBUG_BUF_HEAD
#define		WDEBUG_BUF_HEAD			"[func:%s][line:%d]{"
#endif // !WDEBUG_BUF_HEAD
#ifndef WDEBUG_BUF_TAIL
#define		WDEBUG_BUF_TAIL			"}"
#endif // !WDEBUG_BUF_TAIL
#ifndef WDEBUG_PARAM
#define		WDEBUG_PARAM			,__func__, __LINE__
#endif // !WDEBUG_PARAM
#ifndef WDEBUG_BUF_PARAM
#define		WDEBUG_BUF_PARAM		,__func__, __LINE__
#endif // !WDEBUG_BUF_PARAM
#else
#ifndef WDEBUG_HEAD
#define		WDEBUG_HEAD				
#endif // !WDEBUG_HEAD
#ifndef WDEBUG_TAIL
#define		WDEBUG_TAIL				
#endif // !WDEBUG_TAIL
#ifndef WDEBUG_BUF_HEAD
#define		WDEBUG_BUF_HEAD			
#endif // !WDEBUG_BUF_HEAD
#ifndef WDEBUG_BUF_TAIL
#define		WDEBUG_BUF_TAIL			
#endif // !WDEBUG_BUF_TAIL
#ifndef WDEBUG_PARAM
#define		WDEBUG_PARAM			
#endif // !WDEBUG_PARAM
#ifndef WDEBUG_BUF_PARAM
#define		WDEBUG_BUF_PARAM		
#endif // !WDEBUG_BUF_PARAM
#endif // !WDEBUG_DISABLE_HEAD_TAIL



#ifndef WDEBUG_LEVEL
#define		WDEBUG_LEVEL		 0
#endif
//#include "Wdebug/reload/level/WdebugReload_0.h"//重载功能
//#include "Wdebug/reload/level/WdebugReload_1.h"//重载功能
#include "Wdebug/level/Wdebug_0.h"
#include "Wdebug/level/Wdebug_1.h"

#ifndef WDEBUG_UP_LEVEL
#define		WDEBUG_UP_LEVEL			2
#endif
//#include	"Wdebug/reload/WdebugUpReload.h"//重载功能
#include	"Wdebug/WdebugUp.h"

#ifndef WDEBUG_DOWN_LEVEL
#define		WDEBUG_DOWN_LEVEL			2
#endif // !WDEBUG_DOWN_LEVEL
//#include	"Wdebug/reload/WdebugDownReload.h"//重载功能
#include	"Wdebug/WdebugDown.h"

//#include "Wdebug/reload/WlogReload.h"//重载功能
#include "Wdebug/Wlog.h"


#endif

