#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>



/*******************输入一个非负整数，返回组成它的数字之和*******************/

//int DigitSum(unsigned int num)
//{
//	if (num > 9)
//		return DigitSum(num / 10) + (num % 10);
//	else
//		return num;
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	int ret = DigitSum(num);
//	printf("ret = %d\n", ret);
//}

/***************************字符串的逆序*******************************/

//递归的方法

//int size(char* arr)
//{
//	int t = 0;
//	while (*arr != '\0')
//	{
//		arr++;
//		t++;
//	}
//	return t;
//}
//
//void reverse_string(char arr[])
//{
//	char tmp = arr[0];
//	int len = size(arr);
//	arr[0] = arr[len - 1];
//	arr[len - 1] = '\0';
//	if (size(arr + 1) >= 2)
//		reverse_string(arr + 1);
//	arr[len - 1] = tmp;
//}
//
//int main()
//{
//	char arr[] = "abcdefg";
//	int i = 0;
//	reverse_string(arr);
//	printf("%s\n", arr);
//}

//int size(char* arr)
//{
//	int t = 0;
//	while(*arr != '\0')
//	{
//		arr++;
//		t++;
//	}
//		
//	return t;
//}
//
//void reverse_string(char arr[])
//{
//	int left = 0;
//	int right = size(arr) - 1;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	int i = 0;
//	reverse_string(arr);
//	printf("%s\n", arr);
//}

/***************************乘法表*******************************/

//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int t = 0;
//	for(t=1;t<=a;t++)
//	{
//		int j = 0;
//		for (j = 1;j <= a;j++)
//		{
//			if(j>=t)
//			printf("%-2d*%-2d=%-3d ", t, j, j * t);
//		}
//		printf("\n");
//	}
//}

/***************************交换二进制的奇数位与偶数位*******************************/

//void print(int m)
//{
//	int i = 0;
//	for (i = 30;i >= 0;i -= 2)
//	{
//		printf("%d", (m >> i) & 1);//奇数位
//	}
//	for (i = 31;i >= 1;i -= 2)
//	{
//		printf("%d", (m >> i) & 1);//奇数位
//	}
//}
//
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	print(m);
//}

/***************************计算两个数中不同位的个数*******************************/

//int count_bit_one(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);//执行一次，最右边的1消失
//		count++;
//	}
//	return count;
//}
//
//int get_diff_bit(int m, int n)
//{
//	int tmp = m ^ n;
//	return count_bit_one(tmp);
//}
//
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int count = get_diff_bit(m, n);
//	printf("%d\n", count);
//}

/*************************计算二进制中1的个数*********************************/

//int count_bit_one(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);//执行一次，最右边的1消失
//		count++;
//	}
//	return count;
//}

//int count_bit_one(unsigned int n)
//{
//	int count = 0;
//	int i = 0;
//	/*while (n)
//	{
//		if (n % 2 == 1)
//		{
//			i++;
//		}
//		n = n / 2;
//	}*/
//	for (i = 0;i < 32;i++)
//	{
//		if ((n >> i) & 1 == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}

//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int count = count_bit_one(a);
//	printf("%d", count);
//}

/**************************交换数组**********************************/
//void Print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 6,7,8,9,10 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int j = sz;
//	while (j)
//	{
//		int tmp = 0;
//		tmp = arr1[j-1];
//		arr1[j-1] = arr2[j-1];
//		arr2[j-1] = tmp;
//		j--;
//	}
//	Print(arr1, sz);
//	Print(arr2, sz);
//}

/*********************************************************************/
//void Init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		arr[i] = 0;
//	}
//}
//
//void Print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//void Reverse(int arr[], int sz)
//{
//	int i = 0;
//	int j = sz-1;
//	int tmp = 0;
//	for (i = 0;i < sz / 2;i++)
//	{
//		tmp = arr[i];
//		arr[i] = arr[j];
//		arr[j] = tmp;
//		j--;
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//Init(arr,sz);
//	Print(arr, sz);
//	Reverse(arr, sz);
//	Print(arr, sz);
//}