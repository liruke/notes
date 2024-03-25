#pragma once

#include<stdio.h>
#include<stdbool.h>
#include<assert.h>
#include<stdlib.h>
//ʵ�ַ�ʽ
//1.����   2.����
//1.�൱��֮ǰ˳����β�壬β����βȥ����ջ�����ǳ��ʺ�
// Ψһȱ�ݾ��ǣ��ռ䲻����Ҫ����
// 2.�����β����ջ��������˫����������õ����������ײ���Ϊջ����������ջ�ͳ�ջЧ�ʶ���O(1)
//

typedef int STDataType;
typedef struct Stack
{
	STDataType* a;//��̬ջ�����������Ļ����Ǿ�̬ջ
	int top;
	int capacity;
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