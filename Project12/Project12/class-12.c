#include"stdio.h"
#include"windows.h"
char *reverse_string(char *string)
{
	if (strlen(string)<2)
	{
		return string;
	}
		char ch = *string;
		int length = strlen(string) - 1;
		*string = *(string + length);
		*(string + length) = '\0';
		reverse_string(string + 1);
		*(string + length) = ch;
	    return string;
}
int main()
{
	char arr[] = "hello world";
	printf("%s\n", reverse_string(arr));
	system("pause");
	return 0;
}
