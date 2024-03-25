
#define _CRT_SECURE_NO_WARNINGS 1
#include "SList.h"



//初始化通讯录
void InitContact(contact** con)
{
	(*con)->next = NULL;
}
//添加通讯录数据
void AddContact(contact** con)
{
	PeoInfo info;
	printf("请输入联系人地址:");
	scanf("%s", info.addr);
	printf("请输入联系人性别:");
	scanf("%s", info.sex);
	printf("请输入联系人年龄:");
	scanf("%d", &info.age);
	printf("请输入联系人电话:");
	scanf("%s", info.tel);
	printf("请输入联系人姓名:");
	printf("%s", info.name);
	SListPushBack(con, info);
}
//删除通讯录数据
void DelContact(contact** con)
{
	printf("请输入你要删除的联系人姓名:");
	char name[NAME_MAX];
	scanf("%s", name);
	if (FindContact(*con, name))
	{
		contact* cur = *con;
		while (cur)
		{
			if (strcmp(cur->data.name, name))
			{
				SListErase(con, cur);
			}
			cur = cur->next;
		}
	}
}
//展示通讯录数据
void ShowContact(contact* con);
//查找通讯录数据
int  FindContact(contact* con,char name[])
{
	contact* cur = con;
	while (cur != NULL)
	{
		if (strcmp(cur->data.name, name))
		{
			return 1;
		}
		cur = cur->next;
	}
	return 0;
}
//修改通讯录数据
void ModifyContact(contact** con)
{
	printf("请输入你要修改的名字:");
	char name[NAME_MAX];
	scanf("%s", name);
	int ret = FindContact(*con, name);
	contact* cur = *con;
	if (ret)
	{
		while (cur != NULL)
		{
			if (strcmp(cur->data.name, name))
			{
				printf("请输入姓名:");
				scanf("%s", cur->data.name);
				printf("请输入年龄:");
				scanf("%d", &cur->data.age);
				printf("请输入性别:");
				scanf("%s", cur->data.sex);
				printf("请输入电话:");
				scanf("%s", cur->data.tel);
				printf("请输入住址:");
				scanf("%s", cur->data.addr);
				printf("联系人修改成功");
			}
			cur = cur->next;
		}
	}
	else
	{
		printf("未找到联系人");
		return;
	}
}
//销毁通讯录数据
void DestroyContact(contact** con)
{
	contact* cur = *con;
	while (cur)
	{
		contact* prev = cur->next;
		free(cur);
		cur = prev;
	}
	cur = NULL;
}