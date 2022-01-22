#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

/**********************************************************************
********************************数组***********************************
**********************************************************************/

/**********************************************************************
*******************************排序***********************************/

void bubble_sort(int arr[],int sz)
{
	int i = 0;
	for (i = 0;i<sz-1;i++)
	{
		int flag = 1;
		int j = 0;
		for (j = 0;j<sz-1-i;j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;
			}
		}
		if (flag == 1)
			break;
	}
}

int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr,sz);//冒泡排序
	for (i = 0;i < sz;i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}

/**********************************************************************
*******************************二维数组*******************************/

int main()
{
	int arr[3][4] = { {1,2,3},{4,5} };//第一行1，2，3 第二行4，5//行可以省略，列不能省略
	int i = 0;
	for (i = 0;i < 3;i++)
	{
		int j = 0;
		for (j = 0;j < 4;j++)
		{
			printf("&arr[%d][%d] = %p\n",i,j, &arr[i][j]);
		}
	}
}

int main()
{
	int arr[3][4] = { {1,2,3},{4,5} };//第一行1，2，3 第二行4，5//行可以省略，列不能省略
	int i = 0;
	for (i = 0;i < 3;i++)
	{
		int j = 0;
		for (j = 0;j < 4;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}

int main()
{
	char arr1[] = "abc";
	char arr2[] = { 'a','b','c' };
	printf("%d\n", sizeof(arr1));
	printf("%d\n", sizeof(arr2));
	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));
	return 0;
}

int main()
{
	char arr[]="abcdef";
	printf("%d\n", sizeof(arr));//sizeof计算变量，数组，类型所占空间的大小，单位是字节--是操作符
	printf("%d\n", strlen(arr));//strlen计算字符串长度[a,b,c,d,e,f,\0]\0之前的，只与字符串有关--是库函数
	return 0;
}
