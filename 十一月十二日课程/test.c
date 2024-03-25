#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
#include<string.h>
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	//.....
//	//.....
//	p = NULL;
//	if (p != NULL)
//	{
//		//....
//	}//可以通过if语句来判断指针是否为空指针，然后来判断之后能不能用这个指针
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	//......
//	//......
//	p = NULL;
//	assert(p != NULL);//若assert内部判断的是假就会报错
//	//代码会报错，并且会显示是第几行有问题
//	//作用就是检验一下p是否是空指针
//	//assert不仅能检验指针还能建议变量，只要是条件就可以了
//	return 0;
//}
//int add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("%d", add(a, b));//这个是传的是值，传的是变量就是传值调用。
//	return 0;
//}
//size_t-----unsigned int
//size_t my_strlen(const char* s)
//{
//	int count = 0;
//	assert(s != NULL);
//	while (*s)
//	{
//		count++;
//		s++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abc";
//	size_t len = strlen(arr);
//	size_t Len = my_strlen(arr);//传的是地址所以用指针接收
//	printf("%zd\n", len);
//	printf("%zd\n", Len);
//	return 0;
//}



//传值调用和传址调用
//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa和a之间建立了某种联系
//	*pa = 20;
//	printf("%d", *pa);
//	return 0;
//}
//void swap2(int* px, int* py)//传址调用
//{
//	int z = 0;
//	z = *px;
//	*px = *py;
//	*py = z;
//}
//int main()
//{
//	int a = 20;
//	int b = 10;
//	printf("交换前:a=%d,b=%d\n", a, b);
//	//swap(a, b);
//	swap2(&a, &b);//传址调用直接操作的是实参
//	printf("交换后:a=%d,b=%d\n", a, b);
//	return 0;
//}
// 
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);
//
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);
//	return 0;
//}
//void test(int arr[])//这里应该用指针来接收地址（int*arr），本质就是指针
//{
//	//这里的int arr[]可以写成int*arr
//	int sz = sizeof(arr) / sizeof(arr[0]);//所以这里就是一个指针变量的大小除以首元素的大小
//	//在x86的环境下指针变量的大小就是4，int类型的数组的首元素大小就是4所以结果就是1
//	//在x64的环境下指针变量的大小就是8，int类型的数组的首元素大小就是4所以结果就是2
//	printf("%d", sz);
//}
//void Print(int* arr)
//{
//	int i = 0;
//	for (i = 0;i < 10;i++)
//	{
//		printf("%d ", *(arr+i));
//	}
//}
//int main()
//{
//	//数组传参的时候，传递的并非是数组
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	Print(arr);//数组传参是降级了
//	//test(arr);//这里的数组名就是数组首元素的地址，传过去的也是首元素的地址
//	return 0;
//}
int count = 0;//这个count是计数的count，是判断进行了多少次冒号排序没进入一次就count++
void BubbleSort(int* arr,int sz)
{
	//趟数
	int i = 0;
	for (i = 0;i < sz - 1;i++)
	{
		int flag = 1;//假设已经有序
		//一趟冒号排序的过程
		int j = 0;
		for (j=0;j<sz-1-i;j++)
		{
			count++;
			//一对元素的比较
			if (arr[j] > arr[j+1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;//如果flag是零就说明这个数组就是无序的，如果他没进行一次交换的话就说明
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
}
int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };//降序数组
	//我们想把数组进行排序，排为升序
	int sz = sizeof(arr) / sizeof(arr[0]);
	BubbleSort(arr,sz);
	for (int i = 0;i < sz;i++)
	{
		printf("%d ", *(arr + i));
	}
	printf("%d", count);
	return 0;
}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%p\n", arr+1);
//	printf("%p\n", &arr[0]+1);
//	printf("%p\n", &arr+1);
//	return 0;
//}