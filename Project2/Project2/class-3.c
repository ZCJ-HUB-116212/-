#include"stdio.h"
#include"windows.h"
int main()
{
	int arr[10];
	int max = 0;
	int i = 0;
	int j = 0;
	printf("输入十个整数：");
	{
		for (i = 0; i < 10; i++)
		{
			scanf_s("%d", &arr[i]);
			max = arr[0];
		}
		for (j = 0; j < 10; j++)
		{
			if (arr[j] > max)
			{
				max = arr[j];
			}
		}
		printf("%d", max);
		system("pause");
		return 0;
	}

}