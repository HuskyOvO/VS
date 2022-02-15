#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*******************************�Ż�ð������********************************************/

int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}

void Swap(char* a1, char* a2,int width)
{
	int i = 0;
	for (i = 0;i < width;i++)
	{
		char tmp = *a1;
		*a1 = *a2;
		*a2 = tmp;
		a1++;
		a2++;
	}
}

void bubble_sort(void* base, int sz,int width,int (*cmp)(void*e1,void*e2))
{
	int i = 0;
	for (i = 0;i < sz - 1;i++)
	{
		int j = 0;
		for (j = 0;j < sz - 1 - i;j++)
		{
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width))
			{
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}

void test1()
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
	int i = 0;
	for (i = 0;i < sz;i++)
	{
		printf("%d ", arr[i]);
	}
}

int main()
{
	test1();
}

/*****************************************************************************************/

//qsort - �⺯�� - ����
//viod* ��ָ����Խ����������͵ĵ�ַ�����ܶ�����н����ò�����Ҳ���ܼӼ�����

//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0;i < sz - 1;i++)
//	{
//		int j = 0;
//		for (j = 0;j < sz - 1 - i;j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//
//void test1()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	//�������������Ԫ�ص�ַ��Ԫ�ظ�����Ԫ�ش�С������ָ�롪������ʽ
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//int cmp_stu_by_age(const void* e1, const void* e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//
//int cmp_stu_by_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct Stu*)e1)->name , ((struct Stu*)e2)->name);
//	//�Ƚ��ַ�����С��strcmp
//}
//
//void test2()
//{
//	struct Stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",10} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
//}
//
//int main()
//{
//	tst1();
//	float f[] = { 9.0,8.0,7.0,6.0,5.0,4.0 };
//	//bubble_sort(arr, sz);
//}