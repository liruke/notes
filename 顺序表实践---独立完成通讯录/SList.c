#include "SList.h"


//��ʼ��������
void SListInit(SLNode* ps)
{
	ps->a = NULL;
	ps->capacity = 0;
	ps->size = 0;
}
void SListDestory(SLNode* ps)
{

}


//���ٿռ�
void SListCheck(SLNode* ps)
{
	if (ps->capacity == ps->size)
	{
		int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		SLDataType* newnode = (SLDataType*)realloc(ps->a, sizeof(SLDataType) * newcapacity);
		if (newnode == NULL)
		{
			printf("realloc fail\n");
			exit(-1);
		}
		else
		{
			ps->a = newnode;
			ps->capacity = newcapacity;
		}
	}
}


//β����ײ�
void SListPushBack(SLNode* ps, SLDataType x)
{
	assert(ps);
	SListCheck(ps);
	ps->a[ps->size] = x;
	ps->size++;
}
void SListPushFront(SLNode* ps, SLDataType x)
{
	assert(ps);
	int end = ps->size - 1;
	while (end >= 0)
	{
		ps->a[end + 1] = ps->a[end];
		end--;
	}
	ps->size++;
}

//βɾ����ɾ
void SListPopBack(SLNode* ps)
{
	assert(ps);
	assert(ps->size);
	ps->size--;
}
void SListPopFront(SLNode* ps)
{
	assert(ps);
	assert(ps->size);
	int first = 1;
	while (first < ps->size)
	{
		ps->a[first - 1] = ps->a[first];
		first++;
	}
	ps->size--;
}

////����ĳ��Ԫ��
//int SListFind(SLNode* ps,SLDataType x)
//{
//	int i = 0;
//	for (i = 0;i < ps->size;i++)
//	{
//		if (ps->a[i] == x)
//		{
//			return i;
//		}
//	}
//	return -1;
//}
//
////��ӡ˳���
//void SListPrint(SLNode* ps)
//{
//	assert(ps);
//	int i = 0;
//	for (i = 0;i < ps->size;i++)
//	{
//		printf("%d ", ps->a[i]);
//	}
//}

//ָ��λ�õ�ɾ���Ͳ���
void SListInsert(SLNode* ps, int pos, SLDataType x)
{
	assert(ps);
	assert(pos < ps->size);
	int end = ps->size - 1;
	while (end >= pos)
	{
		ps->a[end + 1] = ps->a[end];
		end--;
	}
	ps->size++;
}
void SListErase(SLNode* ps, int pos)
{
	assert(ps);
	assert(pos < ps->size);
	int first = pos + 1;
	while (first < ps->size)
	{
		ps->a[first - 1] = ps->a[first];
		first++;
	}
	ps->size--;
}