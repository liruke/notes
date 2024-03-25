#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int div(int x, int y)
//{
//	return x / y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//void calc(int(*pf)(int, int))
//{
//	int ret = 0;
//	int x, y = 0;
//	printf("请输入两个操作数:");
//	scanf("%d %d", &x, &y);
//	ret = pf(x, y);
//	printf("%d\n", ret);
//}
//void menu()
//{
//	printf("*******************\n");
//	printf("*1.add       2.sub*\n");
//	printf("*3.div       4.mul*\n");
//	printf("*******************\n");
//}
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			calc(add);
//			break;
//		case 2:
//			calc(sub);
//			break;
//		case 3:
//			calc(div);
//			break;
//		case 4:
//			calc(mul);
//			break;
//		case 0:
//			printf("退出计算器\n");
//			break;
//		default:
//			printf("输入错误\n");
//			break;
//
//		}
//	} while (input);
//	return 0;
//}
//int compar(const void* p1, const void* p2)
//{
//	return *(int*)p1 - *(int*)p2;
//}
//int main()
//{
//	int arr[] = { 2,3,1,6,4,5,8,7,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), compar);
//	for (int i = 0;i < sz;i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//	return 0;
//}
//struct stu
//{
//	int age;
//	char name[20];
//};
//void compar(const void* p1, const void* p2)
//{
//	return ((struct stu*)p1)->age - ((struct stu*)p2)->age;
//}
//int main()
//{
//	struct stu arr[] = { {13,"zhangsan"},{14,"lisi"},{15,"wanger"} };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), compar);
//	for (int i = 0;i < sz;i++)
//	{
//		printf("%d ", (*(arr + i)).age);
//	}
//	return 0;
//}
//struct stu
//{
//	int age;
//	char name[20];
//};
//void compar(const void* p1, const void* p2)
//{
//	return strcmp(((struct stu*)p1)->name , ((struct stu*)p2)->name);
//}
//int main()
//{
//	struct stu arr[] = { {13,"zhangsan"},{14,"lisi"},{15,"wanger"} };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), compar);
//	for (int i = 0;i < sz;i++)
//	{
//	}
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4,6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		int j = 0;
//		for (j = 1;j < sz;j++)
//		{
//			if (arr[i] == arr[j])
//			{
//				break;
//			}
//		}
//	}
//}
//#include<stdio.h>
//int main()
//{
//    int year, month = 0;
//    scanf("%d %d", &year, &month);
//    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//    {
//        if (month == 4 || month == 6 || month == 9 || month == 11)
//        {
//            printf("30");
//        }
//        else if (month == 2)
//        {
//            printf("29");
//        }
//        else
//        {
//            printf("31");
//        }
//    }
//    else
//    {
//        if (month == 4 || month == 6 || month == 9 || month == 11)
//        {
//            printf("30");
//        }
//        else if (month == 2)
//        {
//            printf("28");
//        }
//        else
//        {
//            printf("31");
//        }
//    }
//    return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4,6 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0;i < sz;i++)
//	{
//		int j = 0;
//		for (j = 0;j < sz;j++)
//		{
//			if (arr[i] != arr[j])
//			{
//				continue;
//			}
//			else
//			{
//				if (i == j)
//				{
//					continue;
//				}
//				else if (arr[i] == arr[j])
//				{
//					arr[i] = 0;
//					arr[j] = 0;
//				}
//			}
//		}
//	}
//	for (i = 0;i < sz;i++)
//	{
//		if (arr[i] != 0)
//		{
//			printf("%d ", *(arr + i));
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//
//	return 0;
//}