#include<stdio.h>
//дһ�������жϵ�ǰ�����Ǵ�˻���С��

int main()
{
	int a = 1;//0x 00 00 00 01
	//��˴洢��00 00 00 01
	//С�˴洢��01 00 00 00
	char* p = (char*)&a;
	if (*p == 1)
	{
		printf("С��\n");
	}
	else
	{
		printf("���\n");
	}
	return 0;
}