#pragma once
//˫��������
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
//��posλ��֮ǰ����һ��ֵ
void ListInsert(ListNode* plist, ListNode* pos, LTDataType x);
//ɾ��posλ�õ�ֵ
void ListErase(ListNode* plist, ListNode* pos);
