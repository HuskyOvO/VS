#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void menu()
{
	printf("***************************************\n");
	printf("**********1.play   0.exit**************\n");
	printf("***************************************\n");
}

void game()
{
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	InitBoard(mine, ROWS, COLS,'0');
	InitBoard(show, ROWS, COLS,'*');//��ʼ��
	DisplayBoard(show, ROW, COL);//��ӡ����
	SetMine(mine, ROW, COL);
	FindMine(mine,show, ROW, COL);
}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do 
	{
		menu();
		printf("��ѡ��:>");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}