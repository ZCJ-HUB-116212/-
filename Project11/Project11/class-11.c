#include"stdio.h"
#include"windows.h"
int mystrlen(char *str)
{
	if (*str == '\0')
	{
		return 0;
	}
	else
	{
		return 1 + mystrlen(str + 1);
	}
	//int count = 0;
	//while (*str!='\0')
	//{
	//	str++;
	//	count++;
	//}
	//return count;
}
int main()
{
	printf("%d", mystrlen("hello world"));
	system("pause");
	return 0;
}