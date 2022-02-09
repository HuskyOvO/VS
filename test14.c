#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>

/**************************计算字符串长度******************************************/

//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);//确保指针的有效性，assert断言
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
//	char arr[] = "abcdef";
//	int len = my_srtlen(arr);
//	printf("%d\n", len);
//}

/*************************************************************************/
//int main()
//{
//	const int num = 10;
//	const int* p = &num;//const放在指针变量的*左边时，修饰的是*p，不能通过p来改变*p的值
//	*p = 20;
//	printf("%d\n", num);
//}
//
//int main()
//{
//	const int num = 10;
//	int* const p = &num;//const放在指针变量的* 右边时，修饰的是指针变量 p，p不能被改变
//	*p = 20;
//	printf("%d\n", num);
//}

//void my_strcpy(char* dest, char* src)
//{
//	if (dest != NULL && src != NULL)
//	{
//		while (*dest++ = *src++)
//		{
//			;
//		}
//	}
//}
/**************************字符串拷贝***********************************************/
//char* my_strcpy(char* dest,const char* src)
//{
//	char* ret = dest;
//	assert(dest != NULL);//为假则报错
//	assert(src != NULL);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[] = "################";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//}

//int main()
//{
//	int i = 0;
//	int sum = 0;
//	int n = 0;
//	scanf("%d", &n);
//	for (i = 1;i <= n;i++)
//	{
//		int ret = 1;
//		int j = 0;
//		for (j = 1;j <= i;j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//}

//int main()
//{
//	int i = 0;//栈区先使用高地址处的空间再使用低地址处的空间
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//数组随着下标的增长，地址由低到高变化
//	for (i = 0;i <= 12;i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//}

//int main()
//{
//	int i = 0;
//	for (i = 0;i < 100;i++)
//	{
//		printf("%d ", i);
//	}
//}