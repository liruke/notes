#include "List.h"

void TestList1()
{
	ListNode* plist = ListInit();

	ListPushBack(plist, 1);
	ListPushBack(plist, 2);
	ListPushBack(plist, 3);
	ListPushBack(plist, 4);

	ListPrint(plist);
	ListDestory(plist);
}
void TestList2()
{
	ListNode* plist = ListInit();

	ListPushfront(plist, 1);
	ListPushfront(plist, 2);
	ListPushfront(plist, 3);
	ListPushfront(plist, 4);

	ListPrint(plist);
	ListDestory(plist);
}
void TestList3()
{
	ListNode* plist = ListInit();

	ListPushfront(plist, 1);
	ListPushfront(plist, 2);
	ListPushfront(plist, 3);
	ListPushfront(plist, 4);

	ListPrint(plist);
	printf("\n");
	ListPopBack(plist);
	ListPrint(plist);
	ListDestory(plist);
}

void TestList4()
{
	ListNode* plist = ListInit();

	ListPushfront(plist, 1);
	ListPushfront(plist, 2);
	ListPushfront(plist, 3);
	ListPushfront(plist, 4);

	ListPrint(plist);
	printf("\n");
	ListPopFront(plist);
	ListPrint(plist);
	ListDestory(plist);
}

void TestList5()
{
	ListNode* plist = ListInit();

	ListPushfront(plist, 1);
	ListPushfront(plist, 2);
	ListPushfront(plist, 3);
	ListPushfront(plist, 4);
	ListPrint(plist);
	ListNode* pos = ListFind(plist, 3);
	if (pos)
	{
		//查找同时可以附带修改
		printf("找到了");
		pos->data = pos->data * 10;
	}
	else
	{
		printf("没有找到");
	}
}
void TestList6()
{
	ListNode* plist = ListInit();

	ListPushfront(plist, 1);
	ListPushfront(plist, 2);
	ListPushfront(plist, 3);
	ListPushfront(plist, 4);
	ListPrint(plist);
	printf("\n");
	ListNode* pos = ListFind(plist, 3);
	if (pos)
	{
		ListInsert(plist, pos, 100);
		ListErase(plist, pos->prev);
	}
	ListPrint(plist);
}
int main()
{
	TestList6();
	return 0;
}