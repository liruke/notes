#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>
//size_t My_strlen(const char * arr)//��һ��const�Է��޸�����
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
//strlen������ģ��ʵ�ַ�ʽ2
//size_t my_strlen(char* arr)
//{
//	assert(arr != NULL);
//	char* start = arr;//��λ��
//	while (*arr)//ĩλ�ã�ֱ��ʶ��\0������ѭ��
//	{
//		arr++;//
//	}
//	return arr - start;//ָ���ָ��������ָ��֮���Ԫ�ظ���
//}
//int main()
//{
//	char arr[] = "abcde";
//	size_t len = my_strlen(arr);
//	printf("%zd", len);
//	return 0;
//}
//strlen�ĵ�����ʵ�ַ���(���õݹ������strlen����)
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
//	strcpy(arr1, arr2);//��һ��������Ŀ�ĵأ��ڶ���������Դͷ
//	printf("%s", arr1);
//	return 0;
//}
//int main()
//{
//	char* p = "asdjalkdjadasdl";//�����ַ��������޸�
//	char arr2[] = "hello world";
//	strcpy(p, arr2);//��һ��������Ŀ�ĵأ��ڶ���������Դͷ
//	printf("%s", *p);
//	return 0;
//}

//ģ��ʵ��strcpy����

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


//�ڶ��ַ�ʽ
//char* my_strcpy(char* dest, char* src)
//{
//	/*assert(dest != NULL);
//	assert(src != NULL);*/
//	assert(dest && src);
//	char* ret = dest;
//	while (*dest++ = *src++);//�������ܰ�\0һ�𿽱���ȥ����Ϊ���жϵ�ʱ����Ѿ�������ȥ�ˣ������ж�ʱ����Ϊ�����Ծ�ֱ������ѭ��
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
//	strcat(arr1, arr2);//��һ������Ŀ�ĵأ��ڶ���������Դͷ
//	printf("%s", arr1);
//	return 0;
//}
//void my_strcat(char* dest, char* src)
//{
//	//�ҵ�Ŀ��ռ��\0
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
//	//�ҵ�Ŀ��ռ��\0
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
//	my_strcat(arr1, arr1);//���Լ������Լ�ʱ���ַ�����׷��ʱ������ѭ��
//	//��һֱ������ʱ���������Խ����ʣ���������
//	//���Ƕ��ڿ��ڲ���strcat�������Լ����Լ�����׷��
//
//	printf("%s", arr1);
//	return 0;
//}
//int main()
//{
//	int ret = strcmp("abcdef", "abq");
//	printf("%d", ret);//���ص���-1˵��q�Ǵ���
//	return 0;
//}
//int main()
//{
//	int ret = strcmp("abcdef", "abq");
//	if (ret > 0)
//	{
//		printf("����\0");
//	}
//	else if (ret == 0)
//	{
//		printf("���\0");
//	}
//	else
//	{
//		printf("С��");
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
//		printf("����\0");
//	}
//	else if (ret == 0)
//	{
//		printf("���\0");
//	}
//	else
//	{
//		printf("С��");
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
//		printf("����\0");
//	}
//	else if (ret == 0)
//	{
//		printf("���\0");
//	}
//	else
//	{
//		printf("С��");
//	}
//}

//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello";
//	strncmp(arr1, arr2, 3);//��һ��������Ŀ���ַ���ڶ���������Դͷ���飬���һ�������ǿ������ٸ��ַ�
//	//�����������Ŀ������ԭ�������飬��ֱ�ӿ���\0
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
//	printf("%s\n", ret);//�Ҳ���ʱ�᷵��һ����ָ��null
//	return 0;
//}


//��strstr��ʵ��
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