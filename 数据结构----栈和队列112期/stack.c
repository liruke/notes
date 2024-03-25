#include "stack.h"

//ջ�ĳ�ʼ��
void STInit(ST* ps)
{
	assert(ps);
	ps->a = NULL;
	ps->capacity = 0;
	ps->top = 0;
}

//ջ������
void STDestory(ST* ps)
{
	assert(ps->a);
	while (ps->top)
	{
		free(ps->a[ps->top]);
		ps->top--;
	}
	ps->capacity = 0;
	ps->top = 0;
}

//��ջ---ջ��
void STPush(ST* ps, STDataType x)
{
	if (ps->capacity == ps->top)
	{
		ps->capacity == 0 ? ps->capacity = 4 : ps->capacity * 2;
		int* tmp = (int*)realloc(ps->a, ps->capacity * sizeof(int));
		if (tmp == NULL)
		{
			return;
		}
		ps->a = tmp;
	}
	ps->a[ps->top] = x;
	ps->top++;
}

//��ջ
void STPop(ST* ps)
{
	assert(ps->top > 0);
	ps->top--;
}

//ȡջ��Ԫ��
STDataType STTop(ST* ps)
{
	assert(ps->top > 0);
	return ps->a[ps->top - 1];
}

//ջ�Ĵ�С
int STSize(ST* ps)
{
	return ps->top - 1;
}

//�ж�ջ�Ƿ�Ϊ��
bool STEmpty(ST* ps)
{
	return ps->top == 0;
}