#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//void swap(char* buf1, char*buf2,int width)
//{
//	int i = 0;
//	for (i = 0;i < width;i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//void bubble_sort(void*base,unsigned int sz,unsigned int width,int(*cmp)(const void*p1,const void*p2))
//{
//	unsigned int i = 0;
//	for (i = 0;i < sz - 1;i++)
//	{
//		unsigned int j = 0;
//		for (j = 0;j < sz - i - 1;j++)
//		{
//			if(cmp((char*)base+j*width,(char*)base+(j+1)*width)>0)
//			{
//				swap((char*)base + j * width, (char*)base + (j + 1) * width,width);
//			}
//		}
//	}
//}
//int cmp_int(const void* p1, const void* p2)
//{
//	return *(int*)p1 - *(int*)p2;
//}
//void print(int* arr, int sz)
//{
//	for (int i = 0;i < sz;i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//}
//void test3()
//{
//	int arr[] = { 3,1,5,7,9,4,0,8,6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz,sizeof(arr[0]),cmp_int);
//	print(arr,sz);
//}
//struct stu
//{
//	char name[20];
//	int age;
//};
//int compar_name(const void*p1,const void*p2)
//{
//	return strcmp(((struct stu*)p1)->name, ((struct stu*)p2)->name);
//}
//void test4()
//{
//	struct stu arr[] = { {"liming",12},{"lihaojie",9}, {"wangwu",23} };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz, sizeof(arr[0]), compar_name);
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		printf("%s %d\n", arr[i].name, arr[i].age);
//	}
//}
//int main()
//{
//	//test3();
//	test4();
//	return 0;
//}
//int main()
//{
//	//int a = 10;
//	//printf("%zd\n", sizeof(a));
//	//printf("%zd\n", sizeof(int));
//	//printf("%zd\n", sizeof a);//sizeof后面跟变量时可以省略括号
//	int arr1[4] = { 0 };
//	char arr2[4] = { 0 };
//	printf("%zd\n", sizeof(arr1));//16一个整形四个字节四个整形十六个字节
//	printf("%zd\n", sizeof(arr2));//4一个字符一个字节四个字符四个字节
//	return 0;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	size_t len = strlen(arr);
//	//内存布局是a b c d e f \0，当strlen计算字符串长度时，当识别到\0的时候就结束了，
//	//统计的是\0之前的字符串中的个数
//	printf("%zd\n", len);
//	size_t sz = sizeof(arr);//sizeof是将\0统计在内的
//	printf("%zd\n", sz);
//	return 0;
//}



//arr数组名的两个意外：
//1.sizeof(数组名)，数组名表示整个数组，计算的是整个数组的大小，单位是字节
//2.&数组名，数组名表示整个数组，取出的是数组的地址
//除了上面两种情况外，其余情况都是代表首元素
//int main()
//{
//	int a[] = { 1,2,3,4 };//a数组四个元素，每个元素是int类型的数据
//
//	printf("%zd\n", sizeof(a));//16   原因：a作为数组名单独放在sizeof内部
//
//	printf("%zd\n", sizeof(a + 0));//?   a+0还是首元素地址，所以sizeof（a+0）就是地址的大小，所以地址的大小就是指针的大小
//	//a表示的是数组首元素地址，因为不是单独放在sizeof内部
//
//	printf("%zd\n", sizeof(*a));//*a表示首元素，就是4字节
//
//	printf("%zd\n", sizeof(a + 1));//a+1表示地址的大小，所以就是地址的大小，所以就是指针的大小
//	//a等价于&a[0]所以首元素地址+1就表示指向2，sizeof（a+1）计算的是第二个元素的地址的大小
//
//	printf("%zd\n", sizeof(a[1]));//a[1]表示的是第二个元素，第二个元素表示的是整形，所以整形的大小就是四个字节
//	printf("%zd\n", sizeof(&a));//表示&a表示整个数组的地址整个数组的地址就是4或者8个字节
//	//数组的地址也是地址，只要是地址大小就是四个字节或者八个字节
//
//	printf("%zd\n", sizeof(*&a));
//	//&a拿到a的地址进行解引用，两个符号抵消了，所以等价于sizeof（a）所以就是16
//	//第一种解读就是*和&抵消
//	//第二种解读：&a取出的是数组的地址，类型是int（*）[4]；对于这样的数组指针，解引用大小是访问四个数组元素就是16个字节
//	//访问一个数组，所以就是16字节
//
//	printf("%zd\n", sizeof(&a + 1));//&a+1是跳过整个数组后的第一个元素的地址就是四个
//	printf("%zd\n", sizeof(&a[0]));//&a[0]就是第一个元素地址的大小，就是指针的大小就是4或者8个字节
//
//	printf("%zd\n", sizeof(&a[0] + 1));//首元素地址跳过一个整形就是第二个元素的地址也是4或者8个字节
//	return 0;
//}



//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };//6个元素
//	printf("%zd\n", sizeof(arr));//6   char类型数组元素大小就是1个字节
//	//计算整个数组的大小
//
//	printf("%zd\n", sizeof(arr + 0));//4或8   原因不是单独存在的arr
//
//	printf("%zd\n", sizeof(*arr));//   1对一个元素进行解引用就是第一个元素的大小，就是1个字节
//
//	printf("%zd\n", sizeof(arr[1]));//1   第二个元素大小就是一个字节
//
//	printf("%zd\n", sizeof(&arr));//取出整个数组的地址，数组的地址就是指针，只要是指针就是4或者8个字节
//
//	printf("%zd\n", sizeof(&arr + 1));//4或者8，跳过整个数组之后的第一个元素的地址
//
//	printf("%zd\n", sizeof(&arr[0] + 1));//第二个元素的地址就是4或者8
//
//	return 0;
//}
//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%zd\n", strlen(arr));//因为数组内部没有\0，所以strlen识别不到\0所以打印出来就是随机值
//
//	printf("%zd\n", strlen(arr + 0));//没有区别还是识别不到\0所以还是随机值
//
//	printf("%zd\n", strlen(*arr));//?  strlen需要的是地址，但是传递的是a过来，由于传递的是a,所以根据a的ASCII
//	//97，但是这块地址我没有申请，所以非法访问，就会报错
//
//	printf("%zd\n", strlen(arr[1]));//arr
//
//	printf("%zd\n", strlen(&arr));//随机值
//
//	printf("%zd\n", strlen(&arr + 1));//跳过整个数组打印，随机值
//
//	printf("%zd\n", strlen(&arr[0] + 1));//随机值
//
//	return 0;
//}