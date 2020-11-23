#include"stdio.h"
#include"windows.h"
int steamwater(int n)
{
	int sum = n;
	int num = n;
	while (num != 1)
	{
		sum += num / 2;
		num = num / 2 + num % 2;
	}
	return sum;
}
int main()
{
	int n = 0;
	printf("%d\n", steamwater(20));
	system("pause");
	return 0;
}