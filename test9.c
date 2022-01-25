#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

/**********************************************************************
******************************操作符***********************************
**********************************************************************/

int main()
{
	int i = 0, a = 0, b = 2, c = 3, d = 4;
	i = a++ && ++b && d++;//结果为假，后面不参与运算
	printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);//1 2 3 4

	 i = 0, a = 1, b = 2, c = 3, d = 4;
	i = a++ && ++b && d++;
	printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);//2 3 3 5

	 i = 0, a = 0, b = 2, c = 3, d = 4;
	i = a++ || ++b || d++;//结果为真，后面不参与运算
	printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);//1 3 3 4

	 i = 0, a = 1, b = 2, c = 3, d = 4;
	i = a++ || ++b || d++;
	printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);//2 2 3 4
}

//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));
//}
//
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(ch));
//	test1(arr);
//	test2(ch);
//	return 0;
//}

/*****************************单目操作符******************************/
//计算二进制码中有几个1
//int main()
//{
//	int num = 0;
//	int count=0;
//	scanf("%d", &num);
//	int i = 0;
//	/*while (num)
//	{
//		if (num % 2 == 1)
//		{
//			count++;
//		}
//		num = num / 2;
//	}*/
//	for (i = 0;i < 32;i++)
//	{
//		if (1 == ((num >> i) & 1))
//			count++;
//	}
//	printf("count = %d", count);
//}

//不创建临时变量交换a，b
//int main()
//{
//	int a = 3;
//	int b = 5;
//	//加减法
//	//a = a + b;b = a - b;a = a - b;
//	//异或法
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a = %d b = %d\n", a, b);
//}

//int main()
//{
//	int a = 3;//011
//	int b = 5;//101
//	int c = a & b;//按二进制位与
//	int d = a | b;//按二进制位或
//	int e = a ^ b;//按二进制位异或
//	printf("c = %d\n", c);
//	printf("d = %d\n", d);
//	printf("e = %d\n", e);
//}

/***************************移位操作符********************************/

//int main()
//{
//	int b = 0;
//	int a = 5;
//	b = a << 1;//左边丢弃，右边补0
//	printf("b = %d\n", b);
//	return 0;
//}

//int main()
//{
//	int b = 0;
//	int a = -1;
//	//整数的二进制表示有：原码，反码，补码
//	//存储到内存的是补码，正数的原码，反码，补码都相同
//	//1000 0000 0000 0000 0000 0001      源码-1
//	//1111 1111 1111 1111 1111 1110      反码   符号位不变，其他位按位取反
//	//1111 1111 1111 1111 1111 1111      补码   反码+1
//	b = a >> 1;//右移操作符，移动的是二进制位
//			   //算术右移：右边丢弃，左边补原符号位    逻辑右移：右边丢弃，左边补0（基本不用）
//	printf("b = %d\n", b);
//	return 0;
//}

/***************************除与模************************************/
//int main()
//{
//	int a = 5 / 2;//商2余1
//	int b = 5 % 2;//取模时两边都应为整数
//	double c = 5.0 / 2;//除数或被除数至少有一个是小数
//	printf("a = %d\n", a);
//	printf("b = %d\n", b);
//	printf("c = %fl\n", c);
//	return 0;
//}