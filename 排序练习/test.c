#include<stdio.h>
//
////插入排序
//void InsertSort(int* a, int n)
//{
//	for (int i = 0;i < n-1;i++)//i取到最后一个元素的前一个元素
//	{
//		int end = i;//end取的是最后一个元素的前一个元素的下标
//		int tmp = a[end + 1];//将最后一个元素插入到前面的元素中，所以前面的i不需要包含最后一个元素
//		while (end >= 0)//当end大于0的时候进入循环
//		{
//			if (a[end]>tmp)//如果排升序的话，则前一个元素比tmp大就往后挪
//			{
//				a[end + 1] = a[end];
//				end--;
//			}
//			else//else包含两种情况：
//				//1.当遇到比自己小的数或者等于自己的数就终止
//				//2.当到达第一个元素时，已经不需要比较了，就直接break
//			{
//				break;
//			}
//		}
//		a[end + 1] = tmp;//出了end循环之后，将tmp填充到刚刚end+1让出来的位置
//	}
//}
////希尔排序
//void ShellSort(int* a ,int n)
//{
//
//	int gap = 3;
//	while (gap >= 1)
//	{
//		gap /= 2;
//		for (int i = 0;i < n - 1;i++)
//		{
//			int end = i;
//			int tmp = a[end + gap];
//			while (end >= 0)
//			{
//				if (a[end] > tmp)
//				{
//					a[end + gap] = a[end];
//					end -= gap;
//				}
//				else
//				{
//					break;
//				}
//			}
//			a[end + gap] = tmp;
//		}
//	}
//}
//
////堆排序
//
//void Swap(int* ps, int* pc)
//{
//	int tmp = 0;
//	tmp = *ps;
//	*ps = *pc;
//	*pc = tmp;
//}
//
//void AdJustDown(int* a, int n, int root)
//{
//	int parent = root;
//	int child = parent * 2 + 1;
//	while (child < n)
//	{
//		if (a[child] < a[child + 1]&&child+1<n)
//		{
//			child++;
//		}
//		if (a[parent] < a[child])
//		{
//			Swap(&a[parent], &a[child]);
//		}
//		else
//		{
//			break;
//		}
//	}
//}
//
//void HeapSort(int* a, int n)
//{
//	for (int i = (n - 1 - 1) / 2;i >= 0;i--)
//	{
//		AdJustDown(a, n, i);
//	}
//	int end = n - 1;
//	while (end >= 0)
//	{
//		Swap(&a[0], &a[end]);
//		AdJustDown(a, end, 0);
//		end--;
//	}
//}
//
//
////选择排序
//void SelectSort(int* a, int n)
//{
//	int begin = 0;
//	int end = n - 1;
//	while (end >= begin)
//	{
//		int  mini = begin;
//		int maxi = begin;
//		for (int i = begin;i < end;i++)
//		{
//			if (a[maxi] < a[i])
//			{
//				maxi = i;
//			}
//			if (a[mini] > a[i])
//			{
//				mini = i;
//			}
//		}
//		Swap(&a[maxi], &a[end]);
//		Swap(&a[mini], &a[begin]);
//		end--;
//		begin++;
//	}
//}
//
//
//void TestSelectSort()
//{
//	int arr[10] = { 5, 4, 2, 6, 8, 1, 9, 3, 0, 7 };
//	SelectSort(arr, 10);
//	for (int i = 0;i < 10;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//void TestHeapSort()
//{
//	int arr[10] = { 5, 4, 2, 6, 8, 1, 9, 3, 0, 7 };
//	HeapSort(arr, 10);
//	for (int i = 0;i < 10;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//void TestInsertSort()
//{
//	int arr[10] = { 5, 4, 2, 6, 8, 1, 9, 3, 0, 7 };
//	InsertSort(arr, 10);
//	for (int i = 0;i < 10;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//void TestShellSort()
//{
//	int arr[10] = { 5, 4, 2, 6, 8, 1, 9, 3, 0, 7 };
//	ShellSort(arr, 10);
//	for (int i = 0;i < 10;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//
//int main()
//{
//	//TestInsertSort();
//	//TestShellSort();
//	//TestHeapSort();
//	TestSelectSort();
//	return 0;
//}
// 选择排序
//void SelectSort(int* a, int n)
//{
//	int begin = 0;
//	int end = n - 1;
//	for (int i = begin;i < end;i++)
//	{
//
//	}
//}
//
//
//// 堆排序
//void AdjustDwon(int* a, int n, int root);
//void HeapSort(int* a, int n);
//
//
//void QuickSort(int* a, int left, int right)
//{
//	if (left >= right)
//	{
//		return;
//	}
//	int begin = left;
//	int end = right;
//	int key = left;
//	while (left < right)
//	{
//		while (a[right] >= a[key])
//		{
//			right--;
//		}
//		while (a[left] <= a[key])
//		{
//			left++;
//		}
//		Swap(&a[left], &a[right]);
//	}
//	Swap(&a[key], &a[right]);
//	key = left;
//	QuickSort(a, begin, key);
//	QuickSOrt(a, key, end);
//}
// 选择排序

//void Swap(int* a, int* b)
//{
//	int tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//void SelectSort(int* a, int n)
//{
//	int begin = 0;
//	int end = n - 1;
//	int maxi = begin;
//	int mini = begin;
//	while (begin < end)
//	{
//		for (int i = begin;i <= end;i++)
//		{
//			if (a[end] > a[maxi])
//			{
//				maxi = i;
//			}
//			if (a[begin] < a[mini])
//			{
//				mini = i;
//			}
//		}
//		if (maxi == begin)
//		{
//			maxi = mini;
//		}
//		Swap(&a[begin], &a[mini]);
//		Swap(&a[end], &a[maxi]);
//		end--;
//		begin++;
//	}
//
//}
//
//
//// 堆排序
//void AdjustDwon(int* a, int n, int root)
//{
//	int parent = root;
//	int child = parent * 2 + 1;
//	while (child < n)
//	{
//		if (a[child] < a[child + 1] && child + 1 < n)
//		{
//			child++;
//		}
//		if (a[parent] < a[child])
//		{
//			Swap(&a[child], &a[parent]);
//			child = parent;
//			parent = (child - 1) / 2;
//		}
//		else
//		{
//			break;
//		}
//	}
//
//}
//void HeapSort(int* a, int n)
//{
//	//建堆
//	for (int i = (n - 1 - 1) / 2;i > 0;i--)
//	{
//		AdjustDwon(a, n, i);
//	}
//	int end = n - 1;
//	while (end > 0)
//	{
//		Swap(&a[end], &a[0]);
//		AdjustDwon(a, end, 0);
//		end--;
//	}
//}

// 冒泡排序
void BubbleSort(int* a, int n)
{
	for (int i = 0;i < n - 1;i++)
	{
		for (int j = 0;j < n - 1 - i;j++)
		{
			if (a[j] > a[j + 1])
			{
				Swap(&a[j], &a[j + 1]);
			}
		}
	}
}

// 快速排序递归实现
// 快速排序hoare版本
int PartSort1(int* a, int left, int right)
{
	int begin = left;
	int end = right;
	int  key = left;
	while (left < right)
	{
		while (a[right] <= a[key])
		{
			right--;
		}
		while (a[left] >= a[key])
		{
			left++;
		}
		Swap(&a[left], &a[right]);
	}
	key = left;
	PartSort1(a, begin, key - 1);
	PartSort1(a, key + 1, end);
}
// 快速排序挖坑法
int PartSort2(int* a, int left, int right);
// 快速排序前后指针法
int PartSort3(int* a, int left, int right);
void QuickSort(int* a, int left, int right);

// 快速排序 非递归实现
void QuickSortNonR(int* a, int left, int right)