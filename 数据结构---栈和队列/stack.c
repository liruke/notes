#include "stack.h"

//初始化
void StackInit(ST* ps)
{
	assert(ps != NULL);
	ps->a = (STDataType*)malloc(sizeof(STDataType)*4);
	if (ps->a == NULL)
	{
		printf("malloc fail\n");
		exit(-1);
	}
	ps->top = 0;//top是指向栈顶数据的下一个数据
	//投top如果给0就表示栈顶数据的下一个数据，如果给-1就表示栈顶的数据
	ps->capacity = 4;
}
//销毁
void StackDestory(ST* ps)
{
	assert(ps != NULL);
	free(ps->a);
	ps->a = NULL;
	ps->top = ps->capacity = 0;
}
//入栈
void StackPush(ST* ps, STDataType x)
{
	assert(ps);
	//满了->增容
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
//出栈
void StackPop(ST* ps)
{
	assert(ps);
	//空栈不能继续删
	assert(ps->top > 0);
	ps->top--;
}
//返回栈顶元素
STDataType StackTop(ST* ps)
{
	assert(ps);
	//栈为空时不能调用Top
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
	if (ps->top == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}