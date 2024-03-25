#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
void menu()
{
	printf("*************************\n");
	printf("**** 1.play  0.exit *****\n");
	printf("*************************\n");
}
void game()
{
	char mine[rows][cols];
	char show[rows][cols];
	InitBoard(mine, rows, cols,'0');
	InitBoard(show, rows, cols,'*');
	DisplayBoard(show, row, col);
	SetMine(mine, row, col);
	FindMine(mine, show,row,col);
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请输入:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("扫雷\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新输入\n");
			break;
		}
	} while (input);
	return 0;
}