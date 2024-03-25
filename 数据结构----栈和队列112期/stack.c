#include "stack.h"

//栈的初始化
void STInit(ST* ps)
{
	assert(ps);
	ps->a = NULL;
	ps->capacity = 0;
	ps->top = 0;
}

//栈的销毁
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

//入栈---栈顶
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

//出栈
void STPop(ST* ps)
{
	assert(ps->top > 0);
	ps->top--;
}

//取栈顶元素
STDataType STTop(ST* ps)
{
	assert(ps->top > 0);
	return ps->a[ps->top - 1];
}

//栈的大小
int STSize(ST* ps)
{
	return ps->top - 1;
}

//判断栈是否为空
bool STEmpty(ST* ps)
{
	return ps->top == 0;
}