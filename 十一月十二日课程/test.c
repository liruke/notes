#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
#include<string.h>
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	//.....
//	//.....
//	p = NULL;
//	if (p != NULL)
//	{
//		//....
//	}//����ͨ��if������ж�ָ���Ƿ�Ϊ��ָ�룬Ȼ�����ж�֮���ܲ��������ָ��
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	//......
//	//......
//	p = NULL;
//	assert(p != NULL);//��assert�ڲ��жϵ��Ǽپͻᱨ��
//	//����ᱨ�����һ���ʾ�ǵڼ���������
//	//���þ��Ǽ���һ��p�Ƿ��ǿ�ָ��
//	//assert�����ܼ���ָ�뻹�ܽ��������ֻҪ�������Ϳ�����
//	return 0;
//}
//int add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("%d", add(a, b));//����Ǵ�����ֵ�������Ǳ������Ǵ�ֵ���á�
//	return 0;
//}
//size_t-----unsigned int
//size_t my_strlen(const char* s)
//{
//	int count = 0;
//	assert(s != NULL);
//	while (*s)
//	{
//		count++;
//		s++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abc";
//	size_t len = strlen(arr);
//	size_t Len = my_strlen(arr);//�����ǵ�ַ������ָ�����
//	printf("%zd\n", len);
//	printf("%zd\n", Len);
//	return 0;
//}



//��ֵ���úʹ�ַ����
//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa��a֮�佨����ĳ����ϵ
//	*pa = 20;
//	printf("%d", *pa);
//	return 0;
//}
//void swap2(int* px, int* py)//��ַ����
//{
//	int z = 0;
//	z = *px;
//	*px = *py;
//	*py = z;
//}
//int main()
//{
//	int a = 20;
//	int b = 10;
//	printf("����ǰ:a=%d,b=%d\n", a, b);
//	//swap(a, b);
//	swap2(&a, &b);//��ַ����ֱ�Ӳ�������ʵ��
//	printf("������:a=%d,b=%d\n", a, b);
//	return 0;
//}
// 
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);
//
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);
//	return 0;
//}
//void test(int arr[])//����Ӧ����ָ�������յ�ַ��int*arr�������ʾ���ָ��
//{
//	//�����int arr[]����д��int*arr
//	int sz = sizeof(arr) / sizeof(arr[0]);//�����������һ��ָ������Ĵ�С������Ԫ�صĴ�С
//	//��x86�Ļ�����ָ������Ĵ�С����4��int���͵��������Ԫ�ش�С����4���Խ������1
//	//��x64�Ļ�����ָ������Ĵ�С����8��int���͵��������Ԫ�ش�С����4���Խ������2
//	printf("%d", sz);
//}
//void Print(int* arr)
//{
//	int i = 0;
//	for (i = 0;i < 10;i++)
//	{
//		printf("%d ", *(arr+i));
//	}
//}
//int main()
//{
//	//���鴫�ε�ʱ�򣬴��ݵĲ���������
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	Print(arr);//���鴫���ǽ�����
//	//test(arr);//���������������������Ԫ�صĵ�ַ������ȥ��Ҳ����Ԫ�صĵ�ַ
//	return 0;
//}
int count = 0;//���count�Ǽ�����count�����жϽ����˶��ٴ�ð������û����һ�ξ�count++
void BubbleSort(int* arr,int sz)
{
	//����
	int i = 0;
	for (i = 0;i < sz - 1;i++)
	{
		int flag = 1;//�����Ѿ�����
		//һ��ð������Ĺ���
		int j = 0;
		for (j=0;j<sz-1-i;j++)
		{
			count++;
			//һ��Ԫ�صıȽ�
			if (arr[j] > arr[j+1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;//���flag�����˵����������������ģ������û����һ�ν����Ļ���˵��
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
}
int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };//��������
	//��������������������Ϊ����
	int sz = sizeof(arr) / sizeof(arr[0]);
	BubbleSort(arr,sz);
	for (int i = 0;i < sz;i++)
	{
		printf("%d ", *(arr + i));
	}
	printf("%d", count);
	return 0;
}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%p\n", arr+1);
//	printf("%p\n", &arr[0]+1);
//	printf("%p\n", &arr+1);
//	return 0;
//}