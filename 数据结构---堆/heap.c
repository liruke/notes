#include "heap.h"

void HPInit(HP* php)
{
    assert(php);
    php->a = NULL;
    php->capacity = 0;
    php->size = 0;
}
void HPDestroy(HP* php)
{
    assert(php);
    free(php->a);
    php->a = NULL;
    php->capacity = 0;
    php->size = 0;
}



void Swap(HPDataType* ps, HPDataType* pq)
{
    HPDataType tmp = *ps;
    *ps = *pq;
    *pq = tmp;
}

//向上调整算法
void AdJustUp(HPDataType* a, int child)
{
    int parent = (child - 1) / 2;
    while (child > 0)
    {
        if (a[parent] > a[child])
        {
            Swap(&a[parent], &a[child]);
        }
        else
        {
            break;
        }
        child = parent;
        parent = (parent - 1) / 2;
    }
}

//假设实现的是小堆
void HPPush(HP* php, HPDataType x)
{
    assert(php);
    //扩容
    if (php->capacity == php->size)
    {
        int newcapacity = php->capacity == 0 ? 4 : php->capacity * 2;
        HPDataType* newnode = (HPDataType*)realloc(php->a, sizeof(HPDataType) * newcapacity);
        if (newnode == NULL)
        {
            perror("realloc fail\n");
            return;
        }
        php->a = newnode;
        php->capacity = newcapacity;
    }
    //插入数据
    php->a[php->size] = x;
    php->size++;
    AdJustUp(php->a, php->size - 1);
}

HPDataType HPTop(HP* php)
{
    return php->a[0];
}
//删除堆顶的数据

void  AdjustDown(HPDataType* a, int size, int parent)
{
    int child = parent * 2 + 1;
    while (child < size)
    {
        if (a[child] > a[child + 1] && child + 1 < size)
        {
            child++;
        }
        if (a[child] < a[parent])
        {
            Swap(&a[child], &a[parent]);
            parent = child;
            child = parent * 2 + 1;
        }
        else
        {
            break;
        }
    }
}

void HPPop(HP* php)
{
    assert(php->size > 0);
    assert(php);
    Swap(&php->a[0], &php->a[php->size - 1]);
    php->size--;
    AdjustDown(php->a, php->size, 0);
}

bool HPEmpty(HP* php)
{
    assert(php);
    return php->size == 0;
}