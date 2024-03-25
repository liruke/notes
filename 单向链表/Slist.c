#include "Slist.h"
//��ӡ����
void SListPrint(SLT* plist)
{
	SLT* cur=plist;
	while (cur != NULL)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}
	printf("NULL\n");
}

SLT* BuySListNode(SLTDataType x)
{
	SLT* newnode = (SLT*)malloc(sizeof(SLT));
	newnode->data = x;
	newnode->next = NULL;
	return newnode;
}
//β�� 
void SListPushBack(SLT** pplist, SLTDataType x)
{
	SLT* newnode = BuySListNode(x);
	if (*pplist == NULL)
	{
		*pplist = newnode;//�β���ʵ�ε���ʱ���������˶����������
	}
	else
	{
		SLT* tail = *pplist;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		//β�ڵ㣬�����½ڵ�
		tail->next = newnode;
	}
}
//ͷ��
void SListPushFront(SLT** pplist, SLTDataType x)
{
	SLT* newnode = BuySListNode(x);
	newnode->next = *pplist;
	*pplist = newnode;
}
//βɾ
void SListPopBack(SLT** pplist)
{
	if (*pplist == NULL)
	{
		return;
	}
	else if ((*pplist)->next == NULL)
	{
		free(*pplist);
		*pplist = NULL;
		return;
	}
	SLT* tail = *pplist;
	SLT* prev = NULL;//������һ���ڵ��ָ�����
	while (tail->next != NULL)
	{
		prev = tail;//����һ���ڵ������
		tail = tail->next;//����һ���ڵ�
	}
	free(tail);//free����һ���ռ�
	prev->next = NULL;//�ҵ������ڶ����ڵ�ָ�����һ���ڵ㣬����Ϊ��ָ�롣��ֹ��ΪҰָ��
	tail = NULL;//��λ��ָ��
}
//ͷɾ
void SListPopFront(SLT** pplist)
{
	SLT* tail = (*pplist)->next;//����һ���ڵ��λ�ø�������
	free(*pplist);//������ڵ��free��
	*pplist = NULL;//�ÿ�
	*pplist = tail;//�ҵ���һ���ڵ㣬�����丳ֵΪͷ���
}
//������������
SLT* SListFind(SLT* plist, SLTDataType x)
{
	SLT* cur = plist;
	while (cur != NULL)
	{
		if (cur->data == x)
		{
			return cur;
		}
		cur = cur->next;
	}
	return NULL;
}

//��posλ��ǰ����x
void SListInsert(SLT** pplist, SLT* pos, SLTDataType x)
{
	if (*pplist == pos)
	{
		SListPushFront(pplist, x);
	}
	else
	{
		SLT* newnode = BuySListNode(x);
		SLT* prev = *pplist;
		while (prev->next != pos)
		{
			prev = prev->next;
		}
		newnode->next = pos;
		prev->next = newnode;
	}
}
//ɾ��posλ�õ���
void SListErase(SLT** pplist, SLT* pos)
{
	if (pos == *pplist)
	{
		SListPopFront(pplist);
	}
	else
	{
		SLT* prev = *pplist;
		while (prev->next != pos)
		{
			prev = prev->next;
		}
		SLT* tail = pos->next;
		free(pos);
		prev->next = tail;
	}
}