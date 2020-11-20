#include <stdio.h>
#include <string.h>
#include <windows.h>
void reverse(char *str)
{
	char *left = str;
	char *right = str + strlen(str) - 1;
	while (left < right){
		char temp = *left;
		*left = *right;
		*right = temp;
		left++, right--;
	}
}
int main()
{
	char str[] = "hello world";
	printf("%s\n", str);
	reverse(str);
	printf("%s\n", str);
	system("pause");
	return 0;
}