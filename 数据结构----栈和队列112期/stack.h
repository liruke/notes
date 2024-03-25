#pragma once

//分析
//顺序表（可以）
//链表（双向链表）
//用前面当栈顶，出数据就头插，删除数据就头删
#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<assert.h>

typedef int STDataType;
typedef struct Stack
{
	STDataType* a;
	int top;
	int capacity;
}ST;


//栈的初始化
void STInit(ST* ps);

//栈的销毁
void STDestory(ST* ps);

//入栈---栈顶
void STPush(ST* ps, STDataType x);

//出栈
void STPop(ST* ps);

//取栈顶元素
STDataType STTop(ST* ps);

//栈的大小
int STSize(ST* ps);

//判断栈是否为空
bool STEmpty(ST* ps);