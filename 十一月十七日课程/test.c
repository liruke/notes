#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//һ��ָ��
//char*   int*
//����ָ��
//int** char**
//ָ������-�����飬ÿ��Ԫ����ָ��
//char*arr[5];
//����ָ��-ָ��-ָ�������ָ��
//int arr[10]
//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int (*pf)(int, int) = add;//pf���Ǻ���ָ��
//	int* (*pd[4])(int, int) = { add, sub, div, mul };//��ź���ָ�������\
//	//����������˵pd�Ⱥ�[]��ϲ������飬���ָ�������������int*(*)(int,int)
//	int i = 0;
//	for (i = 0;i < 4;i++)
//	{
//		printf("%d ",pd[i](6, 2));//�����pdȡ��ȡ��ַ��������Ϊ���������Ǻ��������Ǻ����ĵ�ַ
//	}
//	return 0;
//}
////��������������˵�������Ԫ����ʵ�ŵľ��Ǻ����ĵ�ַ��ͨ����ַ�Ϳ����ҵ��ֱ�ĺ������Ϳ���ͨ����ַ���е��ú�����



//ʵ��һ���������ܹ�ʵ�������ļӼ��˳�
/*void menu()
{
	printf("****************************\n");
	printf("******  1.add   2.sub   ****\n");
	printf("******  3.div   4.mul   ****\n");
	printf("****************************\n");
}
int add(int x, int y)
{
	return x + y;
}
int sub(int x, int y)
{
	return x - y;
}
int mul(int x, int y)
{
	return x * y;
}
int div(int x, int y)
{
	return x / y;
}
int main()
{
	int i = 0;
	int x, y = 0;
	int ret = 0;
	do
	{
		menu();
		printf("��ѡ��:");
		scanf("%d", &i);
		switch (i)
		{
		case 1:
			printf("����������������:");
			scanf("%d %d", &x, &y);
			ret = add(x, y);
			printf("%d\n", ret);
			break;
		case 2:
			printf("����������������:");
			scanf("%d %d", &x, &y);
			ret = sub(x, y);
			printf("%d\n", ret);
			break;
		case 3:
			printf("����������������:");
			scanf("%d %d", &x, &y);
			ret = div(x, y);
			printf("%d\n", ret);
			break;
		case 4:
			printf("����������������:");
			scanf("%d %d", &x, &y);
			ret = mul(x, y);
			printf("%d\n", ret);
			break;
		case 0:
			printf("�˳�������");
	*/	/*	break;
		default:
			printf("ѡ�����������ѡ");
			break;
		}
	} while (i);
	return 0;
}*/
//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int div(int x, int y)
//{
//	return x / y;
//}
//void menu()
//{
//	printf("**************************\n");
//	printf("****1.add     2.sub  *****\n");
//	printf("****1.div     4.mul  *****\n");
//	printf("**************************\n");
//}
//int main()
//{
//	int input = 0;
//	int x, y = 0;
//	int ret = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��:");
//		scanf("%d", &input);
//		//���ﺯ��ָ���������ǽ���ת�Ʊ�
//		//
//		int(*prarr[])(int, int) = { NULL,add,sub,div,mul };
//		if (input >= 1 && input <= 4)
//		{
//			printf("����������������:");
//			scanf("%d %d", &x, &y);
//			ret = prarr[input](x, y);
//			printf("%d\n", ret);
//			printf("\n");
//		}
//		else if (input == 0)
//		{
//			printf("�˳�������\n");
//		}
//	} while (input);
//	return 0;
//}
 




//����ָ���ӵ��ú���
//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int div(int x, int y)
//{
//	return x / y;
//}
//void calc(int(*pf)(int, int))
//{
//	printf("����������������");
//	int x, y = 0;
//	int ret = 0;
//	scanf("%d %d", &x, &y);
//	ret = pf(x, y);
//	printf("%d\n", ret);
//}
//void menu()
//{
//	printf("******************\n");
//	printf("***1.add  2.sub***\n");
//	printf("***3.div  4.mal***\n");
//	printf("******************\n");
//}
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			calc(add);
//			break;
//		case 2:
//			calc(sub);
//			break;
//		case 3:
//			calc(div);
//			break;
//		case 4:
//			calc(mul);
//			break;
//		case 0:
//			printf("�˳�������");
//			break;
//		default:
//			printf("�����������������:");
//			break;
//		}
//	} while (input);
//	return 0;
//}


//ð������
//void bubble_sort(int* arr, int sz)
//{
//	//����
//	int i = 0;
//	for (i = 0;i < sz - 1;i++)
//	{
//		int j = 0;
//		for (j = 0;j < sz - i - 1;j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = 0;
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//	return 0;
//}
//����������������ֻ���������ε����飬���������������͵�����
//void qsort(
//	       void* base,baseָ�������������ĵ�һ��Ԫ��     //void��ָ��
//		   void*��ʾ�����������͵�����
//	       size_t num, //baseָ����������е�Ԫ�صĸ���
//	       size_t size,//baseָ��������е�Ԫ�صĴ�С����λ���ֽڣ�
//	       int (*compar)(const void*, const void*));����ָ������    ����������int
//����ָ��--ָ��ָ��ĺ����������Ƚ������е�����Ԫ�ص��������ָ���ڲ���Ԫ�ص�
//������void*
//���compar���ָ����������������ڲ���void*ָ���Ԫ�ؾ��ǱȽϵĶ���




//�������qsort������������
//int compar(const void* p1, const void* p2)
//{
//	return *(int*)p1 - *(int*)p2;
//}
//int main()
//{
//	int arr[] = { 1,6,4,2,3,7,8,0,5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), compar);
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//	return 0;
//}


//����qsort��������ṹ��
struct stu
{
	char name[20];
	int age;
};



//�����ṹ������ݱȽ�ʱ����ֱ����<>==�Ƚ�
//1.���԰������ֱȽ�
//2.���԰�������Ƚ�
//
//���谴������Ƚ�
//int cmp_stu_age(const void* p1, const void* p2)
//{
//	return ((struct stu*)p1)->age - ((struct stu*)p2)->age;//�������������ǿ������ת��
//	//�ṹ��ָ���������ָ���Ԫ��ʱ����Ҫ������ֱ���ü�ͷָ��Ϳ�����
//}
//void test2()
//{
//	struct stu arr[] = { {"zhangsan",20},{"lisi",30 }, {"wangwu",18} };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_stu_age);
//};
//int main()
//{
//	test2();
//	return 0;
//}