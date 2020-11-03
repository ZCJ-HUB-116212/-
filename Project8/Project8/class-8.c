#define _CRT_SECURE_NO_WARNINGS
#include"stdio.h"
#include"windows.h"
int multiplication(int n)
{
	int i = 0;
	for (i = 1; i <= n; i++)
	{
		int j = 0;
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%d\t", i, j, i*j);
		}
		printf("\n");
	}
	return 0;
}
int main()
{
	int n = 0;
	printf("输入一个数:");
	scanf("%d", &n);
	multiplication(n);
	getchar();
	system("pause");
	return 0;
}