#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//浮点数的存储形式：（-1）^S *M*2^E
//5.5
//101.1
//1.011*2^2
//E要加上127，S是符号位
//M为小数点后的数字
//（-1）^0 *011 *129（1000 0001）
//0   1000 0001   011 0000 0000 0000 0000 0000 
//S       E  8位              M（后面要补0）23位
//十进制：0x40b00000

/***********************************************************************/
//int main()
//{
//	char a = -128;
//	printf("%u\n", a);//%u:打印十进制无符号数
//}
//
//int main()
//{
//	char a = 128;
//	printf("%u\n", a);//signde char范围-128~127
//}//结果与上一个相同

//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("a = %d\nb = %d\nc = %d\n",a, b, c);//-1,-1,255
//}

/****************************判断字节序****************************/

//int check_sys()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	return *p;
//}
//
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//		printf("大端\n");
//}