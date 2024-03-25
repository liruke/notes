#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	for (i = 0;i <= n;i++)
	{
		if (n % i == 0)
		{
			break;
		}
	}
	if (i == n)
	{
		printf("是素数");
	}
	else
	{
		printf("不是素数");
	}
	return 0;
}