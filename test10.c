#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

/**********************************************************************
******************************������***********************************
**********************************************************************/



int fun()
{
	static int count = 1;
	return count++;
}

int main()
{
	int answer;
	answer = fun() - fun() * fun();//�����⣬fun�������õ�˳��
	printf("%d\n", answer);
}

int main()
{
	int a = 10;
	int b = 20;
	//int c = b + a * 3;
	int c = b + a + 3;
}

/**************************��������***********************************/
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
	char a = 3;//0000 0000 0000 0000 ��0000 0011��
	char b = 127;//0000 0000 0000 0000 (0111 1111)
	char c = a + b;//0000 0000 0000 0000 ��1000 0010�����������з�������λ�������λ
	printf("%d\n", c);
	//1111 1111 1111 1111 1000 0010---����
	//1111 1111 1111 1111 1000 0001---����
	//1000 0000 0000 0000 0111 1110---ԭ��
}

struct Stu//����һ���ṹ������
{
	//��Ա����
	char name[20];
	int age;
	char id[20];

};

int main()
{
	int a = 10;
	struct Stu s1 = { "����",20,"20000000" };//ʹ��struct stu������ʹ�����һ��ѧ�����󣬲���ʼ��
	struct Stu* ps = &s1;
	printf("%s\n", ps->age);//�ṹ��ָ��->��Ա��
	printf("%s\n", (*ps).age);
	printf("%d\n", s1.age);
	printf("%s\n", s1.name);
	printf("%s\n", s1.id);//�ṹ��.��Ա��
}

int main()
{
	int a = 1;
	int b = 2;
	int c = (a > b, a = b + 10, a, b = a + 1);//13,���Ľ�����Ǳ��ʽ�Ľ��

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