#define _CRT_SECURE_NO_WARNINGS
#include"stdio.h"
#include"windows.h"
int bubble(int arr[], int len)
{
	int i, j, temp = 0;
	for (i = 0; i < len; i++)
	{
		for (j = 0; j < len - i - 1; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
int main()
{
	int arr[10] = { 0 };
	int len = 0;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	len = sizeof(arr) / sizeof(arr[0]);
	bubble(arr, len);
	for (i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	system("pause");
	return 0;
}