#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"
#include "A.h"





//ͨѶ¼�ĳ�ʼ��������

void ContactInit(Contact* pcon)
{
	AInit(pcon);
	
}
void ContactDestory(Contact* pcon)
{
	Adestroy(pcon);
}


//��ɾ���
void ContactAdd(Contact* pcon)
{
	Info info;
	printf("��������ϵ������:");
	scanf("%s", info.name);
	printf("��������ϵ�˵�����:");
	scanf("%d", &info.age);
	printf("��������ϵ�˵��Ա�:");
	scanf("%s", info.gender);
	printf("��������ϵ�˵ĵ绰:");
	scanf("%s", info.tel);
	printf("��������ϵ�˵�סַ:");
	scanf("%s", info.addr);
	//�������ݵ�ͨѶ¼��

	Apushback(pcon, info);

}
int FindByName(Contact* pcon, char name[])
{
	//�ҵ��ˣ������±�
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
	//ɾ��֮ǰ��Ҫ����
	//�ҵ��ˣ�����ɾ��
	//�Ҳ���������ִ��ɾ������
	printf("������Ҫɾ������ϵ������:");
	char name[NAME_MAX];
	scanf("%s", name);
	int ret = FindByName(pcon, name);
	if (ret != -1)
	{
		Aerase(pcon, ret);
	}
	else
	{
		printf("δ�ҵ���ϵ������������");
		return;
	}
}
void ContactModify(Contact* pcon)
{
	//�޸�֮ǰ��Ҫ����
	//�ҵ��ˣ�ִ�в���
	//û���ҵ�������ִ���޸Ĳ���
	printf("��������Ҫ�޸ĵ���ϵ������:");
	char name[NAME_MAX];
	scanf("%s", name);
	int ret = FindByName(pcon, name);
	if (ret != -1)
	{
		printf("����������:");
		scanf("%s", pcon->a[ret].name);
		printf("����������:");
		scanf("%d", &pcon->a[ret].age);
		printf("�������Ա�:");
		scanf("%s", pcon->a[ret].gender);
		printf("������绰:");
		scanf("%s", pcon->a[ret].tel);
		printf("������סַ:");
		scanf("%s", pcon->a[ret].addr);
		printf("��ϵ���޸ĳɹ�");
	}
	else
	{
		printf("δ�ҵ���Ҫ�޸ĵ���ϵ��");
		return;
	}
}


void ContactFind(Contact* pcon)//���ҷ�ʽ
{
	char name[NAME_MAX];
	printf("��������Ҫ���ҵ���ϵ������:");
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
		printf("����ϵ�˴���");
		return;
	}
}
void ContactShow(Contact* pcon)
{
	printf("%s  %s  %s  %s  %s\n","����","�Ա�","����","�绰","��ַ");
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