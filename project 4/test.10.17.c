#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
//int main()
//{
//	int i = 0;
//	for (i = 100;i < +200;i++)
//	{
//		int j = 0;
//		for (j = 2;j <= i - 1;j++)
//		{
//			if (i%j==0)
//			{
//				printf("%d ", i);
//			}
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 1000;i <= 2000;i++)
//	{
//		if (i % 4 == 0 && i % 100 != 0)
//		{
//			printf("%d ", i);
//		}
//		else if (i % 400 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
int main()
{
	int a = 0;
	int b = 0;
	int i = 0;
	scanf("%d%d", &a, &b);
	if (a > b)
	{
		for (i = b;i >= 1;i--)
		{
			if (a % i == 0 && b % i == 0)
			{
				printf("最大公约数：%d\n", i);
				break;
			}
		}
	}
	else if (a < b)
	{
		for (i = a;i >= 1;i--)
		{
			if (a % i == 0 && b % i == 0)
			{
				printf("最大公约数：%d\n", i);
				break;
			}
		}
	}
	return 0;
}
