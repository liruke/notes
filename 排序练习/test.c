#include<stdio.h>
//
////��������
//void InsertSort(int* a, int n)
//{
//	for (int i = 0;i < n-1;i++)//iȡ�����һ��Ԫ�ص�ǰһ��Ԫ��
//	{
//		int end = i;//endȡ�������һ��Ԫ�ص�ǰһ��Ԫ�ص��±�
//		int tmp = a[end + 1];//�����һ��Ԫ�ز��뵽ǰ���Ԫ���У�����ǰ���i����Ҫ�������һ��Ԫ��
//		while (end >= 0)//��end����0��ʱ�����ѭ��
//		{
//			if (a[end]>tmp)//���������Ļ�����ǰһ��Ԫ�ر�tmp�������Ų
//			{
//				a[end + 1] = a[end];
//				end--;
//			}
//			else//else�������������
//				//1.���������Լ�С�������ߵ����Լ���������ֹ
//				//2.�������һ��Ԫ��ʱ���Ѿ�����Ҫ�Ƚ��ˣ���ֱ��break
//			{
//				break;
//			}
//		}
//		a[end + 1] = tmp;//����endѭ��֮�󣬽�tmp��䵽�ո�end+1�ó�����λ��
//	}
//}
////ϣ������
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
////������
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
////ѡ������
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
// ѡ������
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
//// ������
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
// ѡ������

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
//// ������
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
//	//����
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

// ð������
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

// ��������ݹ�ʵ��
// ��������hoare�汾
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
// ���������ڿӷ�
int PartSort2(int* a, int left, int right);
// ��������ǰ��ָ�뷨
int PartSort3(int* a, int left, int right);
void QuickSort(int* a, int left, int right);

// �������� �ǵݹ�ʵ��
void QuickSortNonR(int* a, int left, int right)