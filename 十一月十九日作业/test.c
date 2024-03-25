#include<stdio.h>
//void swap(char*buf1,char*buf2,int width)
//{
//	int tmp = *buf1;
//	*buf1 = *buf2;
//	*buf2 = tmp;
//	buf1++;
//	buf2++;
//}
//void bubble_sort(void*base,int sz,int width,int(*cmp)(const void*p1,const void*p2))
//{
//	int i = 0;
//	for (i = 0;i < sz - 1;i++)
//	{
//		int j = 0;
//		for (j = 0;j < sz - i - 1;j++)
//		{
//			if (cmp((char*)base+j*width, (char*)base+(j+1)*width) > 0)
//			{
//				swap((char*)base + j * width, (char*)base + (j+1) * width,width);
//			}
//		}
//	}
//}
//int compar(const void*p1,const void*p2)
//{
//	return *(int*)p1 - *(int*)p2;
//}
//void print(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//}
//void test()
//{
//	int arr[] = { 1,4,5,2,3,7,8,6,9,0, };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz,sizeof(arr[0]),compar);
//	print(arr,sz);
//}
//int main()
//{
//	test();
//	return 0;
//}
//void bubble(int* arr, int sz)
//{
//	int i = 0;
//	for (i == 0;i < sz-1;i++)
//	{
//		int j = 0;
//		for (j = 0;j < sz-1-i;j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = 0;
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 1,4,5,6,8,0,9,2 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble(arr, sz);
//	for (int i = 0;i < sz;i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//	return 0;
//}
//struct stu
//{
//	int name[20];
//	int age;
//};
//int compar(const void* p1, const void* p2)
//{
//	return ((struct stu*)p1)->age - ((struct stu*)p2)->age;
//}
//int main()
//{
//	int arr[20] = { 1,2,19,16,33,29,29,25,27,13,46,43,8,31,30,8,41,17,36,37 };
//	for (int i = 0;i < 9;i++)
//	{
//		int j = 0;
//		for (j = 0;j < 9 - i;j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				int tmp = 0;
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//	for (int i = 0;i < 9;i++)
//	{
//		int j = 0;
//		for (j = 10;j < 19 - i;j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = 0;
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//	for (int i = 0;i < 20;i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//	return 0;
int main()
{
	int arr[] = { 0 };
	return 0;
}