#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int* p = &a;//һ��ָ�����p
//	p��ָ�����Ҳ���Լ��Ŀռ䣬���Կ���&p
//	int*  *pp = &p;//����ָ��
//	int** *ppp = &pp;//����ָ���õĺ���
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int* p = &a;//һ��ָ�����p
//	//p��ָ�����Ҳ���Լ��Ŀռ䣬���Կ���&p
//	int** pp = &p;//����ָ��
//	int*** ppp = &pp;//����ָ���õĺ���
//	printf("%d", **pp);//����ָ��������������һ��ָ������ĵ�ַ
//	return 0;
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int* arr[3] = { arr1,arr2,arr3 };
//	for (int i = 0;i < 3;i++)
//	{
//		int j = 0;
//		for (j = 0;j < sz;j++)
//		{
//			printf("%d ", *(arr[i]+j));//arr[i][j]=*(arr[i]+j)
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	const char* p = "abcded";//���ǰ��ַ���abcdef\0�����p�У����ǰѵ�һ���ַ��ĵ�ַ�����p��
//	/*printf("%c",*p);*/
//	//1.���԰�һ���ַ��������һ���ַ�����
//	//2.�������ַ��������ڱ��ʽ�е�ʱ������ֵ�ǵ�һ���ַ��ĵ�ַ
//	//�����ַ����ǲ����޸ĵ�
//	for (int i = 0;i < 6;i++)
//	{
//		printf("%c ", *p + i);
//	}
//	printf("\n");
//	printf("%c", "abcded"[3]);
//	return 0;
//}������ͬ�ĳ����ַ���ֻ�ᱣ��һ��
//������ָ��ͬʱָ��һ�������ַ�����ʱ����ʵ��ַ��һ����
//int main()
//{
//	int n = 100;
//	int* pn = &n;
//	char ch = 'w';
//	char* pc = &ch;
//	float f = 3.14f;
//	float* pf = &f;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*parr)[10] = &arr;//ȡ����������ĵ�ַ
//	//����ָ�����;���int(*)���������ָ������
//	//parr��������ָ�룬����ȥ�����������ˣ�parr�Ⱥ������Ͼ���ָ�������ˣ�
//	//�������ž��Ⱥ�ָ���Ͼ�������ָ��
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p1 = arr;//����ָ��
//	//int*    int*
//	int* p2 = &arr[0];//����ָ��
//	//int*     int*
//	int(*parr)[10] = &arr;//����ָ��
//	//int(*)[10]     int(*)[10]
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int(*p1)[10] = &arr;
//	for (int i = 0;i < 10;i++)
//	{
//		printf("%d ", (*p1)[i]);
//	}
//	return 0;
//}





//�ββ���д�Ķ�ά���飻
//
//void Print(int arr[3][5], int r, int c)
//{
//	int i = 0;
//	for (i = 0;i < r;i++)
//	{
//		int j = 0;
//		for (j = 0;j < c;j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	Print(arr, 3, 5);//��ӡ����arr������
//	return 0;
//}
//int add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 5;
//	int b = 9;
//	int c = add(a, b);
//	printf("%p\n", &add);//���Կ�������Ҳ���е�ַ��
//	//��������һ����ַ����ô�������ǲ��ǵ�ַ�أ�
//	int (*pf)(int, int) = &add;
//	printf("%p\n", add);
//	return 0;
//}
int main()
{
	int arr[9][9] = { 0 };
	int i = 0;
	for (i = 0;i < 9;i++)
	{
		int j = 0;
		for (j = 0;j <= i;j++)
		{
			if (j == 0 || j == i)
			{
				arr[i][j] = 1;
			}
			else
			{
				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
			}
		}
	}
	for (i=0;i < 9;i++)
	{
		int j = 0;
		int z = 0;
		for (z = 0;z <= 10 - i - 2;z++)
		{
			printf(" ");
		}
		for (j = 0;j<=i;j++)
		{
			printf("%d ", *(arr[i] + j));
		}
		printf("\n");
	}
}
//int main()
//{
//	int arr[9][9] = { 0 };
//	int i = 0;
//	for (i = 0;i < 9;i++)
//	{
//		int j = 0;
//		for (j = 0;j < i;j++)
//		{
//			arr[i][j] = 1;
//		}
//	}
//	for (i = 0;i < 9;i++)
//	{
//		int j = 0;
//		for (j = 0;j < i;j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}