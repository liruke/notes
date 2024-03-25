#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>


//int my_strlen(char* arr)
//{
//	int count = 0;
//	while (*arr)
//	{
//		arr++;
//		count++;
//	}
//	return count;
//
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int ret = my_strlen(arr);
//	printf("%d", ret);
//	return 0;
//}
//char* my_strcpy(char* str1, char* str2)
//{
//	while (*str1 == *str2)
//	{
//		if (*str1 == '0')
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//	return str1 - str2;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "sdalkd";
//	int ret = my_strcpy(arr1,arr2);
//	printf("%d", ret);
//	return 0;
//}
//char* my_strcpy(char* str1, char* str2)
//{
//	char* ret = str1;
//	while (*str1++ = *str2++);
//	return ret;
//}
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "sdpkmb";
//	char* ret = my_strcpy(arr1, arr2);
//	printf("%s", ret);
//	return 0;
//}
//char* my_strcat(char* arr1, char* arr2)
//{
//	char* ret = arr1;
//	while (*arr1)
//	{
//		arr1++;
//	}
//	while (*arr1++ = *arr2++);
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "hello ";
//	char arr2[] = "world";
//	char* ret = my_strcat(arr1, arr2);
//	printf("%s", ret);
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
//		while (*s1 == *s2&&*s1)
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
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	char* ret = my_strstr(arr1, arr2);
//	printf("%s", ret);
//	return 0;
//}
//char* my_strstr(char* str1,  char* str2)
//{
//	char* cur = str1;
//	char* s1 = NULL;
//	char* s2 = NULL;
//	if (*str2 == '\0')
//	{
//		return (char*)str1;
//	}
//	while (*cur)
//	{
//		s1 = cur;
//		s2 = str2;
//		while (*s1 = *s2&&*s1&&*s2)
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return (char*)cur;
//		}
//		cur++;
//	}
//	return NULL;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	char* ret = my_strstr(arr1, arr2);
//	printf("%s", ret);
//	return 0;
//}
int main()
{
	char arr[] = "zhangsan@163.com#abcd";
	char arr2[40] = { 0 };
	const char* p = "@.#";
	char* s = NULL;
	for (s = strtok(arr2, p);s != NULL;s=strtok(NULL,p))
	{
		printf("%s\n", s);
	}
	/*strcpy(arr2, arr);
	char* s = strtok(arr2, p);
	printf("%s\n", s);
	s = strtok(NULL, p);
	printf("%s\n", s);
	s = strtok(NULL, p);
	printf("%s\n", s);*/
	return 0;
}
//int main()
//{
//
//	return 0;
//}
