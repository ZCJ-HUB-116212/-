#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_ROW 9
#define MAX_COL 9
#define DEFAULT_MINE_COUNT 10

void init(char showMap[MAX_ROW][MAX_COL],
	char mineMap[MAX_ROW][MAX_COL]) 
{
	for (int row = 0; row < MAX_ROW; row++) 
	{
		for (int col = 0; col < MAX_COL; col++) 
		{
			showMap[row][col] = '*';
		}
	}
	for (int row = 0; row < MAX_ROW; row++) 
	{
		for (int col = 0; col < MAX_COL; col++) 
		{
			mineMap[row][col] = '0';
		}
	}
	int n = DEFAULT_MINE_COUNT;
	while (n > 0) 
	{
		int row = rand() % MAX_ROW;
		int col = rand() % MAX_COL;
		if (mineMap[row][col] == '1') 
		{
			continue;
		}
		mineMap[row][col] = '1';
		n--;
	}
}
void printMap(char theMap[MAX_ROW][MAX_COL]) 
{
	printf("  |");
	for (int col = 0; col < MAX_COL; col++) 
	{
		printf("%d ", col);
	}
	printf("\n");
	printf("--+------------------\n");
	for (int row = 0; row < MAX_ROW; row++) 
	{
		printf(" %d|", row);
		for (int col = 0; col < MAX_COL; col++) 
		{
			printf("%c ", theMap[row][col]);
		}
		printf("\n");
	}
}
void updateShowMap(char showMap[MAX_ROW][MAX_COL],
	char mineMap[MAX_ROW][MAX_COL], int row, int col) 
{
	int count = 0;
	for (int r = row - 1; r <= row + 1; r++) 
	{
		for (int c = col - 1; c <= col + 1; c++) 
		{
			if (r < 0 || r >= MAX_ROW
				|| c < 0 || c >= MAX_COL) 
			{
				continue;
			}
			if (mineMap[r][c] == '1') 
			{
				count++;
			}
		}
	}
	showMap[row][col] = count + '0';
}
void game()
{
	char showMap[MAX_ROW][MAX_COL] = { 0 };
	char mineMap[MAX_ROW][MAX_COL] = { 0 };
	init(showMap, mineMap);
	int openedblockcount = 0;
	while (1)
	{
		printMap(mineMap);
		printf("====================\n");
		printMap(showMap);
		int row, col = 0;
		printf("请输入要翻开的坐标(row col):");
		scanf("%d %d", &row, &col);
		if (row < 0 || row >= MAX_ROW || col < 0 || col >= MAX_COL)
		{
			printf("您输入的坐标有误！\n");
			continue;
		}
		if (showMap[row][col] != '*')
		{
			printf("此位置已翻开！\n");
			continue;
		}
		if (mineMap[row][col] == '1')
		{
			printf("Game Over!\n");
			printMap(mineMap);
			break;
		}
		updateShowMap(showMap, mineMap, row, col);
		openedblockcount++;
		if (openedblockcount == MAX_ROW*MAX_COL - DEFAULT_MINE_COUNT)
		{
			printf("游戏胜利！\n");
			printMap(mineMap);
			break;
		}
	}
}
int menu()
{
	printf("============\n");
	printf("1. 开始游戏\n");
	printf("0. 结束游戏\n");
	printf("============\n");
	printf("请输入您的选择:");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}
int main() 
{
	srand((unsigned int)time(0));
	while (1) 
	{
		int choice = menu();
		if (choice == 1) 
		{
			game();
		}
		else if (choice == 0) 
		{
			printf("goodbye!\n");
			break;
		}
		else 
		{
			printf("您的输入有误!\n");
		}
	}
	system("pause");
	return 0;
}
