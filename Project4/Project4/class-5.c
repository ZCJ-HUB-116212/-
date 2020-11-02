#define _CRT_SECURE_NO_WARNINGS
#include"stdio.h"
#include"windows.h"
#include"time.h"
int menu()
{
	printf("==============\n");
	printf("1.开始游戏\n");
	printf("2.结束游戏\n");
	printf("==============\n");
	printf("请输入你的选择：");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}
void game()
{
	int toguess = rand() % 100 + 1;
	while (1)
	{
		printf("输入一个数：");
		int input = 0;
		scanf("%d", &input);
		if (input < toguess)
		{
			printf("低了!\n");
		}
		else if (input > toguess)
		{
			printf("高了!\n");
		}
		else
		{
			printf("猜对了!\n");
			break;
		}
	}
}
int main()
{
	srand(time(0));
	while (1)
	{
		int choice = menu();
		if (choice == 1)
		{
			game();
		}
		else if (choice == 0)
		{
			printf("程序退出:再见!\n");
			break;
		}
		else
		{
			printf("输入有误:请重新输入!\n");
		}
	}
	system("pause");
	return 0;
}