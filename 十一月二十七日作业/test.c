#include<stdio.h>
//int main()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	if ((char*)a == 0)
//	{
//		printf("´ó¶Ë");
//	}
//	else
//	{
//		printf("Ğ¡¶Ë");
//	}
//	return 0;
//}
//char* my_strncpy(char* str1, char* str2, int num)
//{
//	char* ret = str1;
//	while (num)
//	{
//		*str1 = *str2;
//		str1++;
//		str2++;
//		num--;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[10] = { 0 };
//	char* p = my_strncpy(arr2, arr1, 3);
//	printf("%s", p);
//	return 0;
//}
//char* my_strncat(char* str1, char* str2, int num)
//{
//	char* ret = str1;
//	while (*str1)
//	{
//		str1++;
//	}
//	while (num)
//	{
//		*str1 = *str2;
//		str1++;
//		str2++;
//		num--;
//	}
//	return ret;
//
//}
//int main()
//{
//	char arr1[20] = "hello ";
//	char arr2[10] = "world";
//	char* p = my_strncat(arr1, arr2, 3);
//	printf("%s", p);
//	return 0;
//}
//void* my_memcpy(void* str1, void* str2, size_t num)
//{
//	
//	while (num)
//	{
//		(*(char*)str1) = (*(char*)str2);
//		str1 = (char*)str1 + 1;
//		str2 = (char*)str2 + 1;
//		num--;
//	}
//}
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[10] = { 0 };
//	my_memcpy(arr2, arr1, 3*sizeof(int));
//	for (int i = 0;i < 10;i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}
//void* my_memmove(void* dest, void* str, size_t num)
//{
//	while (num--)
//	{
//		if (dest < str)
//		{
//			*(char*)dest = *(char*)str;
//			dest = (char*)dest + 1;
//			str = (char*)str + 1;
//		}
//		else
//		{
//			*((char*)dest + num) = *((char*)str + num);
//		}
//
//	}
//}
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	my_memmove(arr1, arr1+3, 4*sizeof(int));
//	for (int i = 0;i < 10;i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}