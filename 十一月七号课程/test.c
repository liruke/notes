#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int i = 10;
//	int n = i << 1;
//	printf("n=%d\n", n);
//	printf("i=%d\n", i);
//	return 0;
//}
//int main()
//{
//	int i = 10;
//	int n = i >> 1;
//	printf("i=%d\n", i);
//	printf("n=%d\n", n);
//	return 0;
//}
//int main()
//{
//	int a = 3;
//	int b = -5;
//	//��λ��ļ��������ֻҪ��0����0��������1����1
//	//00000000000000000000000000000011---3��ԭ��
//	//00000000000000000000000000000101---5��ԭ��
//	//11111111111111111111111111111011---5�Ĳ���
//	//00000000000000000000000000000011---3�Ĳ���
//	//00000000000000000000000000000011�����
//	int c = a & b;
//
//	return 0;
//}
//int main()
//{
//	int a = 1;
//	int b = ~a;
//	printf("%d", b);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	int count2 = 0;
//	int count1 = 0;
//	for (int n = 0;n < 32;n++)
//	{
//		if (i & 1 == 1)
//		{
//			count1++;
//		}
//		i = i >> 1;
//	}
//	printf("count1=%d\n", count1);
//	return 0;
//}
//int count_one_bit(unsigned int n)
//{
//	int count = 0;
//	while (n)
//	{
//		//if (n % 2 == 1)
//		n = n & (n - 1);
//			count++;
//		//n = n / 2;
//	}
//	return count;
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int n = count_one_bit(num);
//	printf("%d", n);
//	return 0;
//}
//n&(n-1)����n-1
//������ʽ��һ��Ч�����ǰ�n�Ķ�����λ���ұߵ�1ȥ���ˡ�
//ִ��һ��ȥ��һ����
//int main()
//{
//	int 
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	if ((n & (n - 1)) == 0)
//	{
//		printf("YES\n");
//	}
//	else
//	{
//		printf("NO");
//	}
//
//	return 0;
//}
