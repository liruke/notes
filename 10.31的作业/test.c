#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//void multiplication_table(int x, int y)
//{
//	for (x = 1;x <= 9;x++)
//	{
//		for (y = 1;y <= x;y++)
//		{
//			printf("%d*%d=%2d ", x, y, x * y);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	multiplication_table(i,j);
//}
//void juge_leap_year(int a)
//{
//	if (a % 4 == 0 && a % 100 != 0 || a % 400 == 0)
//	{
//		printf("这一年是闰年");
//	}
//	else
//	{
//		printf("这一年不是闰年");
//	}
//}
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	juge_leap_year(age);
//	return 0;
//}
//int is_prime(int x)
//{
//	int j = 0;
//	for (j = 2;j < x;j++)
//	{
//		
//		if (x%j==0)
//		{
//			return 0;
//		}
//	}
//	if (x == j)
//	{
//		return 1;
//	}
//}
//int main()
//{
//	int i = 0;
//	int n = 0;
//	for (i = 100;i <= 200;i++)
//	{
//		if (is_prime(i) == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//void init(int arr[], int sz)
//{
//	int j = 0;
//	for (j = 0;j < sz;j++)
//	{
//		arr[j] = 0;
//	}
//	for (j = 0;j < sz;j++)
//	{
//		printf("%d ", arr[j]);
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	init(arr,sz);
//}
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	return 0;
//}
void reserve(int arr[], int sz)
{
	int i = sz;
	for (i = sz - 1;i >= 0;i--)
	{
		printf("%d ", arr[i]);
	}
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	reserve(arr, sz);
	return 0;
}