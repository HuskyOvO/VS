#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>



//typedef struct Stu//�ṹ������
//{
//	char name[20];//��Ա����
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;
//
//void Print1(Stu tmp)//�˷ѿռ䣬ѹջ����
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
//	struct Stu s = { "����",20,"12345678","��" };//�Ǿֲ��Ľṹ�����
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

//struct Stu//�ṹ������
//{
//	char name[20];//��Ա����
//	short age;
//	char tele[12];
//	char sex[5];
//}s1,s2,s3;//s1,s2,s3��ȫ�ֱ���

//typedef struct Stu//�ṹ������
//{
//	char name[20];//��Ա����
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;
//
//int main()
//{
//	struct Stu s1 = { "����",20,"12345678","��" };//�Ǿֲ��Ľṹ�����
//	Stu s2 = { "����",15,"12345","����" };
//	return 0;
//}