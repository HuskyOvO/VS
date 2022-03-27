#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>

/************************字符串比较**********************/
//strcmp  比较字符串是否一样(比较ASSIC码)
//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "sqwer";
//	int ret = strcmp(p1, p2);
//	
//}
//
/********************************/
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 != NULL);
//	assert(str2 != NULL);
//	while (*str1==*str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//	if (*str1 > *str2)
//		return 1;
//	else
//		return -1;
//}
//
//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "sqwer";
//	int ret = my_strcmp(p1, p2);
//
//}

/***************************受长度限制**********************/

//int main()
//{
//	char arr1[10] = "abcef";
//	char arr2[] = "hello bit";
//	char arr3[] = "bit";
//	strncpy(arr1, arr2, 4);//hellf
//	strncpy(arr1, arr2, 6);//bit'\0''\0''\0'
//}

//int main()
//{
//	char arr1[30] = "hello";
//	char arr2[] = "world";
//	strncat(arr1, arr2, 3);//hellowor
//}

//int main()
//{
//	const char* p1 = "abcdef";
//	char* p2 = "abcqwer";
//	int ret = strncmp(p1, p2,3);//为3，结果为0，为4，结果为-1
//	printf("%d", ret);
//}

/***************************字符串查找**********************/
//strstr

//int main()
//{
//	char* p1 = "abcdefghi";
//	char* p2 = "def";
//	char* ret = strstr(p1, p2);
//	if (ret == NULL)
//	{
//		printf("字符串不存在\n");
//	}
//	else
//		printf("%s\n", ret);
//}

/****************************/

char* my_strstr(const char* p1, const char* p2)
{
	assert(p1 != NULL);
	assert(p2 != NULL);
	char* s1 = p1;
	char* s2 = p2;
	char* cur = p1;
	if(*p2 == '\0')
	{
		return (char*)p1;
	}
	while (*cur)
	{
		s1 = cur;
		s2 = p2;
		while (*s1 && *s2 && (*s1 == *s2))
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return cur;
		}
		cur++;
	}
	return NULL;
}

int main()
{
	char* p1 = "abcdefghi";
	char* p2 = "def";
	char* ret = my_strstr(p1, p2);
	if (ret == NULL)
	{
		printf("字符串不存在\n");
	}
	else
		printf("%s\n", ret);
}