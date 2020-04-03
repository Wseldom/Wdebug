/******************************************************************************
  > File Name		: Wdebug_1.h
  > Author			: dong
  > Mail			: 3235459847@qq.com
  > Created Time	: 2020年04月02日 星期四 17时17分32秒
******************************************************************************/

#ifndef __WDEBUG_1_H
#define __WDEBUG_1_H

#include "Wdebug/WSD_debug_print.h"

//#ifdef WSD_DEBUG_ENABLE_1
#if WSD_DEBUG_LEVEL		<= 1

#define WSD_DEBUG_IF_FUN_1(IF,FUN)    if (IF) {FUN}

#define WSD_DEBUG_elif_FUN_1(elif,FUN)    else if (elif) {FUN}

#define WSD_DEBUG_else_FUN_1(FUN)    else {FUN}

#define WSD_DEBUG_case_FUN_1(CASE,FUN)    case CASE: {FUN} break;

#define WSD_DEBUG_default_FUN_1(FUN)    default:FUN;break;

#define WSD_DEBUG_pFUN_1(FUN,param)    (*FUN)param;

#define		WSD_DEBUG_INFO_1(info,...)		WSD_DEBUG_INFO(info, ##__VA_ARGS__)

#define		WSD_DEBUG_if_INFO_1(IF,info,...)		if (IF) { WSD_DEBUG_INFO(info, ##__VA_ARGS__) }

#define		WSD_DEBUG_else_INFO_1(info,...)		else { WSD_DEBUG_INFO(info, ##__VA_ARGS__) }

#define		WSD_DEBUG_elif_INFO_1(ELIF,info,...)		else if (ELIF) { WSD_DEBUG_INFO(info, ##__VA_ARGS__) }

#define		WSD_DEBUG_case_INFO_1(CASE,info,...)		case CASE: { WSD_DEBUG_INFO(info, ##__VA_ARGS__) break;}

#define		WSD_DEBUG_default_INFO_1(info,...)		default: { WSD_DEBUG_INFO(info, ##__VA_ARGS__) break;}

#else	

#define WSD_DEBUG_IF_FUN_1(IF,FUN)

#define WSD_DEBUG_elif_FUN_1(elif,FUN)

#define WSD_DEBUG_else_FUN_1(FUN)

#define WSD_DEBUG_case_FUN_1(CASE,FUN)

#define WSD_DEBUG_default_FUN_1(FUN)

#define WSD_DEBUG_pFUN_1(FUN,param)

#define		WSD_DEBUG_INFO_1(info,...)

#define		WSD_DEBUG_if_INFO_1(IF,info,...)

#define		WSD_DEBUG_else_INFO_1(info,...)	

#define		WSD_DEBUG_elif_INFO_1(ELIF,info,...)

#define		WSD_DEBUG_case_INFO_1(CASE,info,...)

#define		WSD_DEBUG_default_INFO_1(info,...)

#endif


#endif

