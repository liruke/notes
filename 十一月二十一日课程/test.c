//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr[] = "abcdef";//内部有\0，有7个元素
//	printf("%zd\n", sizeof(arr));//7
//	//数组名是数组首元素地址
//	//例外：1.&数组名  2.sizeof内部单独存在的arr
//
//	printf("%zd\n", sizeof(arr + 0));//指针，所以加零就是首元素地址，在x64环境下就是8个字节
//
//	printf("%zd\n", sizeof(*arr));//对首元素地址进行解引用操作，char类型的数据就是1个字节
//
//	printf("%zd\n", sizeof(arr[1]));//第二个元素就是char类型就是一个字节
//
//	printf("%zd\n", sizeof(&arr));//&arr表示取出整个数组的地址，地址就是指针，虽然是数组指针还是8个字节
//
//	printf("%zd\n", sizeof(&arr + 1));//这个表示跳过整个数组的地址+1，就表示跳过整个数组，指向整个数组的地址，也是指针也是8个字节
//
//	printf("%zd\n", sizeof(&arr[0] + 1));//表示指针也是8个字节
//
//	return 0;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n", strlen(arr));//这个arr表示首元素地址，打印出来的是6
//
//	printf("%d\n", strlen(arr + 0));//arr+0还是有元素地址，所以长度还是6
//
//	printf("%d\n", strlen(*arr));//传递的是数组的第一个元素转化成ASCII码，strlen把这个ASCII当成地址，所以这里会报错！
//	//非法访问，97作为地址是不可访问的
//
//	printf("%d\n", strlen(arr[1]));//传递的是字符b，转换成ASCII就是98，对98进行访问就会报错
//
//	printf("%d\n", strlen(&arr));//传递的是整个数组的地址，也就是首元素地址，所以打印的也是6
//	//char(*p)[7]=&arr,这就是&arr的类型      strlen的参数是const char*str
//
//	printf("%d\n", strlen(&arr + 1));//&arr+1表示跳过整个数组后的第一个元素的地址，所以这里得到的是随机值
//
//	printf("%d\n", strlen(&arr[0] + 1));//5
//	return 0;
//}
//int main()
//{
//	char* p = "abcdef";//p中放的字符串首元素地址
//	printf("%zd\n", sizeof(p));//指针变量，8
//
//	printf("%zd\n", sizeof(p + 1));//指针变量，8
//
//	printf("%zd\n", sizeof(*p));//对首元素进行解引用char类型还是1个字节
//
//	printf("%zd\n", sizeof(p[0]));//首元素地址指向第一个元素就是1
//	//p[0]=*(p+0)
//
//	printf("%zd\n", sizeof(&p));//二级指针，取出指针变量p的地址，8个字节
//
//	printf("%zd\n", sizeof(&p + 1));//二级指针，&p是二级指针，+1跳过一个char*的长度
//
//	printf("%zd\n", sizeof(&p[0] + 1));//表示b的地址，也是指针，就是8个字节
//
//	return 0;
//}
//int main()
//{
//	char* p = "abcdef";
//
//	printf("%d\n", strlen(p));//p为指针变量是字符串首元素地址，所以长度是6
//
//	printf("%d\n", strlen(p + 1));//+1就是b的地址，5
//
//	printf("%d\n", strlen(*p));//对指针变量p进行解引用操作，传的是a的ASCII值所以这里会err
//
//	printf("%d\n", strlen(p[0]));//传递的是第一个元素，也会报错
//
//	printf("%d\n", strlen(&p));//传递的是整个字符串的地址，取得char*的内存，所以是随机值
//
//	printf("%d\n", strlen(&p + 1));//取得是char*类型的地址+1跳过一个char*，也是随机值
//
//	printf("%d\n", strlen(&p[0] + 1));//取出首元素地址+1就是第二个元素地址+1就是第二个元素的地址，就是5
//
//	return 0;
//}
//int main()
//{
//	int a[3][4] = { 0 };
//	printf("%zd\n", sizeof(a));//a表示传递的是整个数组，整个数组的大小就是int，12个元素就是48个字节
//
//	printf("%zd\n", sizeof(a[0][0]));//传递的是第一个元素，4个字节
//
//	printf("%zd\n", sizeof(a[0]));//传递的是第一行的数组名，就是16个字节
//	//也是数组名单独放在sizeof内部，计算的是整个数组的大小，第一行是4个元素，就是16字节
//
//	printf("%zd\n", sizeof(a[0] + 1));//表示的是第一行第二个元素的地址，地址就是指针，就是8个字节
//
//	printf("%zd\n", sizeof(*(a[0] + 1)));//表示的也是第一行第二个元素的地址，也是第二个元素的大小就是4个字节
//
//
//	printf("%zd\n", sizeof(a + 1));//二位数组是每个元素是一维数组的数组，所以a表示的是首元素地址，所以a+1表示第二行地址
//
//
//	printf("%zd\n", sizeof(*(a + 1)));//对第二行地址进行解引用操作就表示16个字节
//
//	printf("%zd\n", sizeof(&a[0] + 1));//a[0]表示第一行数组的数组名，取地址表示取出整个数组的地址+1表示第二行数组的地址，8字节
//
//	printf("%zd\n", sizeof(*(&a[0] + 1)));//对第二行数组的地址进行解引用操作表示第二行数组的大小，就是16字节
//
//	printf("%zd\n", sizeof(*a));//内部的数组名表示首元素地址，而首元素地址表示的一个一维数组，所以*a表示的第一行数组的大小就是16字节
//
//	printf("%zd\n", sizeof(a[3]));//这里不存在越界//所以就是16，不会真实访问第四行
//	//因为sizeof内部的表达式不会真实计算的
//	//sizeof计算的是类型，
//
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int* ptr = (int*)(&a + 1);//取出整个数组的地址+1表示指向跳过整个数组后的第一个元素
//	printf("%d,%d", *(a + 1), *(ptr - 1));//*(a+1)表示指向首元素地址+1指向第二个元素，就是2
//	//*(ptr-1)表示-1之后就是指向5，所以访问的是5
//	return 0;
//}
//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p = (struct Test*)0x100000;
//int main()
//{
//	printf("%p\n", p + 0x1);//指针+整数，p是强制类型转换为结构体类型的指针，所以跳过20个字节
//	//就是0x100014
//
//	printf("%p\n", (unsigned long)p + 0x1);//p强制类型转换为unsigned long，所以是一个整数，整数+1就是+1
//	//0x100001
//
//	printf("%p\n", (unsigned int*)p + 0x1);//强制转换成unsigned int*+1就是访问四个字节
//	//0x100004
//
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };//二维数组三行二列
//	//这个表示一个逗号表达式,整个表达式的结果是最后一个表达式的结果
//	//这个数组其实是a[3][2]={1,3,5}其余的默认0来初始化
//
//	int* p;//创建指针变量
//
//	p = a[0];//第一行的数组名是a[0]，所以就表示第一行的地址
//
//	printf("%d", p[0]);//所以访问的就是第一个元素就是1
//	return 0;
//}
//重点：逗号表达式是怎么运算的，还有就是指针是怎么访问二维数组的
//#include <stdio.h>
//int main()
//{
//	int a[5][5];//二维数组
//
//	int(*p)[4];//数组指针指向的是四个元素的数组（int类型）
//
//	p = a;//
//
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	//指针-指针是指针与指针之间的元素个数，由于&a的大于&p所以打印出来是-4
//	//-4转化成补码就是%p打印出来的地址
//	return 0;
//}

//重点：画图
//指针减去指针的绝对值是指针和指针之间的元素个数

//#include <stdio.h>
//int main()
//{
//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* ptr1 = (int*)(&aa + 1);//&数组名表示取出整个类型的数组，+1表示跳过整个数组后的第一个元素，
//	//强制转化成int*
//
//	int* ptr2 = (int*)(*(aa + 1));//aa表示首元素地址，就是第一行地址，+1就是第二行地址，指向的是6，解引用之后，
//	//就拿到了6强制转换成int*类型，int*是多余的，因为内部本来就是int*类型的，
//
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));//第一个打印出来就是10，-1就表示访问前一个元素
//	//第二个打印的是打印的是5
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char* a[] = { "work","at","alibaba" };//指针类型的数组，每个元素是char*类型的，
//	char** pa = a;
//	pa++;
//	printf("%s\n", *pa);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char* c[] = { "ENTER","NEW","POINT","FIRST" };//内部放的字符首元素的地址
//
//	char** cp[] = { c + 3,c + 2,c + 1,c };//二级指针，cp数组内部的元素每个元素类型是char**类型的元素
//	//c+3表示取出char*类型的地址，所以应该用char**来存放char*类型的指针变量的地址
//
//	char*** cpp = cp;//cpp表示上面数组的首元素地址
//	printf("%s\n", **++cpp);//表示访问下一个地址（point）
//
//	printf("%s\n", *-- * ++cpp + 3);//
//
//	printf("%s\n", *cpp[-2] + 3);
//	printf("%s\n", cpp[-1][-1] + 1);
//	return 0;
//}
#include<stdio.h>
int main()
{
	int ch = getchar();
	if (ch >= 'A' && ch <= 'Z')
	{
		printf("大写\n");
	}
	else if (ch >= 'a' && ch < 'z')
	{
		printf("小写\n");
	}
	return 0;
}
