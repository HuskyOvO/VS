#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<errno.h>
#include<assert.h>
/********************strtok************************/
//������ַ���Ϊ'\0'������ʼ��ַ
//int main()
//{
//	char arr[] = "abc@defgh.com";
//	char* p = "@.";
//	char buf[1024] = { 0 };
//	strcpy(buf, arr);
//	char* ret = strtok(arr, p);
//	printf("%s\n", ret);
//	ret = strtok(NULL, p);
//	printf("%s\n", ret);
//	ret = strtok(NULL, p);
//	printf("%s\n", ret);
//}


//int main()
//{
//	char arr[] = "abc@defgh.com";
//	char* p = "@.";
//	char buf[1024] = { 0 };
//	strcpy(buf, arr);
//	char* ret = NULL;
//	for (ret = strtok(arr, p);ret != NULL;ret=strtok(NULL,p))
//	{
//		printf("%s\n", ret);
//	}
//}


/********************strerror************************/

//int main()
//{
//	//������ ������Ϣ
//	//0      No error
//	//1      Operation not permitted
//	//2      No such file or directory
//	//char* str = strerror(errno);//errno��һ��ȫ�ֵĴ����������C���ԵĿ⺯����ִ
//	//                            //�й����з����˴��󣬾ͻ�Ѵ����룬��ֵ��errno��
//	//printf("%s\n", str);
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		printf("open file succes");
//	}
//}


/********************�ַ����ຯ��************************/
#include<ctype.h>
//int main()
//{
//	char ch = '@';
//	//int ret = islower(ch);//�ж��Ƿ�ΪСд
//	int ret = isdigit(ch);//0~9
//	printf("%d\n", ret);
//}
/********************�ַ�ת������************************/
//tolower,toupper
//תСд��ת��д
//int main()
//{
//	char ch = tolower('Q');
//	putchar(ch);
//}



/********************************�ڴ溯��***********************************/
//memcpy �ڴ濽��
struct S
{
	char name[20];
	int age;
};

void* my_memcpy(void* dest, const void* src,size_t num)
{
	void* ret = dest;
	assert(dest != NULL);
	assert(src != NULL);
	while (num--)
	{
		*(char*)dest = *(char*)src;
		++(char*)dest;
		++(char*)src;
	}
	return ret;
}

int main()
{
	int arr1[] = { 1,2,3,4,5 };
	int arr2[5] = { 0 };
	strcpy(arr2, arr1);//arr2[5]={0}�޷���ȫ����
	memcpy(arr2, arr1, sizeof(arr1));
	struct S arr3[] = { {"����",20},{"����",30} };
	struct S arr4[3] = { 0 };
	memcpy(arr4, arr3, sizeof(arr3));
	my_memcpy(arr4, arr3, sizeof(arr3));
}
