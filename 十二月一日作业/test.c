#define _CRT_SECURE_NO_WARNINGS 0
#include<stdio.h>
#include<math.h>
//struct A
//{
//	int a;
//	short b;
//	int c;
//	char d;
//};
//struct S1
//{
//	char c1;
//	int i;
//	char c2;
//};
//int main()
//{
//	printf("%zd", sizeof(struct A));
//	printf("%zd", sizeof(struct S1));
//	return 0;
//}
//union U
//{
//	int n;
//	struct S
//	{
//		char s1;
//		char s2;
//		char s3;
//		char s4;
//	};
//};
//int main()
//{
//	union U u = { 0 };
//	u.n = 1;
//	printf("%d", u.s1);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int i = 0;
//    for (i = 0;i < 100000;i++)
//    {
//        int count = 0;
//        int ret = i;
//        int sum = 0;
//        while (ret)
//        {
//            ret = ret / 10;
//            count++;
//        }
//        int j = 0;
//        for (j = 1;j <= count - 1;j++)
//        {
//            int num = 1;
//            for (int z = 0;z < j;z++)
//            {
//                num = num * 10;
//            }
//            int a = i % num;
//            int b = i / num;
//            sum = sum + a * b;
//        }
//        if (i == sum)
//        {
//            printf("%d ", i);
//        }
//    }
//    return 0;
////}
//int main()
//{
//	int n = 0;
//	int arr[20] = { 0 };
//	scanf("%d", &n);
//	for (int i = 0;i < n;i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int j = 0;
//	scanf("%d", &j);
//	for (int z = 0;z < n;z++)
//	{
//		if (arr[z] != j)
//		{
//			printf("%d ", arr[z]);
//		}
//	}
//	return 0;
//}
struct S1
{
	char a;
	char c;
	int b;
};
struct S2
{
	char a;
	int b;
	char c;
};
int main()
{
	printf("S1:%zd\n", sizeof(struct S1));
	printf("S2:%zd\n", sizeof(struct S2));
}