#define _CRT_SECURE_NO_WARNINGS 1
#include "SList.h"




void menu()
{
	printf("----------通讯录----------\n");
	printf("1.添加联系人  2.删除联系人\n");
	printf("3.展示通讯录  4.查找联系人\n");
	printf("5.修改联系人  -1.退出\n");
}

int main()
{
	contact* con = NULL;
	InitContact(&con);
	int input = 0;
	do
	{
		menu();
		printf("请输入你要执行的操作:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			//添加联系人
			AddContact(&con);
			break;
		}


	} while (input!=-1);
	return 0;
}


