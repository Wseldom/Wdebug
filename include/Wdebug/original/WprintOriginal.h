/******************************************************************************
  > File Name		: WprintOriginal.h
  > Author			: dong
  > Mail			: 3235459847@qq.com
  > Created Time	: 2020年04月02日 星期四 11时51分42秒
******************************************************************************/

#ifndef __WPRINTORIGINAL_H
#define __WPRINTORIGINAL_H

#include "Wdebug/WTrmnlCtrl.h"

#ifndef WDEBUG_ENTER_KEY
#define		WDEBUG_ENTER_KEY		"\r\n"
#endif // !WDEBUG_ENTER_KEY


//#ifndef WPRINT
//#define		WPRINT		printf
//#endif // !WPRINT

	#ifndef WPRINT
	
		#define		WprintOriginal(HEAD,TAIL,PARAM,INFO,...)

		#define		WprintBufOriginal(HEAD,TAIL,PARAM,FORMAT,BUF,LENGTH, INFO, ...)

		#define		WprintStyleOriginal(HEAD,TAIL,PARAM,INFO_STYLE,INFO,...)

		#define		WprintAllStyleOriginal(HEAD,TAIL,PARAM,HEAD_STYLE,INFO_STYLE,INFO,...)
	
	//#elif
	#else

		#define		WDEBUG_HEAD_ATTR			 	Trmnl_SET_FORE(Trmnl_color_yellow)
		#define		WDEBUG_INFO_ATTR				Trmnl_SET_FORE(Trmnl_color_green)
	
		#define		WprintOriginal(HEAD,TAIL,PARAM,INFO,...)		WPRINT(Trmnl_RST WDEBUG_HEAD_ATTR HEAD WDEBUG_INFO_ATTR  INFO Trmnl_SET_FORE(Trmnl_color_yellow) TAIL WDEBUG_ENTER_KEY Trmnl_RST,PARAM, ##__VA_ARGS__);

		#define		WprintBufOriginal(HEAD,TAIL,PARAM,FORMAT,BUF,LENGTH,INFO,...)		WPRINT(Trmnl_RST WDEBUG_HEAD_ATTR HEAD WDEBUG_INFO_ATTR INFO WDEBUG_ENTER_KEY,PARAM, ##__VA_ARGS__);\
			{\
				int WDEBUG_BUF_LEN; \
				for (WDEBUG_BUF_LEN = 0; WDEBUG_BUF_LEN < LENGTH; ++WDEBUG_BUF_LEN) {\
						WPRINT(FORMAT "  ", BUF[WDEBUG_BUF_LEN]); \
				}\
				WPRINT(Trmnl_SET_FORE(Trmnl_color_yellow) WDEBUG_ENTER_KEY TAIL WDEBUG_ENTER_KEY Trmnl_RST);\
			}
	
		#define		WprintStyleOriginal(HEAD,TAIL,PARAM,INFO_STYLE,INFO,...)		WPRINT(Trmnl_RST WDEBUG_HEAD_ATTR HEAD INFO_STYLE  INFO Trmnl_RST WDEBUG_HEAD_ATTR TAIL WDEBUG_ENTER_KEY Trmnl_RST, PARAM, ##__VA_ARGS__);

		#define		WprintAllStyleOriginal(HEAD,TAIL,PARAM,HEAD_STYLE,INFO_STYLE,INFO,...)	WPRINT(Trmnl_RST HEAD_STYLE HEAD INFO_STYLE INFO Trmnl_RST HEAD_STYLE TAIL WDEBUG_ENTER_KEY Trmnl_RST,PARAM, ##__VA_ARGS__);


	#endif


#endif

