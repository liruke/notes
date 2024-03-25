#include<stdio.h>


//假设我们都用升序讲，降序就是反过来

//插入排序
void InsertSort(int* a, int n)
{
	//[0,end]有序，end+1位置的值插入进去，让[o,end+1]有序
	for (int i = 0;i < n-1;i++)//i是为了控制end
	{
		int end = i;
		int tmp = a[end + 1];//将end后面的数存起来，为了插入排序
		while (end >= 0)
		{
			if (a[end] > tmp)
			{
				a[end + 1] = a[end];
				end--;
			}
			else
			{
				break;//break的意思就是：有可能两个数相等，有可能循环到最后一个数之后可能出现越界情况
			}
		}
		a[end + 1] = tmp;//while出来之后出来就将tmp插入进去
	}
}

//直接插入排序的基础上优化
//1.先进行预排序，让数组接近排序
//2.再进行直接插入排序
//间隔为gap的是一组，假设gap==3
//gap越大，大的数可以越快的到后面，小的数可以越快的到前面
//gap越大预排完越不接近有序，gap越小，预排完越接近有序
//当gap等于1的时候，就是插入排序

void ShellSort(int* a, int n)
{
	int gap = 3;
	//预排序
	while (gap > 1)
	{
		gap /= 2;
		//gap大于1时都是预排序，gap等于1时就是排序
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

//向下调整算法
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
//堆排序
void HeapSort(int *a,int n)
{
	//把数组建成大堆，或者小堆
	//建堆
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


//直接选择排序
void SelectSort(int* a, int n)
{
	//选出两个，最右边选择最大的，最左边选择最小的
	int begin = 0;//取第一个下标
	int end = n - 1;//取最后一个下标
	while (begin < end)
	{
		//取出数组中最小的和最大的数的下标
		int mini = begin;
		int maxi = begin;
		for (int i = begin;i <= end;i++)//从begin到end开始循环
		{
			if (a[i] > a[maxi])//如果这个下标i比最大的还大就就将i赋值到maxi
			{
				maxi = i;
			}
			if (a[i] < a[mini])//如果这个下标i比最小的还小就将i赋值到mini
			{
				mini = i;
			}
		}
		Swap(&a[mini], &a[begin]);//将begin对应的数和最小的数交换
		if (begin == maxi)//当maxi和begin相等时，因为提前换了mini个begin所以原来的maxi对应的值已经被换走
		//了，所以当他交换之后，我们必须修正原来maxi对应的值
		{
			maxi = mini;
		}
		Swap(&a[maxi], &a[end]);//就将end对应的数和最大的数交换
	}
	//end和begin分别++和--，
	end--;
	begin++;
}

//冒泡排序
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