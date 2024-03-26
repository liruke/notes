#include "Sort.h"


PrintArray(int* a, int n)
{
	for (int i = 0;i < n;i++)
	{
		printf("%d ", a[i]);
	}
}


void TestInsertSort()
{
	int a[] = { 23, 47, 11, 64, 35, 82, 19, 56, 73, 8 };
	InsertSort(a, sizeof(a) / sizeof(a[0]));
	PrintArray(a, sizeof(a) / sizeof(a[0]));
}

void TestHeapSort()
{
	int a[] = { 23, 47, 11, 64, 35, 82, 19, 56, 73, 8 };
	HeapSort(a, sizeof(a) / sizeof(a[0]));
	PrintArray(a, sizeof(a) / sizeof(a[0]));
}

void TestShellSort()
{
	int a[] = { 23, 47, 11, 64, 35, 82, 19, 56, 73, 8 };
	ShellSort(a, sizeof(a) / sizeof(a[0]));
	PrintArray(a, sizeof(a) / sizeof(a[0]));
}

void TestSelectSort()
{
	int a[] = { 23, 47, 11, 64, 35, 82, 19, 56, 73, 8 };
	SelectSort(a, sizeof(a) / sizeof(a[0]));
	PrintArray(a, sizeof(a) / sizeof(a[0]));
}

void TestQuickSort()
{
	int a[] = { 23, 47, 11, 64, 35, 82, 19, 56, 73, 8 };
	QuickSort1(a, 0, sizeof(a) / sizeof(a[0]) - 1);
	PrintArray(a, sizeof(a) / sizeof(a[0]));
}

void TestQuick2Sort()
{
	int a[] = { 23, 47, 11, 64, 35, 82, 19, 56, 73, 8 };
	QuickSort2(a, 0, sizeof(a) / sizeof(a[0]) - 1);
	PrintArray(a, sizeof(a) / sizeof(a[0]));
}

int main()
{
	//TestInsertSort();
	//TestHeapSort();
	//TestShellSort();
	//TestSelectSort();
	TestQuick2Sort();
	return 0;
}