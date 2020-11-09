#include <stdio.h>
#include <stdlib.h>
int main(){
	int a[6] = { 1, 2, 3, 4, 5, 6 };
	int b[6] = { 6, 7, 8, 9,10, 11 };

	int i = 0;
	int t = 0;
	for (i = 0; i < 6; i++)
	{
		t = a[i];
		a[i] = b[i];
		b[i] = t;
	}
	for (i = 0; i < 6; i++)
	{
		printf("%d ", a[i]);
	}
	putchar('\n');
	for (i = 0; i < 6; i++)
	{
		printf("%d ", b[i]);
	}
	putchar('\n');
	system("pause");
	return 0;
}
