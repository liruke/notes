#pragma once


#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<assert.h>


typedef int STDataType;

typedef struct Stack
{
	STDataType* a;
	int capacity;
	int top;
}ST;


//��ʼ��
void StackInit(ST* ps);
//����
void StackDestory(ST* ps);
//��ջ
void StackPush(ST* ps, STDataType x);
//��ջ
void StackPop(ST* ps);
//
STDataType StackTop(ST* ps);
//�ж�ջ�Ĵ�С
int StackSize(ST* ps);
//�ж��Ƿ�Ϊ��
bool StackEmpty(ST* ps);
