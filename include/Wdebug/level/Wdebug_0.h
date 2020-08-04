/******************************************************************************
  > File Name		: Wdebug_0.h
  > Author			: dong
  > Mail			: 3235459847@qq.com
  > Created Time	: 2020年04月02日 星期四 11时50分52秒
******************************************************************************/

#ifndef __WDEBUG_0_H
#define __WDEBUG_0_H

#include "Wdebug/Wprint.h"

//#ifdef WDEBUG_ENABLE_0
#if WDEBUG_LEVEL		<= 0

#define 	Wdebug_if_FUN_0(IF,FUN)    if (IF) {FUN}

#define 	Wdebug_elif_FUN_0(elif,FUN)    else if (elif) {FUN}

#define 	Wdebug_else_FUN_0(FUN)    else {FUN}

#define 	Wdebug_case_FUN_0(CASE,FUN)    case CASE: {FUN} break;

#define 	Wdebug_default_FUN_0(FUN)    default:FUN;break;

#define 	Wdebug_pFUN_0(FUN,param)    (*FUN)param;

#define		Wdebug_INFO_0(info,...)		WDEBUG_INFO(info, ##__VA_ARGS__)

#define		Wdebug_BUF_0(FORMAT, BUF, LENGTH, INFO, ...)	WDEBUG_BUF(FORMAT,BUF,LENGTH,INFO,##__VA_ARGS__);

#define		Wdebug_if_INFO_0(IF,info,...)		if (IF) { WDEBUG_INFO(info, ##__VA_ARGS__) }

#define		Wdebug_else_INFO_0(info,...)		else { WDEBUG_INFO(info, ##__VA_ARGS__) }

#define		Wdebug_elif_INFO_0(ELIF,info,...)		else if (ELIF) { WDEBUG_INFO(info, ##__VA_ARGS__) }

#define		Wdebug_case_INFO_0(CASE,info,...)		case CASE: { WDEBUG_INFO(info, ##__VA_ARGS__) break;}

#define		Wdebug_default_INFO_0(info,...)		default: { WDEBUG_INFO(info, ##__VA_ARGS__) break;}

#else	

#define 	Wdebug_if_FUN_0(IF,FUN) 

#define 	Wdebug_elif_FUN_0(elif,FUN)

#define 	Wdebug_else_FUN_0(FUN)

#define 	Wdebug_case_FUN_0(CASE,FUN)

#define 	Wdebug_default_FUN_0(FUN)

#define 	Wdebug_pFUN_0(FUN,param)

#define		Wdebug_INFO_0(info,...)

#define		Wdebug_BUF_0(FORMAT, BUF, LENGTH, INFO, ...)

#define		Wdebug_if_INFO_0(IF,info,...)

#define		Wdebug_else_INFO_0(info,...)	

#define		Wdebug_elif_INFO_0(ELIF,info,...)

#define		Wdebug_case_INFO_0(CASE,info,...)

#define		Wdebug_default_INFO_0(info,...)

#endif


#endif

