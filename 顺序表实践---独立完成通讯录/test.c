#include "SList.h"




void menu()
{
	printf("---------ͨѶ¼------------\n");
	printf("-1.�����ϵ�� 2.ɾ����ϵ��-\n");
	printf("-2.�޸���ϵ�� 3.������ϵ��-\n");
	printf("-4.�鿴ͨѶ¼ 0.�˳�      -\n");
	printf("---------------------------\n");
}
int main()
{
	int input = -1;
	do
	{
		menu();
		printf("��ѡ����Ҫִ�еĲ���:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			//�����ϵ��
			break;
		case 2:
			//ɾ����ϵ��
			break;
		case 3:
			//�޸���ϵ��
			break;
		case 4:
			//������ϵ��
			break;
		case 0:
			//�鿴ͨѶ¼
			break;
		default:
			break;
		}
	} while (input);
}