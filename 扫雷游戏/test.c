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
		printf("������:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("ɨ��\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ���������������\n");
			break;
		}
	} while (input);
	return 0;
}