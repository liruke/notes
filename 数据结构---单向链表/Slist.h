#pragma once//��ֹ�ظ�����

#include<stdio.h>
#include<stdlib.h>


typedef int SLTDataType;
typedef struct SListNode
{
	SLTDataType data;
	struct SListNode* next;//�ṹ���в����нṹ��Ƕ�ף����ǿ����ǽṹ��ָ�룬
	//ָ�����һ����ַ����ʾ4���ֽڣ�ָ��ָ�����һ���ڵ��ǽṹ��
}SLT;
void SListPrint(SLT* plist);
void SListPushBack(SLT** plist, SLTDataType x);
void SListPushFront(SLT** pplist, SLTDataType x);
void SListPopBack(SLT** pplist);
void SListPopFront(SLT** pplist);


//����λ��
SLT* SListFind(SLT* plist, SLTDataType x);
//��posǰ�����һ����
void SListInsert(SLT** pplist, SLT* pos, SLTDataType x);

//ɾ��posλ�õ�ֵ
void SListErase(SLT** pplist, SLT* pos);
