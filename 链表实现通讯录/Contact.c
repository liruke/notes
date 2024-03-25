
#define _CRT_SECURE_NO_WARNINGS 1
#include "SList.h"



//��ʼ��ͨѶ¼
void InitContact(contact** con)
{
	(*con)->next = NULL;
}
//���ͨѶ¼����
void AddContact(contact** con)
{
	PeoInfo info;
	printf("��������ϵ�˵�ַ:");
	scanf("%s", info.addr);
	printf("��������ϵ���Ա�:");
	scanf("%s", info.sex);
	printf("��������ϵ������:");
	scanf("%d", &info.age);
	printf("��������ϵ�˵绰:");
	scanf("%s", info.tel);
	printf("��������ϵ������:");
	printf("%s", info.name);
	SListPushBack(con, info);
}
//ɾ��ͨѶ¼����
void DelContact(contact** con)
{
	printf("��������Ҫɾ������ϵ������:");
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
//չʾͨѶ¼����
void ShowContact(contact* con);
//����ͨѶ¼����
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
//�޸�ͨѶ¼����
void ModifyContact(contact** con)
{
	printf("��������Ҫ�޸ĵ�����:");
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
				printf("����������:");
				scanf("%s", cur->data.name);
				printf("����������:");
				scanf("%d", &cur->data.age);
				printf("�������Ա�:");
				scanf("%s", cur->data.sex);
				printf("������绰:");
				scanf("%s", cur->data.tel);
				printf("������סַ:");
				scanf("%s", cur->data.addr);
				printf("��ϵ���޸ĳɹ�");
			}
			cur = cur->next;
		}
	}
	else
	{
		printf("δ�ҵ���ϵ��");
		return;
	}
}
//����ͨѶ¼����
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