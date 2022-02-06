#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>



//typedef struct Stu//结构体类型
//{
//	char name[20];//成员变量
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;
//
//void Print1(Stu tmp)//浪费空间，压栈操作
//{
//	printf("name: %s\n", tmp.name);
//	printf("age:  %d\n", tmp.age);
//	printf("tele: %s\n", tmp.tele);
//	printf("sex:  %s\n", tmp.sex);
//}
//
//void Print2(Stu* ps)
//{
//	printf("name: %s\n", ps->name);
//	printf("age:  %d\n", ps->age);
//	printf("tele: %s\n", ps->tele);
//	printf("sex:  %s\n", ps->sex);
//}
//
//int main()
//{
//	struct Stu s = { "张三",20,"12345678","男" };//是局部的结构体变量
//	Print1(s);
//	Print2(&s);
//	return 0;
//}

//struct S
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//
//struct T
//{
//	char ch[10];
//	struct S s;
//	char* pc;
//};
//
//int main()
//{
//	struct T t = { "hehe",{100,'w',"hello",3.14},NULL };
//	printf("%s\n", t.ch);
//	printf("%s\n", t.s.arr);
//	printf("%lf\n", t.s.d);
//	printf("%s\n", t.pc);
//}

//struct Stu//结构体类型
//{
//	char name[20];//成员变量
//	short age;
//	char tele[12];
//	char sex[5];
//}s1,s2,s3;//s1,s2,s3是全局变量

//typedef struct Stu//结构体类型
//{
//	char name[20];//成员变量
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;
//
//int main()
//{
//	struct Stu s1 = { "张三",20,"12345678","男" };//是局部的结构体变量
//	Stu s2 = { "旺财",15,"12345","保密" };
//	return 0;
//}