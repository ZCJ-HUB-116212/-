#define _CRT_SECURE_NO_WARNINGS
#include"stdio.h"
#include"windows.h"
int year(int n)
{
	if ((n % 4 == 0 && n % 100 != 0) || n % 400 == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int n = 0;
	int ret = 0;
	printf("请输入年份:");
	scanf("%d", &n);
	ret = year(n);
	if (ret == 1)
	{
		printf("是闰年\n");
	}
	else
	{
		printf("不是闰年\n");
	}
	system("pause");
	return 0;
}