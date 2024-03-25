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
//堆的初始化
void HPInit(HP* php);
//销毁堆
void HPDestroy(HP* php);
//插入数据
void HPPush(HP* php, HPDataType x);
//取堆顶的数据
//小堆取最小值，大堆取最大值
HPDataType HeapTop(HP* php);
//删除堆顶的数据
void HPPop(HP* php);

bool HPEmpty(HP* php);

void AdJustUp(HPDataType* a, int child);

void Swap(HPDataType* ps, HPDataType* pq);
void  AdjustDown(HPDataType* a, int size, int parent);