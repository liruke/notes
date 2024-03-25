#include<stdio.h>
#include<stdlib.h>
//int main()
//{
//	int n = 0;
//	char ch = 'a';
//	//����
//	int arr[10] = { 0 };
//	//����ÿռ�֮��ռ��ǲ����
//	return 0;
//}
//int main()
//{
//	//int arr[10] = { 0 };
//	int* x = (int*)realloc(NULL, 10 * sizeof(int));
//	int*p = (int*)malloc(40);
//	int i = 0;
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	int* ret = p;
//	for (i = 0;i < 10;i++)
//	{
//		*p = i;
//		p++;
//	}
//	for (i = 0;i < 10;i++)
//	{
//		printf("%d ", *ret);
//		ret++;
//	}
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 1;
//	}
//	p = &a;
//	free(p);
//	p = NULL;
//	return 0;
//}

//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}
//char* GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}
//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}
//void Test(void)
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);//free���󲻻�������Ϊ��
//	//str����Ϊ��str����Ұָ�롣
//	if (str != NULL)
//	{
//		strcpy(str, "world");//�Ƿ�����
//		printf(str);
//	}
//}
//int main()
//{
//	Test();
//	return 0;
//}
struct St
{
	int a;
	char c;
	int* arr;
};
int main()
{
	struct St * p = (struct St*)malloc(sizeof(struct St));
	if (p == NULL)
	{
		perror("malloc");
		return 1;
	}
	p->a = 100;
	p->c = 'w';
	p->arr = (int*)malloc(10 * sizeof(int));
	if (p->arr == NULL)
	{
		perror("malloc-2");
		return 1;
	}
	int i = 0;
	for (i = 0;i < 10;i++)
	{
		p->arr[i] = i;
	}
	for (i = 0;i < 10;i++)
	{
		printf("%d ", p->arr[i]);
	}
	int *ret = (int*)realloc(p->arr, 15 * sizeof(int));
	if (ret != NULL)
	{
		p->arr = ret;
	}
	else
	{
		perror("malloc-3");
		return 1;
	}
	for (i = 10;i < 15;i++)
	{
		p->arr[i] = i;
	}
	for (i = 10;i < 15;i++)
	{
		printf("%d ", p->arr[i]);
	}
	free(p->arr);//
	p->arr = NULL;
	free(p);
	p = NULL;
	return 0;
}