#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>

typedef int LTDataType;
typedef struct ListNode
{
	//。。。。
	LTDataType data;
	struct ListNode* next;
	struct ListNode* prev;
}LTNode;

//void LTInit(LTNode** pphead);


LTNode* BuyListNode(LTDataType x)
{
	LTNode* newnode = (LTNode*)malloc(sizeof(LTNode));
	newnode->data = x;
	newnode->next = NULL;
	newnode->prev = NULL;
	return newnode;
}
LTNode* LTInit()
{
	LTNode* phead = BuyListNode(0);
	phead->next = phead;
	phead->prev = phead;
	return phead;
}
void LTDestroy(LTNode* phead)
{
	assert(phead);
	LTNode* cur = phead->next;
	LTNode* prev = cur;
	while (cur != phead)
	{
		prev = cur->next;
		free(cur);
		cur = prev;
	}
}
void LTPrint(LTNode* phead)
{
	LTNode* cur = phead->next;
	while (cur != phead)
	{
		printf("%d ", cur->data);
		cur = cur->next;
	}
}
bool LTEmpty(LTNode* phead)
{
	assert(phead);
	if (phead->next == phead)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void LTPushBack(LTNode* phead, LTDataType x)
{
	assert(phead);
	LTNode* newnode = BuyListNode(x);
	LTNode* tail = phead->prev;
	phead->prev = newnode;
	newnode->next = phead;
	tail->next = newnode;
	newnode->prev = tail;
}
void LTPopBack(LTNode* phead)
{
	LTNode* tail = phead->prev;
	LTNode* prev = tail->prev;
	free(tail);
	tail = NULL;
	phead->prev = prev;
	prev->next = phead;
}

void LTPushFront(LTNode* phead, LTDataType x)
{
	LTNode* newnode = BuyListNode(x);
	LTNode* tail = phead->next;
	phead->next = newnode;
	newnode->prev = phead;
	newnode->next = tail;
	tail->prev = newnode;
}
void LTPopFront(LTNode* phead)
{
	LTNode* tail = phead->next->next;
	free(phead->next);
	phead->next = NULL;
	phead->next = tail;
	tail->prev = phead;
}
//在pos位置之后插入数据
void LTInsert(LTNode* pos, LTDataType x)
{
	LTNode* next = pos->next;
	LTNode* newnode = BuyListNode(x);
	pos->next = newnode;
	newnode->prev = pos;
	newnode->next = next;
	next->prev = newnode;
}
void LTErase(LTNode* pos)
{
	LTNode* prev = pos->prev;
	LTNode* next = pos->next;
	free(pos);
	pos = NULL;
	prev->next = next;
	next->prev = prev;
}
LTNode* LTFind(LTNode* phead, LTDataType x)
{
	LTNode* cur = phead->next;
	while (cur != phead)
	{
		if (cur->data = x)
		{
			return cur;
		}
		cur = cur->next;
	}
	return NULL;
}


void TestList1()
{
	LTNode* plist = LTInit();

	LTPushBack(plist, 1);
	LTPushBack(plist, 2);
	LTPushBack(plist, 3);
	LTPushBack(plist, 4);

	LTPrint(plist);
	LTDestroy(plist);
}
int main()
{
	TestList1();
	return 0;
}