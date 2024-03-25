#pragma once

#include<stdio.h>
#include<stdbool.h>
#include<assert.h>
#include<stdlib.h>
//实现方式
//1.数组   2.链表
//1.相当于之前顺序表的尾插，尾插用尾去做了栈顶，非常适合
// 唯一缺陷就是：空间不够需要增容
// 2.如果用尾插作栈顶，就用双向链表。如果用单链表，就用首插作为栈顶，这样入栈和出栈效率都是O(1)
//

typedef int STDataType;
typedef struct Stack
{
	STDataType* a;//动态栈，如果是数组的话就是静态栈
	int top;
	int capacity;
}ST;

//初始化
void StackInit(ST* ps);
//销毁
void StackDestory(ST* ps);
//入栈
void StackPush(ST* ps, STDataType x);
//出栈
void StackPop(ST* ps);
//
STDataType StackTop(ST* ps);
//判断栈的大小
int StackSize(ST* ps);
//判断是否为空
bool StackEmpty(ST* ps);