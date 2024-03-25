#define _CRT_SECURE_NO_WARNINGS
#include<string.h>
#include<windows.h>
#include<stdlib.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
#include<stdio.h>
//void game()
//{
//	int ret = 0;
//	int guess = 0;
//	printf("猜数字\n");
//	ret = rand() % 100 + 1;
//	while (1)
//	{
//		printf("请猜数字:>");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了，请重新猜");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了，请重新猜\n");
//		}
//		else
//		{
//			printf("猜对了\n");
//			break;
//		}
//	}
//}
//void menu()
//{
//	printf("**************************\n");
//	printf("***  1.play    2.exit  ***\n");
//	printf("**************************\n");
//}
//int main()
//{
//	int i = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &i);
//		switch (i)
//		{
//		case 1:
//			game();//猜数字游戏
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误，请重新选择\n");
//			break;
//
//		}
//
//	} while (i);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int a = 1;
//	for (i = 100;i <= 200;i++)
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
//			printf("%d  ", i);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	if (a > b)
//	{
//		while (a % b != 0)
//		{
//			int temp = 0;
//			temp = a;
//			a = b;
//			b = temp % b;
//		}
//		if (a % b == 0)
//		{
//			printf("%d\n", b);
//		}
//	}
//	else if (a < b)
//	{
//		while (b % a != 0)
//		{
//			int c = 0;
//			c = b;
//			b = a;
//			a = c % a;
//		}
//		if (b % a == 0)
//		{
//			printf("%d\n", a);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0;i < 10;i++)
//	{
//		printf("&arr[%d]=%p\n", &arr1[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int arr1[10] = { 0 };
//	printf("%d\n", sizeof(arr1));
//	printf("%d\n", sizeof(arr1[0]));
//	printf("%d\n", sizeof(arr1) / sizeof(arr1[0]));
//	return 0;
//}
//int main()
//{
//	int arr1[3][5] = { 1};
//	printf("%d\n", arr1[0][0]);
//	printf("%d\n", arr1[1][1]);
//	return 0;
//}
//int main()
//{
//	int arr1[3][5] = {0};
//	int i = 0;
//	for (i = 0;i < 3;i++)
//	{
//		int j = 0;
//		for (j = 0;j < 5;j++)
//		{
//			scanf("%d", &arr1[i][j]);
//		}
//	}
//	for (i = 0;i < 3;i++)
//	{
//		int j = 0;
//		for (j = 0;j < 5;j++)
//		{
//			printf("%d ", arr1[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	int arr[3][5] = { 0 };
//	int i = 0;
//	for (i=0;i < 3;i++)
//	{
//		int j = 0;
//		for (j = 0;j < 5;j++)
//		{
//			printf("&arr[%d][%d]=%p\n", i, j, &arr[i][j]);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10]
//	return 0;
//}
//int main()
//{
//	char arr1[] = "####################";
//	char arr2[] = "welcome to bit!!!!!!";
//	int left = 0;
//	int right = strlen(arr1)-1;//也可以用sizeof
//	while (left <= right)
//	{
//		arr1[left] = arr2[left];
//		arr1[right] = arr2[right];
//		printf("%s\n", arr1);
//		Sleep(500);
//		system("cls");
//		left++;
//		right--;
//	}
//	printf("%s\n", arr1);
//	return 0;
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int k = 0;
//	scanf("%d", &k);
//	int left = 0;
//	int right = sizeof(arr1) / sizeof(arr1[0]) - 1;
//	int mid = (left + right) / 2;
//	while (left <= right)
//	{
//		if()
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int tmp = 0;
//	for (i = 0;i < 10;i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0;i < 10;i++)
//	{
//		tmp = arr[i] + tmp;
//	}
//	printf("%f\n", tmp / 10.0);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int m = 0;
//	while (scanf("%d", &i) != EOF)
//	{
//		for (j = 1;j <= i;j++)
//		{
//			for (m = 1;m <= i;m++)
//			{
//				if (m == j || m + j == i + 1)
//				{
//					printf("*");
//				}
//				else
//				{
//					printf(" ");
//				}
//			}
//			printf("\n");
//
//		}
//	}
//	return 0;
//}
//int main()
//{
//    int i = 0;
//    while (scanf("%d", &i) != EOF)
//    {
//        int j = 0;
//        for (j = 1;j <= i;j++)
//        {
//            printf("* ");
//        }
//        printf("\n");
//        for (j = 1;j <= i - 2;j++)
//        {
//            int m = 0;
//            for (m = 1;m <= i;m++)
//            {
//                if (m ==1)
//                {
//                    printf("* ");
//                }
//                else if (m + j == i + 1)
//                {
//                    printf(" *");
//                }
//                else if(i%2==0)
//                {
//                    int c = 0;
//                    int b = pow(2, i/2);
//                    for (c = 1;c <= b + 1;c++)
//                    {
//                        printf(" ");
//                    }
//                }
//            }
//            printf("\n");
//        }
//        for (j = 1;j <= i;j++)
//        {
//            printf("* ");
//        }
//    }
//    return 0;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	while (scanf("%d", &i) != EOF)
//	{
//		for (j = 1;j <= i;j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//		for (j = 1;j <= i - 2;j++)
//		{
//			int m = 0;
//			for (m = 1;m <= i;m++)
//			{
//				if (m == 1 || m == i)
//				{
//					printf("*");
//				}
//				else
//				{
//					printf(" ");
//				}
//
//			}
//			printf("\n");
//		}
//		for (j = 1;j <= i;j++)
//		{
//			printf("*");
//		}
//	}
//	return 0;
//}
//int main()
//{
//    int i = 0;
//    int j = 0;
//    while (scanf("%d%d", &i, &j) != EOF)
//    {
//        int arr[i][j];
//        int a = 0;
//        for (a = 0;a < i;a++)
//        {
//            int b = 0;
//            for (b = 0;b < j;j++)
//            {
//                scanf("%d", &arr[i][j]);
//                arr[i][j] = arr[j][i];
//                printf("%d", arr);
//            }
//        }
//    }
//    return 0;
//}
//int main()
//{
//    int i = 0;
//    int j = 0;
//    int arr[10][10] = { 0 };
//    scanf("%d %d", &i, &j);
//        int m = 0;
//        int n = 0;
//        for (n = 0;n < i;n++)
//        {
//            for (m = 0;m < j;m++)
//            {
//                scanf("%d", &arr[m][n]);
//            }
//        }
//        for (n = 0;n < j;n++)
//        {
//            for (m = 0;m < i;m++)
//            {
//                printf("%d ", arr[n][m]);
//            }
//        }
//        printf("\n");
// return 0;
//}
//int main()
//{
//    int arr[10] = { 0 };
//    int i = 0;
//    for (i = 0;i < 10;i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    for (i = 9;i < 10;i--)
//    {
//        printf("%d ", arr[i]);
//        if (i == 0)
//        break;
//    }
//    return 0;
//}
//int main()
//{
//	int i = 0;
//	while (scanf("%d", &i)!=EOF)
//	{
//		int j = 0;
//		for (j = 0;j < i;j++)
//		{
//			printf("* ");
//		}
//		printf("\n");
//		int k = 0;
//		for (k = 0;k < i - 2;k++)
//		{
//			for (j = 0;j < 2 * i - 1;j++)
//			{
//				if (j == 0 || j == 2 * i - 2)
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
//		for (j = 0;j < i;j++)
//		{
//			printf("* ");
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int arr[10][10] = { 0 };
//	int m, n = 0;
//	scanf("%d%d", &i, &j);
//	for (m = 0;m < i;i++)
//	{
//		for (n = 0;n < j;j++)
//		{
//			scanf("%d", arr[m][n]);
//		}
//	}
//	for (m = 0;m < i;i++)
//	{
//		for (n = 0;n < j;j++)
//		{
//			printf("%d", arr[n][m]);
//		}
//	}
//    return 0;
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8 };
//	int arr2[] = { 2,3,6,5,4,7,9,1 };
//	int left = 0;
//	int sz =sizeof(arr2)/sizeof(arr2[0])-1;
//	int zs =sizeof(arr1)/sizeof(arr1[0])-1;
//	for (left = 0;left < sz;left++)
//	{
//		int tmp = 0;
//		tmp = arr1[left];
//		arr1[left] = arr2[left];
//		arr2[left] = tmp;
//	}
//	for (left = 0;left < sz;left++)
//	{
//		printf("%d ", arr1[left]);
//	}
//	printf("\n");
//	for (left = 0;left < sz;left++)
//	{
//		printf("%d ", arr2[left]);
//	}
//	return 0;
//}
//int main()
//{
//	char arr1[] = "China";
//	char arr2[] = "Glmre";
//	int left = 0;
//	int right = sizeof(arr1) / sizeof(arr1[0]) - 1;
//	while (left < right)
//	{
//		arr1[left] = arr2[left];
//		arr1[right] = arr2[right];
//		left++;
//		right--;
//	}
//	printf("%s", arr1);
//	return 0;
//}
//int main()
//{
//	double ret = sqrt(16.0);
//	printf("%lf", ret);
//	return 0;
//}
//int add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int sum = add(a, b);
//	printf("%d", sum);
//	return 0;
//}
//int is_leap_year(int z)
//{
//	if (z % 4 == 0&&z%100!=0)
//	{
//		return 1;
//	}
//	else if (z % 400 == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int get_days_of_month(int y,int m)
//{
//	int arr[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//	int day = arr[m];
//	if (is_leap_year(y) == 1&&m==2)
//	{
//		day++;
//	}
//	return day;
//}
//int main()
//{
//	int year, month = 0;
//	scanf("%d %d", &year, &month);
//	int d=get_days_of_month(year,month);
//	printf("%d", d);
//	return 0;
//}
//int main()
//{
//	size_t len = sizeof("abcdef");
//	printf("%d", len);
//	return 0;
//}
//int main()
//{
//	printf("%d", printf("%d",printf("%d", 43)));
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 0;i <= 10;i++)
//	{
//		printf("%d", i);
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int sum = 0;
//	int ret = 1;
//	scanf("%d", &n);
//		for (i = 1;i <= n;i++)
//		{
//			ret = ret * i;
//			sum = sum + ret;
//		}
//	printf("%d", sum);
//	return 0;
//}
int main()
{
	int i = 0;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	for (i = 0; i <= 12; i++)
	{
		arr[i] = 0;//越界了(这个程序会崩掉吗？)
		printf("hehe\n");
	}//程序运行之后是死循环
	return 0;
}