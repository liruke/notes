#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int* p = &a;//一级指针变量p
//	p是指针变量也有自己的空间，所以可以&p
//	int*  *pp = &p;//二级指针
//	int** *ppp = &pp;//三级指针用的很少
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int* p = &a;//一级指针变量p
//	//p是指针变量也有自己的空间，所以可以&p
//	int** pp = &p;//二级指针
//	int*** ppp = &pp;//三级指针用的很少
//	printf("%d", **pp);//二级指针变量是用来存放一级指针变量的地址
//	return 0;
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int* arr[3] = { arr1,arr2,arr3 };
//	for (int i = 0;i < 3;i++)
//	{
//		int j = 0;
//		for (j = 0;j < sz;j++)
//		{
//			printf("%d ", *(arr[i]+j));//arr[i][j]=*(arr[i]+j)
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	const char* p = "abcded";//不是把字符串abcdef\0存放在p中，而是把第一个字符的地址存放在p中
//	/*printf("%c",*p);*/
//	//1.可以把一个字符串想项成一个字符数组
//	//2.当常量字符串出现在表达式中的时候，他的值是第一个字符的地址
//	//常量字符串是不能修改的
//	for (int i = 0;i < 6;i++)
//	{
//		printf("%c ", *p + i);
//	}
//	printf("\n");
//	printf("%c", "abcded"[3]);
//	return 0;
//}内容相同的常量字符串只会保存一份
//当两个指针同时指向一个常量字符串的时候其实地址是一样的
//int main()
//{
//	int n = 100;
//	int* pn = &n;
//	char ch = 'w';
//	char* pc = &ch;
//	float f = 3.14f;
//	float* pf = &f;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*parr)[10] = &arr;//取出的是数组的地址
//	//它的指针类型就是int(*)这就是他的指针类型
//	//parr就是数组指针，括号去掉就是数组了，parr先贺数组结合就是指针数组了，
//	//加上括号就先和指针结合就是数组指针
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p1 = arr;//整形指针
//	//int*    int*
//	int* p2 = &arr[0];//整形指针
//	//int*     int*
//	int(*parr)[10] = &arr;//数组指针
//	//int(*)[10]     int(*)[10]
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int(*p1)[10] = &arr;
//	for (int i = 0;i < 10;i++)
//	{
//		printf("%d ", (*p1)[i]);
//	}
//	return 0;
//}





//形参部分写的二维数组；
//
//void Print(int arr[3][5], int r, int c)
//{
//	int i = 0;
//	for (i = 0;i < r;i++)
//	{
//		int j = 0;
//		for (j = 0;j < c;j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	Print(arr, 3, 5);//打印数组arr的内容
//	return 0;
//}
//int add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 5;
//	int b = 9;
//	int c = add(a, b);
//	printf("%p\n", &add);//可以看出函数也是有地址的
//	//数组名是一个地址，那么函数名是不是地址呢？
//	int (*pf)(int, int) = &add;
//	printf("%p\n", add);
//	return 0;
//}
int main()
{
	int arr[9][9] = { 0 };
	int i = 0;
	for (i = 0;i < 9;i++)
	{
		int j = 0;
		for (j = 0;j <= i;j++)
		{
			if (j == 0 || j == i)
			{
				arr[i][j] = 1;
			}
			else
			{
				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
			}
		}
	}
	for (i=0;i < 9;i++)
	{
		int j = 0;
		int z = 0;
		for (z = 0;z <= 10 - i - 2;z++)
		{
			printf(" ");
		}
		for (j = 0;j<=i;j++)
		{
			printf("%d ", *(arr[i] + j));
		}
		printf("\n");
	}
}
//int main()
//{
//	int arr[9][9] = { 0 };
//	int i = 0;
//	for (i = 0;i < 9;i++)
//	{
//		int j = 0;
//		for (j = 0;j < i;j++)
//		{
//			arr[i][j] = 1;
//		}
//	}
//	for (i = 0;i < 9;i++)
//	{
//		int j = 0;
//		for (j = 0;j < i;j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}