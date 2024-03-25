#include<stdio.h>
#include<string.h>
//void True_Fause(char* Ch)
//{
//	char tmp = *Ch;
//	
//	int i = 0;
//	for (i = 1;i < 5;i++)
//	{
//		*(Ch+i-1) = *(Ch + i);
//	}
//	*(Ch + 4) = tmp;
//}
//int main()
//{
//	char Ch1[6] = "AABCD";
//	char Ch2[6] = "BCDAA";
//	char* ch1 = &Ch1[0];
//	char* ch2 = &Ch2[0];
//	for (int i = 0;i < 5;i++)
//	{
//		int z = strcmp(Ch1, Ch2);
//		if (z != 0)
//		{
//			True_Fause(&Ch1[0]);
//		}
//		else if (z == 0)
//		{
//			printf("1");
//			break;
//		}
//	}
//	return 0;
//}
//void Find(int arr[3][5],int r,int c,int k)
//{
//	int i = 0;
//	for (i = 0;i < r;i++)
//	{
//		int j = 0;
//		for (j = 0;j < c;j++)
//		{
//			if (arr[i][j] == k)
//			{
//				printf("找到了\n");
//				printf("在%d行%d列",i+1,j+1);
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15} };
//	int k = 4;
//	Find(arr, 3, 5, k);
//	return 0;
//}
int main()
{
	char thief;
	for (thief = 'a';thief <= 'd';thief++)
	{
		if ((thief != 'a')+(thief == 'c')+(thief == 'd')+(thief != 'd')==3)
		{
			printf("%c ", thief);
		}
	}
	return 0;
}