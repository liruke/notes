#include "A.h"//��˳������Ѿ�������ͨѶ¼��ͷ�ļ�



void menu()
{
	printf("----------ͨѶ¼-----------\n");
	printf("-1.�����ϵ�� 2.ɾ����ϵ��-\n");
	printf("-3.�޸���ϵ�� 4.������ϵ��-\n");
	printf("-5.�鿴ͨѶ¼ 0.�˳�      -\n");
	printf("---------------------------\n");
}
int main()
{
	int input = -1;
	Contact con;
	ContactInit(&con);
	do
	{
		menu();
		printf("��ѡ����Ĳ���:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			//�����ϵ��
			ContactAdd(&con);
			break;
		case 2:
			//ɾ����ϵ��
			ContactDel(&con);
			break;
		case 3:
			//�޸���ϵ��
			ContactModify(&con);
			break;
		case 4:
			//������ϵ��
			ContactFind(&con);
			break;
		case 5:
			//�鿴ͨѶ¼
			ContactShow(&con);
			break;
		case 0:
			//�˳�
			printf("ͨѶ¼�˳�\n");
			break;
		}
	} while (input);
	ContactDestory(&con);
	return 0;
}