#include<stdio.h>
//struct S1
//{
//	char c1;//1
//	char c2;
//	//c2��������1����Ϊ1��8С������ȡ1
//	int i;//iӦ��ռ�ĸ��ֽ����Զ�������4��������ʼλ��Ӧ����4�ı�������4
//
//};
//struct S2
//{
//	char c1;
//	int i;
//	char c2;
//};
//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//struct S4
//{
//	char c1;
//	struct S3 s3;
//	double d;
//};
//int main()
//{
//	struct S1 s1 = { 0 };//8
//	struct S2 s2 = { 0 };//12
//	printf("%zd\n", sizeof(struct S1));//8
//	printf("%zd\n", sizeof(struct S2));//12
//	printf("%zd\n", sizeof(struct S3));//16
//	//S3���ն��������з����ڴ棬�˷���3���ֽ�
//	printf("%zd\n", sizeof(struct S4));//32 
//	return 0;
//}
//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//union u
//{
//	char c;
//	int u;
//};
//int main()
//{
//	union u uu;
//	printf("%zd\n", sizeof(uu));
//	printf("%p\n", &(uu));
//	printf("%p\n", &(uu.c));
//	printf("%p\n", &(uu.u));
//}
//union Un1
//{
//	char c[5];//5
//	//����Ķ������ǰ��������Ԫ�أ��������ж϶�������
//	//����������1.
//	int i;//4��������4������������8�����Զ���������4
//	//����������������8
//};
//int main()
//{
//	printf("%zd\n", sizeof(union Un1));
//	return 0;
//}
//union U
//{
//	int n;
//	struct S
//	{
//		char c1;
//		char c2;
//		char c3;
//		char c4;
//	}s;
//};
//int main()
//{
//	union U u = { 0 };
//	u.n = 0x11223344;
//	printf("%x %x %x %x", u.s.c1, u.s.c2, u.s.c3, u.s.c4);
//	return 0;
//}
//�жϵ�ǰ�����Ǵ�˻���С��
// 1.
//���Դ���һ��������ʹ������1��������ص���0���Ǵ�ˣ����ص���1����С�ˣ�
//��������nǿ��ת����char*���з��ʣ�ȡ��ַ���з��ʣ����ʵ���һ���ֽڡ�
//
//2.
//���Զ���һ���ṹ�� �ڲ����һ��int��һ��char��Ȼ����Ϊ����һ���ռ䣬charռһ���ֽڣ����Կ��Ը���
//char��ֵ���ж���С�˻��Ǵ�ˡ�

enum Sex
{
	//�����о�ö��enum������ȡֵ
	Mail,//0
	Female,//1
	Secret//2
	//Ĭ����0��ʼ������ö�ٱ����ĳ�ʼֵ���Ը�
	//��Щ����ȡֵ�ǳ�������ʾö�ٳ�����
	//��ƺ�֮����治�ܸ�
};
int main()
{

	return 0;
}