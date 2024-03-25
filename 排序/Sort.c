#include "Stack.h"
#include "Sort.h"



//��������
//ʱ�临�Ӷ�:O(N^^2)
void InsertSort(int* a, int n)
{
	//
	//[0,end] end+1
	//ѭ��n-1��
	//ʱ�临�Ӷ�:O(N^2)
	//����������  ��������˳����߽ӽ�����
	for (int i = 0;i < n-1;i++)//���һ���������������ȥ�ģ�����ֻ�ܱ�����n-2�����һ����ֱ�Ӳ����ȥ
	{
		int end = i;
		int tmp = a[end + 1];
		//1 2 3 4 5 .....n-1(n^2)
		while (end >= 0)
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
void Swap(int* ps, int* pa)
{
	int tmp = *ps;
	*ps = *pa;
	*pa = tmp;
}

//ð������
void BubbleSort(int* a, int n)
{
	for (int i = 0;i < n;i++)
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

void NewBubbleSort(int* a, int n)
{
	for (int i = 0;i < n - 1;i++)
	{
		int exchange = 0;//��־---һ���ֻض�û�н���
		for (int j = 1;j < n - j;j++)
		{
			if (a[j - 1] > a[j])
			{
				Swap(&a[j], a[j + 1]);
				exchange = 1;//�����ˣ�����exchangeΪ1
			}
		}
		//һ��֮���ж�exchange�Ƿ�ı�
		if (exchange == 0)
		{
			break;
		}
	}
}


//������
void AdjustDown(int* a, int n, int root)
{
	int parent = root;
	int child = root * 2 + 1;
	while (child < n)
	{
		if (a[child] < a[child] && child + 1 < n)
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
	//����
	for (int i = (n - 1 - 1) / 2;i >= 0;i--)
	{
		AdjustDown(a, n, i);
	}
	int end = n - 1;
	while (end > 0)
	{
		Swap(&a[0], &a[end]);
		AdjustDown(a, end, 0);
		end--;
	}
}

//Ԥ����--Ŀ��:�ӽ�����
//��������--Ŀ������


//gapԽ����������Խ��
void ShellSort(int* a, int n)
{
	//����Ԥ�Ų��룬Ŀ��:�����������������棬С�������������ǰ��
	int gap = n;
	while (gap > 1)
	{
		gap /= 2;
		for (int i = 0;i < n - gap;i += gap)
		{
			int end = i;
			int tmp = a[end + gap];
			while (end > 0)
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
	int begin = 0, end = n - 1;
	//ѡ����Сֵ�����ֵ��λ��
	int mini = begin, maxi = begin;
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
		if (maxi == begin)
		{
			maxi = mini;
		}
		Swap(&a[begin], &a[mini]);
		Swap(&a[end], &a[maxi]);
		begin++;
		end--;
	}
}


//����ȡ�� left mid rightȡ�Ĳ����м�ģ�����ȡ�Ĵ�С���м�ģ�Ȼ����ѡΪ�ҵ�key
//���������ȡ��
//ȡ���������У���С�������Ҳ������С��ֵ
int GetMidi(int* a, int left, int right)
{
	int mid = (left + right) / 2;
	if (a[left]<a[mid])
	{
		if (a[mid] < a[right])
		{
			return mid;
		}
		//����else if��˵��mid��������
		else if (a[left] > a[right])
		{
			return left;
		}
		else
		{
			return right;
		}
	}
	else//a[left]>a[mid]
	{
		if (a[mid]>a[right])
		{
			return mid;
		}
		//С�ľ��Ǿ��е�
		else if (a[right]<a[left])
		{
			return right;
		}
		else
		{
			return left;
		}
	}
}


void QuickSort(int* a, int left,int right)
{
	//�������߱��ұߴ���ߺ��ұ���ȣ�����������ͽ�������
	if (left >= right)
	{
		return;
	}

	//С�����Ż�
	//С����ѡ��������򣬴�����ѡ���ߵݹ�
	if (right - left + 1 < 10)
	{
		InsertSort(a, left - right + 1);
	}
	else
	{
		int begin = left;
		int end = right;
		//int randi = rand() % (right - left);
		//left��һ����right,����ÿ��ģ�궼Ҫ+=left����Ϊ��
		//�����ҵ�������100-200֮�䣬�����������100����ģ��100ʱ���ҵ�������䵽��0-100��
		//����+=100�����������������100-200֮��
		//randi += left;
		//Swap(&a[left], &a[randi]);
		int midi = GetMidi(a, left, right);
		Swap(&a[left], &a[midi]);

		int key = left;
		while (left < right)
		{
			while (a[right] >= a[key] && left < right)
			{
				right--;
			}
			//left���ߣ��Ҵ�
			while (a[left] <= a[key] && left < right)
			{
				left++;
			}
			//����left��right����
			Swap(&a[left], &a[right]);
		}
		//���ﲻ����key��Ϊkey�Ǹ��ֲ�������key������������ݽ���,�������������е��������ݽ��н�����
		//���Կ��Խ������±����key�У�Ȼ��ͨ���±������������е�Ԫ��
		Swap(&a[key], &a[right]);
		key = left;
		//�ֳɼ�������[������][������]
		QuickSort(a, begin, key - 1);//������
		QuickSort(a, key + 1, end);//������
	}
}


//������ӽ�����ʱ�����ŵ�ʱ�临�ӶȽӽ���n�����ݹ���Ⱥܴ�
//Ϊ�˽���������⣬���������ѡkey
//��һ��randi=rand();
//randi%(right-left);
//randi+=left;
//���Ǽ������ѡkey�͵���ȡ��ѡkey�����Ͳ�������.

void QuickSort1(int* a, int left, int right)
{
	if (left >= right)
	{
		return;
	}
	int prev = left;
	int cur = left + 1;
	int key = left;
	while (cur <= right)
	{
		if (a[cur] < a[key] && ++prev != cur)
		{
			Swap(&a[prev], &a[cur]);
		}
		cur++;
	}
	Swap(&a[key], &a[prev]);
	key = prev;
	QuickSort1(a, left, key - 1);
	QuickSort1(a, key + 1, right);
}

//���ŵķǵݹ�
//�ݹ�����̫���ҵ�

//�ݹ�ķǵݹ�ĺ�������ջ������

void QuickSort2(int* a, int left, int right){
	ST st;
	StackInit(&st);
	int key = left;
	StackPush(&st, right);
	StackPush(&st, left);
	while (StackEmpty(&st))
	{
		int begin = StackTop(&st);
		StackPop(&st);
		int end = StackTop(&st);
		StackPop(&st);
		int prev = begin;
		int cur = begin + 1;
		int key = begin;
		while (cur <= end)
		{
			if (a[cur] < a[key] && ++prev != cur)
			{
				Swap(&a[prev], &a[cur]);
			}
			cur++;
		}
		Swap(&a[key], &a[prev]);
		key = prev;
		if (key + 1 < end)
		{
			StackPush(&st, end);
			StackPush(&st, key + 1);
		}
		if (begin < key - 1)
		{
			StackPush(&st, key - 1);
			StackPush(&st, begin);
		}
	}
	StackDestory(&st);
}


void _MergeSort(int* a, int begin, int end, int* tmp)
{
	if (begin == end)
	{
		return;
	}
	int mid = (begin + end) / 2;
	//�ֳ���������
	//ż������ʱ�����Ҹ�����һ��
	_MergeSort(a, begin, mid, tmp);
	_MergeSort(a, mid + 1, end, tmp);
	//�鲢
	int begin1 = begin;
	int end1 = mid;
	int begin2 = mid + 1;
	int end2 = end;
	int i = begin;//������0��������begin��Ӧ��λ��
	while (begin1 <= end1 && begin2 <= end2)
	{
		if (a[begin1] < a[begin2])
		{
			tmp[i++] = a[begin1++];
		}
		else
		{
			tmp[i++] = a[begin2++];
		}
	}
	//�ж����������е�����һ���Ƿ����
	while (begin1 < end1)
	{
		tmp[i++] = a[begin1++];
	}
	while (begin2 < end2)
	{
		tmp[i++] = a[begin2++];
	}
	memcpy(a + begin, tmp + begin, sizeof(int) * (end - begin + 1));
}


void MergeSort(int* a, int n)
{
	int* tmp = (int*)malloc(sizeof(int) * n);
	if (tmp == NULL)
	{
		perror("malloc fail\n");
		return;
	}
	_MergeSort(a, 0, n - 1, tmp);
	free(tmp);
	tmp = NULL;
}

//��ջ�Ͷ��ж����ý��
//�ǵݹ�
//�ݹ�ķǵݹ�Ҫô����ջ�Ͷ��У�Ҫôֱ�Ӹ�ѭ��
//�鲢����ķǵݹ����ͨ��ѭ��������
//�����ڻ���
//��������
void  MergeSortNonR(int* a, int n)
{
	int* tmp = (int*)malloc(sizeof(int) * n);
	if (tmp == NULL)
	{
		perror("malloc fail\n");
		return;
	}
	int gap = 1;
	while (gap < n)
	{
		for (int j = 0;j < n;j += 2 * gap)
		{
			int begin1, end1, begin2, end2;//��������Ĺ鲢
			begin1 = j;
			//begin1�϶��Ǵ�0��ʼ
			end1 = begin1 + gap - 1;//gap�Ǳ仯��
			begin2 = end1 + 1;//begin2Ҳ������begin1������һ��Ҳ����+gap
			end2 = begin2 + gap - 1;
			int i = j;
			while (begin1 <= end1 && begin2 <= end2)
			{
				if (a[begin1] < a[begin2])
				{
					tmp[i++] = a[begin1++];
				}
				else
				{
					tmp[i++] = a[begin2++];
				}
			}
			//�ж����������е�����һ���Ƿ����
			while (begin1 < end1)
			{
				tmp[i++] = a[begin1++];
			}
			while (begin2 < end2)
			{
				tmp[i++] = a[begin2++];
			}
		}
		gap *= 2;
	}
}