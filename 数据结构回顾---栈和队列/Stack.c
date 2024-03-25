#include "Stack.h"


//初始化
void StackInit(ST* ps)
{
	assert(ps);
	ps->a = (STDataType*)malloc(sizeof(STDataType) * 4);
	if (ps->a == NULL)
	{
		printf("malloc fail\n");
		exit(-1);
	}
	ps->capacity = 4;
	ps->top = 0;
}
//销毁
void StackDestory(ST* ps)
{
	assert(ps);
	free(ps->a);
	ps->a = NULL;
	ps->capacity = 0;
	ps->top = 0;
}
//入栈
void StackPush(ST* ps, STDataType x)
{
	assert(ps);
	if (ps->top == ps->capacity)
	{
		STDataType* newnode = (STDataType*)realloc(ps->a, sizeof(STDataType) * 2 * ps->capacity);
		if (newnode == NULL)
		{
			printf("realloc fail\n");
			exit(-1);
		}
		else
		{
			ps->a = newnode;
			ps->capacity *= 2;
		}
	}
	ps->a[ps->top] = x;
	ps->top++;
}
//出栈
void StackPop(ST* ps)
{
	assert(ps);
	assert(ps->top > 0);
	ps->top--;
}
//取栈顶元素
STDataType StackTop(ST* ps)
{
	assert(ps);
	assert(ps->top);
	return ps->a[ps->top - 1];
}
//判断栈的大小
int StackSize(ST* ps)
{
	assert(ps);
	return ps->top;
}
//判断是否为空
bool StackEmpty(ST* ps)
{
	assert(ps);
	if (ps->top==0)
	{
		return true;
	}
	else
	{
		return false;
	}
}