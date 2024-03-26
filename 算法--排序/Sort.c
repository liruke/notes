#include "Sort.h"


void InsertSort(int* a, int n)
{
	for (int i = 0;i < n - 1;i++)
	{
		int end = i;
		int tmp = a[end + 1];
		while (end < n)
		{
			if (tmp < a[end])
			{
				a[end + 1] = a[end];
				end--;
			}
			else
			{
				break;
			}
		}
		a[end + 1] = tmp;
	}
}

void Swap(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void AdjustDown(int* a, int n, int root)
{
	int parent = root;
	int child = parent * 2 + 1;
	while (child < n)
	{
		if (a[child] < a[child + 1] && child + 1 < n)
		{
			child++;
		}
		if (a[child] > a[parent])
		{
			Swap(&a[child], &a[parent]);
			child = parent;
			parent = (child - 1) / 2;
		}
		else
		{
			break;
		}
	}
}

void HeapSort(int* a, int n)
{
	for (int i = n - 1 - 1;i >= 0;i--)
	{
		AdjustDown(a, n, i);
	}
	//交换首位两个元素
	int end = n - 1;
	while (end > 0)
	{
		Swap(&a[0], &a[end]);
		AdjustDown(a, end, 0);
		end--;
	}
}

void ShellSort(int* a, int n)
{
	int gap = n;
	while (gap > 1)
	{
		gap /= 2;
		for (int i = 0;i < n - gap;i++)
		{
			int end = i;
			int tmp = a[end + gap];
			while (end >= 0)
			{
				if (tmp < a[end])
				{
					a[end + gap] = a[end];
					end -= gap;
				}
				else
				{
					break;
				}
			}
			a[end + gap] = tmp;
		}

	}
}

void SelectSort(int* a, int n)
{
	int begin = 0;
	int end = n - 1;
	int maxi = begin, mini = begin;
	while (begin < end)
	{
		for (int i = begin;i <= end;i++)
		{
			if (a[i] < a[mini])
			{
				mini = i;
			}
			if (a[i] > a[maxi])
			{
				maxi = i;
			}
		}
		if (begin == maxi)
		{
			maxi = mini;
		}
		Swap(&a[begin], &a[mini]);
		Swap(&a[end], &a[maxi]);
		begin++;
		end--;
	}
}


void QuickSort1(int* a, int left, int right)
{
	int begin = left, end = right;
	int key = left;
	if (left >= right)
	{
		return;
	}
	while (left < right)
	{
		while (a[right] >= a[key] && left < right)
		{
			right--;
		}
		while (a[left] <= a[key] && left < right)
		{
			left++;
		}
		Swap(&a[right], &a[left]);
	}
	Swap(&a[key], &a[left]);
	key = left;
	QuickSort1(a, begin, key - 1);
	QuickSort1(a, key + 1, end);
}

void QuickSort2(int* a, int left, int right)
{
	if (left >= right)
	{
		return;
	}
	int prev = left;
	int key = left;
	int cur = left + 1;
	while (cur <= right)
	{
		if (a[cur] < a[key] && ++prev != cur)
		{
			Swap(&a[cur], &a[prev]);
		}
		cur++;
	}
	Swap(&a[prev], &a[key]);
	key = prev;
	QuickSort2(a, left, key - 1);
	QuickSort2(a, key + 1, right);
}

