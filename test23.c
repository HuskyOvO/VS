#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<errno.h>
#include<assert.h>
/********************strtok************************/
//将标记字符改为'\0'返回起始地址
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
//	//错误码 错误信息
//	//0      No error
//	//1      Operation not permitted
//	//2      No such file or directory
//	//char* str = strerror(errno);//errno是一个全局的错误变量，当C语言的库函数在执
//	//                            //行过程中发生了错误，就会把错误码，赋值到errno中
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


/********************字符分类函数************************/
#include<ctype.h>
//int main()
//{
//	char ch = '@';
//	//int ret = islower(ch);//判断是否为小写
//	int ret = isdigit(ch);//0~9
//	printf("%d\n", ret);
//}
/********************字符转换函数************************/
//tolower,toupper
//转小写，转大写
//int main()
//{
//	char ch = tolower('Q');
//	putchar(ch);
//}



/********************************内存函数***********************************/
//memcpy 内存拷贝
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
	strcpy(arr2, arr1);//arr2[5]={0}无法完全拷贝
	memcpy(arr2, arr1, sizeof(arr1));
	struct S arr3[] = { {"张三",20},{"李四",30} };
	struct S arr4[3] = { 0 };
	memcpy(arr4, arr3, sizeof(arr3));
	my_memcpy(arr4, arr3, sizeof(arr3));
}
