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
	WSD_DEBUG_INFO( "debug测试:level = 0")
	WSD_DEBUG_if_INFO_0(aa == 123, "debug测试:%d", aa)
	WSD_DEBUG_INFO( "debug测试:level = 1")
	WSD_DEBUG_if_INFO_1(aa == 123, "debug测试:%d", aa)
}


