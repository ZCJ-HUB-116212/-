#include"stdio.h"
#include"windows.h"
void swap(int *num1, int *num2)
{
	*num1 = *num1 ^ *num2;
	*num2 ^= *num1;
	*num1 ^= *num2;
}
int main()
{
	int a = 20, b = 30;
	int *p = &a;
	printf("a=%d b=%d\n", a, b);
	swap(&a, &b);
	printf("a=%d b=%d\n", a, b);
	system("pause");
	return 0;
}