#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>


/**********************************************************************
********************************����������*****************************
**********************************************************************/
#include "add.h"//!!!!!!!!!!!!!!!!!!!!!!!!!!!!
int main()
{
	int a = 10;
	int b = 20;
	int sum = Add(a, b);
	printf("%d\n", sum);
	return 0;
}

int Add(int, int);//����������һ����ͷ�ļ���
int main()
{
	int a = 10;
	int b = 20;
	int sum = Add(a, b);
	printf("%d\n", sum);
	return 0;
}

int Add(int x, int y)//�����Ķ���   һ����Դ�ļ���
{
	int z = 0;
	z = x + y;
	return z;

}

int main()
{
	int len = 0;
	len = strlen("abc");
	printf("%d\n", len);

	printf("%d\n", strlen(len));//��������ʽ����  һ�����ķ���ֵ��Ϊ��һ�������Ĳ���
 
	return 0;
}
int main()
{
	printf("%d", printf("%d", printf("%d", 43)));
	//printf�ķ���ֵ���ַ��ĸ���
	return 0;
}


/**********************************************************************
**************************�Ե��õĺ������м���*************************
**********************************************************************/
int Add(int* p)
{
	(*p)++;
}

int main()
{
	int sum = 0;
	Add(&sum);
	printf("%d\n", sum);
	Add(&sum);
	printf("%d\n", sum);
	Add(&sum);
	printf("%d\n", sum);
	Add(&sum);
	printf("%d\n", sum);
	return 0;
}

/**********************************************************************
**************************�ú���ʵ�ֶ��ַ�����*************************
**********************************************************************/
int binary_search(int arr[], int k,int sz)
{
	int left = 0;
	int right = sz-1;
	int mid = (left + right) / 2;
	while(left<=right)
	{
		if (arr[mid] > k)
		{
			right = mid - 1;
			mid = (left + right) / 2 - 1;
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
			mid = (left + right) / 2 - 1;
		}
		else
			return mid;
	}
	return -1;
}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = binary_search(arr,k,sz);
	if (ret == -1)
		printf("�Ҳ���ָ������");
	else
		printf("�ҵ��ˣ��±�Ϊ%d\n", ret);
	return 0;
}

/**********************************************************************
**************************�ú����ж�����*******************************
**********************************************************************/
int is_leap_year(int x)
{
	if ((x % 4 == 0 && x % 100 != 0) || (x % 400 == 0))
		return 1;
	else
		return 0;
}
int main()
{
	int i = 0;
	scanf_s("%d", &i);
	if ((is_leap_year(i)) == 1)
		printf("������");
	else
		printf("��������");

	return 0;
}

/**********************************************************************
**************************�ú����ж�����*******************************
**********************************************************************/
int is_prime(int x)
{
	int y = 1;
	for (y = 2;y <= sqrt(x);y++)
	{
		if (x % y == 0)
			return 0;
	}
		return 1;
}
int main()
{
	int i = 0;
	for (i = 100;i <= 200;i++)
	{
		if (is_prime(i) == 1)
		{
			printf("%d ", i);
		}
	}
	return 0;
}

/**********************************************************************
*********************************����**********************************
**********************************************************************/
void Swap1(int x, int y)//��ֵ����
{
	int tmp = 0;
	tmp = x;                     //�Ա�Swap1 Swap2
	x = y;
	y = tmp;
}

void Swap2(int* pa, int* pb)//int* pa ȡ��ַ *pa������  ��ַ����
{
	int tmp = 0;
	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}

int main()
{
	int a = 10;
	int b = 20;
	int tmp = 0;
	printf("a=%d,b=%d\n", a, b);
	//Swap1(a, b);
	Swap2(&a, &b);
	//tmp = a;
	//a = b;
	//b = tmp;
	printf("a=%d,b=%d\n", a, b);
	return 0;
}

int get_max(int x, int y)
{
	return (x > y) ? x : y;
}

int main()
{
	int a = 10;
	int b = 20;
	int max = get_max(a, b);
	printf("%d\n", max);
	return 0;
}

int main()
{
	char arr[] = "hello world";
	memset(arr, '*', 5);    //memory -�ڴ�  set -����
	printf("%s\n", arr);
	return 0;
}

int main()
{
	char arr1[] = "bit";
	char arr2[] = "#######";
	strcpy(arr2, arr1);    //ԴͷҪ����Ŀ�ĵ�
	printf("%s\n", arr2);
	return 0;
}

int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;

}

int main()
{
	int a = 10;
	int b = 20;
	int sum = Add(a, b);
	printf("%d\n", sum);
	return 0;
}