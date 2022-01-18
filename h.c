#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>

/***********************************************
******************判断输入是否正确**************/
int main() 
{
	int i = 0;
	char passworld[20] = { 0 };
	for (i = 0;1 < 3;i++) 
	{
		printf("请输入密码:>");
		scanf("%s", passworld);
		if (strcmp(passworld, "123456") == 0)//==不能判断字符串相等，应用strcmp
		{
			printf("登录成功\n");
			break;
		}
		else
			printf("密码错误\n");
		Sleep(1000);
	    system("cls");
	}
	if (i == 3)
		printf("三次错误，请退出\n");
}


/***********************************************
******************文字显示********************/
int main() 
{
	char arr1[] = "welcome!!!!!!!!!";
	char arr2[] = "                ";
	int left = 0;
	//int right = sizeof(arr1)/sizeof(arr1[0])-2;
	int right = strlen(arr1) - 1;
	while (left <=right) {
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(1000);
		system("cls");//system是执行系统命令的函数，cls是清空屏幕
		left++;
		right--;
	}
	printf("%s\n", arr2);
	return 0;
}





/***********************************************
******************二分法查找********************/
int main() 
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 0;
	scanf_s("%d", &k);
	int sz = sizeof(arr) / sizeof(arr[0]);//计算元素个数
	int left = 0;
	int right = sz-1;
	while (left<=right) 
	{
		int mid = (left + right) / 2;
		if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			printf("下标： %d\n", mid);
			break;
		}
	}
	if (left > right)
		printf("找不到");
}




/***********************************************
******************1~10的阶乘********************/
int main()
{
	int i = 1;
	int p = 1;
	int a = 0;
	int jieguo = 0;
	for (i = 1;i <= 10;i++)
	{
	    p = p * i;		
		jieguo = jieguo + p;
	}
   printf("%d", jieguo);
}



/***********************************************
******************1~10的阶乘********************/
int main()
{
	int i = 1;
	int p = 1;
	int a = 0;
	int jieguo = 0;
	
	for (i = 1;i <= 10;i++)
	{
		
		for (a = 1,p=1;a <= i;a++)
			p = p * a;
		
		jieguo = jieguo + p;

		

	}

	printf("%d", jieguo);
}





/****************************************************
***************阶乘***************************/
int main() 
{
	int i;
	int p = 1;
	int a = 1;
	scanf_s("%d", &i);
	while(p<=i)
	{
		a=a*p;
		p = p+1;
		
	}
	printf("%d\n", a);
}
int main()
{
	int i = 1;
	do {
		printf("%d\n", i);
		i++;
	}
	
	while (i <= 10);
	
}



/***************************************
*******************单数*****************/
int main() 
{
	int b = 0;
	int i = 0;
	while(i<100)
	{
		i++;
		b = i % 2;
		if (b == 1) 
		{
			printf("%d\n", i);
		}
	}

	return 0;


}
