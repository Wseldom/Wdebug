/******************************************************************************
  > File Name		: main.c
  > Author			: dong
  > Mail			: 3235459847@qq.com
  > Created Time	: 2020年04月02日 星期四 11时44分59秒
******************************************************************************/
#include "Wdebug.h"

int main(void)
{
	int aa = 123;
	unsigned char buf[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	WdebugBuf_0("%.2X", buf, sizeof(buf), "buf data:");
	Wdebug_0("debug测试:level = 0");
	Wdebug_if_0(aa == 123, "debug测试:%d", aa);
	Wdebug_0("debug测试:level = 1");
	Wdebug_if_1(aa == 123, "debug测试:%d", aa);


	WdebugUp(1, "%s", "升序等级测试!");
	WdebugUp(3, "%s 当前等级为：%d", "升序等级测试失败!", WDEBUG_UP_LEVEL);

	WdebugDown(3, "%s", "降序等级测试!");
	WdebugDown(1, "%s 当前等级为：%d", "将徐等级测试失败!", WDEBUG_UP_LEVEL);

	Wlog("打印日志");
	WlogStyle(Trmnl_FGC_BLUE, "指定风格日志");
	Werr("打印报错日志");
	Walarm("打印警告");
}


