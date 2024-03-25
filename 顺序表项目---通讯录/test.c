#include "A.h"//在顺序表中已经包含了通讯录的头文件



void menu()
{
	printf("----------通讯录-----------\n");
	printf("-1.添加联系人 2.删除联系人-\n");
	printf("-3.修改联系人 4.查找联系人-\n");
	printf("-5.查看通讯录 0.退出      -\n");
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
		printf("请选择你的操作:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			//添加联系人
			ContactAdd(&con);
			break;
		case 2:
			//删除联系人
			ContactDel(&con);
			break;
		case 3:
			//修改联系人
			ContactModify(&con);
			break;
		case 4:
			//查找联系人
			ContactFind(&con);
			break;
		case 5:
			//查看通讯录
			ContactShow(&con);
			break;
		case 0:
			//退出
			printf("通讯录退出\n");
			break;
		}
	} while (input);
	ContactDestory(&con);
	return 0;
}