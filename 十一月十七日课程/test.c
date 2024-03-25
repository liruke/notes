#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//一级指针
//char*   int*
//二级指针
//int** char**
//指针数组-是数组，每个元素是指针
//char*arr[5];
//数组指针-指针-指向数组的指针
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
//	int (*pf)(int, int) = add;//pf就是函数指针
//	int* (*pd[4])(int, int) = { add, sub, div, mul };//存放函数指针的数组\
//	//对于数组来说pd先和[]结合才是数组，这个指针数组的类型是int*(*)(int,int)
//	int i = 0;
//	for (i = 0;i < 4;i++)
//	{
//		printf("%d ",pd[i](6, 2));//这里的pd取不取地址都可以因为函数名就是函数名就是函数的地址
//	}
//	return 0;
//}
////对于上面数组来说，里面的元素其实放的就是函数的地址，通过地址就可以找到分别的函数，就可以通过地址进行调用函数。



//实现一个计算器能够实现整数的加减乘除
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
		printf("请选择:");
		scanf("%d", &i);
		switch (i)
		{
		case 1:
			printf("请输入两个操作数:");
			scanf("%d %d", &x, &y);
			ret = add(x, y);
			printf("%d\n", ret);
			break;
		case 2:
			printf("请输入两个操作数:");
			scanf("%d %d", &x, &y);
			ret = sub(x, y);
			printf("%d\n", ret);
			break;
		case 3:
			printf("请输入两个操作数:");
			scanf("%d %d", &x, &y);
			ret = div(x, y);
			printf("%d\n", ret);
			break;
		case 4:
			printf("请输入两个操作数:");
			scanf("%d %d", &x, &y);
			ret = mul(x, y);
			printf("%d\n", ret);
			break;
		case 0:
			printf("退出计算器");
	*/	/*	break;
		default:
			printf("选择错误，请重新选");
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
//		printf("请选择:");
//		scanf("%d", &input);
//		//这里函数指针数组我们叫做转移表；
//		//
//		int(*prarr[])(int, int) = { NULL,add,sub,div,mul };
//		if (input >= 1 && input <= 4)
//		{
//			printf("请输入两个操作数:");
//			scanf("%d %d", &x, &y);
//			ret = prarr[input](x, y);
//			printf("%d\n", ret);
//			printf("\n");
//		}
//		else if (input == 0)
//		{
//			printf("退出计算器\n");
//		}
//	} while (input);
//	return 0;
//}
 




//函数指针间接调用函数
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
//	printf("请输入两个操作数");
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
//		printf("请选择:");
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
//			printf("退出计算器");
//			break;
//		default:
//			printf("输入错误请重新输入:");
//			break;
//		}
//	} while (input);
//	return 0;
//}


//冒泡排序
//void bubble_sort(int* arr, int sz)
//{
//	//趟数
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
//这个函数的问题就是只能排序整形的数组，不能排序其他类型的数据
//void qsort(
//	       void* base,base指向了排序的数组的第一个元素     //void的指针
//		   void*表示排序任意类型的数组
//	       size_t num, //base指向的是数组中的元素的个数
//	       size_t size,//base指向的数组中的元素的大小（单位是字节）
//	       int (*compar)(const void*, const void*));函数指针类型    返回类型是int
//函数指针--指针指向的函数是用来比较数组中的两个元素的这个函数指针内部的元素的
//类型是void*
//这个compar会把指向的这个函数，这个内部的void*指向的元素就是比较的对象




//下面就是qsort函数排序数组
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


//测试qsort函数排序结构体
struct stu
{
	char name[20];
	int age;
};



//两个结构体的数据比较时不能直接用<>==比较
//1.可以按照名字比较
//2.可以按照年龄比较
//
//假设按照年龄比较
//int cmp_stu_age(const void* p1, const void* p2)
//{
//	return ((struct stu*)p1)->age - ((struct stu*)p2)->age;//打个括号先让其强制类型转换
//	//结构体指针访问它所指向的元素时不需要解引用直接用箭头指向就可以了
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