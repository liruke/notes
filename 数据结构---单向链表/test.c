#include "Slist.h"

void TestSlist1()
{
	SLT* plist = NULL;
	SListPushBack(&plist, 1);
	SListPushBack(&plist, 2);
	SListPushBack(&plist, 3);
	SListPushBack(&plist, 4);
	SListPushBack(&plist, 5);
	SListPrint(plist);
}

void  TestSlist2()
{
	SLT* plist = NULL;
	SListPushFront(&plist, 1);
	SListPushFront(&plist, 2);
	SListPushFront(&plist, 3);
	SListPushFront(&plist, 4);
	SListPrint(plist);
	SListPopFront(&plist);
	SListPopFront(&plist);
	SListPopFront(&plist);
	SListPopFront(&plist);
	SListPopBack(&plist);
	SListPopBack(&plist);
	SListPopBack(&plist);
	SListPopBack(&plist);
	SListPopBack(&plist);
	printf("\n");
	SListPrint(plist);
}
void  TestSlist3()
{
	SLT* plist = NULL;
	SListPushFront(&plist, 1);
	SListPushFront(&plist, 2);
	SListPushFront(&plist, 3);
	SListPushFront(&plist, 4);
	SListPrint(plist);
	SLT* pos = SListFind(plist, 4);
	if (pos)
	{
		SListInsert(&plist, pos, 30);
	}
	printf("\n");
	SListPrint(plist);
}

void  TestSlist4()
{
	SLT* plist = NULL;
	SListPushFront(&plist, 1);
	SListPushFront(&plist, 2);
	SListPushFront(&plist, 3);
	SListPushFront(&plist, 4);
	SListPrint(plist);
	SLT* pos = SListFind(plist, 3);
	if (pos)
	{
		SListErase(&plist, pos);
	}
	printf("\n");
	SListPrint(plist);
}
int main()
{
	TestSlist4();
	return 0;
}