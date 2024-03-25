#include"game.h"
#define _CRT_SECURE_NO_WARNINGS
void InitBoard(char arr[rows][cols], int Rows, int Cols,char set)
{
	int i = 0;
	for (i = 0;i < Rows;i++)
	{
		int j = 0;
		for (j = 0;j < Cols;j++)
		{
			arr[i][j] = '*';
		}
	}
}
void DisplayBoard(char board[rows][cols], int Rows, int Cols)
{
	int i = 0;
	for (i = 0;i <= Rows;i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1;i <= Rows;i++)
	{
		int j = 0;
		printf("%d ",i);
		for (j = 1;j <= Cols;j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}
void SetMine(char board[rows][cols], int Rows, int Cols)
{
	int count = 10;
	while (count)
	{
		int x = rand() % Rows+ 1;
		int y = rand() % Cols + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}
int GetMineCount(char mine[rows][cols], int x, int y)
{
	return (mine[x - 1][y] + mine[x - 1][y - 1] + mine[x][y - 1] + mine[x + 1][y - 1]
		+ mine[x + 1][y] + mine[x + 1][y + 1] + mine[x][y + 1] + mine[x - 1][y + 1] - 8 * '0');
}
void FindMine(char mine[rows][cols], char show[rows][cols], int Rows, int Cols)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win<Rows*Cols-10)
	{
		printf("请输入要排查的坐标:");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= Rows && y >= 1 && y <= Cols)
		{
			if (mine[x][y] == '1')
			{
				printf("你被炸死了\n");
				DisplayBoard(mine, row, col);
				break;
			}
			else
			{
				int count = GetMineCount(mine,x,y);
				show[x][y] = count + '0';
				DisplayBoard(show, row, col);
				win++;
			}
		}
		else
		{
			printf("坐标不符，请重新输入\n");
		}
	}
	if (win == Rows * Cols - 10)
	{
		printf("恭喜你，排雷成功");
		DisplayBoard(mine, row, col);
	}
}