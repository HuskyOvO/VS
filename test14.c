#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>

/**************************�����ַ�������******************************************/

//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);//ȷ��ָ�����Ч�ԣ�assert����
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
//	const int* p = &num;//const����ָ�������*���ʱ�����ε���*p������ͨ��p���ı�*p��ֵ
//	*p = 20;
//	printf("%d\n", num);
//}
//
//int main()
//{
//	const int num = 10;
//	int* const p = &num;//const����ָ�������* �ұ�ʱ�����ε���ָ����� p��p���ܱ��ı�
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
/**************************�ַ�������***********************************************/
//char* my_strcpy(char* dest,const char* src)
//{
//	char* ret = dest;
//	assert(dest != NULL);//Ϊ���򱨴�
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
//	int i = 0;//ջ����ʹ�øߵ�ַ���Ŀռ���ʹ�õ͵�ַ���Ŀռ�
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//���������±����������ַ�ɵ͵��߱仯
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