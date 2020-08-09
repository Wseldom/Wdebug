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
#define		Trmnl_color_black
#endif // !Trmnl_color_black
// 红色
#ifndef Trmnl_color_red
#define		Trmnl_color_red
#endif // !Trmnl_color_red
// 绿色
#ifndef Trmnl_color_green
#define		Trmnl_color_green
#endif // !Trmnl_color_green
// 黄色
#ifndef Trmnl_color_yellow
#define		Trmnl_color_yellow
#endif // !Trmnl_color_yellow
// 蓝色
#ifndef Trmnl_color_blue
#define		Trmnl_color_blue
#endif // !Trmnl_color_blue
// 紫色
#ifndef Trmnl_color_purple
#define		Trmnl_color_purple
#endif // !Trmnl_color_purple
// 深绿色
#ifndef Trmnl_color_btlGrn
#define		Trmnl_color_btlGrn
#endif // !Trmnl_color_btlGrn
// 白色
#ifndef Trmnl_color_white
#define		Trmnl_color_white
#endif // !Trmnl_color_white



//关闭所有属性
#ifndef Trmnl_RST
#define		Trmnl_RST
#endif // !Trmnl_RST
//设置高亮
#ifndef Trmnl_SET_HL
#define		Trmnl_SET_HL
#endif // !Trmnl_SET_HL
//设置下划线
#ifndef Trmnl_SET_UNDERLINE
#define		Trmnl_SET_UNDERLINE
#endif // !Trmnl_SET_UNDERLINE
//设置闪烁
#ifndef Trmnl_SET_BLINK
#define		Trmnl_SET_BLINK
#endif // !Trmnl_SET_BLINK
//设置反显
#ifndef Trmnl_SET_INVERT
#define		Trmnl_SET_INVERT
#endif // !Trmnl_SET_INVERT
//设置消隐
#ifndef Trmnl_SET_BLANK
#define		Trmnl_SET_BLANK
#endif // !Trmnl_SET_BLANK
//设置前景色
#ifndef Trmnl_SET_FORE
#define		Trmnl_SET_FORE(COLOR)
#endif // !Trmnl_SET_FORE
//设置背景色
#ifndef Trmnl_SET_BACKGROUND
#define		Trmnl_SET_BACKGROUND(COLOR)
#endif // !Trmnl_SET_BACKGROUND
//设置光标上移n行
#ifndef Trmnl_MOVUP
#define		Trmnl_MOVUP(N)
#endif // !Trmnl_MOVUP
//设置光标下移n行
#ifndef Trmnl_MOVDOWN
#define		Trmnl_MOVDOWN(N)
#endif // !Trmnl_MOVDOWN
//设置右移n行
#ifndef Trmnl_MOVRIGHT
#define		Trmnl_MOVRIGHT(N)
#endif // !Trmnl_MOVRIGHT
//设置左移n行
#ifndef Trmnl_MOVLEFT
#define		Trmnl_MOVLEFT(N)
#endif // !Trmnl_MOVLEFT
//设置光标位置
#ifndef Trmnl_MOVE
#define		Trmnl_MOVE(X,Y)
#endif // !Trmnl_MOVE
//光标复位
#ifndef Trmnl_RST_CURSOR
#define		Trmnl_RST_CURSOR
#endif // !Trmnl_RST_CURSOR
//清屏
#ifndef Trmnl_CLEAR
#define		Trmnl_CLEAR
#endif // !Trmnl_CLEAR
//清除光标到行尾的内容
#ifndef Trmnl_CLEAR_CUR_END
#define		Trmnl_CLEAR_CUR_END
#endif // !Trmnl_CLEAR_CUR_END
//保存光标位置
#ifndef Trmnl_SAVE_curpos
#define		Trmnl_SAVE_curpos
#endif // !Trmnl_SAVE_curpos
//恢复光标位置
#ifndef Trmnl_RST_curpos
#define		Trmnl_RST_curpos
#endif // !Trmnl_RST_curpos
//隐藏光标
#ifndef Trmnl_HIDE_cursor
#define		Trmnl_HIDE_cursor
#endif // Trmnl_HIDE_cursor
//显示光标
#ifndef Trmnl_SHOW_cursor
#define		Trmnl_SHOW_cursor
#endif // !Trmnl_SHOW_cursor

/*设置前景色*/
//黑色
#ifndef Trmnl_FGC_BLACK
#define		Trmnl_FGC_BLACK
#endif // !Trmnl_FGC_BLACK
//红色
#ifndef Trmnl_FGC_RED
#define		Trmnl_FGC_RED
#endif // !Trmnl_FGC_RED
//绿色
#ifndef Trmnl_FGC_GREEN
#define		Trmnl_FGC_GREEN
#endif // !Trmnl_FGC_GREEN
//黄色
#ifndef Trmnl_FGC_YELLOW
#define		Trmnl_FGC_YELLOW
#endif // !Trmnl_FGC_YELLOW
//蓝色
#ifndef Trmnl_FGC_BLUE
#define		Trmnl_FGC_BLUE
#endif // !Trmnl_FGC_BLUE
//紫色
#ifndef Trmnl_FGC_PURPLE
#define		Trmnl_FGC_PURPLE
#endif // !Trmnl_FGC_PURPLE
//深绿色
#ifndef Trmnl_FGC_BTLGRN
#define		Trmnl_FGC_BTLGRN
#endif // !Trmnl_FGC_BTLGRN
//白色
#ifndef Trmnl_FGC_WHILE
#define		Trmnl_FGC_WHILE
#endif // !Trmnl_FGC_WHILE

/*设置背景色*/
//黑色
#ifndef Trmnl_BKC_BLACK
#define		Trmnl_BKC_BLACK
#endif // !Trmnl_BKC_BLACK
//红色
#ifndef Trmnl_BKC_RED
#define		Trmnl_BKC_RED
#endif // !Trmnl_BKC_RED
//绿色
#ifndef Trmnl_BKC_GREEN
#define		Trmnl_BKC_GREEN
#endif // !Trmnl_BKC_GREEN
//黄色
#ifndef Trmnl_BKC_YELLOW
#define		Trmnl_BKC_YELLOW
#endif // !Trmnl_BKC_YELLOW
//蓝色
#ifndef Trmnl_BKC_BLUE
#define		Trmnl_BKC_BLUE
#endif // !Trmnl_BKC_BLUE
//紫色
#ifndef Trmnl_BKC_PURPLE
#define		Trmnl_BKC_PURPLE
#endif // !Trmnl_BKC_PURPLE
//深绿色
#ifndef Trmnl_BKC_BTLGRN
#define		Trmnl_BKC_BTLGRN
#endif // !Trmnl_BKC_BTLGRN
//白色
#ifndef Trmnl_BKC_WHILE
#define		Trmnl_BKC_WHILE
#endif // !Trmnl_BKC_WHILE


#endif

