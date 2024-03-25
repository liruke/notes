#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include "Contact.h"

typedef Info SLDataType;
typedef struct SListNode
{
	SLDataType* a;
	int  capacity;
	int size;
}SLNode;

//初始化和销毁
void SListInit(SLNode* ps);
void SListDestory(SLNode* ps);

//尾插和首插
void SListPushBack(SLNode* ps, SLDataType x);
void SListPushFront(SLNode* ps, SLDataType x);

//尾删和首删
void SListPopBack(SLNode* ps);
void SListPopFront(SLNode* ps);

//查找某个元素
int SListFind(SLNode* ps);

//打印顺序表
void SListPrint(SLNode* ps);

//指定位置的删除和插入
void SListInsert(SLNode* ps, int pos, SLDataType x);
void SListErase(SLNode* ps, int pos);