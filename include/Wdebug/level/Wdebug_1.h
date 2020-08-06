/******************************************************************************
  > File Name		: Wdebug_1.h
  > Author			: dong
  > Mail			: 3235459847@qq.com
  > Created Time	: 2020年04月02日 星期四 17时17分32秒
******************************************************************************/

#ifndef __WDEBUG_1_H
#define __WDEBUG_1_H

#include "Wdebug/original/WdebugOriginal.h"

//#ifdef WDEBUG_ENABLE_1
#if WDEBUG_LEVEL		WDEBUG_LEVEL_DIR			1

//#define 	Wdebug_if_FUN_1(IF,FUN)    if (IF) {FUN}
//
//#define 	Wdebug_elif_FUN_1(elif,FUN)    else if (elif) {FUN}
//
//#define 	Wdebug_else_FUN_1(FUN)    else {FUN}
//
//#define 	Wdebug_case_FUN_1(CASE,FUN)    case CASE: {FUN} break;
//
//#define 	Wdebug_default_FUN_1(FUN)    default:FUN;break;
//
//#define 	Wdebug_pFUN_1(FUN,param)    (*FUN)param;

#define		Wdebug_1(info,...)		Wdebug(info, ##__VA_ARGS__)

#define		WdebugBuf_1(FORMAT, BUF, LENGTH, INFO, ...)	WdebugBuf(FORMAT,BUF,LENGTH, INFO, ##__VA_ARGS__);

#define		Wdebug_if_1(IF,info,...)		if (IF) { Wdebug(info, ##__VA_ARGS__) }

#define		Wdebug_else_1(info,...)		else { Wdebug(info, ##__VA_ARGS__) }

#define		Wdebug_elif_1(ELIF,info,...)		else if (ELIF) { Wdebug(info, ##__VA_ARGS__) }

#define		Wdebug_case_1(CASE,info,...)		case CASE: { Wdebug(info, ##__VA_ARGS__) break;}

#define		Wdebug_default_1(info,...)		default: { Wdebug(info, ##__VA_ARGS__) break;}

#else	

//#define 	Wdebug_if_FUN_1(IF,FUN)
//
//#define 	Wdebug_elif_FUN_1(elif,FUN)
//
//#define 	Wdebug_else_FUN_1(FUN)
//
//#define 	Wdebug_case_FUN_1(CASE,FUN)
//
//#define 	Wdebug_default_FUN_1(FUN)
//
//#define 	Wdebug_pFUN_1(FUN,param)

#define		Wdebug_1(info,...)

#define		WdebugBuf_1(FORMAT, BUF, LENGTH, INFO, ...)

#define		Wdebug_if_1(IF,info,...)

#define		Wdebug_else_1(info,...)	

#define		Wdebug_elif_1(ELIF,info,...)

#define		Wdebug_case_1(CASE,info,...)

#define		Wdebug_default_1(info,...)

#endif


#endif

