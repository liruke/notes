#include<stdio.h>
//struct S1
//{
//	char c1;//1
//	char c2;
//	//c2对齐数是1，因为1比8小，所以取1
//	int i;//i应该占四个字节所以对齐数是4，所以起始位置应该在4的倍数就是4
//
//};
//struct S2
//{
//	char c1;
//	int i;
//	char c2;
//};
//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//struct S4
//{
//	char c1;
//	struct S3 s3;
//	double d;
//};
//int main()
//{
//	struct S1 s1 = { 0 };//8
//	struct S2 s2 = { 0 };//12
//	printf("%zd\n", sizeof(struct S1));//8
//	printf("%zd\n", sizeof(struct S2));//12
//	printf("%zd\n", sizeof(struct S3));//16
//	//S3按照对齐规则进行分配内存，浪费了3个字节
//	printf("%zd\n", sizeof(struct S4));//32 
//	return 0;
//}
//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//union u
//{
//	char c;
//	int u;
//};
//int main()
//{
//	union u uu;
//	printf("%zd\n", sizeof(uu));
//	printf("%p\n", &(uu));
//	printf("%p\n", &(uu.c));
//	printf("%p\n", &(uu.u));
//}
//union Un1
//{
//	char c[5];//5
//	//数组的对齐数是按照数组的元素，来进行判断对齐数的
//	//对齐数就是1.
//	int i;//4对齐数是4，最大对齐数是8，所以对齐数就是4
//	//所以最大对齐数就是8
//};
//int main()
//{
//	printf("%zd\n", sizeof(union Un1));
//	return 0;
//}
//union U
//{
//	int n;
//	struct S
//	{
//		char c1;
//		char c2;
//		char c3;
//		char c4;
//	}s;
//};
//int main()
//{
//	union U u = { 0 };
//	u.n = 0x11223344;
//	printf("%x %x %x %x", u.s.c1, u.s.c2, u.s.c3, u.s.c4);
//	return 0;
//}
//判断当前机器是大端还是小端
// 1.
//可以创建一个变量，使变量是1，如果返回的是0就是大端，返回的是1就是小端，
//将创建的n强制转换成char*进行访问，取地址进行访问，访问的是一个字节。
//
//2.
//可以定义一个结构体 内部存放一个int和一个char，然后因为共用一个空间，char占一个字节，所以可以根据
//char的值来判断是小端还是大端。

enum Sex
{
	//这里列举枚举enum的所有取值
	Mail,//0
	Female,//1
	Secret//2
	//默认是0开始，但是枚举变量的初始值可以改
	//这些可能取值是常量，表示枚举常量。
	//设计好之后后面不能改
};
int main()
{

	return 0;
}