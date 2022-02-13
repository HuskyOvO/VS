#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>



/********************************************************************************/

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr;
//
//	int(*pfArr[4])(int, int) = Add;
//	int(*(*ppfArr[4]))(int, int) = &pfArr;//指向函数指针数组的指针
//}

/********************************计算器*************************************************/

//void menu()
//{
//	printf("**************************************\n");
//	printf("***********1.add        2.sub*********\n");
//	printf("***********3.mul        4.div*********\n");
//	printf("***********      5.Xor        ********\n");
//	printf("***********      0.exit       ********\n");
//	printf("**************************************\n");
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int Xor(int x, int y)
//{
//	return x ^ y;
//}

//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int (*pfArr[])(int, int)={0,Add,Sub,Mul,Div,Xor};//函数指针数组（转移表）
//	do
//	{
//		menu();
//		printf("请选择\n");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 5)
//		{
//			printf("请输入两个操作数:>");
//			scanf("%d%d", &x, &y);
//			int ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("退出\n");
//		}
//		else
//			printf("选择错误\n");
//	} while (input);
//}

//void Calc(int (*pf)(int, int))//回调函数
//{
//	int x = 0;
//	int y = 0;
//	printf("请输入两个操作数:>");
//	scanf("%d%d", &x, &y);
//	printf("%d\n", pf(x, y));
//}
//
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 0:
//			printf("退出\n");
//			break;
//		case 1:
//			Calc(Add);
//			break;
//		case 2:
//			Calc(Sub);
//			break;
//		case 3:
//			Calc(Mul);
//			break;
//		case 4:
//			Calc(Div);
//			break;
//		default:
//			printf("选择错误");
//			break;
//		}
//	} while (input);
//}

/********************************************************************************************/

//char* my_strcpy(char* dest, const char* src);
//char* (*pf)(char*, const char*)=my_strcpy;
//char* (*pfArr[4])(char*, const char*) = { my_strcpy };

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int main()
//{
//	int (*pa)(int, int) = Add;
//	int(*parr[4])(int, int) = { Add,Sub,Mul,Div };//函数指针的数组
//	int i = 0;
//	for (i = 0;i < 4;i++)
//	{
//		printf("%d\n", parr[i](4, 2));
//	}
//}