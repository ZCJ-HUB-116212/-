#include"stdio.h"
#include"windows.h"
void printbit(int num)
{
	printf("����λ: ");
	for (int i = 0; i <= 30; i += 2) 
	{
		printf("%d ", (num >> i) & 1);
	}
	printf("\nż��λ: ");
	for (int i = 1; i <= 31; i += 2) 
	{
		printf("%d ", (num >> i) & 1);
	}
}
int main()
{
	printbit(4321576);
	system("pause");
	return 0;
}