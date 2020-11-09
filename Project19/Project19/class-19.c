#define _CRT_SECURE_NO_WARNINGS
#include"stdio.h"
#include"windows.h"
#include"time.h"

#define MAX_ROW 3
#define MAX_COL 3
void init(char Board[MAX_ROW][MAX_COL])
{
	for (int row = 0; row < MAX_ROW; row++)
	{
		for (int col = 0; col < MAX_COL; col++)
		{
			Board[row][col] = ' ';
		}
	}
}
void printBoard(char Board[MAX_ROW][MAX_COL])
{
	printf("+---+---+---+\n");
	for (int row = 0; row < MAX_ROW; row++)
	{
		printf("| %c | %c | %c |\n", Board[row][0], Board[row][1],
			Board[row][2]);
		printf("+---+---+---+\n");
	}
}
void playerMove(char Board[MAX_ROW][MAX_COL])
{
	while (1)
	{
		printf("�������������(row col):");
		int row, col = 0;
		scanf("%d %d", &row, &col);
		if (row < 0 || row >= MAX_ROW || col < 0 || col >= MAX_COL)
		{
			printf("����������겻�ںϷ���Χ��[0,2]\n");
			continue;
		}
		if (Board[row][col] != ' ')
		{
			printf("�˴������ӣ�\n");
			continue;
		}
		Board[row][col] = 'x';
		break;
	}
}
void computerMove(char Board[MAX_ROW][MAX_COL])
{
	while (1)
	{
		int row = rand() % MAX_ROW;
		int col = rand() % MAX_COL;
		if (Board[row][col] != ' ')
		{
			continue;
		}
		Board[row][col] = 'o';
		break;
	}
}
int isFull(char Board[MAX_ROW][MAX_COL])
{
	for (int row = 0; row < MAX_ROW;row++)
	{
		for (int col = 0; col < MAX_COL; col++)
		{
			if (Board[row][col] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}
char isWin(char Board[MAX_ROW][MAX_COL])
{
	for (int row = 0; row < MAX_ROW; row++)
	{
		if (Board[row][0] != ' '
			&& Board[row][0] == Board[row][1]
			&& Board[row][0] == Board[row][2])
		{
			return Board[row][0];
		}
	}
	for (int col = 0; col < MAX_COL; col++)
	{
		if (Board[0][col] != ' '
			&& Board[0][col] == Board[1][col]
			&& Board[0][col] == Board[2][col])
		{
			return Board[0][col];
		}
	}
	if (Board[0][0] != ' '
		&& Board[0][0] == Board[1][1]
		&& Board[0][0] == Board[2][2])
	{
		return Board[0][0];
	}
	if (Board[2][0] != ' '
		&& Board[2][0] == Board[1][1]
		&& Board[2][0] == Board[0][2])
	{
		return Board[2][0];
	}
	if (isFull(Board))
	{
		return 'q';
	}
	return ' ';
}
void game()
{
	char Board[MAX_ROW][MAX_COL] = { 0 };
	init(Board);
	char winner = ' ';
	while (1)
	{
		printBoard(Board);
		playerMove(Board);
		winner = isWin(Board);
		if (winner != ' ')
		{
			break;
		}
		computerMove(Board);
		winner = isWin(Board);
		if (winner != ' ')
		{
			break;
		}
	}
	printBoard(Board);
	if (winner == 'x')
	{
		printf("��ϲ������Ӯ�ˣ�\n");
	}
	else if (winner == 'o')
	{
		printf("���ź�������Ӯ�ˣ�\n");
	}
	else
	{
		printf("���͵������忪��\n");
	}
}
int menu()
{
	printf("============\n");
	printf("1.��ʼ��Ϸ\n");
	printf("2.������Ϸ\n");
	printf("============\n");
	printf("����������ѡ��:");
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
	}
	system("pause");
	return 0;
}
