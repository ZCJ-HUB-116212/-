#define _CRT_SECURE_NO_WARNINGS
#include"stdio.h"
#include"windows.h"
int recursion(int num)
{
	if (num < 10)
	{
		printf("%d ", num);
	}
	else
	{
		recursion(num / 10);
		printf("%d ", num % 10);
	}
}
int main()
{
	int num;
	printf("输入一个数:");
	scanf("%d", &num);
	recursion(num);
	getchar();
	system("pause");
	return 0;
}