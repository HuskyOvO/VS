#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "add.h"
#include <string.h>


/**********************************************************************
********************************�����ĵݹ�*****************************
**********************************************************************/

/******************************************************
*******************���n��쳲���������****************/

//int Fib(int n)
//{
//	int ret = 0;
//	if (n <= 2)
//		return 1;
//	else
//		return ret = Fib(n - 1) + Fib(n - 2);
//}

//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fib(n);
//	printf("%d\n", ret);
//	return 0;
//}

/******************************************************
*************************��׳�***********************/
//int Facl(int n)
//{
//	if (n > 0)
//	{
//		return (n * Facl(n - 1));
//	}
//}
//
//int facl(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1;i < n;i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d",Facl(n));
//	return 0;
//}

/******************************************************
*******************���ַ�������***********************/

//int my_strlen(char* str)//��������ʱ����
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("len = %d\n", len);
//	return 0;
//}
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "bit";
//	//int len = strlen(arr);
//	//printf("%d\n", len);
//	int len = my_strlen(arr);//arr�����飬���鴫�Σ������ǵ�һ��Ԫ�صĵ�ַ
//	printf("len = %d\n", len);
//	return 0;
//}
/******************************************************
******************************************************/
//void print(int n)
//{
//	if (n > 9)                 //ע��ݹ������
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf_s("%d", &num);
//	print(num);
//	return 0;
//}

//int main()
//{
//	printf("hehe\n");//ջ���
//	main();          //�ֲ������������β���ջ��//��̬���ٵ��ڴ棨malloc,calloc���ڶ���
//	return 0;        //ȫ�ֱ�����static���εı����ھ�̬��
//}

/**********************************************************************
********************************����������*****************************
**********************************************************************/
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a,b);
//	printf("%d\n", sum);
//	return 0;
//}