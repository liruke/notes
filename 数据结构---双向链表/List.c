#include "List.h"



void ListDestory(ListNode* phead)
{
	assert(phead);
	ListNode* cur = phead->next;
	while (cur != phead)
	{
		ListNode* next = cur->next;
		free(cur);
		cur = next;
	}
	free(phead);
	phead = NULL;
}
ListNode* BuyListNode(LTDataType x)
{
	ListNode* newnode = (ListNode*)malloc(sizeof(ListNode));
	newnode->data = x;
	newnode->next = NULL;
	newnode->prev = NULL;
	return newnode;
}


void ListPrint(ListNode* phead)
{
	ListNode* cur = phead->next;
	while (cur!= phead)
	{
		printf("%d ", cur->data);
		cur = cur->next;
	}
	printf("\n");
}

ListNode* ListInit()
{
	ListNode* phead = BuyListNode(0);
	phead->next = phead;
	phead->prev = phead;
	return phead;
}
//β��
void ListPushBack(ListNode* phead, LTDataType x)
{
	assert(phead);
	ListNode* tail = phead->prev;
	ListNode* newnode = BuyListNode(x);
	tail->next = newnode;
	newnode->prev = tail;
	newnode->next = phead;
	phead->prev = newnode;
}
//�����β����Կ�����Ҳ�ǳ����ģ����Ի���ͼ���һ��
//˫���ͷѭ������ṹ��Ȼ�����ˣ����ǲ����������ˡ�
//�ṹ��Ƶ�����
//�ڴ�ռ�����ӣ�ÿ���ڵ����һ��ǰ��ָ��
//STL�е�Listԭ���������ṹ

//ͷ��
void ListPushfront(ListNode* phead, LTDataType x)
{
	assert(phead);
	ListNode* newnode = BuyListNode(x);
	ListNode* first = phead->next;
	phead->next = newnode;
	newnode->prev = phead;
	newnode->next = first;
	first->prev = newnode;
}

//βɾ
void ListPopBack(ListNode* phead)
{
	assert(phead);
	assert(phead->next != phead);
	ListNode* tail = phead->prev;
	ListNode* last = tail->prev;
	free(tail);
	last->next = phead;
	phead->prev = last;
	tail = NULL;
}

//ͷɾ
void ListPopFront(ListNode* phead)
{
	assert(phead);
	assert(phead->next != phead);
	ListNode* first = phead->next;
	ListNode* second = first->next;
	free(first);
	phead->next = second;
	second->prev = phead;
	first = NULL;
}
ListNode* ListFind(ListNode* phead, LTDataType x)
{
	assert(phead);
	ListNode* cur = phead->next;
	while (cur!=phead)
	{
		if (cur->data == x)
		{
			return cur;
		}
		cur = cur->next;
	}
	return NULL;
}



//����
void ListInsert(ListNode* phead, ListNode* pos, LTDataType x)
{
	assert(pos);
	ListNode* last = pos->prev;
	ListNode* newnode = BuyListNode(x);
	last->next = newnode;
	newnode->prev = last;
	newnode->next = pos;
	pos->prev = newnode;
}

//ɾ��posλ�õ���
void ListErase(ListNode* plist, ListNode* pos)
{
	assert(pos);
	ListNode* last = pos->prev;
	ListNode* following = pos->next;
	free(pos);
	last->next = following;
	following->prev = last;
	pos = NULL;
}