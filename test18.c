#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//int main()//��������
//{
//	int a[] = { 1,2,3,4 };
//	printf("%d\n", sizeof(a));        //�����С������λ���ֽڣ�16��
//	printf("%d\n", sizeof(a + 0));    //��ַ��С��a+0������Ԫ�ص�ַ   4/8  
//	printf("%d\n", sizeof(*a));       //��һ��Ԫ�صĴ�С     4
//	printf("%d\n", sizeof(a + 1));    //�ڶ���Ԫ�صĵ�ַ�Ĵ�С   4/8
//	printf("%d\n", sizeof(a[1]));     //�ڶ���Ԫ�صĴ�С     4
//	printf("%d\n", sizeof(&a));       //��ַ�Ĵ�С   4/8
//	printf("%d\n", sizeof(*&a));      //ͬ��һ�֣�����ĵ�ַ�����÷��ʵ�����������
//	printf("%d\n", sizeof(&a + 1));   //��ַ�Ĵ�С   4/8
//	printf("%d\n", sizeof(&a[0]));    //��һ��Ԫ�ص�ַ�Ĵ�С   4/8
//	printf("%d\n", sizeof(&a[0] + 1));//�ڶ���Ԫ�ص�ַ�Ĵ�С   4/8
//}

//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", sizeof(arr));        //�����С   6
//	printf("%d\n", sizeof(arr + 0));    //��ַ��С��a+0������Ԫ�ص�ַ   4/8
//	printf("%d\n", sizeof(*arr));       //
//	printf("%d\n", sizeof(arr[1]));     //
//	printf("%d\n", sizeof(&arr));       //
//	printf("%d\n", sizeof(&arr+1));     //
//	printf("%d\n", sizeof(&arr[0] + 1));//
//}

//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", strlen(arr));        //���ֵ
//	printf("%d\n", strlen(arr + 0));    //���ֵ
//	printf("%d\n", strlen(*arr));       //err
//	printf("%d\n", strlen(arr[1]));     //err
//	printf("%d\n", strlen(&arr));       //���ֵ
//	printf("%d\n", strlen(&arr + 1));   //���ֵ-6
//	printf("%d\n", strlen(&arr[0] + 1));//���ֵ
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
//	printf("%d\n", strlen(&arr + 1));   //���ֵ
//	printf("%d\n", strlen(&arr[0] + 1));//6-1
//}

//int main()
//{
//	char *p = "abcdef";
//	printf("%d\n", sizeof(p));        //4/8
//	printf("%d\n", sizeof(p + 0));    //b�ĵ�ַ  4/8
//	printf("%d\n", sizeof(*p));       //��һ���ַ�  1
//	printf("%d\n", sizeof(p[0]));     //1
//	printf("%d\n", sizeof(&p));       //4/8��ַ
//	printf("%d\n", sizeof(&p + 1));   //4/8��ַ
//	printf("%d\n", sizeof(&p[0] + 1));//4/8��ַ
//}

//int main()
//{
//	char* p = "abcdef";
//	printf("%d\n", strlen(p));        //6
//	printf("%d\n", strlen(p + 0));    //5
//	printf("%d\n", strlen(*p));       //err
//	printf("%d\n", strlen(p[0]));     //err
//	printf("%d\n", strlen(&p));       //���ֵ
//	printf("%d\n", strlen(&p + 1));   //���ֵ
//	printf("%d\n", strlen(&p[0] + 1));//5
//}


//int main()
//{
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));//3*4*4=48
//	printf("%d\n", sizeof(a[0][0]));//4  һ��Ԫ��
//	printf("%d\n", sizeof(a[0]));//4*4=16   ��һ��Ԫ��
//	printf("%d\n", sizeof(a[0]+1));//��ַ   4/8
//	printf("%d\n", sizeof(*(a[0]+1)));//4  ��һ�еڶ���Ԫ��
//	printf("%d\n", sizeof(a+1));//��ַ   4/8
//	//��ά�������Ԫ���ǵ�һ�У�+1���ǵڶ���
//	printf("%d\n", sizeof(*(a+1)));//16  �ڶ���Ԫ��
//	printf("%d\n", sizeof(&a[0]+1));//4/8   �ڶ��е�ַ
//	printf("%d\n", sizeof(*(&a[0]+1)));//16   �ڶ���Ԫ��
//	printf("%d\n", sizeof(*a));//16   ��һ��Ԫ��
//	printf("%d\n", sizeof(a[3]));//16
//	//���������㣬������
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

