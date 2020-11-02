#include"stdio.h"
#include"windows.h"
int main()
{
	int x = 0;
	int y = 0;
	int z = 0;
	for (x = 1; x <= 9; x++)
	{
		for (y = 1; y <= 9; y++)
		{
			z = x*y;
			printf("%d*%d=%d ", x, y, z);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}