#include "SList.h"




void menu()
{
	printf("---------通讯录------------\n");
	printf("-1.添加联系人 2.删除联系人-\n");
	printf("-2.修改联系人 3.查找联系人-\n");
	printf("-4.查看通讯录 0.退出      -\n");
	printf("---------------------------\n");
}
int main()
{
	int input = -1;
	do
	{
		menu();
		printf("请选择你要执行的操作:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			//添加联系人
			break;
		case 2:
			//删除联系人
			break;
		case 3:
			//修改联系人
			break;
		case 4:
			//查找联系人
			break;
		case 0:
			//查看通讯录
			break;
		default:
			break;
		}
	} while (input);
}