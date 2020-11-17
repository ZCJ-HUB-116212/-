#define _CRT_SECURE_NO_WARNINGS 
#include"stdio.h"
#include"windows.h"
int binary_statistics(int num)
{
	int count = 0;
	while (num) 
	{
		num = num & num - 1;
		count++;
	}
	return count;
}
int calc_diff_bit(int m, int n)
{
	int temp = m ^ n;
	return binary_statistics(temp);
}
int main()
{
	int m = 0;
	int n = 0;
	scanf("%d %d", &m, &n);
	printf("%d\n", calc_diff_bit(m, n));
	system("pause");
	return 0;
}