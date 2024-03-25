#pragma once

//����
//˳������ԣ�
//����˫������
//��ǰ�浱ջ���������ݾ�ͷ�壬ɾ�����ݾ�ͷɾ
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


//ջ�ĳ�ʼ��
void STInit(ST* ps);

//ջ������
void STDestory(ST* ps);

//��ջ---ջ��
void STPush(ST* ps, STDataType x);

//��ջ
void STPop(ST* ps);

//ȡջ��Ԫ��
STDataType STTop(ST* ps);

//ջ�Ĵ�С
int STSize(ST* ps);

//�ж�ջ�Ƿ�Ϊ��
bool STEmpty(ST* ps);