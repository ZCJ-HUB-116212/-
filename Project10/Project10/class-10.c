#define _CRT_SECURE_NO_WARNINGS
#include"stdio.h"
#include"windows.h"
int Factorial(int n)
{
	//int num = 1;
	//int i = 0;
	//for (i = 1; i <= n; i++)
	//{
	//	num = num*i;
	//}
	//return num;
	if (n == 1)
	{
		return 1;
	}
	else
	{
		return n*Factorial(n - 1);
	}
}
int main()
{
	int n = 0;
	printf("ÇónµÄ½×³Ë:n=");
	scanf("%d", &n);
	printf("%d",Factorial(n));
	system("pause");
	return 0;
}
