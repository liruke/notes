#define _CRT_SECURE_NO_WARNINGS
#include "A.h"
void menu()
{
	printf("****************************************\n");
	printf("1.β������               2.ͷ������     \n");
	printf("3.βɾ����               4.ͷɾ����     \n");
	printf("5.��ӡ����               0.�˳�         \n");
	printf("****************************************\n");
	printf("�����������:");
}
int main()
{
	int option = 0;
	SA s;
	AInit(&s);
	int x = 0;
	do
	{
		menu();
		scanf("%d", &option);
		switch (option)
		{
		case 1:
			printf("��������Ҫ��������ݣ���-1����\n");
			do
			{
				scanf("%d", &x);
				if (x != -1)
				{
					Apushback(&s, x);
				}
			} while (x != -1);
			break;
		case 2:
			printf("��������Ҫ��������ݣ���-1����\n");
			do
			{
				scanf("%d", &x);
				if (x != -1)
				{
					Apushfront(&s, x);
				}
			} while (x != -1);
			break;
		case 3:
			printf("��ȷ��βɾ����:");
			scanf("%d", &x);
			for (int i = 0;i < x;i++)
			{
				Apopback(&s);
			}
			break;
		case 4:
			printf("��ȷ��ͷɾɾ����:");
			scanf("%d", &x);
			for (int i = 0;i < x;i++)
			{
				Apopfront(&s);
			}
			break;
		case 5:
			Aprintf(&s);
			printf("\n");
			break;
		case 0:
			printf("�˳�����\n");
			break;
		default:
			printf("����������");
			break;
		}

	} while (option!=-1);
	return 0;
}