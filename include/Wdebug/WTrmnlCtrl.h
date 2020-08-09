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
#ifndef Trmnl_color_black
#define		Trmnl_color_black			"0"
#endif // !Trmnl_color_black
// 红色
#ifndef Trmnl_color_red
#define		Trmnl_color_red				"1"
#endif // !Trmnl_color_red
// 绿色
#ifndef Trmnl_color_green
#define		Trmnl_color_green			"2"
#endif // !Trmnl_color_green
// 黄色
#ifndef Trmnl_color_yellow
#define		Trmnl_color_yellow			"3"
#endif // !Trmnl_color_yellow
// 蓝色
#ifndef Trmnl_color_blue
#define		Trmnl_color_blue			"4"
#endif // !Trmnl_color_blue
// 紫色
#ifndef Trmnl_color_purple
#define		Trmnl_color_purple			"5"
#endif // !Trmnl_color_purple
// 深绿色
#ifndef Trmnl_color_btlGrn
#define		Trmnl_color_btlGrn			"6"
#endif // !Trmnl_color_btlGrn
// 白色
#ifndef Trmnl_color_white
#define		Trmnl_color_white			"7"
#endif // !Trmnl_color_white



//关闭所有属性
#ifndef Trmnl_RST
#define		Trmnl_RST		"\033[0m"
#endif // !Trmnl_RST
//设置高亮
#ifndef Trmnl_SET_HL
#define		Trmnl_SET_HL	"\033[1m"
#endif // !Trmnl_SET_HL
//设置下划线
#ifndef Trmnl_SET_UNDERLINE
#define		Trmnl_SET_UNDERLINE	"\03[4m"
#endif // !Trmnl_SET_UNDERLINE
//设置闪烁
#ifndef Trmnl_SET_BLINK
#define		Trmnl_SET_BLINK	"\033[5m"
#endif // !Trmnl_SET_BLINK
//设置反显
#ifndef Trmnl_SET_INVERT
#define		Trmnl_SET_INVERT	"\033[7m"
#endif // !Trmnl_SET_INVERT
//设置消隐
#ifndef Trmnl_SET_BLANK
#define		Trmnl_SET_BLANK	"\033[8m"
#endif // !Trmnl_SET_BLANK
//设置前景色
#ifndef Trmnl_SET_FORE
#define		Trmnl_SET_FORE(COLOR)	"\033[3"COLOR"m"
#endif // !Trmnl_SET_FORE
//设置背景色
#ifndef Trmnl_SET_BACKGROUND
#define		Trmnl_SET_BACKGROUND(COLOR)	"\033[4"COLOR"m"
#endif // !Trmnl_SET_BACKGROUND
//设置光标上移n行
#ifndef Trmnl_MOVUP
#define		Trmnl_MOVUP(N)			"\033["N"A"
#endif // !Trmnl_MOVUP
//设置光标下移n行
#ifndef Trmnl_MOVDOWN
#define		Trmnl_MOVDOWN(N)	"\03["N"B"
#endif // !Trmnl_MOVDOWN
//设置右移n行
#ifndef Trmnl_MOVRIGHT
#define		Trmnl_MOVRIGHT(N)	"\033["N"C"
#endif // !Trmnl_MOVRIGHT
//设置左移n行
#ifndef Trmnl_MOVLEFT
#define		Trmnl_MOVLEFT(N)	"\033["N"D"
#endif // !Trmnl_MOVLEFT
//设置光标位置
#ifndef Trmnl_MOVE
#define		Trmnl_MOVE(X,Y)	"\033["Y";"X"H"
#endif // !Trmnl_MOVE
//光标复位
#ifndef Trmnl_RST_CURSOR
#define		Trmnl_RST_CURSOR	"\033[H"
#endif // !Trmnl_RST_CURSOR
//清屏
#ifndef Trmnl_CLEAR
#define		Trmnl_CLEAR			"\033[2J"
#endif // !Trmnl_CLEAR
//清除光标到行尾的内容
#ifndef Trmnl_CLEAR_CUR_END
#define		Trmnl_CLEAR_CUR_END	"\033[K"
#endif // !Trmnl_CLEAR_CUR_END
//保存光标位置
#ifndef Trmnl_SAVE_curpos
#define		Trmnl_SAVE_curpos	"\033[s"
#endif // !Trmnl_SAVE_curpos
//恢复光标位置
#ifndef Trmnl_RST_curpos
#define		Trmnl_RST_curpos	"\033[u"
#endif // !Trmnl_RST_curpos
//隐藏光标
#ifndef Trmnl_HIDE_cursor
#define		Trmnl_HIDE_cursor	"\033[?25l"
#endif // Trmnl_HIDE_cursor
//显示光标
#ifndef Trmnl_SHOW_cursor
#define		Trmnl_SHOW_cursor	"\33[?25h"
#endif // !Trmnl_SHOW_cursor

/*设置前景色*/
//黑色
#ifndef Trmnl_FGC_BLACK
#define		Trmnl_FGC_BLACK		Trmnl_SET_FORE(Trmnl_color_black)
#endif // !Trmnl_FGC_BLACK
//红色
#ifndef Trmnl_FGC_RED
#define		Trmnl_FGC_RED		Trmnl_SET_FORE(Trmnl_color_red)
#endif // !Trmnl_FGC_RED
//绿色
#ifndef Trmnl_FGC_GREEN
#define		Trmnl_FGC_GREEN		Trmnl_SET_FORE(Trmnl_color_green)
#endif // !Trmnl_FGC_GREEN
//黄色
#ifndef Trmnl_FGC_YELLOW
#define		Trmnl_FGC_YELLOW	Trmnl_SET_FORE(Trmnl_color_yellow)
#endif // !Trmnl_FGC_YELLOW
//蓝色
#ifndef Trmnl_FGC_BLUE
#define		Trmnl_FGC_BLUE		Trmnl_SET_FORE(Trmnl_color_blue)
#endif // !Trmnl_FGC_BLUE
//紫色
#ifndef Trmnl_FGC_PURPLE
#define		Trmnl_FGC_PURPLE	Trmnl_SET_FORE(Trmnl_color_purple)
#endif // !Trmnl_FGC_PURPLE
//深绿色
#ifndef Trmnl_FGC_BTLGRN
#define		Trmnl_FGC_BTLGRN	Trmnl_SET_FORE(Trmnl_color_btlGrn)
#endif // !Trmnl_FGC_BTLGRN
//白色
#ifndef Trmnl_FGC_WHILE
#define		Trmnl_FGC_WHILE		Trmnl_SET_FORE(Trmnl_color_white)
#endif // !Trmnl_FGC_WHILE

/*设置背景色*/
//黑色
#ifndef Trmnl_BKC_BLACK
#define		Trmnl_BKC_BLACK		Trmnl_SET_BACKGROUND(Trmnl_color_black)
#endif // !Trmnl_BKC_BLACK
//红色
#ifndef Trmnl_BKC_RED
#define		Trmnl_BKC_RED		Trmnl_SET_BACKGROUND(Trmnl_color_red)
#endif // !Trmnl_BKC_RED
//绿色
#ifndef Trmnl_BKC_GREEN
#define		Trmnl_BKC_GREEN		Trmnl_SET_BACKGROUND(Trmnl_color_green)
#endif // !Trmnl_BKC_GREEN
//黄色
#ifndef Trmnl_BKC_YELLOW
#define		Trmnl_BKC_YELLOW	Trmnl_SET_BACKGROUND(Trmnl_color_yellow)
#endif // !Trmnl_BKC_YELLOW
//蓝色
#ifndef Trmnl_BKC_BLUE
#define		Trmnl_BKC_BLUE		Trmnl_SET_BACKGROUND(Trmnl_color_blue)
#endif // !Trmnl_BKC_BLUE
//紫色
#ifndef Trmnl_BKC_PURPLE
#define		Trmnl_BKC_PURPLE	Trmnl_SET_BACKGROUND(Trmnl_color_purple)
#endif // !Trmnl_BKC_PURPLE
//深绿色
#ifndef Trmnl_BKC_BTLGRN
#define		Trmnl_BKC_BTLGRN	Trmnl_SET_BACKGROUND(Trmnl_color_btlGrn)
#endif // !Trmnl_BKC_BTLGRN
//白色
#ifndef Trmnl_BKC_WHILE
#define		Trmnl_BKC_WHILE		Trmnl_SET_BACKGROUND(Trmnl_color_white)
#endif // !Trmnl_BKC_WHILE


#endif

