#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int a, b, n;
//	scanf("%d", &a);//星期一到星期五每天做的题
//	scanf("%d", & b);//星期六和星期天每天做的题
//	scanf("%d", & n);//总共要做的题
//	
//	//求至少需要天数
//	while (n)
//	{
//		if ((n / a) >= 5)//如果需要做的题量大于五天则进入这个循环
//		{
//			for (int i = 0;i < 5;i++)
//			{
//				n = n - a;
//			}
//			if ((n / b) >= 2)
//			{
//				for()
//			}
//		}
//	}
//
//}
//int main()
//{
//	int i = 0;
//	for (i = 1;i <= 100;i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	//排序
//	if (b>a)
//	{
//		int tmp = 0;
//		tmp = a;
//		a = b;
//		b = tmp;
//	}
//	else if (c > b)
//	{
//		int tmp = 0;
//		tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d", a, b, c);
//}
//int main()
//{
//	int i, j;
//	for (i = 1;i < 9;i++)
//	{
//		for (j = 1;j <= i;j++)
//		{
//			printf(" %d*%d = %2d", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int MAX = 0;
//	for (int i = 0;i < 10;i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (int i = 0;i < 10;i++)
//	{
//		if (arr[i] > MAX)
//		{
//			MAX = arr[i];
//		}
//	}
//	printf("%d", MAX);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	float sum = 0;
//	for (i = 1;i < 100;i++)
//	{
//		if (i % 2 == 0)
//		{
//			sum = sum - (1.0 / i);
//		}
//		if (i % 2 == 1)
//		{
//			sum += (1.0 / i);
//		}
//	}
//	printf("%lf", sum);
//	return 0;
//}
//int main()
//{
//	int age = 0;
//	for (age = 1000;age < 2000;age++)
//	{
//		if (age % 4 == 0 && age % 100 != 0 || age % 400 == 0)
//		{
//			printf("%d ", age);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 1;i < 100;i++)
//	{
//		if (i % 10 == 9)
//		{
//			printf("%d ", i);
//		}
//		else if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//#include<stdlib.h>
//#include<time.h>
//void menu()
//{
//	printf("**************************\n");
//	printf("**** 1.play   0.exit  ****\n");
//	printf("**************************\n");
//	printf("**************************\n");
//}
//void game()
//{
//	int ret = 0;
//	int guess = 0;
//	ret = rand() % 100 + 1;
//	while (1)
//	{
//		printf("请输入数字:");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("猜对了\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int i = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请输入:");
//		scanf("%d", &i);
//		switch (i)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏");
//			break;
//		default:
//			printf("重新输入:");
//			printf("\n");
//			break;
//		}
//	} while (i);
//	return 0;
//}
//int main()
//{
//	int prime = 0;
//	for (int i = 100;i < 200;i++)
//	{
//		int j = 0;
//		for (j = 2;j < i;j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (i == j)
//		{
//			prime = i;
//			printf("%d ", prime);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	if (a > b)
//	{
//		if (a % b == 0)
//		{
//			printf("%d", a / b);
//		}
//		else if (a % b != 0)
//		{
//			while (a % b)
//			{
//				int tmp = 0;
//				tmp = b;
//				b = a % b;
//				a = tmp;
//			}
//			printf("%d ", a / b);
//		}
//	}
//	else if (b > a)
//	{
//		if (b % a == 0)
//		{
//			printf("%d", b / a);
//		}
//		else if (b % a != 0)
//		{
//			while (b % a)
//			{
//				int tmp = 0;
//				tmp = a;
//				a = b % a;
//				b = tmp;
//			}
//			printf("%d ", b / a);
//		}
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//    char str[] = "hello bit";
//    printf("%d %d\n", sizeof(str), strlen(str));
//    return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	for (int i = 0;i < 10;i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	float sum = 0;
//	for (int j = 0;j < 10;j++)
//	{
//		sum += arr[j];
//	}
//	float average = sum / 10;
//	printf("%lf", average);
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		for (int i = 0;i < n;i++)
//		{
//			int j = 0;
//			for (j = 0;j < n;j++)
//			{
//				if (i == j || j == n - i - 1)
//				{
//					printf("*");
//				}
//				else
//				{
//					printf(" ");
//				}
//			}
//			printf("\n");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	for (int i = 0;i < n;i++)
//	{
//		printf("*");
//		printf(" ");
//	}
//	printf("\n");
//	for (int i = 0;i < n - 2;i++)
//	{
//		int j = 0;
//		for (j = 0;j < 2*n-1;j++)
//		{
//			if (j == 0 || j == 2*n - 2)
//			{
//				printf("*");
//			}
//			else
//			{
//				printf(" ");
//			}
//		}
//		printf("\n");
//	}
//	for (int i = 0;i < n;i++)
//	{
//		printf("*");
//		printf(" ");
//	}
//}
//int main()
//{
//	int A[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int B[10] = { 0,9,8,7,6,5,4,3,2,1 };
//	int* p1 = A;
//	int* p2 = B;
//	for (int i = 0;i < 10;i++)
//	{
//		int tmp = 0;
//		tmp = *(p1 + i);
//		*(p1 + i) = *(p2 + i);
//		*(p2 + i) = tmp;
//	}
//	printf("A:");
//	for (int j = 0;j < 10;j++)
//	{
//		printf("%d", A[j]);
//	}
//	printf("\n");
//	printf("B:");
//	for (int j = 0;j < 10;j++)
//	{
//		printf("%d", B[j]);
//	}
//	return 0;
//}
//void nine_nine()
//{
//	int i = 0;
//	for (i = 1;i < 10;i++)
//	{
//		int j = 0;
//		for (j = 1;j <= i;j++)
//		{
//			printf(" %d*%d =%2d", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	nine_nine();
//	return 0;
//}
//int juge_leap_year(int year)
//{
//	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	int n = juge_leap_year(year);
//	if (n == 1)
//	{
//		printf("闰年");
//	}
//	else
//	{
//		printf("平年");
//	}
//	return 0;
//}
//int is_prime(int n)
//{
//	int i = 0;
//	if (n == 2)
//	{
//		return 1;
//	}
//	for (i = 2;i < n;i++)
//	{
//		if ((n % i) == 0)
//		{
//			return 0;
//		}
//	}
//	if (i == n)
//	{
//		return 1;
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int juge = is_prime(n);
//	if (juge == 1)
//	{
//		printf("素数");
//	}
//	else if(juge==0)
//	{
//		printf("不是素数");
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100;i < 200;i++)
//	{
//		if (is_prime(i) == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
// 
// 
// 
//创建一个整形数组，完成对数组的操作

//实现函数init() 初始化数组为全0
//实现print()  打印数组的每个元素
//实现reverse()  函数完成数组元素的逆置。
//要求：自己设计以上函数的参数，返回值。
//void init(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		arr[i] = 0;
//	}
//}
//void print(int* arr, int sz)
//{
//	for (int i = 0;i < sz;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//void reverse(int* arr, int sz)
//{
//	int right = sz - 1;
//	int left = 0;
//	while (left < right)
//	{
//		int tmp = 0;
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	int sz = sizeof(arr) / sizeof(arr[0]) - 1;
//	init(arr, sz);
//	for (int i = 0;i < sz;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
