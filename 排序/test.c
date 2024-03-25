#include "Sort.h"


void PrintArray(int* a, int n)
{
	for (int i = 0;i < n;i++)
	{
		printf("%d ", a[i]);
	}
}

void TestBubbleSort()
{
	int a[] = { 5,9,2,7,8,3,10,4,6,1 };

	BubbleSort(a, sizeof(a) / sizeof(a[0]));

	PrintArray(a, sizeof(a) / sizeof(a[0]));
}


void TestInsertSort()
{
	int a[] = { 5,9,2,7,8,3,10,4,6,1 };

	InsertSort(a, sizeof(a) / sizeof(a[0]));

	PrintArray(a, sizeof(a) / sizeof(a[0]));
}


TestMergeSort()
{
	int a[] = { 5,9,2,7,8,3,10,4, };
	MergeSortNonR(a, sizeof(a) / sizeof(a[0]));
	PrintArray(a, sizeof(a) / sizeof(a[0]));
}

int main()
{
	TestMergeSort();
	//TestInsertSort();
	//printf("\n");
	//TestBubbleSort();
	return 0;
}