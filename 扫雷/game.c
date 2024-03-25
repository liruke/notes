#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
//初始化棋盘
void InitBoard(char arr[ROWS][COLS], int rows, int cols,char set)
{
	int i = 0;//行
	for (i = 0;i < rows;i++)
	{
		int j = 0;//列
		for (j = 0;j < cols;j++)
		{
			arr[i][j] = set;
		}
	}
}

//打印棋盘
void DisplayBoard(char arr[ROWS][COLS], int row, int col)
{
	int i = 1;
	printf("******扫雷******\n");
	//列号：
	printf("  ");
	for (i = 1;i <= row;i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1;i <= row;i++)
	{
		int j = 1;
		printf("%d ", i);
		for (j = 1;j <= col;j++)
		{
			printf("%c ", arr[i][j]);
		}
		printf("\n");
	}
}

//布置雷
void SetMine(char arr[ROWS][COLS], int row, int col)
{
	//布置10个雷
	int count = EASY_COUNT;
	while (count)
	{
		//布置雷
		//布置成功一个雷count--
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (arr[x][y] == '0')
		{
			arr[x][y] = '1';
			count--;
		}
	}
}



static int GetMine(char mine[ROWS][COLS], int x, int y)
{
	return ((mine[x - 1][y - 1] - '0') + (mine[x - 1][y] - '0') + (mine[x - 1][y + 1] - '0') + (mine[x][y - 1] - '0')
		+ (mine[x][y + 1] - '0') + (mine[x + 1][y - 1] - '0') + (mine[x + 1][y] - '0') + (mine[x + 1][y + 1] - '0'));
}


//排查雷
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x, y = 0;
	int win = 0;
	while (win<row*col- EASY_COUNT)
	{
		printf("请输入要排查的坐标:");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= 9 && x >= 1 && y <= 9)
		{
			if (mine[x][y] == '1')
			{
				printf("很遗憾，你被炸死了\n");
				DisplayBoard(mine, ROW, COL);
				break;
			}
			else
			{
				//统计该坐标周围有几个雷
				//.....
				//不是雷就计算出周围雷的个数
				int n = GetMine(mine, x, y);
				show[x][y] = n + '0';
				system("cls");
				DisplayBoard(show, ROW, COL);
				win++;
				


			}
		}
		else
		{
			printf("坐标非法，请重新输入:");
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("排雷成功\n");
		DisplayBoard(mine, ROW, COL);
	}
}