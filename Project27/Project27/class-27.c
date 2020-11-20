#define _CRT_SECURE_NO_WARNINGS
#include"stdio.h"
#include"windows.h"
int Sn(int a)
{
	int count = 0;
	int sum = 0;
	for (int i = 0; i < 5; i++)
	{
		count = count * 10 + a;
		sum += count;
	}
	return sum;
}
int main()
{
	int a = 0;
	scanf("%d", &a);
	printf("%d\n", Sn(a));
	system("pause");
	return 0;
}