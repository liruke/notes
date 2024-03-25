#include "Stack.h"
#include "Sort.h"



//插入排序
//时间复杂度:O(N^^2)
void InsertSort(int* a, int n)
{
	//
	//[0,end] end+1
	//循环n-1次
	//时间复杂度:O(N^2)
	//最坏情况是逆序  最好情况是顺序或者接近有序
	for (int i = 0;i < n-1;i++)//最后一个数是用来插入进去的，所以只能遍历到n-2，最后一个数直接插入进去
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

//冒泡排序
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
		int exchange = 0;//标志---一个轮回都没有交换
		for (int j = 1;j < n - j;j++)
		{
			if (a[j - 1] > a[j])
			{
				Swap(&a[j], a[j + 1]);
				exchange = 1;//交换了，就令exchange为1
			}
		}
		//一轮之后判断exchange是否改变
		if (exchange == 0)
		{
			break;
		}
	}
}


//堆排序
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
	//建堆
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

//预排序--目标:接近有序
//插入排序--目标有序


//gap越大数据跳到越快
void ShellSort(int* a, int n)
{
	//分组预排插入，目标:大的数更快的跳到后面，小的数更快的跳到前面
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
	//选出最小值和最大值的位置
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


//三数取中 left mid right取的不是中间的，而是取的大小是中间的，然后将他选为我的key
//这就是三数取中
//取出这三个中，大小不是最大也不是最小的值
int GetMidi(int* a, int left, int right)
{
	int mid = (left + right) / 2;
	if (a[left]<a[mid])
	{
		if (a[mid] < a[right])
		{
			return mid;
		}
		//进入else if就说明mid就是最大的
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
		//小的就是居中的
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
	//区间的左边比右边大或者和右边相等，最后这个排序就结束到了
	if (left >= right)
	{
		return;
	}

	//小区间优化
	//小区间选择插入排序，大区间选择走递归
	if (right - left + 1 < 10)
	{
		InsertSort(a, left - right + 1);
	}
	else
	{
		int begin = left;
		int end = right;
		//int randi = rand() % (right - left);
		//left不一定是right,所以每次模完都要+=left，因为：
		//假设我的数是在100-200之间，这里面的数有100，当模完100时，我的这个数落到了0-100，
		//所以+=100，把我这个数调到了100-200之间
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
			//left再走，找大
			while (a[left] <= a[key] && left < right)
			{
				left++;
			}
			//交换left和right交换
			Swap(&a[left], &a[right]);
		}
		//这里不能填key因为key是个局部变量，key和数组里的数据交换,并不代表数组中的两个数据进行交换了
		//所以可以将数组下标存在key中，然后通过下标来交换数组中的元素
		Swap(&a[key], &a[right]);
		key = left;
		//分成几个区间[左区间][右区间]
		QuickSort(a, begin, key - 1);//左区间
		QuickSort(a, key + 1, end);//右区间
	}
}


//当数组接近有序时，快排的时间复杂度接近于n方，递归深度很大
//为了解决这种问题，可以用随机选key
//用一个randi=rand();
//randi%(right-left);
//randi+=left;
//但是加上随机选key和单数取中选key几乎就不会出现最坏.

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

//快排的非递归
//递归的深度太深会挂掉

//递归改非递归的核心是用栈存区间

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
	//分成左右区间
	//偶数个的时候左右更均匀一点
	_MergeSort(a, begin, mid, tmp);
	_MergeSort(a, mid + 1, end, tmp);
	//归并
	int begin1 = begin;
	int end1 = mid;
	int begin2 = mid + 1;
	int end2 = end;
	int i = begin;//不能是0，必须是begin对应的位置
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
	//判断两个区间中的其中一个是否结束
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

//用栈和队列都不好解决
//非递归
//递归改非递归要么借助栈和队列，要么直接改循环
//归并排序的非递归就是通过循环来做的
//类似于回溯
//控制区间
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
			int begin1, end1, begin2, end2;//两组两组的归并
			begin1 = j;
			//begin1肯定是从0开始
			end1 = begin1 + gap - 1;//gap是变化的
			begin2 = end1 + 1;//begin2也可以是begin1跳过第一组也就是+gap
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
			//判断两个区间中的其中一个是否结束
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