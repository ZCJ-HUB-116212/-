#define _CRT_SECURE_NO_WARNINGS
#include"stdio.h"
#include"windows.h"
int DigitSum(int num)
{
	if (num < 10)
	{
		return num;
	}
	else
	{
		return num % 10 + DigitSum(num / 10);
	}
}
int main()
{
	int num = 0;
	printf("请输入一个非负整数:");
	scanf("%d", &num);
	printf("%d", DigitSum(num));
	system("pause");
	return 0;
}