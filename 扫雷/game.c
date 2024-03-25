#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
//��ʼ������
void InitBoard(char arr[ROWS][COLS], int rows, int cols,char set)
{
	int i = 0;//��
	for (i = 0;i < rows;i++)
	{
		int j = 0;//��
		for (j = 0;j < cols;j++)
		{
			arr[i][j] = set;
		}
	}
}

//��ӡ����
void DisplayBoard(char arr[ROWS][COLS], int row, int col)
{
	int i = 1;
	printf("******ɨ��******\n");
	//�кţ�
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

//������
void SetMine(char arr[ROWS][COLS], int row, int col)
{
	//����10����
	int count = EASY_COUNT;
	while (count)
	{
		//������
		//���óɹ�һ����count--
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


//�Ų���
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x, y = 0;
	int win = 0;
	while (win<row*col- EASY_COUNT)
	{
		printf("������Ҫ�Ų������:");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= 9 && x >= 1 && y <= 9)
		{
			if (mine[x][y] == '1')
			{
				printf("���ź����㱻ը����\n");
				DisplayBoard(mine, ROW, COL);
				break;
			}
			else
			{
				//ͳ�Ƹ�������Χ�м�����
				//.....
				//�����׾ͼ������Χ�׵ĸ���
				int n = GetMine(mine, x, y);
				show[x][y] = n + '0';
				system("cls");
				DisplayBoard(show, ROW, COL);
				win++;
				


			}
		}
		else
		{
			printf("����Ƿ�������������:");
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("���׳ɹ�\n");
		DisplayBoard(mine, ROW, COL);
	}
}