#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<assert.h>
/**************************���Ͼ���*************************/

//int FindNum(int arr[3][3], int k, int* px, int* py)
//{
//	int x = 0;
//	int y = *py - 1;
//	while ((x<=*px-1) && y>=0)
//	{
//		if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else
//		{
//			*px = x;
//			*py = y;
//			return 1;
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//	int k = 7;
//	int x = 3;
//	int y = 3;
//	int ret = FindNum(arr, k, &x, &y);
//	if (ret == 1)
//	{
//		printf("�ҵ���\n");
//		printf("�±���%d %d\n", x, y);
//	}
//	else
//		printf("�Ҳ���\n");
//}

/**************************�ַ�������*************************/

/*strlen*/  //�����ַ�������
//�Լ��ķ���
//1.������
//2.�ݹ�
//3.ָ���ָ��

//int my_strlen(const char* str)
//{
//	assert(str != NULL);
//	int count = 0;
//	while (*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
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
//	//int len = strlen("abcdef");//"\0"֮ǰ
//	//strlen�ķ����������޷�������
//	int len = my_strlen("abcdef");
//	printf("%d\n", len);
//}

/*strcpy*/  //�ַ�������

//char* my_strcpy(char* dest,const char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* ret = dest;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;//����Ŀ�ĵص�ԭʼ��ַ
//}
//
//int main()
//{
//	char arr1[] = "abcdefghi";
//	char arr2[] = "bit";
//	//strcpy(arr1, arr2);//��������'\0'
//	my_strcpy(arr1, arr2);
//}

/*strcat*/  //�ַ���׷��

char* my_strcat(char* dest, const char* src)
{
	char* ret = dest;
	assert(dest != NULL);
	assert(src != NULL);
	while (*dest != '\0')//�ҵ�'\0'
	{
		dest++;
	}
	while (*dest++ = *src++)//׷���ַ���
	{
		;
	}
	return ret;
}

int main()
{
	char arr1[30] = "hello";
	char arr2[] = "world";
	strcat(arr1, arr2);
	printf("%s\n", arr1);
}