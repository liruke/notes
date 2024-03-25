#define _CRT_SECURE_NO_WARNINGS
#include "A.h"
void menu()
{
	printf("****************************************\n");
	printf("1.尾插数据               2.头插数据     \n");
	printf("3.尾删数据               4.头删数据     \n");
	printf("5.打印数据               0.退出         \n");
	printf("****************************************\n");
	printf("请输入操作数:");
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
			printf("请输入你要插入的数据，以-1结束\n");
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
			printf("请输入你要插入的数据，以-1结束\n");
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
			printf("请确定尾删几次:");
			scanf("%d", &x);
			for (int i = 0;i < x;i++)
			{
				Apopback(&s);
			}
			break;
		case 4:
			printf("请确定头删删几次:");
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
			printf("退出程序\n");
			break;
		default:
			printf("请重新输入");
			break;
		}

	} while (option!=-1);
	return 0;
}