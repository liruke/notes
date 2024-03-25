#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>

typedef int HPDataType;
typedef struct Heap
{
    HPDataType* a;
    int size;
    int capacity;
}HP;
//�ѵĳ�ʼ��
void HPInit(HP* php);
//���ٶ�
void HPDestroy(HP* php);
//��������
void HPPush(HP* php, HPDataType x);
//ȡ�Ѷ�������
//С��ȡ��Сֵ�����ȡ���ֵ
HPDataType HeapTop(HP* php);
//ɾ���Ѷ�������
void HPPop(HP* php);

bool HPEmpty(HP* php);

void AdJustUp(HPDataType* a, int child);

void Swap(HPDataType* ps, HPDataType* pq);
void  AdjustDown(HPDataType* a, int size, int parent);