#pragma once
//双向链表定义
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
typedef int LTDataType;
typedef struct ListNode
{
	struct ListNode* next;
	struct ListNode* prev;
	LTDataType data;
}ListNode;


ListNode* ListInit();
void ListPrint(ListNode* plist);
void ListDestory(ListNode* plist);
void ListPushBack(ListNode* plist, LTDataType x);
void ListPushfront(ListNode* plist, LTDataType x);
void ListPopBack(ListNode* plist);
void ListPopFront(ListNode* plist);
ListNode* ListFind(ListNode* plist, LTDataType x);
//在pos位置之前插入一个值
void ListInsert(ListNode* plist, ListNode* pos, LTDataType x);
//删除pos位置的值
void ListErase(ListNode* plist, ListNode* pos);
