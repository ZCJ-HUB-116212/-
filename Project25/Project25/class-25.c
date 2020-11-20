#include"stdio.h"
#include"windows.h"
void print(int arr[], int count) 
{
	for (int i = 0; i < count; i++) 
	{
		printf("%d ", *(arr + i));
	}
}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	print(arr, 10);
	system("pause");
	return 0;
}