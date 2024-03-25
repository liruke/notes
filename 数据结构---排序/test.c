#include<stdio.h>


//�������Ƕ������򽲣�������Ƿ�����

//��������
void InsertSort(int* a, int n)
{
	//[0,end]����end+1λ�õ�ֵ�����ȥ����[o,end+1]����
	for (int i = 0;i < n-1;i++)//i��Ϊ�˿���end
	{
		int end = i;
		int tmp = a[end + 1];//��end���������������Ϊ�˲�������
		while (end >= 0)
		{
			if (a[end] > tmp)
			{
				a[end + 1] = a[end];
				end--;
			}
			else
			{
				break;//break����˼���ǣ��п�����������ȣ��п���ѭ�������һ����֮����ܳ���Խ�����
			}
		}
		a[end + 1] = tmp;//while����֮������ͽ�tmp�����ȥ
	}
}

//ֱ�Ӳ�������Ļ������Ż�
//1.�Ƚ���Ԥ����������ӽ�����
//2.�ٽ���ֱ�Ӳ�������
//���Ϊgap����һ�飬����gap==3
//gapԽ�󣬴��������Խ��ĵ����棬С��������Խ��ĵ�ǰ��
//gapԽ��Ԥ����Խ���ӽ�����gapԽС��Ԥ����Խ�ӽ�����
//��gap����1��ʱ�򣬾��ǲ�������

void ShellSort(int* a, int n)
{
	int gap = 3;
	//Ԥ����
	while (gap > 1)
	{
		gap /= 2;
		//gap����1ʱ����Ԥ����gap����1ʱ��������
		for (int i = 0;i < n - gap;i++)
		{
			int end = i;
			int tmp = a[end + gap];
			while (end >= 0)
			{
				if (a[end] > tmp)
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

void Swap(int* child, int* parent)
{
	int tmp = 0;
	tmp = *child;
	*child = *parent;
	*parent = tmp;
}

//���µ����㷨
void AdJustDown(int* a, int n, int root)
{
	int parent = root;
	int child = parent * 2 + 1;
	while (child < n)
	{
		if (a[child] < a[child + 1] && child + 1 < n)
		{
			child++;
		}
		if (a[parent] < a[child])
		{
			Swap(&a[parent], &a[child]);
			parent = child;
			child = parent * 2 + 1;
		}
		else
		{
			break;
		}
	}
}
//������
void HeapSort(int *a,int n)
{
	//�����齨�ɴ�ѣ�����С��
	//����
	for (int i = (n - 1 - 1) / 2;i >= 0;i--)
	{
		AdJustDown(a, n, i);
	}
	int end = n - 1;
	while (end > 0)
	{
		Swap(&a[end], &a[0]);
		AdJustDown(a, end, 0);
		end--;
	}
}


//ֱ��ѡ������
void SelectSort(int* a, int n)
{
	//ѡ�����������ұ�ѡ�����ģ������ѡ����С��
	int begin = 0;//ȡ��һ���±�
	int end = n - 1;//ȡ���һ���±�
	while (begin < end)
	{
		//ȡ����������С�ĺ����������±�
		int mini = begin;
		int maxi = begin;
		for (int i = begin;i <= end;i++)//��begin��end��ʼѭ��
		{
			if (a[i] > a[maxi])//�������±�i�����Ļ���;ͽ�i��ֵ��maxi
			{
				maxi = i;
			}
			if (a[i] < a[mini])//�������±�i����С�Ļ�С�ͽ�i��ֵ��mini
			{
				mini = i;
			}
		}
		Swap(&a[mini], &a[begin]);//��begin��Ӧ��������С��������
		if (begin == maxi)//��maxi��begin���ʱ����Ϊ��ǰ����mini��begin����ԭ����maxi��Ӧ��ֵ�Ѿ�������
		//�ˣ����Ե�������֮�����Ǳ�������ԭ��maxi��Ӧ��ֵ
		{
			maxi = mini;
		}
		Swap(&a[maxi], &a[end]);//�ͽ�end��Ӧ����������������
	}
	//end��begin�ֱ�++��--��
	end--;
	begin++;
}

//ð������
void BubbleSort(int* a, int n)
{
	for (int i = 0;i < n-1 ;i++)
	{
		int j = 0;
		for (j = 1;j < n -1-i;j++)
		{
			if (a[j] > a[j + 1])
			{
				Swap(&a[j], &a[j + 1]);
			}
		}
	}
}

void TestBubbleSort()
{
	int arr[9] = { 8,2,6,9,5,3,7,1,4, };
	BubbleSort(arr, 9);
	for (int i = 0;i < 9;i++)
	{
		printf("%d ", arr[i]);
	}
}

void testHeapSort()
{
	int arr[9] = { 8,2,6,9,5,3,7,1,4, };
	HeapSort(arr, 9);
	for (int i = 0;i < 9;i++)
	{
		printf("%d ", arr[i]);
	}
}
void testShellSort()
{
	int arr[5] = { 3,5,8,1,2 };
	InsertSort(arr, 5);
	for (int i = 0;i < 5;i++)
	{
		printf("%d ", arr[i]);
	}
}

void testInsertSort()
{
	int arr[5] = { 3,5,8,1,2 };
	InsertSort(arr, 5);
	for(int i = 0;i < 5;i++)
	{
		printf("%d ", arr[i]);
	}
}

int  main()
{
	//testShellSort();
	//testHeapSort();
	TestBubbleSort();
	return 0;
}