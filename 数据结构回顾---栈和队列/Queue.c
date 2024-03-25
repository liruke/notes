#include "Queue.h"

void QueueInit(Queue* pq)
{
	assert(pq);
	pq->head = pq->tail = NULL;
}
void QueueDestory(Queue* pq)
{
	assert(pq);
	SQ* cur = pq->head;
	while (cur)
	{
		SQ* next = cur->next;
		free(cur);
		cur = next;
	}
	pq->head = pq->tail = NULL;
}
void QueuePush(Queue* pq, QDataType x)
{
	assert(pq);
	SQ* newnode = (SQ*)malloc(sizeof(SQ));
	if (newnode == NULL)
	{
		printf("malloc fail\n");
		exit(-1);
	}
	newnode->data = x;
	newnode->next = NULL;
	if (pq->head == NULL)
	{
		pq->head = pq->tail = newnode;
	}
	else
	{
		pq->tail->next = newnode;
		pq->tail = newnode;
	}
}
void QueuePop(Queue* pq)
{
	assert(pq);
	assert(pq->head);
	if (pq->head->next == NULL)
	{
		free(pq->head);
		pq->head = pq->tail = NULL;
	}
	else
	{
		SQ* next = pq->head->next;
		free(pq->head);
		pq->head = next;
	}
}
QDataType  QueueFront(Queue* pq)
{
	assert(pq);
	assert(pq->head);
	return pq->head->data;
}
QDataType  QueueBack(Queue* pq)
{
	assert(pq);
	assert(pq->head);
	return pq->tail->data;
}
int QueueSize(Queue* pq)
{
	assert(pq);
	int count = 0;
	Queue* cur = pq->head;
	while (cur)
	{
		cur++;
		count++;
	}
	return count;
}
bool QueueEmpty(Queue* pq)
{
	assert(pq);
	if (pq->head == NULL)
	{
		return true;
	}
	else
	{
		return false;
	}
}