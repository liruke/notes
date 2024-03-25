#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>
//size_t My_strlen(const char * arr)//加一个const以防修改数组
//{
//	size_t count = 0;
//	while (*arr)
//	{
//		arr++;
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	size_t len = strlen(arr);
//	size_t Len = My_strlen(arr);
//	printf("%zd\n", len);
//	printf("%zd\n", Len);
//}
//strlen函数的模拟实现方式2
//size_t my_strlen(char* arr)
//{
//	assert(arr != NULL);
//	char* start = arr;//首位置
//	while (*arr)//末位置，直到识别到\0就跳出循环
//	{
//		arr++;//
//	}
//	return arr - start;//指针减指针是两个指针之间的元素个数
//}
//int main()
//{
//	char arr[] = "abcde";
//	size_t len = my_strlen(arr);
//	printf("%zd", len);
//	return 0;
//}
//strlen的第三种实现方法(利用递归来解决strlen函数)
//size_t my_strlen(const char* str)
//{
//	if (*str == '\0')
//	{
//		return 0;
//	}
//	else
//	{
//		return 1 + my_strlen(str + 1);
//	}
//}
////my_strlen("abcdef")
//int main()
//{
//	char arr[] = "abcdef";
//	size_t len = my_strlen(arr);
//	printf("%zd", len);
//	return 0;
//}

//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello";
//	strcpy(arr1, arr2);//第一个参数是目的地，第二个参数是源头
//	printf("%s", arr1);
//	return 0;
//}
//int main()
//{
//	char* p = "asdjalkdjadasdl";//常量字符串不可修改
//	char arr2[] = "hello world";
//	strcpy(p, arr2);//第一个参数是目的地，第二个参数是源头
//	printf("%s", *p);
//	return 0;
//}

//模拟实现strcpy函数

//void my_strcpy(char* dest, char* src)
//{
//	while (*src!='\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;
//}
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "abcdef";
//	my_strcpy(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}


//第二种方式
//char* my_strcpy(char* dest, char* src)
//{
//	/*assert(dest != NULL);
//	assert(src != NULL);*/
//	assert(dest && src);
//	char* ret = dest;
//	while (*dest++ = *src++);//这样就能把\0一起拷贝过去，因为在判断的时候就已经拷贝过去了，但是判断时发现为假所以就直接跳出循环
//	return ret;
//}
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "abcdef";
//	printf("%s", my_strcpy(arr1, arr2));
//	return 0;
//}

//int main()
//{
//	char arr1[20] = "hello ";
//	char arr2[] = "world";
//	strcat(arr1, arr2);//第一个参数目的地，第二个参数是源头
//	printf("%s", arr1);
//	return 0;
//}
//void my_strcat(char* dest, char* src)
//{
//	//找到目标空间的\0
//	while (*dest)
//		dest++;
//	while (*dest++ = *src++);
//}
//int main()
//{
//	char arr1[20] = "hello ";
//	char arr2[] = "world";
//	my_strcat(arr1, arr2);
//	printf("%s", arr1);
//	return 0;

//char* my_strcat(char* dest, char* src)
//{
//	//找到目标空间的\0
//	char* ret = dest;
//	while (*dest)
//		dest++;
//	while (*dest++ = *src++);
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "hello ";
//	char arr2[] = "world";
//	my_strcat(arr1, arr1);//当自己拷贝自己时，字符进行追加时，会死循环
//	//当一直往后走时，最后会出现越界访问，程序会崩掉
//	//但是对于库内部的strcat，可以自己对自己进行追加
//
//	printf("%s", arr1);
//	return 0;
//}
//int main()
//{
//	int ret = strcmp("abcdef", "abq");
//	printf("%d", ret);//返回的是-1说明q是大于
//	return 0;
//}
//int main()
//{
//	int ret = strcmp("abcdef", "abq");
//	if (ret > 0)
//	{
//		printf("大于\0");
//	}
//	else if (ret == 0)
//	{
//		printf("相等\0");
//	}
//	else
//	{
//		printf("小于");
//	}
//	return 0;
//}
//int my_strcmp(const char* s1, const char* s2)
//{
//	while (*s1 == s2)
//	{
//		if (*s1 == '\0')
//		{
//			return 0;
//		}
//		s1++;
//		s2++;
//
//	}
//	if (*s1 > *s2)
//	{
//		return 1;
//	}
//	else
//		return -1;
//}
//int main()
//{
//	int ret = my_strcmp("bbq", "abcdef");
//	if (ret > 0)
//	{
//		printf("大于\0");
//	}
//	else if (ret == 0)
//	{
//		printf("相等\0");
//	}
//	else
//	{
//		printf("小于");
//	}
//}
 

//int my_strcmp(const char* s1, const char* s2)
//{
//	while (*s1 == s2)
//	{
//		if (*s1 == '\0')
//		{
//			return 0;
//		}
//		s1++;
//		s2++;
//
//	}
//	return *s1 - *s2;
//}
//int main()
//{
//	int ret = my_strcmp("bbq", "abcdef");
//	if (ret > 0)
//	{
//		printf("大于\0");
//	}
//	else if (ret == 0)
//	{
//		printf("相等\0");
//	}
//	else
//	{
//		printf("小于");
//	}
//}

//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello";
//	strncmp(arr1, arr2, 3);//第一个参数是目标地址，第二个参数是源头数组，最后一个参数是拷贝多少个字符
//	//如果拷贝的数目超过了原来的数组，则直接拷贝\0
//
//	return 0;
//}
//int main()
//{
//	char arr1[20] = "hello ";
//	char arr2[] = "world";
//	strncat (arr1, arr2,4 );
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abc";
//	int ret = strncmp(arr1, arr2,4);
//	printf("%d ", ret);
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abdaksld";
//	char arr2[] = "bda";
//	char*ret=strstr(arr1, arr2);
//	printf("%s\n", ret);//找不到时会返回一个空指针null
//	return 0;
//}


//对strstr的实现
#include<assert.h>
char* my_strstr(const char* str1, const char* str2)
{
	char* cur = str1;
	char* s1 = NULL;
	char* s2 = NULL;
	assert(str1 && str2);
	while (*cur)
	{
		s1 = cur;
		s2 = str2;
		while (*s1 == *s2)
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return (char*)cur;
		}
		cur++;
	}
	return NULL;
}
int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "bcd";
	char* ret = my_strstr(arr1, arr2);
	printf("%s", ret);
	return 0;
}