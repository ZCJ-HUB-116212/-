#include"stdio.h"
#include"windows.h"
int prime(int i)
{
	int j = 0;
	for (j = 2; j < i; j++)
	{
		if (i%j == 0)
		{
			return 0;
		}
	}
	return 1;	
}
int main()
{
	int i = 0;
	for (i = 100; i <= 200; i++)
	{
		if (prime(i) == 1)
		{
			printf("%d\n", i);
		}
	}
	system("pause");
	return 0;
}