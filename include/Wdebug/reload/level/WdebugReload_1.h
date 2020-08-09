/******************************************************************************
  > File Name		: WdebugReload_1.h
  > Author			: dong
  > Mail			: 3235459847@qq.com
  > Created Time	: 2020年04月02日 星期四 17时17分32秒
******************************************************************************/

#ifndef __WDEBUGRELOAD_1_H
#define __WDEBUGRELOAD_1_H

#ifdef WDEBUG_MAKEFILE_OK
#include "Wdebug/reload/original/WdebugOriginalReload.h"
#else
#include "../original/WdebugOriginalReload.h"
#endif // WDEBUG_MAKEFILE_OK


//#ifdef WDEBUG_ENABLE_1
#if WDEBUG_LEVEL		WDEBUG_LEVEL_DIR			1

//#ifndef Wdebug_if_FUN_1
//#define 	Wdebug_if_FUN_1(IF,FUN)    if (IF) {FUN}
//#endif // !Wdebug_if_FUN_1
//
//#ifndef Wdebug_elif_FUN_1
//#define 	Wdebug_elif_FUN_1(elif,FUN)    else if (elif) {FUN}
//#endif // !Wdebug_elif_FUN_1
//
//#ifndef Wdebug_else_FUN_1
//#define 	Wdebug_else_FUN_1(FUN)    else {FUN}
//#endif // !Wdebug_else_FUN_1
//
//#ifndef Wdebug_case_FUN_1
//#define 	Wdebug_case_FUN_1(CASE,FUN)    case CASE: {FUN} break;
//#endif // !Wdebug_case_FUN_1
//
//#ifndef Wdebug_default_FUN_1
//#define 	Wdebug_default_FUN_1(FUN)    default:FUN;break;
//#endif // !Wdebug_default_FUN_1
//
//#ifndef Wdebug_pFUN_1
//#define 	Wdebug_pFUN_1(FUN,param)    (*FUN)param;
//#endif // !Wdebug_pFUN_1

#ifndef Wdebug_1
#define		Wdebug_1(INFO,...)		Wdebug(INFO, ##__VA_ARGS__)
#endif // !Wdebug_1

#ifndef WdebugBuf_1
#define		WdebugBuf_1(FORMAT, BUF, LENGTH, INFO, ...)	WdebugBuf(FORMAT,BUF,LENGTH, INFO, ##__VA_ARGS__);
#endif // !WdebugBuf_1

#ifndef Wdebug_if_1
#define		Wdebug_if_1(IF,INFO,...)		if (IF) { Wdebug(INFO, ##__VA_ARGS__) }
#endif // !Wdebug_if_1

#ifndef Wdebug_else_1
#define		Wdebug_else_1(INFO,...)		else { Wdebug(INFO, ##__VA_ARGS__) }
#endif // !Wdebug_else_1

#ifndef Wdebug_elif_1
#define		Wdebug_elif_1(ELIF,INFO,...)		else if (ELIF) { Wdebug(INFO, ##__VA_ARGS__) }
#endif // !Wdebug_elif_1

#ifndef Wdebug_case_1
#define		Wdebug_case_1(CASE,INFO,...)		case CASE: { Wdebug(INFO, ##__VA_ARGS__) break;}
#endif // !Wdebug_case_1

#ifndef Wdebug_default_1
#define		Wdebug_default_1(INFO,...)		default: { Wdebug(INFO, ##__VA_ARGS__) break;}
#endif // !Wdebug_default_1

#endif


#endif

