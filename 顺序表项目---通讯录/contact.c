#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"
#include "A.h"





//通讯录的初始化和销毁

void ContactInit(Contact* pcon)
{
	AInit(pcon);
	
}
void ContactDestory(Contact* pcon)
{
	Adestroy(pcon);
}


//增删查改
void ContactAdd(Contact* pcon)
{
	Info info;
	printf("请输入联系人姓名:");
	scanf("%s", info.name);
	printf("请输入联系人的年龄:");
	scanf("%d", &info.age);
	printf("请输入联系人的性别:");
	scanf("%s", info.gender);
	printf("请输入联系人的电话:");
	scanf("%s", info.tel);
	printf("请输入联系人的住址:");
	scanf("%s", info.addr);
	//保存数据到通讯录中

	Apushback(pcon, info);

}
int FindByName(Contact* pcon, char name[])
{
	//找到了，返回下标
	for (int i = 0;i < pcon->size;i++)
	{
		if (strcmp(pcon->a[i].name, name) == 0)
		{
			return i;
		}
	}
	return -1;
}
void ContactDel(Contact* pcon)
{
	//删除之前需要查找
	//找到了，可以删除
	//找不到，不能执行删除操作
	printf("请输入要删除的联系人姓名:");
	char name[NAME_MAX];
	scanf("%s", name);
	int ret = FindByName(pcon, name);
	if (ret != -1)
	{
		Aerase(pcon, ret);
	}
	else
	{
		printf("未找到联系人请重新输入");
		return;
	}
}
void ContactModify(Contact* pcon)
{
	//修改之前需要查找
	//找到了，执行操作
	//没有找到，不能执行修改操作
	printf("请输入你要修改的联系人姓名:");
	char name[NAME_MAX];
	scanf("%s", name);
	int ret = FindByName(pcon, name);
	if (ret != -1)
	{
		printf("请输入姓名:");
		scanf("%s", pcon->a[ret].name);
		printf("请输入年龄:");
		scanf("%d", &pcon->a[ret].age);
		printf("请输入性别:");
		scanf("%s", pcon->a[ret].gender);
		printf("请输入电话:");
		scanf("%s", pcon->a[ret].tel);
		printf("请输入住址:");
		scanf("%s", pcon->a[ret].addr);
		printf("联系人修改成功");
	}
	else
	{
		printf("未找到需要修改的联系人");
		return;
	}
}


void ContactFind(Contact* pcon)//查找方式
{
	char name[NAME_MAX];
	printf("请输入需要查找的联系人姓名:");
	scanf("%s", name);
	int ret = FindByName(pcon, name);
	if (ret != -1)
	{
		printf("%s %s %d %s %s\n",
			pcon->a[ret].name,
			pcon->a[ret].gender,
			pcon->a[ret].age,
			pcon->a[ret].tel,
			pcon->a[ret].addr);
	}
	else
	{
		printf("该联系人存在");
		return;
	}
}
void ContactShow(Contact* pcon)
{
	printf("%s  %s  %s  %s  %s\n","姓名","性别","年龄","电话","地址");
	for (int i = 0;i < pcon->size;i++)
	{
		printf("%s %s %d %s %s\n",
			pcon->a[i].name,
			pcon->a[i].gender,
			pcon->a[i].age,
			pcon->a[i].tel,
			pcon->a[i].addr);
	}
}