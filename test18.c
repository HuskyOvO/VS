#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//int main()//整形数组
//{
//	int a[] = { 1,2,3,4 };
//	printf("%d\n", sizeof(a));        //数组大小——单位，字节（16）
//	printf("%d\n", sizeof(a + 0));    //地址大小，a+0还是首元素地址   4/8  
//	printf("%d\n", sizeof(*a));       //第一个元素的大小     4
//	printf("%d\n", sizeof(a + 1));    //第二个元素的地址的大小   4/8
//	printf("%d\n", sizeof(a[1]));     //第二个元素的大小     4
//	printf("%d\n", sizeof(&a));       //地址的大小   4/8
//	printf("%d\n", sizeof(*&a));      //同第一种，数组的地址解引用访问的是整个数组
//	printf("%d\n", sizeof(&a + 1));   //地址的大小   4/8
//	printf("%d\n", sizeof(&a[0]));    //第一个元素地址的大小   4/8
//	printf("%d\n", sizeof(&a[0] + 1));//第二个元素地址的大小   4/8
//}

//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", sizeof(arr));        //数组大小   6
//	printf("%d\n", sizeof(arr + 0));    //地址大小，a+0还是首元素地址   4/8
//	printf("%d\n", sizeof(*arr));       //
//	printf("%d\n", sizeof(arr[1]));     //
//	printf("%d\n", sizeof(&arr));       //
//	printf("%d\n", sizeof(&arr+1));     //
//	printf("%d\n", sizeof(&arr[0] + 1));//
//}

//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", strlen(arr));        //随机值
//	printf("%d\n", strlen(arr + 0));    //随机值
//	printf("%d\n", strlen(*arr));       //err
//	printf("%d\n", strlen(arr[1]));     //err
//	printf("%d\n", strlen(&arr));       //随机值
//	printf("%d\n", strlen(&arr + 1));   //随机值-6
//	printf("%d\n", strlen(&arr[0] + 1));//随机值
//}


//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n", sizeof(arr));        //7     \0
//	printf("%d\n", sizeof(arr + 0));    //4/8
//	printf("%d\n", sizeof(*arr));       //1
//	printf("%d\n", sizeof(arr[1]));     //1
//	printf("%d\n", sizeof(&arr));       //4/8
//	printf("%d\n", sizeof(&arr + 1));   //4/8
//	printf("%d\n", sizeof(&arr[0] + 1));//4/8
//}


//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n", strlen(arr));        //6
//	printf("%d\n", strlen(arr + 0));    //6
//	printf("%d\n", strlen(*arr));       //err
//	printf("%d\n", strlen(arr[1]));     //err
//	printf("%d\n", strlen(&arr));       //6
//	printf("%d\n", strlen(&arr + 1));   //随机值
//	printf("%d\n", strlen(&arr[0] + 1));//6-1
//}

//int main()
//{
//	char *p = "abcdef";
//	printf("%d\n", sizeof(p));        //4/8
//	printf("%d\n", sizeof(p + 0));    //b的地址  4/8
//	printf("%d\n", sizeof(*p));       //第一个字符  1
//	printf("%d\n", sizeof(p[0]));     //1
//	printf("%d\n", sizeof(&p));       //4/8地址
//	printf("%d\n", sizeof(&p + 1));   //4/8地址
//	printf("%d\n", sizeof(&p[0] + 1));//4/8地址
//}

//int main()
//{
//	char* p = "abcdef";
//	printf("%d\n", strlen(p));        //6
//	printf("%d\n", strlen(p + 0));    //5
//	printf("%d\n", strlen(*p));       //err
//	printf("%d\n", strlen(p[0]));     //err
//	printf("%d\n", strlen(&p));       //随机值
//	printf("%d\n", strlen(&p + 1));   //随机值
//	printf("%d\n", strlen(&p[0] + 1));//5
//}


//int main()
//{
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));//3*4*4=48
//	printf("%d\n", sizeof(a[0][0]));//4  一个元素
//	printf("%d\n", sizeof(a[0]));//4*4=16   第一行元素
//	printf("%d\n", sizeof(a[0]+1));//地址   4/8
//	printf("%d\n", sizeof(*(a[0]+1)));//4  第一行第二个元素
//	printf("%d\n", sizeof(a+1));//地址   4/8
//	//二维数组的首元素是第一行，+1就是第二行
//	printf("%d\n", sizeof(*(a+1)));//16  第二行元素
//	printf("%d\n", sizeof(&a[0]+1));//4/8   第二行地址
//	printf("%d\n", sizeof(*(&a[0]+1)));//16   第二行元素
//	printf("%d\n", sizeof(*a));//16   第一行元素
//	printf("%d\n", sizeof(a[3]));//16
//	//不参与运算，不访问
//}

//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d,%d\n", *(a + 1), *(ptr - 1));
//}

//int main()
//{
//	int a[4] = { 1,2,3,4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	printf("%x,%x", ptr1[-1], *ptr2);//4,200000
//}

//int main()
//{
//	int a[3][2] = { (0,1),(2,3),(4,5) };
//	int* p;
//	p = a[0];
//	printf("%d", p[0]);
//}

//int main()
//{
//	int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	int *ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//}

//int main()
//{
//	char* a[] = { "work","at","alibaba" };
//	char** pa = a;
//	pa++;
//	printf("%s\n", *pa);
//}

//int main()
//{
//	char* c[] = { "ENTER","NEW","POINT","FIRST" };
//	char** cp[] = { c + 3,c + 2,c + 1,c };
//	char*** cpp = cp;
//	printf("%s\n", **++cpp);//POINT
//	printf("%s\n", *--*++cpp+3);//ER
//	printf("%s\n", *cpp[-2]+3);//ST
//	printf("%s\n", cpp[-1][-1]+1);//EW
//}

