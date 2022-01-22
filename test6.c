#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

/**********************************************************************
********************************����***********************************
**********************************************************************/

/**********************************************************************
*******************************����***********************************/

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
	bubble_sort(arr,sz);//ð������
	for (i = 0;i < sz;i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}

/**********************************************************************
*******************************��ά����*******************************/

int main()
{
	int arr[3][4] = { {1,2,3},{4,5} };//��һ��1��2��3 �ڶ���4��5//�п���ʡ�ԣ��в���ʡ��
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
	int arr[3][4] = { {1,2,3},{4,5} };//��һ��1��2��3 �ڶ���4��5//�п���ʡ�ԣ��в���ʡ��
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
	printf("%d\n", sizeof(arr));//sizeof������������飬������ռ�ռ�Ĵ�С����λ���ֽ�--�ǲ�����
	printf("%d\n", strlen(arr));//strlen�����ַ�������[a,b,c,d,e,f,\0]\0֮ǰ�ģ�ֻ���ַ����й�--�ǿ⺯��
	return 0;
}
