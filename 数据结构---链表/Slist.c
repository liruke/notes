#include "Slist.h"
//打印链表
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
//尾插 
void SListPushBack(SLT** pplist, SLTDataType x)
{
	SLT* newnode = BuySListNode(x);
	if (*pplist == NULL)
	{
		*pplist = newnode;//形参是实参的零时拷贝，出了定义域会销毁
	}
	else
	{
		SLT* tail = *pplist;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		//尾节点，链接新节点
		tail->next = newnode;
	}
}
//头插
void SListPushFront(SLT** pplist, SLTDataType x)
{
	SLT* newnode = BuySListNode(x);
	newnode->next = *pplist;
	*pplist = newnode;
}
//尾删
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
	SLT* prev = NULL;//保存上一个节点的指针变量
	while (tail->next != NULL)
	{
		prev = tail;//将上一个节点存起来
		tail = tail->next;//找下一个节点
	}
	free(tail);//free掉下一个空间
	prev->next = NULL;//找到倒数第二个节点指向的下一个节点，并置为空指针。防止变为野指针
	tail = NULL;//置位空指针
}
//头删
void SListPopFront(SLT** pplist)
{
	SLT* tail = (*pplist)->next;//将下一个节点的位置给存起来
	free(*pplist);//将这个节点给free掉
	*pplist = NULL;//置空
	*pplist = tail;//找到下一个节点，并将其赋值为头结点
}
//查找链表数据
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

//在pos位置前插入x
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
//删除pos位置的数
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