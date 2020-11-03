#define _CRT_SECURE_NO_WARNINGS
#include"stdio.h"
#include"windows.h"
int swap(int *x, int *y)
{
	int t = 0;
	t = *x;
	*x = *y;
	*y = t;
	return 0;
}
int main()
{
	int x, y = 0;
	printf("请输入两个整数:");
	scanf("%d %d", &x, &y);
	swap(&x,&y);
	printf("%d %d", x, y);
	system("pause");
	return 0;
}