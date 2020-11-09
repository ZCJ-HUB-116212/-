#include <stdio.h>
#include <stdlib.h>
int print(int arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		arr[i] = i;
	}
}
int init(int arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		arr[i] = 0;
	}
}
int reverse(int arr[], int len)
{
	int left = 0;
	int right = len - 1;
	while (left < right)
	{
		int temp = arr[left];
		arr[left] = arr[right];
		arr[right] = temp;
		left++;
		right--;
	}
}
int printarry(int arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
int main()
{
	int arr[10];
	int len = sizeof(arr) / sizeof(arr[0]);
	printf("原数组:");
	print(arr, len);
	printarry(arr, len);
	printf("逆置数组:");
	reverse(arr, len);
	printarry(arr, len);
	printf("初始化数组:");
	init(arr, len);
	printarry(arr, len);
	system("pause");
	return 0;
}