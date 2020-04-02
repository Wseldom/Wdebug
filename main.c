/******************************************************************************
  > File Name		: main.c
  > Author			: dong
  > Mail			: 3235459847@qq.com
  > Created Time	: 2020年04月02日 星期四 11时44分59秒
******************************************************************************/
#include "WSD_debug.h"

#define func___(FUN)    {FUN}
#define pfunc___(FUN,param)    (*FUN)param;

void test0(void)
{
	printf("test\r\n");
}
void test1(int aa, char bb)
{
	printf("test:aa = %d, bb = %c\r\n", aa, bb);
}

void test2(int aa)
{
	printf("test:aa = %d\r\n", aa);
}


int main(void)
{
	char bb = 'x';
	int aa = 123;
	WSD_DEBUG_INFO( "debug测试:level = 0")
	WSD_DEBUG_if_INFO_0(aa == 123, "debug测试:%d", aa)
	WSD_DEBUG_INFO( "debug测试:level = 1")
	func___(aa = 0; WSD_DEBUG_INFO("aa = %d", aa) aa = 12; WSD_DEBUG_INFO("aa = %d", aa))
	WSD_DEBUG_if_INFO_1(aa == 123, "debug测试:%d", aa)
	func___(
			aa += 3;
			WSD_DEBUG_INFO("test:aa=%d", aa)
			aa += 1234;
			WSD_DEBUG_INFO("test:aa=%d", aa)
			);
	pfunc___(test0,());
	pfunc___(test1, (aa, bb));
	pfunc___(test2, (aa));
}


