#define _CRT_SECURE_NO_WARNINGS 1
#include "SList.h"




void menu()
{
	printf("----------ͨѶ¼----------\n");
	printf("1.�����ϵ��  2.ɾ����ϵ��\n");
	printf("3.չʾͨѶ¼  4.������ϵ��\n");
	printf("5.�޸���ϵ��  -1.�˳�\n");
}

int main()
{
	contact* con = NULL;
	InitContact(&con);
	int input = 0;
	do
	{
		menu();
		printf("��������Ҫִ�еĲ���:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			//�����ϵ��
			AddContact(&con);
			break;
		}


	} while (input!=-1);
	return 0;
}


