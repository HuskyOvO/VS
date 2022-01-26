#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

/**********************************************************************
******************************操作符***********************************
**********************************************************************/



int fun()
{
	static int count = 1;
	return count++;
}

int main()
{
	int answer;
	answer = fun() - fun() * fun();//有问题，fun（）调用的顺序
	printf("%d\n", answer);
}

int main()
{
	int a = 10;
	int b = 20;
	//int c = b + a * 3;
	int c = b + a + 3;
}

/**************************整形提升***********************************/
int main()
{
	char c = 1;//1
	printf("%u\n", sizeof(c));//1
	printf("%u\n", sizeof(+c));//4
	printf("%u\n", sizeof(!c));//1
}

int main()
{
	char a = 0xb6;//10110110
	short b = 0xb600;
	int c = 0xb6000000;
	if (a == 0xb6)
		printf("a");
	if(b == 0xb600)
		printf("b");
	if(c == 0xb6000000)
		printf("c");
}

int main()
{
	char a = 3;//0000 0000 0000 0000 （0000 0011）
	char b = 127;//0000 0000 0000 0000 (0111 1111)
	char c = a + b;//0000 0000 0000 0000 （1000 0010）整形提升有符号数高位补充符号位
	printf("%d\n", c);
	//1111 1111 1111 1111 1000 0010---补码
	//1111 1111 1111 1111 1000 0001---反码
	//1000 0000 0000 0000 0111 1110---原码
}

struct Stu//创建一个结构体类型
{
	//成员变量
	char name[20];
	int age;
	char id[20];

};

int main()
{
	int a = 10;
	struct Stu s1 = { "张三",20,"20000000" };//使用struct stu这个类型创建了一个学生对象，并初始化
	struct Stu* ps = &s1;
	printf("%s\n", ps->age);//结构体指针->成员名
	printf("%s\n", (*ps).age);
	printf("%d\n", s1.age);
	printf("%s\n", s1.name);
	printf("%s\n", s1.id);//结构体.成员名
}

int main()
{
	int a = 1;
	int b = 2;
	int c = (a > b, a = b + 10, a, b = a + 1);//13,最后的结果就是表达式的结果

}

int main()
{
	int a = 0;
	int b = 0;
	if (a > 5)
		b = -3;
	else
		b = 3;

	b = (a > 5 ? 3:-3);
	return 0;
}int c = b + a * 3;