#include<stdio.h>
#include<stdlib.h>
#include<assert.h>


#define INIT_CAPACITY 4
typedef int SLDataType;
// 动态顺序表 -- 按需申请
typedef struct SeqList
{
    SLDataType* a;
    int size;     // 有效数据个数
    int capacity; // 空间容量
}SL;

//初始化和销毁
void SLInit(SL* ps)
{
    ps->a = NULL;
    ps->capacity = 0;
    ps->size = 0;

}
void SLDestroy(SL* ps)
{
    assert(ps);
    free(ps->a);
    ps->a = NULL;
    ps->capacity = 0;
    ps->size = 0;

}
void SLPrint(SL* ps)
{
    int i = 0;
    for (i = 0;i < ps->size;i++)
    {
        printf("%d ", ps->a[i]);
    }
}
//扩容
void SLCheckCapacity(SL* ps)
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

//头部插入删除 / 尾部插入删除
void SLPushBack(SL* ps, SLDataType x)
{
    assert(ps);
    if (ps->capacity == ps->size)
    {
        SLCheckCapacity(ps);
    }
    ps->a[ps->size] = x;
    ps->size++;
}
void SLPopBack(SL* ps)
{
    assert(ps);
    assert(ps->size > 0);
    ps->size--;
}
void SLPushFront(SL* ps, SLDataType x)
{
    assert(ps);
    SLCheckCapacity(ps);
    int end = ps->size - 1;
    while (end >= 0)
    {
        ps->a[end + 1] = ps->a[end];
        end--;
    }
    ps->a[0] = x;
    ps->size++;
}
void SLPopFront(SL* ps)
{
    assert(ps);
    assert(ps->size > 0);
    int first = 1;
    while (first != ps->size)
    {
        ps->a[first - 1] = ps->a[first];
        first++;
    }
    ps->size--;
}

//指定位置之前插入/删除数据
void SLInsert(SL* ps, int pos, SLDataType x)
{
    assert(ps);
    assert(pos < ps->size);
    SLCheckCapacity(ps);
    int end = ps->size - 1;
    while (end > pos)
    {
        ps->a[ps->size] = ps->a[end];
        end--;
    }
    ps->a[pos] = x;
    ps->size++;
}
void SLErase(SL* ps, int pos)
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
int SLFind(SL* ps, SLDataType x)
{
    int i = 0;
    for (i = 0;i < ps->size;i++)
    {
        if (ps->a[i] == x)
        {
            return i;
        }
    }
    return -1;
}

void test1()
{
    SL SLT;
    SLInit(&SLT);
    SLPushBack(&SLT, 1);
    SLPushBack(&SLT, 2);
    SLPushBack(&SLT, 3);
    SLPushBack(&SLT, 4);
    SLPushBack(&SLT, 5);
    SLPushBack(&SLT, 6);

    SLPrint(&SLT);

    SLDestroy(&SLT);
}
void test2()
{
    SL SLT;
    SLInit(&SLT);
    SLPushFront(&SLT, 1);
    SLPushFront(&SLT, 2);
    SLPushFront(&SLT, 3);
    SLPushFront(&SLT, 4);
    SLPushFront(&SLT, 5);
    SLPushFront(&SLT, 6);

    SLPrint(&SLT);

    SLDestroy(&SLT);
}
int main()
{
    //test1();
    test2();
    return 0;
}