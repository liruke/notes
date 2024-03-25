#include<stdio.h>
#include<stdlib.h>
//typedef struct {
//	int a;//对齐数：4
//	char b;//对齐数：1
//	short c;//对齐数：2
//	short d;//对齐数：2
//}AA_t;
#pragma pack(4)/*编译选项，表示4字节对齐 平台：VS2013。语言：C语言*/
//假设long 是4个字节
//int main(int argc, char* argv[])
//{
//    struct tagTest1
//    {
//        short a;
//        char d;
//        long b;
//        long c;
//    };
//    struct tagTest2
//    {
//        long b;
//        short c;
//        char d;
//        long a;
//    };
//    struct tagTest3
//    {
//        short c;
//        long b;
//        char d;
//        long a;
//    };
//    struct tagTest1 stT1;
//    struct tagTest2 stT2;
//    struct tagTest3 stT3;
//
//    printf("%d %d %d", sizeof(stT1), sizeof(stT2), sizeof(stT3));
//    return 0;
//}
//#pragma pack()
//#define MAX_SIZE 2+3
//struct _Record_Struct
//{
//	unsigned char Env_Alarm_ID : 4;
//	unsigned char Para1 : 2;
//	unsigned char state;
//	unsigned char avail : 1;
//}*Env_Alarm_Record;
//int main()
//{
//	//struct _Record_Struct* pointer =
//	//	(struct _Record_Struct*)malloc(sizeof(struct _Record_Struct) * 2+3);
//	struct _Record_Struct* pointer = 
//		(struct _Record_Struct*)malloc(sizeof(struct _Record_Struct) * MAX_SIZE);
//	//sizeof求得是字节大小，不是多少比特位的多少。
//	return 0;
//}
//int main()
//{
//	//1.写一个for循环，创建所有的五位数；
//	for (int i = 10000;i <= 100000;i++)
//	{
//		int sum = 0;
//		int tmp = i;
//		for (int j = 10;j <= 10000;j*=10)
//		{
//			sum+=(tmp / j)* (tmp % j);
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
//    int i = 0;
//    for (i = 10000;i < 100000;i++)
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
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[50] = { 0 };
//	for (int i = 0;i < n;i++)
//	{
//		scanf("%d ", &arr[i]);
//	}
//	int del;
//	scanf("%d", &del);
//	//开始进行删除
//	int j = 0;
//	for (int i = 0;i < n;i++)
//	{
//		if (arr[i] != del)
//		{
//			arr[j] = arr[i];
//			j++;
//		}
//	}
//	//arr当中已经存储了 当前删除之后的数组
//	for (int i = 0;i < j;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
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
int main()
{
	int** p = (int**)malloc(3 * sizeof(int*));
	if (p == NULL)
	{
		perror("malloc");
		return 1;
	}
	for (int i = 0;i < 3;i++)
	{
		p[i] = (int*)malloc(5 * sizeof(int));
	}
	if (*p == NULL)
	{
		perror("malloc");
		return 1;
	}
	for (int i = 0;i < 3;i++)
	{
		for (int j = 0;j < 5;j++)
		{
			p[i][j] = 0;
		}
	}
	for (int i = 0;i < 3;i++)
	{
		for (int j = 0;j < 5;j++)
		{
			printf("%d ", p[i][j]);
		}
		printf("\n");
	}
	return 0;
}