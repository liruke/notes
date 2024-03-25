#include<stdio.h>
//写一个代码判断当前机器是大端还是小端

int main()
{
	int a = 1;//0x 00 00 00 01
	//大端存储：00 00 00 01
	//小端存储：01 00 00 00
	char* p = (char*)&a;
	if (*p == 1)
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}
	return 0;
}