#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<windows.h>
#include<assert.h>

/************************�ж��Ƿ�����************************************/

void reverse(char* left, char* right)
{
	assert(left != NULL);
	assert(right != NULL);
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}

void left_move(char* arr, int k)
{
	assert(arr != NULL);
	int len = strlen(arr);
	assert(k <= len);
	reverse(arr, arr + k - 1);//�������
	reverse(arr + k, arr + len - 1);//�����ұ�
	reverse(arr, arr + len - 1);//��������
}

//int is_left_move(char* s1, char* s2)//���
//{
//	int len = strlen(s1);
//	int i = 0;
//	for (i = 0;i < len;i++)
//	{
//		left_move(s1, 1);
//		int ret = strcmp(s1, s2);
//		if (ret == 0)
//			return 1;
//	}
//	return 0;
//}


int is_left_move(char* str1, char* str2)
{
	//srtcat(str1, str1);//strcat��׷�Ӻ�����ͷ�ļ���string��������׷��ԭ�ַ���
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	if (len1 != len2)
		return 0;
	strncat(str1, str1, len1);//strncat��׷�Ӻ������ַ���1���ַ���1��׷�Ӹ���
	char* ret = strstr(str1, str2);//strstr�����ַ���1��Ѱ���ַ���2�������ַ���ַ
	if (ret == NULL)
		return 0;
	else
		return 1;
}

int main()
{
	char arr1[30] = "abcdef";
	char arr2[] = "cdefab";
	int ret = is_left_move(arr1,arr2);
	if (ret == 1)
		printf("YES\n");
	else
		printf("NO\n");
}

/************************����k���ַ�************************************/

//������ת��
//void reverse(char* left, char* right)
//{
//	assert(left != NULL);
//	assert(right != NULL);
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//void left_move(char* arr, int k)
//{
//	assert(arr != NULL);
//	int len = strlen(arr);
//	assert(k <= len);
//	reverse(arr, arr + k - 1);//�������
//	reverse(arr + k, arr + len - 1);//�����ұ�
//	reverse(arr, arr + len - 1);//��������
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	left_move(arr, 2);
//	printf("%s\n",arr);
//}

//void left_move(char* arr, int k)
//{
//	assert(arr != NULL);
//	int i = 0;
//	int len = strlen(arr);
//	for (i = 0;i < k;i++)
//	{
//		char tmp = *arr;
//		int j = 0;
//		for (j = 0;j < len - 1;j++)
//		{
//			*(arr + j) = *(arr + j + 1);
//		}
//		*(arr + len - 1) = tmp;
//	}
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	left_move(arr, 2);
//	printf("%s\n",arr);
//}

/************************�ж�����************************************/

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a= 1;a <= 5;a++)
//	{
//		for (b= 1;b <= 5;b++)
//		{
//			for (c= 1;c <= 5;c++)
//			{
//				for (d= 1;d <= 5;d++)
//				{
//					for (e= 1;e <= 5;e++)
//					{
//						if (((b == 2) + (a == 3) == 1) &&
//							((b == 2) + (e == 4) == 1) &&
//							((c == 1) + (d == 2) == 1) &&
//							((c == 5) + (d == 3) == 1) &&
//							((e == 4) + (a == 1) == 1) &&a*b*c*d*e==120)
//						{
//							printf("a=%d b=%d c=%d d=%d e=%d\n",a,b,c,d,e);
//						}
//					}
//				}
//			}
//		}
//	}
//}

/************************************************************/
//int* fun(int a, int b);//��������
//int(*) fun(int a, int b);//err
//int(*fun)(int a, int b);//����ָ��
//(int*)fun(int a, int b);//��������