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
//	//printf("%zd\n", sizeof a);//sizeof���������ʱ����ʡ������
//	int arr1[4] = { 0 };
//	char arr2[4] = { 0 };
//	printf("%zd\n", sizeof(arr1));//16һ�������ĸ��ֽ��ĸ�����ʮ�����ֽ�
//	printf("%zd\n", sizeof(arr2));//4һ���ַ�һ���ֽ��ĸ��ַ��ĸ��ֽ�
//	return 0;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	size_t len = strlen(arr);
//	//�ڴ沼����a b c d e f \0����strlen�����ַ�������ʱ����ʶ��\0��ʱ��ͽ����ˣ�
//	//ͳ�Ƶ���\0֮ǰ���ַ����еĸ���
//	printf("%zd\n", len);
//	size_t sz = sizeof(arr);//sizeof�ǽ�\0ͳ�����ڵ�
//	printf("%zd\n", sz);
//	return 0;
//}



//arr���������������⣺
//1.sizeof(������)����������ʾ�������飬���������������Ĵ�С����λ���ֽ�
//2.&����������������ʾ�������飬ȡ����������ĵ�ַ
//����������������⣬����������Ǵ�����Ԫ��
//int main()
//{
//	int a[] = { 1,2,3,4 };//a�����ĸ�Ԫ�أ�ÿ��Ԫ����int���͵�����
//
//	printf("%zd\n", sizeof(a));//16   ԭ��a��Ϊ��������������sizeof�ڲ�
//
//	printf("%zd\n", sizeof(a + 0));//?   a+0������Ԫ�ص�ַ������sizeof��a+0�����ǵ�ַ�Ĵ�С�����Ե�ַ�Ĵ�С����ָ��Ĵ�С
//	//a��ʾ����������Ԫ�ص�ַ����Ϊ���ǵ�������sizeof�ڲ�
//
//	printf("%zd\n", sizeof(*a));//*a��ʾ��Ԫ�أ�����4�ֽ�
//
//	printf("%zd\n", sizeof(a + 1));//a+1��ʾ��ַ�Ĵ�С�����Ծ��ǵ�ַ�Ĵ�С�����Ծ���ָ��Ĵ�С
//	//a�ȼ���&a[0]������Ԫ�ص�ַ+1�ͱ�ʾָ��2��sizeof��a+1��������ǵڶ���Ԫ�صĵ�ַ�Ĵ�С
//
//	printf("%zd\n", sizeof(a[1]));//a[1]��ʾ���ǵڶ���Ԫ�أ��ڶ���Ԫ�ر�ʾ�������Σ��������εĴ�С�����ĸ��ֽ�
//	printf("%zd\n", sizeof(&a));//��ʾ&a��ʾ��������ĵ�ַ��������ĵ�ַ����4����8���ֽ�
//	//����ĵ�ַҲ�ǵ�ַ��ֻҪ�ǵ�ַ��С�����ĸ��ֽڻ��߰˸��ֽ�
//
//	printf("%zd\n", sizeof(*&a));
//	//&a�õ�a�ĵ�ַ���н����ã��������ŵ����ˣ����Եȼ���sizeof��a�����Ծ���16
//	//��һ�ֽ������*��&����
//	//�ڶ��ֽ����&aȡ����������ĵ�ַ��������int��*��[4]����������������ָ�룬�����ô�С�Ƿ����ĸ�����Ԫ�ؾ���16���ֽ�
//	//����һ�����飬���Ծ���16�ֽ�
//
//	printf("%zd\n", sizeof(&a + 1));//&a+1���������������ĵ�һ��Ԫ�صĵ�ַ�����ĸ�
//	printf("%zd\n", sizeof(&a[0]));//&a[0]���ǵ�һ��Ԫ�ص�ַ�Ĵ�С������ָ��Ĵ�С����4����8���ֽ�
//
//	printf("%zd\n", sizeof(&a[0] + 1));//��Ԫ�ص�ַ����һ�����ξ��ǵڶ���Ԫ�صĵ�ַҲ��4����8���ֽ�
//	return 0;
//}



//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };//6��Ԫ��
//	printf("%zd\n", sizeof(arr));//6   char��������Ԫ�ش�С����1���ֽ�
//	//������������Ĵ�С
//
//	printf("%zd\n", sizeof(arr + 0));//4��8   ԭ���ǵ������ڵ�arr
//
//	printf("%zd\n", sizeof(*arr));//   1��һ��Ԫ�ؽ��н����þ��ǵ�һ��Ԫ�صĴ�С������1���ֽ�
//
//	printf("%zd\n", sizeof(arr[1]));//1   �ڶ���Ԫ�ش�С����һ���ֽ�
//
//	printf("%zd\n", sizeof(&arr));//ȡ����������ĵ�ַ������ĵ�ַ����ָ�룬ֻҪ��ָ�����4����8���ֽ�
//
//	printf("%zd\n", sizeof(&arr + 1));//4����8��������������֮��ĵ�һ��Ԫ�صĵ�ַ
//
//	printf("%zd\n", sizeof(&arr[0] + 1));//�ڶ���Ԫ�صĵ�ַ����4����8
//
//	return 0;
//}
//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%zd\n", strlen(arr));//��Ϊ�����ڲ�û��\0������strlenʶ�𲻵�\0���Դ�ӡ�����������ֵ
//
//	printf("%zd\n", strlen(arr + 0));//û��������ʶ�𲻵�\0���Ի������ֵ
//
//	printf("%zd\n", strlen(*arr));//?  strlen��Ҫ���ǵ�ַ�����Ǵ��ݵ���a���������ڴ��ݵ���a,���Ը���a��ASCII
//	//97����������ַ��û�����룬���ԷǷ����ʣ��ͻᱨ��
//
//	printf("%zd\n", strlen(arr[1]));//arr
//
//	printf("%zd\n", strlen(&arr));//���ֵ
//
//	printf("%zd\n", strlen(&arr + 1));//�������������ӡ�����ֵ
//
//	printf("%zd\n", strlen(&arr[0] + 1));//���ֵ
//
//	return 0;
//}