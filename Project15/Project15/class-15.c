#define _CRT_SECURE_NO_WARNINGS
#include"stdio.h"
#include"windows.h"
int Fib(int n)
{
	/*int a = 1;
	int b = 1;
	int c = 0;
	if (n <= 2)
	{
		return 1;
	}
	else
	{
		while (n > 2)
		{
			c = a + b;
			a = b;
			b = c;
			n--;
		}
		return c;
	}*/
	if (n <= 2)
	{
		return 1;
	}
	else
	{
		return Fib(n - 1) + Fib(n - 2);
	}

}
int main()
{
	int n = 0;
	printf("求第几个斐波那契数:");
	scanf("%d", &n);
	printf("%d\n", Fib(n));
	system("pause");
	return 0;
}