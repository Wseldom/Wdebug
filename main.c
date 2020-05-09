/******************************************************************************
  > File Name		: main.c
  > Author			: dong
  > Mail			: 3235459847@qq.com
  > Created Time	: 2020年04月02日 星期四 11时44分59秒
******************************************************************************/
#include "Wdebug.h"


#define		WSD_DEBUG_BUF_XX(FORMAT,BUF,LENGTH,info,...)		printf(Trmnl_RST WSD_DEBUG_HEAD_ATTR "[文件:%s][时间:%s][日期:%s][函数:%s][行:%d]" "{" WSD_DEBUG_INFO_ATTR info "\r\n",__FILE__, __TIME__, __DATE__, __func__, __LINE__, ##__VA_ARGS__); \
	{\
		int WSD_DEBUG_BUF_LEN; \
		for (WSD_DEBUG_BUF_LEN = 0; WSD_DEBUG_BUF_LEN < LENGTH; ++WSD_DEBUG_BUF_LEN) { \
			printf (FORMAT "  ", BUF[WSD_DEBUG_BUF_LEN]); \
		}\
		printf(Trmnl_SET_FORE(Trmnl_color_yellow) "\r\n}\r\n" Trmnl_RST);\
	}


int main(void)
{
	int aa = 123;
	unsigned char buf[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	Wdebug_BUF_0("%.2X", buf, sizeof(buf), "buf data:");
	Wdebug_INFO_0("debug测试:level = 0");
	Wdebug_if_INFO_0(aa == 123, "debug测试:%d", aa);
	Wdebug_INFO_0("debug测试:level = 1");
	Wdebug_if_INFO_1(aa == 123, "debug测试:%d", aa);
	WSD_DEBUG_BUF_XX("%.2X", buf, sizeof(buf), "buf %s:", "data");


	Wdebug_INFO_UP(1, "%s", "升序等级测试!");
	Wdebug_INFO_UP(3, "%s 当前等级为：%d", "升序等级测试失败!", WSD_DEBUG_UP_LEVEL);

	Wdebug_INFO_DOWN(3, "%s", "降序等级测试!");
	Wdebug_INFO_DOWN(1, "%s 当前等级为：%d", "将徐等级测试失败!", WSD_DEBUG_UP_LEVEL);
}


