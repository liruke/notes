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
//	//按位与的计算规则是只要有0就是0两个都是1才是1
//	//00000000000000000000000000000011---3的原码
//	//00000000000000000000000000000101---5的原码
//	//11111111111111111111111111111011---5的补码
//	//00000000000000000000000000000011---3的补码
//	//00000000000000000000000000000011（结果
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
//n&(n-1)就是n-1
//这个表达式有一个效果就是把n的二进制位最右边的1去掉了。
//执行一次去掉一个。
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
