#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int ret = arr[0];
//	for (i = 1;i < sz;i++)
//	{
//		ret = ret^arr[i];
//	}
//	printf("%d", ret);
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0])-1;
//	int* p = &arr[sz];
//	int i = 0;
//	for (i = 0;i < 10;i++)
//	{
//		printf("%d ", *p);
//		p--;
//	}
//	return 0;
//}
//int main()
//{
//	char arr[1001] = { 0 };
//	gets(arr);
//	int i = 0;
//	int sz = strlen(arr)-1;
//	char* p = &arr[sz];
//	for (i = 0;i <= sz;i++)
//	{
//		printf("%c", *p);
//		p--;
//	}
//	return 0;
//}
//int my_strlen(char* ch)
//{
//	int count = 0;
//	while (*ch)
//	{
//		count++;
//		ch++;
//	}
//	return count;
//}
//int main()
//{
//	int i = my_strlen("abc");
//	printf("%d", i);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 0;i < 100000;i++)
//	{
//		int count = 1;
//		int tmp = i;
//		while (tmp>9)
//		{
//			tmp /= 10;
//			count++;
//		}
//		tmp = i;
//		int sum = 0;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, count);
//			tmp /= 10;
//		}
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	char arr[] = "*************";
//	int right = sizeof(arr) / sizeof(arr[0])-1;
//	int left = 0;
//	printf("%s", arr);
//	while (left < right)
//	{
//		arr[left] = " ";
//		arr[right] = " ";
//		right--;
//		left++;
//		printf("%s", arr);
//	}
//	return 0;
//}