#include<stdio.h>
//int main()
//{
//	int a = 100;
//	int* pa = &a;
//	*pa = 200;
//	printf("%d", a);
//	return 0;
//}
//int main()
//{
//	/*char* p1;
//	int* p2;
//	double* p3;*/
//	//指针的英文单词pointer
//	int a = 0x11223344;
//	int* pa = &a;
//	*pa = 0;//这四个字节全部变成了零
//	//内存窗口的左边是地址，右边是这个变量的值
//
//	return 0;
//}
//int main()
//{
//	int a = 0x11223344;
//	char* pa = &a;//这里能存放下a的地址吗?能char*是8个字节所以能存地址
//	*pa = 0;//当我把int类型改成char*类型的时候在内存里只改了一个字节
//	//对于char*来说解引用只能访问一个字节
//	//int*解引用一次只能访问一个字节
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	char* pc = (char*) & a;//不加强制类型转换会报警告，因为我的指针指向的是int类型但是我前面设置的是char类型的变量所以编译器会报警告
//	printf("pa=%p\n", pa);//这两个地址是一样的
//	printf("pc=%p\n", pc);
//	printf("pa+1=%p\n", pa+1);
//	printf("pc+1=%p\n", pc+1);
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0;i < 10;i++)
//	{
//		arr[i] = 1;
//	}
//	for (i = 0;i < 10;i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int* p = &arr[0];
//	for (i = 0;i < 10;i++)
//	{
//		*p = 1;
//		p++;
//	}
//	p = &arr[0];
//	for (i = 0;i < 10;i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}需要一次改一个字节的话就用char*作为变量来操作数组
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	//char* pc = &a;
//	void* pv = &a;//void类型的指针类型可以代表任何指针的类型，可以接收任意指针的类型
//	//pv指针不能直接进行解引用操作，不然会报错
//	//pv++也会报错；当我++时不知道跳过几个字节。
//	//所以void类型的指针不能+-1操作
//
//	return 0;
//}
//int main()
//{
//	const int a = 10;//a的本质还是变量，const仅仅是在语法上做了限制
//	//所以我们习惯上叫a为常变量，只是具有常属性而已
//	printf("%d", a);
//	return 0;
//}
//int main()
//{
//	const int a = 10;
//	const int* pa = &a;//const修饰指针变量//通过pa这个指针找到了a的位置就可以改了
//	//这个代码是很危险的，
//	*pa = 0;//这里会报错，
//	//const可以修饰指针
//	printf("%d", a);
//	return 0;
//}
//
//int main()
//{
//	const int a = 10;
//	int *const p = &a;//如果const放在*右边的话const就只能限制p，const放在*左边时限制的是*p
//	*p = 0;
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int *p = &arr[0];
//	for (int i = 0;i < 10;i++)
//	{
//		printf("%d ", *(p+i));//p+i加的是i*sizeof（int）
//	}
//	//p++是p在动但是上面的p+i是i在动，
//	// 如果想倒着打印直接取最后一个数组元素的地址然后倒着打印就可以只需要p-i
//	//p=0x0012ff40
//	//p+1=0x0012ff44
//	//每加i就会跳过四的倍数的字节所以四个字节就是数组中的一个元素，所以，就可以打印数组里每个元素
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d", &arr[9] - &arr[0]);//指针-指针的绝对值是指针与指针之间的元素个数
//	//指针-指针运算的前提条件是：两个指针指向的是同一块空间
//	char ch[20] = { 0 };
//	printf("%d\n", &arr[0] - &ch[0]);//这种写法是错误的因为指针-指针是指针与指针之间的元素个数，
//	//所以我上面这个减法是以ch的元素个数为基础还是以arr的元素个数为基础这个是无法确定的
//	return 0;
//}
////指针-指针有什么用呢？

#include<string.h>
//int main()
//{
//	//strlen是用来求字符串长度的
//	int len = strlen("abc");//这个字符串是a  b  c  \0
//	//当字符串传给strlen的时候传的不是字符串传的是字符串第一个的地址
//	//
//	printf("%d\n", len);
//	return 0;
//}
//int my_strlen(char* s)
//{
//	int count = 0;
//	while (*s != 0)
//	{
//		count++;
//		s++;//这个指针++就是跳到下一个元素*s是指不是地址s代表的是指针
//	}
//}
//int my_strlen(char* s)
//{
//	char* start = s;
//	while (*s)//\0的ASCII码值是0所以这里的！=\0是可以去掉的
//	{
//		s++;
//	}
//	return s - start;//这里的s代表\0的地址，start代表的是a的地址，然后s-start就是指针-指针所以就是指针之间的元素个数，
//	//所以我的s-start就是我的就是我的元素个数所以就直接返回就可以了
//}
//int main()
//{
//	int len = my_strlen("abc");
//	printf("%d", len);
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//使用while循环打印arr的内容
//	int* p = &arr[0];
//	//arr是数组名，数组名其实就是数组首元素的地址，arr等价于&arr[0]
//	while (p < arr + sz)//指针和指针的大小比较
//	//关系运算小于小于等于大于大于等于都可以进行比较
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}
//int main()
//{
//	int* p;//未初始化是随机值
//	*p = 200;//非法访问内存
//	//野指针是不能对指向的未知空间进行赋值的
//	printf("%p", p);
//	return 0;
//}
//int main()
//{
//	int arr[5] = { 0 };
//	//这里只有五个元素但是下面p++会访问到第六个元素但是第六个元素没有所以就越界访问了
//	int i = 0;
//	int* p = arr;
//	for (i = 0;i < 10;i++)
//	{
//		*p = 1;
//		p++;
//	}
//	return 0;
//}
int* test()
{
	int a = 10;//a的生命周期是这个中括号，所以a的这个空间就销毁了
	return &a;//warning C4172: 返回局部变量或临时变量的地址: a
	//当出这个函数的时候，我的这个空间被消耗了，然后我的*p还想访问这个空间所以就是非法访问
	//
}
int main()
{
	int* p = test();
	printf("hehe\n");//为什么加了一句话，*p的值就变了--->内容在函数栈帧里
	printf("%d", *p);
	return 0;
}