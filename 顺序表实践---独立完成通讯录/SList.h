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

//��ʼ��������
void SListInit(SLNode* ps);
void SListDestory(SLNode* ps);

//β����ײ�
void SListPushBack(SLNode* ps, SLDataType x);
void SListPushFront(SLNode* ps, SLDataType x);

//βɾ����ɾ
void SListPopBack(SLNode* ps);
void SListPopFront(SLNode* ps);

//����ĳ��Ԫ��
int SListFind(SLNode* ps);

//��ӡ˳���
void SListPrint(SLNode* ps);

//ָ��λ�õ�ɾ���Ͳ���
void SListInsert(SLNode* ps, int pos, SLDataType x);
void SListErase(SLNode* ps, int pos);