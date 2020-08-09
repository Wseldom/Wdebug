/******************************************************************************
  > File Name		: WdebugReload_0.h
  > Author			: dong
  > Mail			: 3235459847@qq.com
  > Created Time	: 2020年04月02日 星期四 11时50分52秒
******************************************************************************/

#ifndef __WDEBUGRELOAD_0_H
#define __WDEBUGRELOAD_0_H

#ifdef WDEBUG_MAKEFILE_OK
#include "Wdebug/reload/original/WdebugOriginalReload.h"
#else
#include "../original/WdebugOriginalReload.h"
#endif // WDEBUG_MAKEFILE_OK

//#ifdef WDEBUG_ENABLE_0
#if WDEBUG_LEVEL		WDEBUG_LEVEL_DIR		0

//#ifndef Wdebug_if_FUN_0
//#define 	Wdebug_if_FUN_0(IF,FUN)    if (IF) {FUN}
//#endif // !Wdebug_if_FUN_0
//
//#ifndef Wdebug_elif_FUN_0
//#define 	Wdebug_elif_FUN_0(elif,FUN)    else if (elif) {FUN}
//#endif // !Wdebug_elif_FUN_0
//
//#ifndef Wdebug_else_FUN_0
//#define 	Wdebug_else_FUN_0(FUN)    else {FUN}
//#endif // !Wdebug_else_FUN_0
//
//#ifndef Wdebug_case_FUN_0
//#define 	Wdebug_case_FUN_0(CASE,FUN)    case CASE: {FUN} break;
//#endif // !Wdebug_case_FUN_0
//
//#ifndef Wdebug_default_FUN_0
//#define 	Wdebug_default_FUN_0(FUN)    default:FUN;break;
//#endif // !Wdebug_default_FUN_0
//
//#ifndef Wdebug_pFUN_0
//#define 	Wdebug_pFUN_0(FUN,param)    (*FUN)param;
//#endif // !Wdebug_pFUN_0

#ifndef Wdebug_0
#define		Wdebug_0(INFO,...)		Wdebug(INFO , ##__VA_ARGS__)
#endif // !Wdebug_0

#ifndef WdebugBuf_0
#define		WdebugBuf_0(FORMAT, BUF, LENGTH, INFO, ...)	WdebugBuf(FORMAT,BUF,LENGTH,INFO,##__VA_ARGS__);
#endif // !WdebugBuf_0

#ifndef Wdebug_if_0
#define		Wdebug_if_0(IF,INFO,...)		if (IF) { Wdebug(INFO, ##__VA_ARGS__) }
#endif // !Wdebug_if_0

#ifndef Wdebug_else_0
#define		Wdebug_else_0(INFO,...)		else { Wdebug(INFO, ##__VA_ARGS__) }
#endif // !Wdebug_else_0

#ifndef Wdebug_elif_0
#define		Wdebug_elif_0(ELIF,INFO,...)		else if (ELIF) { Wdebug(INFO, ##__VA_ARGS__) }
#endif // !Wdebug_elif_0

#ifndef Wdebug_case_0
#define		Wdebug_case_0(CASE,INFO,...)		case CASE: { Wdebug(INFO, ##__VA_ARGS__) break;}
#endif // !Wdebug_case_0

#ifndef Wdebug_default_0
#define		Wdebug_default_0(INFO,...)		default: { Wdebug(INFO, ##__VA_ARGS__) break;}
#endif // !Wdebug_default_0

#endif


#endif

