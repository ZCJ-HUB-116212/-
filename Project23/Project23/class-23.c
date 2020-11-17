#define _CRT_SECURE_NO_WARNINGS
#include"stdio.h"
#include"windows.h"
int count_one_bits(int num)
{
	int count = 0;
	while (num!=0) 
	{
		num = num & num - 1;
		count++;
	}
	return count;
}
int main()
{
	int num = 0;
	printf("输入一个数:");
	scanf("%d", &num);
	printf("%d\n", count_one_bits(num));
	system("pause");
	return 0;
}
