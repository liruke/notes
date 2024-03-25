#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>
//char* my_strstr(char* str1, char* str2)
//{
//	char* cur = str1;
//	char* s1 = NULL;
//	char* s2 = NULL;
//
//	if (*s2 == '\0')
//	{
//		return (char*)cur;
//	}
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	char* ret = my_strstr(arr1, arr2);
//	if (ret != NULL)
//	{
//		printf("%s", ret);
//	}
//	else
//	{
//		printf("找不到");
//	}
//	return 0;
//}
//int main()
//{
//	char arr[] = "3066088814@qq.com";
//	char arr1[30] = { 0 };
//	strcpy(arr1, arr);
//	char* p = "@.";
//	char* s = NULL;
//	for(s = strtok(arr1, p); s != NULL; s = strtok(NULL, p))
//	{
//		printf("%s\n", s);
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 0;i < 10;i++)
//	{
//		char*s=strerror(i);
//		printf("%d:%s\n",i, s);
//	}
//	return 0;
//}
//#include <errno.h>
//int main()
//{
//	FILE* pFile;
//	pFile = fopen("unexist.ent", "r");//文件打开的函数，第一个是文件名
//	if (pFile == NULL)
//		printf("Error opening file unexist.ent: %s\n", strerror(errno));
//	else
//	{
//		printf("打开文件成功");
//	}
//	return 0;
//}
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[10] = { 0 };
//	//将arr1中的前五个整形拷贝到arr2中
//	memcpy(arr2, arr1+3, 5 * sizeof(int));
//	for (int i = 0;i < 10;i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}
//int main()
//{
//	char arr1[10] = "hello bit";
//	char arr2[10] = { 0 };
//	memcpy(arr2, arr1, 5);
//	for (int i = 0;i < 10;i++)
//	{
//		printf("%c", arr2[i]);
//	}
//	return 0;
//}
//void* my_memcpy(void* dest, void* str, size_t num)
//{
//	while (num--)
//	{
//		*(char*)dest = *(char*)str;
//		dest = (char*)dest + 1;
//		str = (char*)str + 1;
//	}
//}
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[10] = { 0 };
//	my_memcpy(arr2, arr1, 5*sizeof(int));
//	for (int i = 0;i < 10;i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[10] = { 0 };
//	memmove(arr1, arr1+3, 5 * sizeof(int));//解决存在重叠区间的
//	for (int i = 0;i < 10;i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}
//void* my_memmove(void* dest, const void* str, size_t num)
//{
//	int* ret = dest;
//	assert(dest && str);
//	if (dest<str)
//	{
//		while (num--)
//		{
//			*(char*)dest = *(char*)str;
//			dest = (char*)dest + 1;
//			str = (char*)str+1;
//		}
//	}
//	else
//	{
//		while (num--)
//		{
//			*((char*)dest + num) = *((char*)str + num);
//
//		}
//	}
//	return ret;
//}
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[10] = { 0 };
//	my_memmove(arr1, arr1 + 3, 5 * sizeof(int));//解决存在重叠区间的
//	for (int i = 0;i < 10;i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}
//画：对重叠空间区域的位置进行分析

//int main()
//{
//	char arr[10] = "hello bit";
//	memset(arr, 'x', 5);
//	//memset在设置的时候是以字节为单位去设置的
//	//
//	printf("%s", arr);
//	return 0;
//}
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	memset(arr1, 1, 20);
//	for (int i = 0;i < sz;i++)
//	{
//		printf("%c ", arr1[i]);//这样就不行，因为他是按每个字节来设置的，而十个元素的整形数组有
// //40个字节，所以每个字节设置成1就不是原来的数了。
//	}
//	return 0;
//}
int main()
{
	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr2[] = { 1,2,3,4,8 };
	int ret= memcmp(arr1, arr2,20);
	printf("%d", ret);
	return 0;
}