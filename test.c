#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>


/*********************************************************
****************************�ػ�����*********************/
int main()
{//shutdown -s -t 60   60���ػ�shutdown -a ȡ���ػ�
    char input[20] = { 0 };
    system("shutdown -s -t 60");
    again:
    printf("��ĵ��Խ���1�����ڹػ���������룺����������ȡ��\n������>:");
    scanf("%s", input);
    if (strcmp(input, "������") == 0)//strcmp���ڱȽ��ַ���
    {
        system("shutdown -a");
    }
    else
    {
        goto again;
    }
    return 0;
}

/*************************************************************************
*********************************��������Ϸ*******************************
*************************************************************************/
void menu()
{
	printf("*************************************\n");
	printf("***********1.��ʼ   0.����***********\n");
	printf("*************************************\n");
}
void game()
{
	int ret = 0;
	int guess = 0;
	ret = rand()%100+1;//����1~100�����
	while (1)
	{
		printf("�������>:");
		scanf_s("%d", &guess);
		if (guess > ret)
		{
			printf("�´���\n");
		}
		else if(guess<ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf("�¶���\n");
			break;
		}
	}
}
int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��>:");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ");
			break;
		default:
			printf("ѡ�����");
			Sleep(1000);
			system("cls");
			break;
		}
	} 
	while (input);
	return 0;
}
/*********************************************************
************************��ӡ�žų˷���********************/
int main()
{
	int i = 0;
	for (i = 1;i <= 9;i++)
	{
		int j = 1;
		for (j = 1;j <= i;j++)
		{
			printf("%d*%d=%-2d ", i, j,i*j);//%d�м������x��ʾ��ӡxλ����
		}                                   //xΪ���������
		printf("\n");
	}
}

int main()
{
	int a = 1;
	int b = 1;
	for (a = 1;a <= 9;a++)
	{
		for (b = 1;b <= 9;b++)
		{
			if (b >= a)
			{
				printf("%d*%d=%-2d ", a, b, a*b);
			}
		}
		if (b = 9)
		{
			printf("\n");
		}
	}

}

/*********************************************************
************************10���������ֵ********************/
int main()
{
	int arr[] = { -2, -3, -4, -5, -6, -7, -8, -9, -1, -10 };
	int a = 0;
	int b = 1;
	for (b=1;b <= 9;b++)
	{
		if (arr[a] < arr[b])
		{
			a = b;
		}
	}
	printf("%d", arr[a]);
}

/******************����*************************************/
int main()
{
	int i = 0;
	double sum = 0.0;
	for (i = 1;i <= 100;i++)//����һ��a��a=-a
	{
		if (i % 2 == 1)
			sum = sum + 1.0/i;
		else
			sum = sum - 1.0/i;
	}
	printf("%lf", sum);
}

/*********************************************************
************************0~100��9�ĸ���********************/
int main()
{
	int i = 0;
	int j = 0;
	for (i = 1;i <= 100;i++)
	{
		if (i % 10 == 9 || i / 10 == 9)
		{
			j++;
		}
		if (i % 10 == 9 && i / 10 == 9)
		{
			j++;
		}
	}
	printf("%d\n", j);
}

/*********************************************************
************************100~200������********************/

int main()
{
	int i = 0;
	for (i = 101;i <= 200;i+=2)       //sqrt   �ǿ�ƽ������ѧ�⺯��
	{
		int j = 0;
		for (j = 2;j <=sqrt(i);j++)
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if (j > sqrt(i))
		{
			printf("%d ", i);
		}
	}
}

/*������*/
int main()
{
	int i = 0;
	for (i = 100;i <= 200;i++)
	{
		int j = 0;
		for (j = 2;j < i;j++)
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if (j == i)
		{
			printf("%d ", i);
		}
	}
}
int main()
{
	int i = 0;
	int a = 0;
	int c = 0;
	for (i = 100;i <= 200;i++)
	{
		for (a = i - 1,c=0;a!=0;a--)
		{
			if (c == 0 && a == 1)
			{
				printf("%d ", i);
				break;
			}
			if (i % a == 0)
			{
				c++;
			}
			else
				continue;
		}
		

	}
}

/*********************************************************
*****************************����************************/
int main()
{
	int i = 0;
	for (i = 1000;i <= 2000;i++)
	{
		//�Ƿ�Ϊ����
	    //1.�ܱ�4�����Ҳ���100����
		//2.�ܱ�400����
		if (i % 4 == 0&&i%100!=0)
			printf("%d ", i);
		if(i%400==0)
			printf("%d ", i);
	}
	return 0;
}

/*********************************************************
************************���Լ��************************/
int main()
{
	int m = 0;
	int n = 0;
	int r = 0;
	scanf_s("%d %d", &m, &n);
	while(r=m%n)                          //շת�����
	{
		//r = m % n;
		m = n;
		n = r;
	}
	printf("%d", n);


	return 0;
}


/*********************************************************
************************���ı���*************************/
int main()
{
	int a = 0;
	for (a = 1;a <= 100;a++)
	{
		if (a % 3 == 0)
			printf("%d ", a);

	}
}



/*********************************************************
********************�Ƚ��������Ĵ�С**********************/
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf_s("%d%d%d", &a, &b, &c);
	if (a < b)
	{
		int tmp = a;
		a = b;
		b = tmp;
	}
	if (a < c)
	{
		int tmp = a;		
		a = c;
		c = tmp;
	}
	if (b < c)
	{
		int tmp = b;
		b = c;
		c = tmp;
	}
	printf("%d %d %d", a, b, c);
}


int Max(x,y,z)
{
	
	if (x > y && x > z)
	{
		return x;
	}
	else if (y > x && y > z)
		return y;
	else
		return z;
}
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf_s("%d%d%d", &a, &b, &c);
	if (Max(a, b, c) == a)
	{
		printf("%d ", a);
		if (b > c)
		{
			printf("%d %d", b, c);
		}
		else
			printf("%d %d", c, b);
	}
	if (Max(a, b, c) == b)
	{
		printf("%d ", b);
		if (a > c)
		{
			printf("%d %d", a, c);
		}
		else
			printf("%d %d", c, a);
	}if (Max(a, b, c) == c)
	{
		printf("%d ", c);
		if (a > b)
		{
			printf("%d %d", a, b);
		}
		else
			printf("%d %d", b, a);
	}
}

