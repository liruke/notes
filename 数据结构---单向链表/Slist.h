#pragma once//防止重复包含

#include<stdio.h>
#include<stdlib.h>


typedef int SLTDataType;
typedef struct SListNode
{
	SLTDataType data;
	struct SListNode* next;//结构体中不能有结构体嵌套，但是可以是结构体指针，
	//指针就是一个地址，表示4个字节，指针指向的下一个节点是结构体
}SLT;
void SListPrint(SLT* plist);
void SListPushBack(SLT** plist, SLTDataType x);
void SListPushFront(SLT** pplist, SLTDataType x);
void SListPopBack(SLT** pplist);
void SListPopFront(SLT** pplist);


//查找位置
SLT* SListFind(SLT* plist, SLTDataType x);
//在pos前面插入一个数
void SListInsert(SLT** pplist, SLT* pos, SLTDataType x);

//删除pos位置的值
void SListErase(SLT** pplist, SLT* pos);
