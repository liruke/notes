//����ļ�������߼�

#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

//�ڵ�ͼ�ϲ���10����
//�Ų��ף����λ�����ף���ը������Ϸ����
//�����ף���ͳ��������Χ���׵ĸ�������ʾ
//��������з��׵�λ���ҵ�����Ϸ����(��ʤ)
//������ݵ�����̫�࣬���ײ�������    ��ͳ��һ��������Χ���׵�ʱ����ܻ�Խ��
//����������һȦ��

//�����漰����ά���飬
void menu()
{
	printf("***********************\n");
	printf("*      1.play         *\n");
	printf("*      0.exit         *\n");
	printf("***********************\n");
}
void game()
{
	//���׵�����
	char mine[ROWS][COLS];

	//��ӡ��������Χ�׵���Ϣ������
	char show[ROWS][COLS];

	//��ʼ������
	InitBoard(mine, ROWS, COLS, '0');//'0'
	InitBoard(show, ROWS, COLS, '*');//'*'
	//��ӡ����
	DisplayBoard(show, ROW, COL);
	// 
	//1.�����ף�
	SetMine(mine, ROW, COL);

	//�Ų���
	FindMine(mine, show, ROW, COL);
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("������:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��!\n");
			break;
		}
	} while (input);
	return 0;
}