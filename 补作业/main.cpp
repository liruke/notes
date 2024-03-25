#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<math.h>
//#include<string.h>
//#include<stdlib.h>
//#include<stdio.h>
//int bin_search(int arr[], int left, int right, int key)
//{
//	while (left <= right)
//	{
//		int middle = left + (right - left) / 2;
//		if (arr[middle] < key)
//		{
//			right = middle - 1;
//		}
//		else if (arr[middle] > key)
//		{
//			left = middle - 1;
//		}
//		else
//		{
//			return middle;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	int left = 0;
//	int key = 5;
//	int ret = bin_search(arr, left, right, key);
//	if (ret == -1)
//	{
//		printf("没有找到");
//	}
//	else
//	{
//		printf("找到了,下标为:%d", ret);
//	}
//	return 0;
//}
//int main()
//{
//	int money = 0;
//	scanf("%d", &money);
//	int drink = money / 1;
//	int empty = drink;
//	while (empty != 1)
//	{
//		drink = empty / 2 + drink;
//		empty = empty / 2 + empty % 2;
//
//	}
//	printf("%d ", drink);
//	return 0;
//}
//int main()
//{
//	int row = 0;
//	int col = 0;
//	for (row = 1;row <= 6;row++)
//	{
//		for (col = 1;col <= 7 - row;col++)
//		{
//			printf(" ");
//		}
//		for (col = 1;col <= row * 2 - 1;col++)
//		{
//			printf("*");
//		}
//		for (col = 1;col <= 7 - 2 * row;col++)
//		{
//			printf(" ");
//		}
//		printf("\n");
//	}
//	for (col = 1;col <= 13;col++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	for (row = 1;row <= 6;row++)
//	{
//		for (col = 1;col <= row;col++)
//		{
//			printf(" ");
//		}
//		for (col = 1;col <= 13 - 2 * row;col++)
//		{
//			printf("*");
//		}
//		for (col = 1;col <= row;col++)
//		{
//			printf(" ");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	for (n = 0;n < 100000;n++)
//	{
//
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int Sn = 0;
//	scanf("%d", &a);
//	int ret = a;
//	for (int i = 0;i < 5;i++)
//	{
//		if (i != 0)
//		{
//			a = a * 10 + ret;
//		}
//		Sn = a + Sn;
//	}
//	printf("%d ", Sn);
//	return 0;
//}
//int main()
//{
//	int F1 = 1;
//	int F2 = 1;
//	int n = 0;
//	scanf("%d", &n);
//	if (n == 1 || n == 2)
//	{
//		printf("%d", F1);
//	}
//	else
//	{
//		while (n-2)
//		{
//			int tmp = F1;
//			F1 = F2;
//			F2 = tmp + F2;
//			n--;
//		}
//	}
//	printf("%d ", F2);
//	return 0;
//}
//int Fibonacci_number(int n)
//{
//	if (n > 2)
//	{
//		return Fibonacci_number(n - 1) + Fibonacci_number(n - 2);
//	}
//	else
//	{
//		return 1;
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fibonacci_number(n);
//	printf("%d ", ret);
//	return 0;
//}
//int n_k(int n, int k)
//{
//	if (k > 0)
//	{
//		return n*n_k(n, k - 1);
//	}
//	else
//	{
//		return 1;
//	}
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	int ret = n_k(n, k);
//	printf("%d", ret);
//	return 0;
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	int ret = n_k(n, k);
//	printf("%d", ret);
//	return 0;
//}
//	}
//}
//int add(int n)
//{
//	if (n % 10 != 0)
//	{
//		return n % 10 + add(n / 10);
//	}
//	else
//	{
//		return n;
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = add(n);
//	printf("%d ", ret);
//	return 0;
//}
//int factorial(int n)
//{
//	if (n != 0)
//	{
//		return n * factorial(n - 1);
//	}
//	else
//	{
//		return 1;
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = factorial(n);
//	printf("%d ", ret);
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int  m = 1;
//	if (n == 0)
//	{
//		m = 1;
//	}
//	while (n)
//	{
//		m = n * m;
//		n--;
//	}
//	printf("%d ", m);
//	return 0;
//}
//void digit_of_num(int n)
//{
//	if (n % 10 != 0)
//	{
//		digit_of_num(n / 10);
//	}
//	else
//	{
//		printf("%d ", n);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	digit_of_num(n);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("%d %d", a, b);
//	return 0;
//}
//
//1010
//
//int main()
//{
//	int n = -2147483648;
//	int count = 0;
//	while (n)
//	{
//		if ((n & 1) == 1)
//		{
//			count++;
//		}
//		n = n >> 1;
//	}
//	printf("%d ", count);
//	return 0;
//}
//int NumberOf2(int n)
//{
//    int i = 0, count = 0;
//    for (i = 0; i < 32; i++)
//    {
//        if (n & (1 << i))
//            count++;
//    }
//    return count;
//}
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//
//    printf("%d", NumberOf2(n));
//    return 0;
//}
//int  main()
//{
//	int n = 16;
//	int ret = n;
//	00000000000000000000000000000111
//	for (int i = 0;i < 16;i++)
//	{
//		printf("%d ", n & 1);
//		n = n >> 2;
//	}
//	printf("\n");
//	ret = ret >> 1;
//	for (int i = 0;i < 16;i++)
//	{
//		printf("%d ", ret & 1);
//		ret = ret >> 2;
//	}
//	return 0;
//}
//数组中有：1 2 3 4 5 1 2 3 4，只有5出现一次，其他数字都出现2次，找出5
//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4 };
//	int i, j = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]) - 1;
//	for (i = 0;i <= sz;i++)
//	{
//		for (j = 0;j <= sz;j++)
//		{
//			if (arr[i] == arr[j] && i != j)
//			{
//				arr[j] = 0;
//				arr[i] = 0;
//			}
//		}
//	}
//	for (i = 0;i < =sz;i++)
//	{
//		if (arr[i] != 0)
//		{
//			printf("%d ", arr[i]);
//		}
//	}
//	return 0;
//}
//int main()
//{
//    int arr[] = { 1,2,3,4,5 };
//        short* p = (short*)arr;
//    int i = 0;
//    for (i = 0; i < 4; i++)
//    {
//        *(p + i) = 0;
//    }
//    for (i = 0; i < 5; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}
//void Rotate_Character(char* ch, int sz)
//{
//	char tmp = 0;
//	tmp = *ch;
//	for (int i = 0;i < sz;i++)//2
//	{
//		*(ch + i) = *(ch + i + 1);
//	}
//	*(ch + sz) = tmp;
//}
//int main()
//{
//	char ch[] = "ABCD";
//	int sz = sizeof(ch) / sizeof(ch[0]) - 1;//3
//	Rotate_Character(ch, sz);
//	for (int i = 0;i <= sz;i++)
//	{
//		printf("%c", ch[i]);
//	}
//	return 0;
//}
//int My_strlen(char* ch)
//{
//	int count = 0;
//	while (*ch)
//	{
//		ch++;
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char ch[] = "ABCD";
//	int sz = My_strlen(ch);
//	printf("%d ", sz);
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0;i < sz;i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//
//	return 0;
//}
//9 8 7 6 5 4 3 2 1 0
//8 9 7 6 5 4 3 2 1 0
//...
//8 7 6 5 4 3 2 1 0 9
//void Bubble_sort(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0;i < sz - 1;i++)
//	{
//		int j = 0;
//		for (j = 0;j < sz - 1 - i;j++)
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
//	int arr[] = { 1,4,3,6,5,2,7,9,8,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Bubble_sort(arr, sz);
//	for (int i = 0;i < sz;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//void Bubble_sort(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0;i < sz - 1;i++)
//	{
//		int j = 0;
//		for (j = 0;j < sz - 1 - i;j++)
//		{
//			if (arr[j] % 2 == 0&&arr[j+1]%2==1)
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
//	int arr[] = { 1,4,3,6,5,2,7,9,8,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Bubble_sort(arr, sz);
//	for (int i = 0;i < sz;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//int juge_character(char* s1, char* s2, int sz)
//{
//	char tmp = 0;
//	int i, j;
//	for (i = 0;i < sz;i++)//循环5次
//	{
//		tmp = *s1;
//		for (j = 0;j < sz;j++)//循环5次
//		{
//			*(s1 + j) = *(s1 + 1 + j);
//			s1=s1+1
//			s1+1=s1+2
//			s1+2=s1+3
//			s1+3=s1+4
//			s1+4=s1+5
//		}
//		*(s1 + sz-1) = tmp;
//		if (strcmp(s1, s2) == 0)
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	char s1[] = "AABCD";
//	char s2[] = "BCDAA";
//	int sz = sizeof(s1) / sizeof(s1[0])-1;//5
//	int ret = juge_character(s1, s2, sz);
//	printf("%d ", ret);
//	printf("\n");
//	for (int i = 0;i < sz;i++)
//	{
//		printf("%c ", s1[i]);
//	}
//	printf("\n");
//	for (int i = 0;i < sz;i++)
//	{
//		printf("%c ", s2[i]);
//	}
//	return  0;
//}
//int main()
//{
//	int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
//	int key = 3;
//	int i, j;
//	for (i = 0;i < 3;i++)
//	{
//		for (j = 0;j < 4;j++)
//		{
//			if (arr[i][j] == key)
//			{
//				printf("找到了,下标为:%d %d", i, j);
//				return 0;
//			}
//		}
//	}
//	printf("没找到");
//	return 0;
//}
//日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个嫌疑犯的一个。
//以下为4个嫌疑犯的供词:
//A说：不是我。
//B说：是C。
//C说：是D。
//D说：C在胡说
//已知3个人说了真话，1个人说的是假话。
//现在请根据这些信息，写一个程序来确定到底谁是凶手。
//
//int main()
//{
//	int i = 0;
//	for (i = 'A';i <= 'D';i++)
//	{
//		if ((i != 'A') + (i == 'C') + (i == 'D') + (i != 'D') == 3)
//		{
//			printf("%c ", i);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int arr[9][9] = { 0 };
//	int i = 0;
//	for (i = 0;i < 9;i++)
//	{
//		int j = 0;
//		for (j = 0;j <= i;j++)
//		{
//			if (j == 0 || j == i)
//			{
//				arr[i][j] = 1;//不需要被修改的值
//			}
//			else
//			{
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];//修改内部值
//			}
//		}
//	}
//	for (i = 0;i < 9;i++)
//	{
//		int j = 0;
//		int z = 0;
//		for (z = 0;z <= 10 - i - 2;z++)
//		{
//			printf(" ");//根据规律找到一个数之前有多少个空格
//		}
//		for (j = 0;j <= i;j++)
//		{
//			printf("%3d", *(arr[i] + j));//二维数组传参的本质
//		}
//		printf("\n");
//	}
//}
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
//	int(*arr[5])(int x, int y) = { 0, add,sub,mul,div };
//	int input;
//	int x, y;
//	int ret = 0;
//	do
//	{
//		printf("*************************\n");
//		printf("*   1.add      2.sub    *\n");
//		printf("*   1.mul      2.div    *\n");
//		printf("*************************\n");
//		printf("请选择:");
//		scanf("%d", &input);
//		if (input <= 4 && input >= 1)
//		{
//			printf("请输入操作数:");
//			scanf("%d %d", &x, &y);
//			ret = (*arr[input])(x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("退出计算器\n");
//		}
//		else
//		{
//			printf("输入有误\n");
//		}
//	} while (input);
//	return 0;
//}
//void  print(int n)
//{
//	if (n >=10)
//	{
//		print(n / 10);
//		print(n % 10);
//	}
//	else if(n<10)
//	{
//		printf("%d ", n);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print(n);
//	return 0;
//}
//int compare(const void* a, const void* b)
//{
//	return (*(int*)a - *(int*)b);
//}
//int main()
//{
//	int arr[] = { 1,4,3,7,5,6,9,8,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort((int*)arr, sz, sizeof(arr[0]), compare);
//	for (int i = 0;i < sz;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//一个数组中只有两个数字是出现一次，其他所有数字都出现了两次。
//编写一个函数找出这两个只出现一次的数字。
//例如：
//有数组的元素是：1，2，3，4，5，1，2，3，4，6
//只有5和6只出现1次，要找出5和6.
//void Find(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		int j = 0;
//		for (int j = 0;j < sz;j++)
//		{
//			if (arr[i] == arr[j] && i != j)
//			{
//				arr[i] = 0;
//				arr[j] = 0;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4,6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Find(arr, sz);
//	for (int i = 0;i < sz;i++)
//	{
//		if (arr[i] != 0)
//		{
//			printf("%d ", arr[i]);
//		}
//	}
//	return 0;
//}
//
//
//qsort((int*)arr, sz, sizeof(arr[0]), compare);
//
//void qsort (void* base, size_t num, size_t size,int (*compar)(const void*, const void*));
//
//
//void swap(char* buf1, char* buf2, int width)
//{
//	int tmp = 0;
//	tmp = *buf1;
//	*buf1 = *buf2;
//	*buf2 = tmp;
//	buf1++;
//	buf2++;
//}
//void My_qsort(void* base, int sz, int width, int(*com)(const void* p1 , const void* p2))
//{
//	int i = 0;
//	for (i = 0;i < sz - 1;i ++ )
//	{
//		int j = 0;
//		for (j = 0;j < sz - i - 1;j++)
//		{
//			if (com((char*)base + j * width, (char*)base + (j + 1) * width)>0)
//			{
//				swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//			}
//		}
//	}
//}
//int compar(const void* p1, const void* p2)
//{
//	return *(int*)p1 - *(int*)p2;
//}
//int main()
//{
//	int arr[] = { 1,4,3,7,5,6,9,8,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	My_qsort(arr, sz, sizeof(arr[0]), compar);
//	for (int i = 0;i < sz;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int aa[2][5] = { 10,9,8,7,6,5,4,3,2,1 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//	return 0;
//}
//int My_strlen(char* ch)
//{
//	int count = 0;
//	while (*ch)
//	{
//		ch++;
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char ch[] = "aaabbb";
//	int ret = My_strlen(ch);
//	printf("%d ", ret);
//	return 0;
//}
//void My_strcpy(char*s1,char* s2)
//{
//	char* ret = s1;
//	while (*s2)
//	{
//		*ret = *s2;
//		ret++;
//		s2++;
//	}
//}
//int main()
//{
//	char s1[6] = "0";
//	char s2[6] = "hello";
//	My_strcpy(s1, s2);
//	int sz = sizeof(s2) / sizeof(s2[0]) - 1;
//	for (int i = 0;i < sz;i++)
//	{
//		printf("%c", s1[i]);
//	}
//	return 0;
//}
//int My_strcmp(char* ch1, char* ch2)
//{
//	while (*ch1!='\0'&& * ch2!='\0')
//	{
//		if (*ch1 > *ch2)
//		{
//			return 1;
//		}
//		else if (*ch1 < *ch2)
//		{
//			return -1;
//		}
//		else if (*ch1 == *ch2)
//		{
//			return 0;
//		}
//		else
//		{
//			ch1++;
//			ch2++;
//		}
//	}
//	if (*ch1 == '\0'&&*ch2=='\0')
//	{
//		return 0;
//	}
//}
//int main()
//{
//	char ch1[] = "abcd";
//	char ch2[] = "bcd";
//	int ret=My_strcmp(ch1, ch2);
//	printf("%d ", ret);
//	return 0;
//}
//void My_strcat(char* ch1, char* ch2)
//{
//	while (*ch1)
//	{
//		ch1++;
//	}
//	while (*ch1++ = *ch2++)
//	{
//		;
//	}
//}
//int main()
//{
//	char ch1[15] = "hello ";
//	char ch2[15] = "world";
//	My_strcat(ch1, ch2);
//	for (int i = 0;i < 11;i++)
//	{
//		printf("%c", ch1[i]);
//	}
//	return 0;
//}
//int main()
//{
//	char a[1000] = { 0 };
//	int i = 0;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d", strlen(a));
//	return 0;
//}
//char* my_strstr(char* str1, char* str2)
//{
//	char* cur = str1;
//	char* s1 = NULL;
//	char* s2 = NULL;
//	while (*cur)
//	{
//		s1 = cur;
//		s2 = str2;
//		while (*s1 == *s2 && *s1)
//
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return cur;
//		}
//		cur++;
//	}
//}
//int main()
//
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	char* ret = my_strstr(arr1, arr2);
//	printf("%s", ret);
//	return 0;
//}
//输入两个正整数m和n，求其最大公约数和最小公倍数。
//int main()
//{
//	int m, n;
//	scanf("%d %d", &m, &n);
//	int M, N;
//	M = m;
//	N = n;
//	while(m > n && m % n != 0)
//	{
//		int tmp = 0;
//		tmp = n;
//		n = m % n;
//		m = tmp;
//		if (m % n == 0)
//		{
//			printf("%d ", n);
//		}
//	}
//	if (n > m)
//	{
//		int tmp = 0;
//		tmp = m;
//		m = n;
//		n = tmp;
//		while (m > n && m % n != 0)
//		{
//			int tmp = 0;
//			tmp = n;
//			n = m % n;
//			m = tmp;
//			if (m % n == 0)
//			{
//				printf("%d ", n);
//			}
//		}
//	}
//	printf("%d", M * N / n);
//	return 0;
//}
//int main()
//{
//	char ch[200] = { 0 };
//	int count1 = 0, count2 = 0, count3 = 0, count4 = 0;
//	gets(ch);
//	int sz = sizeof(ch) / sizeof(ch[0]);
//	for (int i = 0;i < sz;i++)
//	{
//		if (ch[i] == '\0')
//		{
//			break;
//		}
//		if (ch[i] >= 'A' && ch[i] <= 'Z' || ch[i] >= 'a' && ch[i] <= 'z')
//		{
//			count1++;
//		}
//		else if (ch[i] >= '0' && ch[i] <= '9')
//		{
//			count2++;
//		}
//		else if (ch[i] == ' ')
//		{
//			count3++;
//		}
//		else
//		{
//			count4++;
//		}
//	}
//	printf("%d %d %d %d", count1, count2, count3, count4);
//	return 0;
//}
//int main()
//{
//	int a = 2;
//	int n;
//	int sum = 0;
//	scanf("%d", &n);
//	for (int i = 0;i < n-1;i++)
//	{
//		a = a * 10 + 2;
//		sum = a + sum;
//	}
//	sum = sum + 2;
//	printf("%d ", sum);
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int sum = 1;
//	int SUM = 0;
//	for (i = 1;i <= n;i++)
//	{
//		sum = i * sum;
//		SUM = sum + SUM;
//	}
//	printf("%d\n", SUM);
//	return 0;
//}
//int main()
//求以下三数的和,保留2位小数 1~a之和 1~b的平方和 1~c的倒数和
//int main()
//{
//	int a = 0, b = 0, c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	int i = 0, j = 0, z = 0;
//	int sum1 = 0;
//	int sum2 = 0;
//	float sum3 = 0;
//	for (i = 1;i <= a;i++)
//	{
//		sum1 = i + sum1;
//	}
//	for (j = 1;j <= b;j++)
//	{
//		sum2 = sum2 + j * j;
//	}
//	for (z = 1;z <= c;z++)
//	{
//		sum3 = 1.0 / z + sum3;
//	}
//	float sum = 0;
//	sum = sum1 + sum2 + sum3;
//	printf("%.2f", sum);
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	int count = 0;
//	for (n = 100;n < 1000;n++)
//	{
//		int a = n % 10;
//		int b = n / 10 % 10;
//		int c = n / 100;
//		if (n == a * a * a + b * b * b + c * c * c)
//		{
//			printf("%d ", n);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int j = 0;
//	int sum = 0;
//	int k = 0;
//	for (i = 1;i <= n;i++)
//	{
//		for (j = 1;j < n;j++)
//		{
//
//			if (i % j == 0)
//			{
//				sum = j + sum;
//			}
//		}
//		if (sum == i)
//		{
//			printf("%d its factors are", i);
//			for (k = 1;k < i;k++)
//			{
//				if (sum % k == 0)
//				{
//					printf("%d ", k);
//				}
//			}
//			printf("\n");
//		}
//		sum = 0;
//	}
//	return 0;
//}
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    int j = 0;
//    int k = 0;
//    int sum = 0;
//    for (i = 1; i <= n; i++)
//    {
//        for (j = 1; j < i; j++)
//        {
//            if (i % j == 0)
//            {
//                sum = j + sum;
//            }
//        }
//        if (sum == i)
//        {
//            printf("%d its factors are ", i);
//            for (k = 1; k < i; k++)
//            {
//                if (sum % k == 0)
//                {
//                    printf("%d ", k);
//                }
//            }
//            printf("\n");
//        }
//
//        sum = 0;
//    }
//    return 0;
//}
//
//
//1   2 / 1
//2   3 / 2
//3   5 / 3
//4   8 / 5
//5   13 / 8
//6   21 / 13
//int main()
//{
//	float a = 2.0, b = 1.0;
//	int  n = 0;
//	int i = 0;
//	scanf("%d", &n);
//	float sum = 0;
//	for (i = 1;i <= n;i++)
//	{
//		sum = a / b + sum;
//		float tmp = 0.0;
//		tmp = a;
//		a = a + b;
//		b = tmp;
//	}
//	printf("%.2lf", sum);
//	return 0;
//}
//
//一球从M米高度自由下落，每次落地后返回原高度的一半，再落下。 它在第N次落地时反弹多高？共经过多少米？ 保留两位小数
//int main()
//{
//	float M = 0;
//	int N = 0;
//	scanf("%f %d", &M, &N);
//	int i = 0;
//	float sum = 0;
//	for (i = 1;i <= N;i++)
//	{
//		if (i == 1)
//		{
//			sum = sum + M;
//		}
//		else if (i > 1)
//		{
//			sum = sum + 2 * M;
//		}
//		M = M / 2.0;
//	}
//	printf("%.2f %.2f", M, sum);
//	return 0;
//}
//int main()
//{
//	int pink = 1;
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0;i < n-1;i++)
//	{
//		pink = (pink + 1) * 2;
//	}
//	printf("%d", pink);
//	return 0;
//}
//int main()
//{
//	int n = 0, i = 0;
//	scanf("%d", &n);
//	for (i = 2;i <= n;i++)
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
//			printf("%d\n", i);
//		}
//		else if (i == 2)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}
//void fun(int* arr)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0;i < 10;i++)
//	{
//		for (j = 0;j < 10 - i - 1;j++)
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
//	int arr[10] = { 0 };
//	int i = 0, j = 0;
//	for ( i = 0;i < 10;i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	fun(arr);
//	for (i = 0;i < 10;i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int arr[3][3] = { 0 };
//	int j = 0, i = 0;
//	for (i = 0;i < 3;i++)
//	{
//		for (j = 0;j < 3;j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	printf("%d %d", arr[1][1] + arr[0][0] + arr[2][2], arr[2][0] + arr[0][2] + arr[1][1]);
//	return 0;
//}
//
//
//1 7 8 17 23 24  j59 62 101
//50
//int main()
//{
//	int arr[10] = { 0 };
//	int  i = 0;
//	for (i = 0;i < 9;i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int n = 0;
//	scanf("%d", &n);
//	int j = 0;
//	while (arr[j] < n)
//	{
//		j++;
//	}
//	int z = 0;
//	for (z = 9;z >j;z--)
//	{
//		arr[z] = arr[z - 1];
//	}
//	arr[j] = n;
//	for (i = 0;i < 10;i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}
//void fun(int* arr)
//{
//	int i = 0;
//	for (i = 0;i < 9;i++)
//	{
//		int j = 0;
//		for (j = 0;j < 9 - i;j++)
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
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0;i < 10;i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	fun(arr);
//	for (i = 0;i < 10;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0;i < 10;i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int left = 0;
//	int right = 9;
//	while (left < right)
//	{
//		int tmp = 0;
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		right--;
//		left++;
//	}
//	for(i=0;i<10;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//int fun(int a, int b)
//{
//	if (a > b)
//	{
//		while (a % b != 0)
//		{
//			int tmp = 0;
//			tmp = b;
//			b = a % b;
//			a = b;
//		}
//		if (a % b == 0)
//		{
//			return b;
//		}
//	}
//	else if (a < b)
//	{
//		int ret = 0;
//		ret = a;
//		a = b;
//		b = ret;
//		while (a % b != 0)
//		{
//			int tmp = 0;
//			tmp = b;
//			b = a % b;
//			a = b;
//		}
//		if (a % b == 0)
//		{
//			return b;
//		}
//	}
//	else
//	{
//		return 1;
//	}
//}
//int Fun(int a, int b, int c)
//{
//	return a * b / c;
//}
//int main()
//{
//	int a, b = 0;
//	scanf("%d %d", & a, &b);
//	printf("%d %d", fun(a, b), Fun(a, b,fun(a,b)));
//	return 0;
//}
//#define N 10
//struct A
//{
//	int a[N];
//	int size;
//};
//int main()
//{
//	int arr[9] = { 1,2,3,4,5,6,7,8,9 };
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	int left = 0;
//	while (left < right)
//	{
//		int tmp = 0;
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//	for (int i = 0;i < 9;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int j = 0;
//	for (i = 2;i <= 1000;i++)
//	{
//		for (j = 2;j < i;j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (i == j)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//导入头文件
//#include<stdio.h>
//#include<stdlib.h>
//主函数
//#include <stdio.h>
//
//int main() {
//    int a, b, c;
//    int arr1[13] = { 0,31,29,31,30,31,30,31,31,30,31,30,31 };
//    int arr2[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//    int day = 0;
//    while (scanf("%d %d %d", &a, &b, &c) != EOF)
//    {
//        if (a % 400 == 0 || a % 4 == 0 && a % 100 != 0)
//        {
//            int mon = b - 1;
//            int i = 1;
//            while (mon)
//            {
//                day = arr1[i] + day;
//                i++;
//                mon--;
//            }
//            day = day + c;
//            printf("%d", day);
//        }
//        else
//        {
//            int mon = b - 1;
//            int i = 1;
//            while (mon)
//            {
//                day = arr2[i] + day;
//                i++;
//                mon--;
//            }
//            day = day + c;
//            printf("%d", day);
//        }
//    }
//    return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//#include<Windows.h>
//#include<stdbool.h>
//
//设置控制台的大小和名称
//int main()
//{
//	printf("he he");
//	system("mode con cols=100 lines=20");
//	system("title 贪吃蛇");
//	system("pause");
//	return 0;
//}
//
//
//int main()
//{
//	先获取信息才能修改
//	COORD pos = { 40,10 };//设置了一个坐标
//	CONSOLE_CURSOR_INFO cursor_info = { 0 };//创建一个变量
//	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
//	GetConsoleCursorInfo(handle, &cursor_info);//获取
//	cursor_info.dwSize = 0;//将光标信息改掉，设置控制台信息
//	cursor_info.bVisible = false;//默认为true，将可见信息改为false
//	SetConsoleCursorInfo(handle, &cursor_info);//将光标信息设置进去，利用这个函数
//	return 0;
//}
//
//
//void SetPos(int x, int y)
//{
//	获得设备句柄
//	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
//	根据句柄设置光标的位置
//	COORD pos = { x,y };
//	SetConsoleCursorPosition(handle, pos);
//}
//int main()
//{
//	SetPos(30, 5);
//	printf("hehe");
//	SetPos(30, 10);
//	printf("hehe\n");
//	return 0;
//}
//#define KEY_PRESS(vk) (GetAsyncKeyState(vk)&0x1? 1:0)
//int main()
//{
//	while (1)
//	{
//		if (KEY_PRESS(0x30))
//			printf("0\n");
//		else if (KEY_PRESS(0x31))
//			printf("1\n");
//		else if (KEY_PRESS(0x32))
//			printf("2\n");
//		else if (KEY_PRESS(0x33))
//			printf("3\n");
//		else if (KEY_PRESS(0x34))
//			printf("4\n");
//		else if (KEY_PRESS(0x35))
//			printf("5\n");
//		else if (KEY_PRESS(0x36))
//			printf("6\n");
//		else if (KEY_PRESS(0x37))
//			printf("7\n");
//		else if (KEY_PRESS(0x38))
//			printf("8\n");
//		else if (KEY_PRESS(0x39))
//			printf("9\n");
//	}
//}
//
//#include<locale.h>
//int main()
//{
//	char* loc;
//	loc = setlocale(LC_ALL, NULL);//查询当前地区，第二个参数是NULL
//	printf("默认的本地信息:%s\n", loc);
//
//
//
//
//	loc = setlocale(LC_ALL, "");//设置之后就是Chinese
//	printf("设置后的本地信息:%s\n", loc);
//	return 0;
//}
//
//
//int main()
//{
//	setlocale(LC_ALL, "");
//	wchar_t ch1 = L'中';
//	wchar_t ch2 = L'国';
//	wchar_t ch3 = L'●';
//	wchar_t ch4 = L'★';
//	wprintf(L"%lc\n", ch1);
//	wprintf(L"%lc\n", ch2);
//	wprintf(L"%lc\n", ch3);
//	wprintf(L"%lc\n", ch4);
//	printf("ab\n");
//	return 0;
//}
//
//union A
//{
//	int a;
//	char b;
//};
//
//int main()
//{
//	union A PA;
//	PA.a = 1;
//	if (PA.b == 1)
//	{
//		printf("小端存储");
//	}
//	else if (PA.b == 0)
//	{
//		printf("大端存储");
//	}
//	return 0;
//}
//
//
//#include<assert.h>
//void* My_Memcpy(void* dest, void* source, size_t n)
//{
//	assert(dest && source);
//	void* ret = dest;
//	while (n)
//	{
//		*(char*)dest = *(char*)source;
//		dest = (char*)dest + 1;
//		source = (char*)source + 1;
//		n--;
//	}
//	return ret;
//}
//int main()
//{
//	int dest[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	My_Memcpy(dest + 2, dest, 12);
//	for (int i = 0;i < 10;i++)
//	{
//		printf("%d ", dest[i]);
//	}
//	return 0;
//}
//
//void* My_MemMove(void* dest, void* source, size_t n)
//{
//	assert(dest && source);
//	void* ret = dest;
//	while (n)
//	{
//		*(char*)dest = *(char*)source;
//		dest = (char*)dest + 1;
//		source = (char*)source + 1;
//		n--;
//	}
//	return ret;
//
//}
//int main()
//{
//	char str[] = "hello world";
//	My_MemMove(str + 6, str, 5);
//	printf("%s", str);
//	return 0;
//}
//long long Fac(size_t N)
//{
//	if (N == 0)
//	{
//		return 1;
//	}
//	return Fac(N - 1) * N;
//}
//int bin_search(int arr[], int left, int right, int key)
//{
//	while (left < right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < key)
//		{
//			left = mid;
//		}
//		else if(arr[mid] > key)
//		{
//			right = mid;
//		}
//		if (arr[mid] == key)
//		{
//			return mid;
//		}
//	}
//}
// arr 是查找的数组
//left 数组的左下标
//right 数组的右下标
//key 要查找的数字
//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int key = 2;
//	int ret = bin_search(arr, 0, 9, 2);
//	printf("%d", ret);
//	return 0;
//}
//struct Node
//{
//    int val;
//    struct Node* next;
//    struct Node* random;
//};
//struct Node* copyRandomList(struct Node* head) {
//    struct Node* phead = head;
//    while (phead)
//    {
//        struct Node* pcopy = (struct Node*)malloc(sizeof(struct Node));
//        pcopy->val = phead->val;
//        if (phead->next == NULL)
//        {
//            phead->next = pcopy;
//            pcopy->next = NULL;
//            break;
//        }
//        struct Node* next = phead->next;
//        phead->next = pcopy;
//        pcopy->next = next;
//        phead = phead->next->next;
//    }
//    struct Node* copy = head->next;
//    phead = head;
//    while (phead)
//    {
//        if (phead->random == NULL)
//        {
//            copy->random = NULL;
//            copy = copy->next->next;
//            phead = phead->next->next;
//        }
//        else
//        {
//            copy->random = phead->random->next;
//            copy = copy->next->next;
//            phead = phead->next->next;
//        }
//    }
//    phead = head;
//    struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
//    struct Node* newhead = newnode;
//    while (phead)
//    {
//        struct Node* next = phead->next->next;
//        newhead->next = phead->next;
//        newhead = newhead->next;
//        phead = next;
//    }
//    newhead->next = NULL;
//    return newnode->next;
//}
//
//int main()
//{
//
//}
//int minNumberInRotateArray(int* nums, int numsLen) {
//     write code here
//    int i = 0;
//    for (i = 0;i < numsLen;i++)
//    {
//        if (nums[i] > nums[i + 1])
//        {
//            break;
//        }
//    }
//    if (nums[0] < nums[i + 1])
//    {
//        return nums[0];
//    }
//    else
//    {
//        return nums[i + 1];
//    }
//}
//int main()
//{
//    int arr[6] = { 1,2,2,2,2,2 };
//    int sz = strlen(arr);
//    int ret = minNumberInRotateArray(arr, sz);
//    printf("%d", ret);
//    return 0;
//}
//int* findErrorNums(int* nums, int numsSize, int* returnSize)
//{
//    int i = 0;
//    int j = 0;
//    for (i = 0;i < numsSize;i++)
//    {
//        for (j = 0;j < numsSize;j++)
//        {
//            if (nums[i] == nums[j] && i != j)
//            {
//                returnSize[0] = nums[i];
//                returnSize[1] = nums[i] + 1;
//                return returnSize;
//            }
//        }
//    }
//    return NULL;
//}
//int main()
//{
//    int arr[5] = { 1,2,2,3,4 };
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    int* returnsize = 0;
//    returnsize = findErrorNums(arr, sz, returnsize);
//    for (int i = 0;i < 2;i++)
//    {
//        printf("%d", returnsize[i]);
//    }
//}
//写一个宏，计算结构体中某变量相对于首地址的偏移，并给出说明
//考察：offsetof宏的实现
//写一个宏，可以将一个整数的二进制位的奇数位和偶数位交换。
//#define offdetof(structType,MemberName) (size_t)&(((structType*)0)->Membername)
//#define binaryswap(x) ((x&0xaaaaaaaa)>>1)|((x&0x55555555)<<1)
//int main()
//{
//	int m, n;
//	float sum = 0;
//	scanf("%d %d", &m, &n);
//	for (int i = m;i <= n;i++)
//	{
//		sum = sum + i * i + 1.0 / i;
//	}
//	printf("%f ", sum);
//	return 0;
//}
//#include<math.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	float sum = 0;
//	for (int i = 1;i <= n;i++)
//	{
//		sum = sum + sqart(i);
//	}
//	printf("%d ", sum);
//	return 0;
//}
//int main()
//{
//	int e = 0;
//	float m = 0;
//	scanf("%d", &e);
//	if (e <= 50)
//	{
//		m = e * (0.53);
//	}
//	else
//	{
//		m = (e - 50) * 0.58 + 50 * 0.53;
//	}
//	printf("%f", m);
//	return 0;
//}
//int main()
//{
//	printf("Enter two numbers:");
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d", &a, &b);
//	if (b == 0)
//	{
//		printf("cannot divide by zero.\n");
//	}
//	else
//	{
//		c = a / b;
//		printf("%d", c);
//	}
//	return 0;
//}
// 对数组进行堆排序
//
//
//void Swap(int* a, int* b)
//{
//	int tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//
//建大堆
//void AdJustDown(int* a, int n, int parent)
//{
//	int child = parent * 2 + 1;
//	while (child<n)
//	{
//		if (a[child] < a[child + 1] && child + 1 < n)
//		{
//			child++;
//		}
//		if (a[child] > a[parent])
//		{
//			Swap(&a[child], &a[parent]);
//			parent = child;
//			child = parent * 2 + 1;
//		}
//		else
//		{
//			break;
//		}
//	}
//}
//
//void HeapSort(int* a, int n)
//{
//	for (int i = (n - 1 - 1) / 2;i >= 0;i--)
//	{
//		AdJustDown(a, n, i);
//	}
//
//	int end = n - 1;
//	for (int i = end;i >= 0;i--)
//	{
//		Swap(&a[i], &a[0]);
//		AdJustDown(a, end, 0);
//	}
//}
//
// struct ListNode 
// {
//      int val;
//      struct ListNode *next;
// };
// 
//int getDecimalValue(struct ListNode* head) {
//    struct ListNode* cur = head;
//    int i = 1;
//    int sum = 0;
//    while (cur)
//    {
//        sum = sum + i * (cur->val);
//        cur = cur->next;
//        i = i * 2;
//    }
//    return sum;
//}
//
//[1,0,0,1,0,0,1,1,1,0,0,0,0,0,0]
//
//
//struct ListNode* CreateNode(int n)
//{
//    struct ListNode* newnode = (struct ListNode*)malloc(sizeof(struct ListNode));
//    if (newnode == NULL)
//    {
//        return NULL;
//    }
//    newnode->val = n;
//    newnode->next = NULL;
//}
//
//int main()
//{
//    [1,0,0,1,0,0,1,1,1,0,0,0,0,0,0]
//    struct ListNode* n1 = CreateNode(1);
//    struct ListNode* n2 = CreateNode(0);
//    struct ListNode* n3 = CreateNode(0);
//    struct ListNode* n4 = CreateNode(1);
//    struct ListNode* n5 = CreateNode(0);
//    struct ListNode* n6 = CreateNode(0);
//    struct ListNode* n7 = CreateNode(1);
//    struct ListNode* n8 = CreateNode(1);
//    struct ListNode* n9 = CreateNode(1);
//    struct ListNode* n10 = CreateNode(0);
//    struct ListNode* n11 = CreateNode(0);
//    struct ListNode* n12 = CreateNode(0);
//    struct ListNode* n13 = CreateNode(0);
//    struct ListNode* n14 = CreateNode(0);
//    struct ListNode* n15 = CreateNode(0);
//    [1,0,0,0,0,0]
//    n1->next = n2;n2->next = n3;n3->next = n4;n4->next = n5;n5->next = n6;n6->next = n7;
//    n7->next = n8;n8->next = n9;n9->next = n10;n10->next = n11;n11->next = n12;
//    n12->next = n13;n13->next = n14;n14->next = n15;n15->next = NULL;
//    int sum = getDecimalValue(n1);
//    printf("%d ", sum);
//    return 0;
//}

//#include<stdio.h>
//#include<string.h>
//
//int lengthOfLongestSubstring(char* s) {
//	int prev = 0;
//	int cur = 1;
//	int max = 0;
//	int length = strlen(s);
//	while (cur < length)
//	{
//
//	}
//}
//
//
//int main()
//{
//
//	return 0;
//}
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	double x, t, sum = 0;
//	int n = 1;
//	cin >> x;
//	t = x;
//	int cur = x;
//	int cur1 = 0;
//	while (fabs(t) >= 1e-7)
//	{
//		x = cur;
//		if (n != 1)
//		{
//			cur1 = 1;
//			for (int i = 0;i < 2 * n - 1;i++)
//			{
//				x *= x;
//				cur1++;
//			}
//			x = x / cur1;
//		}
//		sum += t;
//		n++;
//		for (int i = 1;i < n ;i++)
//		{
//			t = (i * 2 - 1)*1.0 / 2 * i;
//		}
//	}
//	cout << sum;
//	return 0;
//}


#include<iostream>
using namespace std;
int main()
{
	double x, t, sum = 0, numerator = 1, denominator = 2;
	int n = 1, a = -1;
	cin >> x;
	t = x;
	double tmp = 1;
	double rmp = 0;
	double cur = x;
	while (1)
	{
		sum += t;
		cur *= x * x;
		rmp = cur / (2 * n + 1);
		t = a * numerator / denominator * rmp;
		n++;
		a *= -1;
		numerator *= 2 * n - 1;
		denominator *= 2 * n;
		if (fabs(t) < 1e-7)
			break;
	}
	cout << "arcsh(x)=" << sum << endl;
	return 0;
}

