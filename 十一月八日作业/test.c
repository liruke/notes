#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a=%d\n", a);
//	printf("b=%d\n", b);
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	int count = 0;
//	scanf("%d", &n);
//	while (n)
//	{
//		if (n & 1 == 1)
//			count++;
//		n = n >> 1;
//	}
//	printf("%d", count);
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("奇数位:");
//	int Odd = n;
//	int Even = n>>1;
//	for (int i = 0;i < 15;i++)
//	{
//		if (Odd & 1 == 1)
//		{
//			printf("1 ");
//		}
//		else
//		{
//			printf("0 ");
//		}
//		Odd = Odd >> 2;
//	}
//	printf("\n");
//	printf("偶数位:");
//	for (int i = 0;i < 15;i++)
//	{
//		if (Even & 1 == 1)
//		{
//			printf("1 ");
//		}
//		else
//		{
//			printf("0 ");
//		}
//		Even = Even >> 2;
//	}
//	printf("\n");
//	return 0;
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int count = 0;
//	scanf("%d%d", &m, &n);
//	for (int i = 0;i < 32;i++)
//	{
//		if ((m&1)!=(n&1))
//		{
//			count++;
//		}
//		n = n >> 1;
//		m = m >> 1;
//
//	}
//	printf("count=%d", count);
//	return 0;
//}