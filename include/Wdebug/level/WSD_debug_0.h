/******************************************************************************
  > File Name		: WSD_debug_0.h
  > Author			: dong
  > Mail			: 3235459847@qq.com
  > Created Time	: 2020年04月02日 星期四 11时50分52秒
******************************************************************************/

#ifndef __WSD_DEBUG_0_H
#define __WSD_DEBUG_0_H

#include "Wdebug/WSD_debug_print.h"

//#ifdef WSD_DEBUG_ENABLE_0
#if WSD_DEBUG_LEVEL		<= 0

#define WSD_DEBUG_IF_FUN_0(IF,FUN)    if (IF) {FUN}

#define WSD_DEBUG_elif_FUN_0(elif,FUN)    else if (elif) {FUN}

#define WSD_DEBUG_else_FUN_0(FUN)    else {FUN}

#define WSD_DEBUG_case_FUN_0(CASE,FUN)    case CASE: {FUN} break;

#define WSD_DEBUG_default_FUN_0(FUN)    default:FUN;break;

#define WSD_DEBUG_pFUN_0(FUN,param)    (*FUN)param;

#define		WSD_DEBUG_INFO_0(info,...)		WSD_DEBUG_INFO(info, ##__VA_ARGS__)

#define		WSD_DEBUG_if_INFO_0(IF,info,...)		if (IF) { WSD_DEBUG_INFO(info, ##__VA_ARGS__) }

#define		WSD_DEBUG_else_INFO_0(info,...)		else { WSD_DEBUG_INFO(info, ##__VA_ARGS__) }

#define		WSD_DEBUG_elif_INFO_0(ELIF,info,...)		else if (ELIF) { WSD_DEBUG_INFO(info, ##__VA_ARGS__) }

#define		WSD_DEBUG_case_INFO_0(CASE,info,...)		case CASE: { WSD_DEBUG_INFO(info, ##__VA_ARGS__) break;}

#define		WSD_DEBUG_default_INFO_0(info,...)		default: { WSD_DEBUG_INFO(info, ##__VA_ARGS__) break;}

#else	

#define WSD_DEBUG_IF_FUN_0(IF,FUN) 

#define WSD_DEBUG_elif_FUN_0(elif,FUN)

#define WSD_DEBUG_else_FUN_0(FUN)

#define WSD_DEBUG_case_FUN_0(CASE,FUN)

#define WSD_DEBUG_default_FUN_0(FUN)

#define WSD_DEBUG_pFUN_0(FUN,param)

#define		WSD_DEBUG_INFO_0(info,...)

#define		WSD_DEBUG_if_INFO_0(IF,info,...)

#define		WSD_DEBUG_else_INFO_0(info,...)	

#define		WSD_DEBUG_elif_INFO_0(ELIF,info,...)

#define		WSD_DEBUG_case_INFO_0(CASE,info,...)

#define		WSD_DEBUG_default_INFO_0(info,...)

#endif


#endif

