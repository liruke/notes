#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int sum = 0;
//	int a = 0;
//	int b = 0;
//	scanf("%d", &a);
//	b = a;
//	for (j = 0;j < 4;j++)
//	{
//		a = b + a * 10;
//		sum = sum + a;
//	}
//	sum = sum + b;
//	printf("%d", sum);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (j = 0;j <= 100000;j++)
//	{
//		if(j==)
//	}
//	return 0;
//}
int main()
{
	int i = 0;
	char arr[13] = "*************";
	int left = 0;
	int right = strlen(arr);
	while (left < right)
	{
		printf("%s", arr);
		printf("\n");
		arr[left] =" ";
		arr[right] =" ";
		right--;
		left++;
	}
	return 0;
}
