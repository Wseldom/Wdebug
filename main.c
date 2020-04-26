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
	Wdebug_BUF_0("%.2X", buf, sizeof(buf));
	Wdebug_INFO_0("debug测试:level = 0");
	Wdebug_if_INFO_0(aa == 123, "debug测试:%d", aa);
	Wdebug_INFO_0("debug测试:level = 1");
	Wdebug_if_INFO_1(aa == 123, "debug测试:%d", aa);
}


