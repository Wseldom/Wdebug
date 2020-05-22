/******************************************************************************
  > File Name		: Wdebug.h
  > Author			: dong
  > Mail			: 3235459847@qq.com
  > Created Time	: 2020年04月02日 星期四 11时46分11秒
******************************************************************************/

#ifndef __WDEBUG_H
#define __WDEBUG_H

#define		WSD_DEBUG_FLAG		1
#define		WSD_DEBUG_LEVEL		 0
#include "Wdebug/level/Wdebug_0.h"
#include "Wdebug/level/Wdebug_1.h"

#define		WSD_DEBUG_UP_LEVEL			2
#define		WSD_DEBUG_UP_FLAG				2
#include	"Wdebug/WSD_debug_print_up.h"

#define		WSD_DEBUG_DOWN_LEVEL			2
#define		WSD_DEBUG_DOWN_FLAG				2
#include	"Wdebug/WSD_debug_print_down.h"

#define		WSD_LOG_FLAG		2
#include "Wdebug/WSD_log.h"
/*设置前景色*/
//黑色
#define		FGC_BLACK	Trmnl_SET_FORE(Trmnl_color_black)
//红色
#define		FGC_RED		Trmnl_SET_FORE(Trmnl_color_red)
//绿色
#define		FGC_GREEN	Trmnl_SET_FORE(Trmnl_color_green)
//黄色
#define		FGC_YELLOW	Trmnl_SET_FORE(Trmnl_color_yellow)
//蓝色
#define		FGC_BLUE	Trmnl_SET_FORE(Trmnl_color_blue)
//紫色
#define		FGC_PURPLE	Trmnl_SET_FORE(Trmnl_color_purple)
//深绿色
#define		FGC_BTLGRN	Trmnl_SET_FORE(Trmnl_color_btlGrn)
//白色
#define		FGC_WHILE	Trmnl_SET_FORE(Trmnl_color_white)

/*设置背景色*/
//黑色
#define		BKC_BLACK	Trmnl_SET_BACKGROUND(Trmnl_color_black)
//红色
#define		BKC_RED		Trmnl_SET_BACKGROUND(Trmnl_color_red)
//绿色
#define		BKC_GREEN	Trmnl_SET_BACKGROUND(Trmnl_color_green)
//黄色
#define		BKC_YELLOW	Trmnl_SET_BACKGROUND(Trmnl_color_yellow)
//蓝色
#define		BKC_BLUE	Trmnl_SET_BACKGROUND(Trmnl_color_blue)
//紫色
#define		BKC_PURPLE	Trmnl_SET_BACKGROUND(Trmnl_color_purple)
//深绿色
#define		BKC_BTLGRN	Trmnl_SET_BACKGROUND(Trmnl_color_btlGrn)
//白色
#define		BKC_WHILE	Trmnl_SET_BACKGROUND(Trmnl_color_white)


#endif

