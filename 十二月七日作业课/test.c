#include<stdio.h>
#include<stdlib.h>
//typedef struct {
//	int a;//��������4
//	char b;//��������1
//	short c;//��������2
//	short d;//��������2
//}AA_t;
#pragma pack(4)/*����ѡ���ʾ4�ֽڶ��� ƽ̨��VS2013�����ԣ�C����*/
//����long ��4���ֽ�
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
//	//sizeof������ֽڴ�С�����Ƕ��ٱ���λ�Ķ��١�
//	return 0;
//}
//int main()
//{
//	//1.дһ��forѭ�����������е���λ����
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
//	//��ʼ����ɾ��
//	int j = 0;
//	for (int i = 0;i < n;i++)
//	{
//		if (arr[i] != del)
//		{
//			arr[j] = arr[i];
//			j++;
//		}
//	}
//	//arr�����Ѿ��洢�� ��ǰɾ��֮�������
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