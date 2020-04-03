/******************************************************************************
  > File Name		: WTrmnlCtrl.h
  > Author			: dong
  > Mail			: 3235459847@qq.com
  > Created Time	: 2020年04月02日 星期四 11时55分35秒
******************************************************************************/

#ifndef __WTRMNLCTRL_H
#define __WTRMNLCTRL_H

// 前景和背景色码
// 黑色
#define		Trmnl_color_black			"0"
// 红色
#define		Trmnl_color_red				"1"
// 绿色
#define		Trmnl_color_green			"2"
// 黄色
#define		Trmnl_color_yellow			"3"
// 蓝色
#define		Trmnl_color_blue			"4"
// 紫色
#define		Trmnl_color_purple			"5"
// 深绿色
#define		Trmnl_color_btlGrn			"6"
// 白色
#define		Trmnl_color_white			"7"




//关闭所有属性
#define		Trmnl_RST		"\033[0m"
//设置高亮
#define		Trmnl_SET_HL	"\033[1m"
//设置下划线
#define		Trmnl_SET_UNDERLINE	"\03[4m"
//设置闪烁
#define		Trmnl_SET_BLINK	"\033[5m"
//设置反显
#define		Trmnl_SET_INVERT	"\033[7m"
//设置消隐
#define		Trmnl_SET_BLANK	"\033[8m"
//设置前景色
#define		Trmnl_SET_FORE(color)	"\033[3"color"m"
//设置背景色
#define		Trmnl_SET_BACKGROUND(color)	"\033[4"color"m"
//设置光标上移n行
#define		Trmnl_MOVUP(n)			"\033["n"A"
//设置光标下移n行
#define		Trmnl_MOVDOWN(n)	"\03["n"B"
//设置右移n行
#define		Trmnl_MOVRIGHT(n)	"\033["n"C"
//设置左移n行
#define		Trmnl_MOVLEFT(n)	"\033["n"D"
//设置光标位置
#define		Trmnl_MOVE(x,y)	"\033["y";"x"H"
//光标复位
#define		Trmnl_RST_CURSOR	"\033[H"
//清屏
#define		Trmnl_CLEAR			"\033[2J"
//清除光标到行尾的内容
#define		Trmnl_CLEAR_CUR_END	"\033[K"
//保存光标位置
#define		Trmnl_SAVE_curpos	"\033[s"
//恢复光标位置
#define		Trmnl_RST_curpos	"\033[u"
//隐藏光标
#define		Trmnl_HIDE_cursor	"\033[?25l"
//显示光标
#define		Trmnl_SHOW_cursor	"\33[?25h"



#endif

