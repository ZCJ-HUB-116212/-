#include"stdio.h"
#include"windows.h"
int binarysearch(int arr[], int length, int tofind)
{
	int left = 0;
	int right = length - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < tofind)
		{
			left = mid + 1;
		}
		else if (arr[mid]>tofind)
		{
			right = mid - 1;
		}
		else if (arr[mid] = tofind)
		{
			return mid;
		}
	}
	return -1;
}
int main()
{
	int arr[] = { 1, 2, 4, 6, 7, 8, 10, 11 };
	int length = sizeof(arr) / sizeof(arr[0]);
	int ret = binarysearch(arr, length, 7);
		printf("%d\n", ret);
		system("pause");
		return 0;
}