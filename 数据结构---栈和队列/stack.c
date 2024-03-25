#include "stack.h"

//��ʼ��
void StackInit(ST* ps)
{
	assert(ps != NULL);
	ps->a = (STDataType*)malloc(sizeof(STDataType)*4);
	if (ps->a == NULL)
	{
		printf("malloc fail\n");
		exit(-1);
	}
	ps->top = 0;//top��ָ��ջ�����ݵ���һ������
	//Ͷtop�����0�ͱ�ʾջ�����ݵ���һ�����ݣ������-1�ͱ�ʾջ��������
	ps->capacity = 4;
}
//����
void StackDestory(ST* ps)
{
	assert(ps != NULL);
	free(ps->a);
	ps->a = NULL;
	ps->top = ps->capacity = 0;
}
//��ջ
void StackPush(ST* ps, STDataType x)
{
	assert(ps);
	//����->����
	if (ps->capacity == ps->top)
	{
		STDataType* newnode = (STDataType*)realloc(ps->a, ps->capacity * 2 * sizeof(STDataType));
		if (newnode==NULL)
		{
			printf("realloc fail\n");
			exit(-1);
		}
		else
		{
			ps->a = newnode;
			ps->capacity = ps->capacity * 2;
		}
	}
	ps->a[ps->top] = x;
	ps->top++;
}
//��ջ
void StackPop(ST* ps)
{
	assert(ps);
	//��ջ���ܼ���ɾ
	assert(ps->top > 0);
	ps->top--;
}
//����ջ��Ԫ��
STDataType StackTop(ST* ps)
{
	assert(ps);
	//ջΪ��ʱ���ܵ���Top
	assert(ps->top);
	return ps->a[ps->top - 1];
}
//�ж�ջ�Ĵ�С
int StackSize(ST* ps)
{
	assert(ps);
	return ps->top;
}
//�ж��Ƿ�Ϊ��
bool StackEmpty(ST* ps)
{
	assert(ps);
	if (ps->top == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}