#define _CRT_SECURE_NO_WARNINGS
#include"stdio.h"
#include"windows.h"
double power(int n, int k)
{
	if (k < 0)
	{
		k = -k;
		return 1 / (n*power(n, k - 1));
	}
	else if (k == 0)
	{
		return 1;
	}
	else if (k > 0)
	{
		return n*power(n, k - 1);
	}
}
int main()
{
	int n, k = 0;
	printf("输入底数和指数:\n");
	scanf("%d %d", &n, &k);
	double ret = power(n, k);
	printf("%d^%d=%lf\n", n, k, ret);
	system("pause");
	return 0;
}