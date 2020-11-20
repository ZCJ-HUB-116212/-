#include"stdio.h"
#include"windows.h"
#define N 10
int main()
{
	int i, j = 0;
	int a[N][N];
	for (i = 0; i < N; i++)
	{
		a[i][0] = 1;
		a[i][i] = 1;
	}
	for (i = 2; i < N; i++)
	{
		for (j = 1; j < i; j++)
		{
			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
		}
	}
	for (i = 0; i < N;i++)
	{
		for (int k = 0; k < 2*(N - i); k++)
		{
			printf(" ");
		}
		for (j = 0; j <= i; j++)
		{
			printf("%4d ", a[i][j]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
